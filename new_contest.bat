@echo off
mkdir "ABC"
copy tmp.cpp a.cpp 
move a.cpp ABC
cd ABC
copy a.cpp b.cpp 
copy a.cpp c.cpp 
copy a.cpp d.cpp 
copy a.cpp e.cpp 