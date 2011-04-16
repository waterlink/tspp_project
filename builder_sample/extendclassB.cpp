
#include "extendclassB.hpp"

extendclassB::extendclassB(){ B = new classB; }
extendclassB::~extendclassB(){ delete B; }

void
extendclassB::play(){ B->ask(); }

