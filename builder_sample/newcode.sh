echo > $1.o;
echo "
#include \"$1.hpp\"
" > $1.cpp;
echo "
#ifndef $1""_hpp
#define $1""_hpp



#endif
" >> $1.hpp;
gedit $1.cpp;
gedit $1.hpp;

