for %%n in (20000, 40000) do for %%k in (100, 10000) do for %%i in (01,02,03,04,05,06,07,08,09,10,11,12) do call basetests.bat %3 %%n %%k %%i
pause

for %%n in (20000, 40000) do call reversetest %1 %%n