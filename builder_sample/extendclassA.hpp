
#ifndef extendclassA_hpp
#define extendclassA_hpp

#include "extendclass.hpp"
#include "classA.hpp"

class
extendclassA: public extendclass{

public:

	extendclassA();
	~extendclassA();

	void 
	play();

protected:

	classA
	*A;

private:

};

#endif

