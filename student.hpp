#ifndef student_hpp
#define student_hpp

#include "includes.hpp"

#include "human.hpp"

mainentity realization class
student: public human{

public:

	student();
	~student();

	int
	getid() const;

	virtual string
	getuniversity() const;

	virtual string
	getfaculty() const;

	virtual string
	getspecialization() const;

	virtual string
	getgroup() const;

	virtual void
	setuniversity(string value);

	virtual void
	setfaculty(string value);

	virtual void
	setspecialization(string value);

	virtual void
	setgroup(string value);

	void
	fromstring(string & data);

	string
	tostring() const;

	virtual bool
	operator < (const student & op) const;

protected:

	int
	id;

	student(int);

private:

	string
	university,
	faculty,
	specialization,
	group;

};

#endif
