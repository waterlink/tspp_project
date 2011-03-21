#ifndef utilitycore_hpp
#define utilitycore_hpp

#include "includes.hpp"

methodwalker class
stringcopier{

public:

	static void
	copy(
			string & destination,
			string source
		);

	static vector < string >
	split(
			string substr,
			string source
		);

	static void
	replace(
			string substr,
			string source,
			string & destination
		);

	static int
	getint(string source);

};

state class
errorstate{

public:

	static string
	error;

	static int
	code;	

};

state class
idmaster{

public:

	static int
	gen(string target);

private:

	static map < string, int >
	id;

};

#endif

