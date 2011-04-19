#ifndef utilparams_hpp
#define utilparams_hpp

#include "includes.hpp"
#include "utilitycore.hpp"

abstract strategy class
paramaquirer{

public:

	virtual 
	~paramaquirer() = 0;
	
	virtual string 
	operator () (int x) = 0;

};

paramaquirer::~paramaquirer(){}

#endif

