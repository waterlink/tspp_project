#ifndef event_hpp
#define event_hpp

#include "includes.hpp"

#include "entity.hpp"

#include "commentcore.hpp"

mainentity realization class
event: public entity{

public:

	event();
	~event();

	virtual void 	
	set(datetime_start, string value);

	virtual void 	
	set(datetime_end, string value);

	virtual void 	
	set(group, string value);

	virtual void 	
	set(lecturerid, int value);

	virtual string
	get(datetime_start) const;

	virtual string
	get(datetime_end) const;

	virtual string
	get(group) const;

	virtual int
	get(lecturerid) const;

	void
	fromstring(string & data);

	string
	tostring() const;

	virtual bool
	operator < (const event & op) const;

	virtual int
	get(id) const;

protected:

	event(int);

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
