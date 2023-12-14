copy %1\%2\in%3.txt input.txt
sort.exe
copy output.txt result\%1\%2\%3.txt
del input.txt
del output.txt