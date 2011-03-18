#include "tui.hpp"

tui::tui(){ students.clear(), lecturers.clear(), events.clear(); }
tui::~tui(){ students.clear(), lecturers.clear(), events.clear(); }

tui::tui(int){ students.clear(), lecturers.clear(), events.clear(); }

string
tui::get(info_from_user){

	string
	S;

	getline(cin, S);

	return S;

}

void
tui::set(activeclass_row, int id, string value){

	(*activemap)[id].fromstring(value);

}

void
tui::changeactiveclass(string value){

	switch (value){

		case "student": activemap = &students; return;
		case "lecturer": activemap = &lecturers; return;
		case "event": activemap = &events; return;

	}

}

void
tui::showdata_to_user(){

	for (map < int, entity >::iterator iter = activemap->begin(); iter != activemap->end(); ++iter)
		showrow(iter->first);

}

void
tui::showrow(int id){

	cout << (*activemap[id]).tostring() << endl;

}

// TODO: complete this methods
void
tui::loaddata(){

	istream()

}

void
tui::savedata(){}

void
tui::showerror(string msg){}

