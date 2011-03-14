#include "lecturer.hpp"
#include "utilitycore.hpp"

lecturer::lecturer(){ id = idmaster::gen("lecturer"); }
lecturer::~lecturer(){}

string
lecturer::get(caphedre) const{ return caphedre; }

void
lecturer::set(caphedre, string value){ stringcopier::copy(caphedre, value); }

string
lecturer::get(rank) const{ return rank; }

void
lecturer::set(rank, string value){ stringcopier::copy(rank, value); }

void
lecturer::fromstring(string & data){

	string
	S, D;

	stringcopier::copy(S, data);

	vector < string >
	V = stringcopier::split("\t", S);

	if (V.size() < 9){

		errorstate::error = "student::fromstring - error 1: out of data";
		errorstate::code = 1;

		return;

	}

	stringcopier::copy(S, data);

	unsigned int
	found = S.rfind("\t");

	found = S.rfind("\t", found - 1);

	D = S.substr(found + 1, S.size() - found - 1);

	V.clear();

	V = stringcopier::split("\t", D);

	S.replace(found, S.size() - found, "");

	student::fromstring(S);

	set(caphedre, V[0]);
	set(rank, V[1]);

}

string
lecturer::tostring() const{

	string
	S = student::tostring();

	S.replace(S.size() - 1, 1, "\t");

	S = S + caphedre + "\t" + rank + "\n";

	return S;

}

