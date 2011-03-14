#ifndef human_hpp
#define human_hpp

#include "includes.hpp"

#include "entity.hpp"

semi abstract interface morphed class
human: public entity{

public:

	virtual void
	setfirst_name(string & newfirst_name);

	virtual string
	getfirst_name() const;

	virtual void
	setfathers_name(string & newfathers_name);

	virtual string
	getfathers_name() const;

	void
	fromstring(string & data);

	string
	tostring() const;

private:

	string
	first_name,
	fathers_name;

};

#endif
