
#include "extendclassC.hpp"

extendclassC::extendclassC(){ C = new classC; }
extendclassC::~extendclassC(){ delete C; }

void
extendclassC::play(){ C->force(); }

