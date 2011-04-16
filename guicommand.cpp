#include "guicommand.hpp"

// <TODO>: do this through gui, not it is through tui

#include "tui.hpp"

string 
guicommand::operator () (int x){

	ui
	&my = *myui;

	x--;

	while (x < commands.size()){

		string
		S = my.get(info_from_user);

		if (S == "set active class") commands.push_back("-c");
		else if (S == "load") commands.push_back("-l");
		else if (S == "save") commands.push_back("-s");
		else if (S == "view") commands.push_back("-v");
		else if (S == "update") commands.push_back("-u");
		else if (S == "new row") commands.push_back("-a");
		else if (S == "delete row") commands.push_back("-d");
		else if (S == "exit"){

			errorstate::error = "Success exit";
			errorstate::error = -1;

			return "Exit";

		}
		else commands.push_back(S);

	}

	if (x < commands.size()) return commands[x];

}

guicommand::guicommand(){

	tui
	*mytui = new tui;

	myui = mytui;

}

guicommand::guicommand(int handle){

	tui
	*mytui = new tui;

	myui = mytui;

}

guicommand::~guicommand(){

	delete myui;

}

// </TODO>




