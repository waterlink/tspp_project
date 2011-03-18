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
	set(activeclass_row, int id, string value);

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

protected:

	tui(int);

private:

	map < int, student >
	students;

	map < int, lecturer >
	lecturers;

	map < int, event >
	events;

	map < int, entity > *
	activemap;

};

#endif
