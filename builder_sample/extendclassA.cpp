
#include "extendclassA.hpp"

extendclassA::extendclassA(){

	A = new classA;

}

extendclassA::~extendclassA(){

	delete A;

}

void 
extendclassA::play(){

	A->run();

}

