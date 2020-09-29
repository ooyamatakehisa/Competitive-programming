#! /bin/zsh

mkdir $1$2
cp ./tmp.cpp ./a.cpp
mv ./a.cpp ./$1$2/
cd $1$2/ 
cp ./a.cpp ./b.cpp
cp ./a.cpp ./c.cpp
cp ./a.cpp ./d.cpp
