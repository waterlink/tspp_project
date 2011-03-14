#ifndef entity_hpp
#define entity_hpp

#include "includes.hpp"

semi abstract interface class
entity{

public:

	virtual
	~entity() = 0;

	virtual void
	setname(string & newname);

	virtual string
	getname() const;

	virtual void
	fromstring(string & data);

	virtual string
	tostring() const;

private:

	string 
	name;

};

entity::~entity(){}

#endif
