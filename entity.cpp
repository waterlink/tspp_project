#include "entity.hpp"

#include "utilitycore.hpp"

void
entity::setname(string & newname){

	stringcopier::copy(name, newname);

}

string
entity::getname() const{

	return name;

}

void
entity::fromstring(string & data){

	setname(data);

}

string
entity::tostring() const{

	return getname();

}
