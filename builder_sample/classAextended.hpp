#ifndef classAextended_hpp
#define classAextended_hpp

#include <string>
#include "classA.hpp"

class
classAextended: public classA{

public:

	classAextended();
	~classAextended();

	void
	run();

private:

	std::string
	name;

};

#endif

