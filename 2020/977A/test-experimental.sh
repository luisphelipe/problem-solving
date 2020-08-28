for((i = 1; ; ++i)); do
  # echo $1
  # ./generator.sh 100 1 100 $1 --repeat > int
  ./generator.sh 100 1 100 $i > int
  # ./solution < int > out1
  # ./brute < int > out2
  # diff -w out1 out2 || break

  diff -w <(./solution < int) <(./brute < int) || break
done
