copy %1\reverse\test.txt input.txt
sort.exe
copy output.txt result\reverse\%1.txt
del input.txt
del output.txt