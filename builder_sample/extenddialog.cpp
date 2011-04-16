
#include "extenddialog.hpp"
#include "extendclassA.hpp"
#include "extendclassAextended.hpp"
#include "extendclassB.hpp"
#include "extendclassBextended.hpp"
#include "extendclassC.hpp"

void
extenddialog::play(){

	for (int i = 0; i < V.size(); ++i)
		V[i]->play();

}

void
extenddialog::add(extendclass * X){

	V.push_back(X);

}

extenddialog::builder::builder(){

	dlg = new extenddialog;

}

extenddialog::builder::~builder(){

	delete dlg;

}

complicatedobject *
extenddialog::builder::build(){

	return dlg;

}

void
extenddialog::builder::addnew(std::string str){

	if (str == "a") add(new extendclassA);
	if (str == "ae") add(new extendclassAextended);
	if (str == "b") add(new extendclassB);
	if (str == "be") add(new extendclassBextended);
	if (str == "c") add(new extendclassC);

}


