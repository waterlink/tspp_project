#ifndef usercore_hpp
#define usercore_hpp

#include "commentcore.hpp"

semi abstract interface class
ui{

public:

	virtual
	~ui() = 0;

	virtual string
	get(info_from_user) = 0;

	virtual void
	set(activeclass_row, int id, string value) = 0;

	virtual void
	set(activeclass, string value);

	virtual void
	changeactiveclass(string value) = 0;

	virtual void
	showdata_to_user() = 0;

	virtual void
	showrow(int id) = 0;

	virtual void
	loaddata() = 0;

	virtual void
	savedata() = 0;

	virtual string
	get(activeclass);

	virtual void
	showerror(string msg) = 0;

private:

	string
	activeclass;

};

ui::~ui(){}

#endif

