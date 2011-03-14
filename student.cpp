#include "student.hpp"
#include "utilitycore.hpp"

student::student(){ id = idmaster::gen("student"); }
student::~student(){}

student::student(int){}

int
student::getid() const{ return id; }

string
student::getuniversity() const{ string S; stringcopier::copy(S, university); return S; }

string
student::getfaculty() const{ string S; stringcopier::copy(S, faculty); return S; }

string
student::getspecialization() const{ string S; stringcopier::copy(S, specialization); return S; }

string
student::getgroup() const{ string S; stringcopier::copy(S, group); return S; }

void
student::setuniversity(string value){ stringcopier::copy(university, value); }

void
student::setfaculty(string value){ stringcopier::copy(faculty, value); }

void
student::setspecialization(string value){ stringcopier::copy(specialization, value); }

void
student::setgroup(string value){ stringcopier::copy(group, value); }

void
student::fromstring(string & data){

	string 
	S;

	stringcopier::copy(S, data);

	vector < string > 
	V = stringcopier::split("\t", S);

	if (V.size() < 7){

		errorstate::error = "student::fromstring - error 1: out of data";
		errorstate::code = 1;

		return;

	}

	// name, first_name, fathers_name

	setname(V[0]);
	setfirst_name(V[1]);
	setfathers_name(V[2]);

	// university, faculty, specialization, group

	set(university, V[3]);
	set(faculty, V[4]);
	set(specialization, V[5]);
	set(group, V[6]);

}

string
student::tostring() const{

	string
	S;

	S.clear();
 	
	S = S + get(name) + "\t"; 	
	S = S + get(first_name) + "\t"; 	
	S = S + get(fathers_name) + "\t"; 	
	S = S + get(university) + "\t"; 	
	S = S + get(faculty) + "\t"; 	
	S = S + get(specialization) + "\t"; 	
	S = S + get(group) + "\n";

	//cout << S;

	return S;

}

bool
student::operator < (const student & op) const{

	return id < op.id;

}

