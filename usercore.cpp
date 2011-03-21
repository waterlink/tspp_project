#include "usercore.hpp"

#include "utilitycore.hpp"

void
ui::set(activeclass, string value){

	if (	value == "student" ||
		value == "lecturer" ||
		value == "event"){

		activeclass = value;
		changeactiveclass(value);

	}
	else{

		errorstate::error = "ui::set(activeclass) - error 2: wrong class name";
		errorstate::code = 2;

		showerror(errorstate::error);

	}

}

string
ui::get(activeclass){ return activeclass; }

void
ui::setrowparambyid(int id, int paramid, string value){

	string
	S = getactiveclass_row(id);

	S.resize(S.size() - 1);

	int
	lfind = 0,
	rfind = 0;

	for (int i = 0; i < paramid; ++i) lfind = rfind + 1, rfind = S.find("\t", lfind);

	S.replace(lfind, rfind - lfind, value);

	setactiveclass_row(id, S);

}

