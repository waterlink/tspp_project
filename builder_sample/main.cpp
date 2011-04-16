#include "main.hpp"

int
main(){

	printf("\nconstant length dialog sample:\n\n");

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

	printf("\nvectored adapted dialog\n\n");

	int 
	n;
	string S;

	extenddialog::builder
	edlgbld;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){

		getline(cin, S);
		edlgbld.addnew(S);

	}

	extenddialog
	edlg = *(extenddialog *)(edlgbld.build());

	edlg.play();

	return 0;

}

