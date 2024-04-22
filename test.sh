
# testfiles="1 3 5 6 7 10 12"
testfiles="1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24"
echo "testfile order: " $testfiles


for filenum in $testfiles; do
  ./parser ./test/${filenum}.txt
done
