
#include "dialog.hpp"

void
dialog::setA(classA * A){ this->A = A; }

void
dialog::setB(classB * B){ this->B = B; }

void
dialog::setC(classC * C){ this->C = C; }

void
dialog::builder::configure(classA * replicA, classB * replicB, classC * replicC){

	dlg->setA(replicA);
	dlg->setB(replicB);
	dlg->setC(replicC);

}

dialog::builder::builder(){

	dlg = new dialog;

}

dialog::builder::~builder(){

	delete dlg;

}

complicatedobject *
dialog::builder::build(){

	return dlg;

}

void
dialog::play(){

	C->force();
	B->ask();
	A->run();

}


