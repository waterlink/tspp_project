#ifndef lecturer_hpp
#define lecturer_hpp

#include "includes.hpp"

#include "human.hpp"
#include "student.hpp"

#include "commentcore.hpp"

mainentity morphed class
lecturer: public student{

public:

	lecturer();
	~lecturer();

	virtual string
	get(caphedre) const;

	virtual void
	set(caphedre, string value);

	virtual string
	get(rank) const;

	virtual void
	set(rank, string value);

	void
	fromstring(string & data);

	string
	tostring() const;

private:

	string
	caphedre,
	rank;

};

#endif
