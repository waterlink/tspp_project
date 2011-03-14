#include "human.hpp"

#include "utilitycore.hpp"

void
human::setfirst_name(string & newfirst_name){

	stringcopier::copy(first_name, newfirst_name);

}

string
human::getfirst_name() const{

	return first_name;

}

void
human::setfathers_name(string & newfathers_name){

	stringcopier::copy(fathers_name, newfathers_name);

}

string
human::getfathers_name() const{

	return fathers_name;

}

void
human::fromstring(string & data){

	string 
	S;

	stringcopier::copy(S, data);

	vector < string > 
	V = stringcopier::split("\t", S);

	if (V.size() < 3){

		errorstate::error = "human::fromstring - error 1: out of data";
		errorstate::code = 1;

		return;

	}

	// name, first_name, fathers_name

	setname(V[0]);
	setfirst_name(V[1]);
	setfathers_name(V[2]);

}

string
human::tostring() const{

	string
	S = getname() + '\t' + getfirst_name() + '\t' + getfathers_name() + '\n';

	return S;

}

