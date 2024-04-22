#ifndef _CST_H_
#define _CST_H_

#include "strtbl.h"
#include "utils.h"

#include <stdint.h>
#include <stdlib.h>
#include <strings.h>
#define CstHeader Cst* next; CstKind kind; unsigned lineno

typedef int32_t Int;
typedef float Float;

typedef enum tagType {
  TYPE_INT,
  TYPE_FLOAT
} Type;

typedef enum tagCstKind {
  CST_ERROR,
  CST_INT,
  CST_FLOAT,
  CST_TYPE,
  CST_ID,
  CST_SEMI,
  CST_COMMA,

  CST_BIN,
  CST_PRE,
  CST_ARGS,
  CST_CALL,
  CST_INDEX,
  CST_DOT,

  CST_LP,
  CST_RP,
  CST_LB,
  CST_RB,
  CST_LC,
  CST_RC,
  CST_STRUCT,
  CST_RETURN,
  CST_IF,
  CST_ELSE,
  CST_WHILE,

  CST_Program,
  CST_ExtDefList,
  CST_ExtDef,
  CST_ExtDecList,

  CST_Specifier,
  CST_StructSpecifier,
  CST_OptTag,
  CST_Tag,

  CST_VarDec,
  CST_FunDec,
  CST_VarList,
  CST_ParamDec,
  CST_CompSt,

  CST_StmtList,
  CST_Stmt,
  CST_DefList,
  CST_Def,
  CST_DecList,
  CST_Dec,
  CST_Exp,
  CST_Args
} CstKind;

typedef enum tagCstOp {
  CSTOP_NE,
  CSTOP_EQ,
  CSTOP_LE,
  CSTOP_LT,
  CSTOP_GE,
  CSTOP_GT,
  CSTOP_ASSIGN,
  CSTOP_ADD,
  CSTOP_SUB,
  CSTOP_MUL,
  CSTOP_DIV,
  CSTOP_AND,
  CSTOP_OR,

  CSTOP_NOT,
  CSTOP_NEG,
} CstOp;

#define is_terminal(kind)         ((kind) <= CST_WHILE)
#define is_noattrtoken(kind)      ((kind) >= CST_SEMI && (kind) <= CST_WHILE)

#define make_cstkind(macro)       (CST_##macro)

#define make_kindstrpair(macro)   make_cstkind(macro), #macro

typedef struct tagCst Cst;
struct tagCst {
  CstHeader;
};

typedef struct tagCstInt {
  CstHeader;
  Int val;
} CstInt;

typedef struct tagCstFloat {
  CstHeader;
  Float val;
} CstFloat;

typedef struct tagCstType {
  CstHeader;
  Type val;
} CstType;

typedef struct tagCstId {
  CstHeader;
  StringId val;
} CstId;

typedef struct tagCstBin {
  CstHeader;
  CstOp op;
  Cst* loperand;
  Cst* roperand;
} CstBin;

typedef struct tagCstPre {
  CstHeader;
  CstOp op;
  Cst* operand;
} CstPre;

typedef struct tagCstArgs {
  CstHeader;
  Cst* arg;
  Cst* nextarg;
} CstArgs;

typedef struct tagCstCall {
  CstHeader;
  Cst* func;
  CstArgs* args;
} CstCall;

typedef struct tagCstDot {
  CstHeader;
  Cst* loperand;
  StringId name;
} CstDot;

typedef struct tagCstIndex {
  CstHeader;
  Cst* arr;
  Cst* index;
} CstIndex;

typedef struct tagCstGeneric {
  CstHeader;
  unsigned nchild;
  const char* nodename;
  Cst* children[];
} CstGeneric;

typedef struct tagCstNoAttrToken {
  CstHeader;
} CstNoAttrToken;

static inline void* safe_alloc(size_t size) {
  void* p = malloc(size);
  utils_oom_ifnull(p);
  return p;
}

#define cstalloc(csttype)         (csttype*)safe_alloc(sizeof (csttype))



/* children must terminated with NULL.
 * for 'generic', the parameter 'lineno'
 * is only used when the number of children is 0. */
CstGeneric* cst_create_generic(unsigned lineno, CstKind kind, const char* nodename, ...);
void cst_print(Cst* cst, unsigned currlevel, StrTbl* strtbl);

static inline CstInt* cst_create_int(unsigned lineno, Int val) {
  CstInt* cst = cstalloc(CstInt);
  cst->kind = make_cstkind(INT);
  cst->lineno = lineno;
  cst->val = val;
  return cst;
}

static inline CstFloat* cst_create_float(unsigned lineno, Float val) {
  CstFloat* cst = cstalloc(CstFloat);
  cst->kind = make_cstkind(FLOAT);
  cst->lineno = lineno;
  cst->val = val;
  return cst;
}

static inline CstType* cst_create_type(unsigned lineno, Type val) {
  CstType* cst = cstalloc(CstType);
  cst->kind = make_cstkind(TYPE);
  cst->lineno = lineno;
  cst->val = val;
  return cst;
}

static inline CstId* cst_create_id(unsigned lineno, StringId val) {
  CstId* cst = cstalloc(CstId);
  cst->kind = make_cstkind(ID);
  cst->lineno = lineno;
  cst->val = val;
  return cst;
}

static inline CstNoAttrToken* cst_create_noattrtoken(unsigned lineno, CstKind kind) {
  CstNoAttrToken* cst = cstalloc(CstNoAttrToken);
  cst->kind = kind;
  cst->lineno = lineno;
  return cst;
}

static inline CstBin* cst_create_bin(unsigned lineno, CstOp op, Cst* lop, Cst* rop) {
  CstBin* cst = cstalloc(CstBin);
  cst->kind = CST_BIN;
  cst->lineno = lineno;
  cst->op = op;
  cst->loperand = lop;
  cst->roperand = rop;
  return cst;
}

static inline CstPre* cst_create_pre(unsigned lineno, CstOp op, Cst* operand) {
  CstPre* cst = cstalloc(CstPre);
  cst->kind = CST_PRE;
  cst->lineno = lineno;
  cst->op = op;
  cst->operand = operand;
  return cst;
}

static inline CstArgs* cst_create_args(unsigned lineno, Cst* arg, Cst* args) {
  CstArgs* cst = cstalloc(CstArgs);
  cst->kind = CST_ARGS;
  cst->lineno = lineno;
  cst->arg = arg;
  cst->nextarg = args;
  return cst;
}

static inline CstCall* cst_create_call(unsigned lineno, Cst* func, CstArgs* args) {
  CstCall* cst = cstalloc(CstCall);
  cst->kind = CST_CALL;
  cst->lineno = lineno;
  cst->func = func;
  cst->args = args;
  return cst;
}

static inline CstDot* cst_create_dot(unsigned lineno, Cst* operand, StringId name) {
  CstDot* cst = cstalloc(CstDot);
  cst->kind = CST_DOT;
  cst->lineno = lineno;
  cst->loperand = operand;
  cst->name = name;
  return cst;
}

static inline CstIndex* cst_create_index(unsigned lineno, Cst* arr, Cst* index) {
  CstIndex* cst = cstalloc(CstIndex);
  cst->kind = CST_INDEX;
  cst->lineno = lineno;
  cst->arr = arr;
  cst->index = index;
  return cst;
}

#endif
