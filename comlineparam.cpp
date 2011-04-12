#include "comlineparam.hpp"

string 
comlineaquirer::operator () (int x){

	if (x < argc)
		return argv[x];
	else {

		errorstate::error = "paramaquier-comlineaquier::(): error no commands left";
		errorstate::code = 1;

		return "Error";

	}

}

comlineaquirer::comlineaquirer(){ 

	this->argc = 0;
	this->argv = 0;

}

comlineaquirer::comlineaquirer(
				int & argc, 
				char ** argv
			){

	this->argc = argc;
	this->argv = argv;

}

comlineaquirer::~comlineaquirer(){}


