#include "tui.hpp"
#include "utilitycore.hpp"

tui::tui(){ students.clear(), lecturers.clear(), events.clear(); }

void
tui::clearclass(){

	for (map < int, entity * >::iterator iter = activemap->begin(); iter != activemap->end(); ++iter)
		if (iter->second)
			delete (iter->second);

}

tui::~tui(){ 

	set(activeclass, "student");
	clearclass();

	set(activeclass, "lecturer");
	clearclass();

	set(activeclass, "event");
	clearclass();

	students.clear(), lecturers.clear(), events.clear(); 

}

tui::tui(int){ students.clear(), lecturers.clear(), events.clear(); }

void
tui::show(string msg){

	cout << msg << endl;

}

entity *
tui::create_entity(){

	if (get(activeclass) == "student") return new student;
	if (get(activeclass) == "lecturer") return new lecturer;
	if (get(activeclass) == "event") return new event;
	return 0;

}

string
tui::get(info_from_user){

	string
	S;

	getline(cin, S);

	return S;

}

void
tui::setactiveclass_row(int id, string value){

	(*activemap)[id]->fromstring(value);

}

void
tui::changeactiveclass(string value){

	if (value == "student") activemap = (map < int, entity * > *)&students;
	if (value == "lecturer") activemap = (map < int, entity * > *)&lecturers;
	if (value == "event") activemap = (map < int, entity * > *)&events;

}

void
tui::showdata_to_user(){

	for (map < int, entity * >::iterator iter = activemap->begin(); iter != activemap->end(); ++iter)
		if (iter->second)
			showrow(iter->first);

}

void
tui::showrow(int id){

	cout << id << "\t" << (*activemap)[id]->tostring();

}

void
tui::loaddata(){

	ifstream fin(get(activeclass).c_str());

	int 
	n;

	fin >> n;

	string
	S;

	getline(fin, S);

	for (int i = 0; i < n; ++i){

		getline(fin, S);

		int
		id = idmaster::gen(get(activeclass));

		(*activemap)[id] = create_entity();

		if ((*activemap)[id])
			(*activemap)[id]->fromstring(S);

	}

	fin.close();

}

void
tui::savedata(){

	ofstream fout(get(activeclass).c_str());

	fout << getn() << endl;

	for (map < int, entity * >::iterator iter = activemap->begin(); iter != activemap->end(); ++iter)
		if (iter->second)
			fout << iter->second->tostring();

	fout.close();

}

void
tui::showerror(string msg){

	cerr << msg << endl;

}

string
tui::getactiveclass_row(int id){

	return (*activemap)[id]->tostring();

}

void
tui::add(string value){

	int
	id = idmaster::gen(get(activeclass));

	(*activemap)[id] = create_entity();

	if ((*activemap)[id])
		(*activemap)[id]->fromstring(value);

}

void
tui::del(int id){

	delete ((*activemap)[id]);
	(*activemap)[id] = 0;

}

int
tui::getn(){

	int
	n = 0;

	for (map < int, entity * >::iterator iter = activemap->begin(); iter != activemap->end(); ++iter)
		if (iter->second)
			n++;

	return n;

}

