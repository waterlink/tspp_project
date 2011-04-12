#ifndef comlineparam_hpp
#define comlineparam_hpp

#include "includes.hpp"
#include "utilitycore.hpp"
#include "utilparams.hpp"

strategy realization class
comlineaquirer: public paramaquirer{

public:

	string 
	operator () (int x);

	comlineaquirer();
	comlineaquirer(int & argc, char ** argv);
	~comlineaquirer();

private:

	int argc;
	char ** argv;

};

#endif
