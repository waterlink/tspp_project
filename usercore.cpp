#include "usercore.hpp"

void
set(activeclass, string value){

	switch (value){

		case "student":
		case "lecturer":
		case "event":

			activeclass = value;
			changeactiveclass(value);

			return;

		case default:

			errorstate::error = "ui::set(activeclass) - error 2: wrong class name";
			errorstate::code = 2;

			showerror(errorstate::error);

			return;

	}

}

string
get(activeclass){ return activeclass; }

