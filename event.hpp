#ifndef event_hpp
#define event_hpp

#include "includes.hpp"

#include "entity.hpp"

#include "commentcore.hpp"

mainentity realization class
event: public entity{

public:

	entity();
	~entity();

	virtual void 	
	set(datetime_start, string value);

	virtual void 	
	set(datetime_end, string value);

	virtual void 	
	set(group, string value);

	virtual void 	
	set(lecturerid, int value);

	// TODO: add methods here
protected:

	entity(int);

	int
	id;	

private:

	string
	datetime_start,
	datetime_end,
	group;

	int
	lecturerid;

};

#endif
