
#ifndef extendclassB_hpp
#define extendclassB_hpp

#include "extendclass.hpp"
#include "classB.hpp"

class
extendclassB: public extendclass{

public:

	extendclassB();
	~extendclassB();

	void 
	play();

protected:

	classB
	*B;

private:

	

};

#endif

