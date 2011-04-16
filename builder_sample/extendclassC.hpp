
#ifndef extendclassC_hpp
#define extendclassC_hpp

#include "extendclass.hpp"
#include "classC.hpp"

class
extendclassC: public extendclass{

public:

	extendclassC();
	~extendclassC();

	void 
	play();

protected:

	classC
	*C;

private:

	

};

#endif

