#include "main.hpp"

int
main(){

	classA
	a;

	classB
	b;

	classC
	c;

	dialog::builder
	dlgbld;

	dlgbld.configure(&a, &b, &c);

	dialog
	dlg = *(dialog *)(dlgbld.build());

	dlg.play();

	return 0;

}
