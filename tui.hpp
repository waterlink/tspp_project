#ifndef tui_hpp
#define tui_hpp

#include "includes.hpp"

#include "commentcore.hpp"

#include "usercore.hpp"

#include "student.hpp"
#include "lecturer.hpp"
#include "event.hpp"

realization class
tui: public ui{

public:

	tui();
	~tui();

	string
	get(info_from_user);

	void
	setactiveclass_row(int id, string value);

	void
	changeactiveclass(string value);

	void
	showdata_to_user();

	void
	showrow(int id);

	void
	loaddata();

	void
	savedata();

	void
	showerror(string msg);

	virtual entity *
	create_entity();

	virtual void
	clearclass();

	void
	show(string msg);

	string
	getactiveclass_row(int id);

	void
	add(string value);

	void
	del(int id);

	int
	getn();

protected:

	tui(int);

private:

	map < int, student * >
	students;

	map < int, lecturer * >
	lecturers;

	map < int, event * >
	events;

	map < int, entity * > *
	activemap;

};

#endif
