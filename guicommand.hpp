#ifndef guicommand_hpp
#define guicommand_hpp

#include "includes.hpp"
#include "utilitycore.hpp"
#include "utilparams.hpp"
#include "usercore.hpp"

// TODO: make this really gui

strategy realization class
guicommand: public paramaquirer{

public:

	string 
	operator () (int x);

	guicommand();
	guicommand(int handle);
	~guicommand();

private:

	int
	handle;

	ui
	*myui;

	vector < string >
	commands;

};

#endif
