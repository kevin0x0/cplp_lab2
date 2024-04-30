
testfiles="1 3 5 6 7 10 12"

echo "testfile order: " $testfiles


for filenum in $testfiles; do
  echo $filenum ":"
  ./parser ./test/${filenum}.txt
  echo $filenum " done"
done
