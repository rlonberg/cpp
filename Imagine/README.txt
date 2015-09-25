Some notes about C++, if the compiler warns you about your version of C++, you may want to add this to your bashrc:

#features of C++11
export PATH=/usr/remote/gcc-4.8/bin:$PATH
export LD_LIBRARY_PATH=/usr/remote/gcc-4.8/lib:$LD_LIBRARY_PATH:/usr/remote/gcc-4.8/lib64
alias g++='g++ -std=c++11'


(or the executable may give you a segmentation fault)
