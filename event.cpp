#include "event.hpp"
#include "utilitycore.hpp"

event::event(){ id = idmaster::gen("event"); }
event::~event(){}

event::event(int){}

void 	
event::set(datetime_start, string value){ datetime_start = value; }

void 	
event::set(datetime_end, string value){ datetime_end = value; }

void 	
event::set(group, string value){ group = value; }

void 	
event::set(lecturerid, int value){ lecturerid = value; }

string
event::get(datetime_start) const{ return datetime_start; }

string
event::get(datetime_end) const{ return datetime_end; }

string
event::get(group) const{ return group; }

int
event::get(lecturerid) const{ return lecturerid; }

void
event::fromstring(string & data){

	string 
	S;

	stringcopier::copy(S, data);

	vector < string > 
	V = stringcopier::split("\t", S);

	if (V.size() < 5){

		errorstate::error = "event::fromstring - error 1: out of data";
		errorstate::code = 1;

		return;

	}

	int 
	v4;

	const char *
	s4 = V[4].c_str();

	sscanf(s4, "%d", &v4);

	set(name, V[0]);
	set(datetime_start, V[1]);
	set(datetime_end, V[2]);
	set(group, V[3]);
	set(lecturerid, v4);

}

string
event::tostring() const{

	string
	S;

	S.clear();

	char
	buf[20];

	sprintf(buf, "%d", get(lecturerid));

	S = S + get(name) + "\t";
	S = S + get(datetime_start) + "\t";
	S = S + get(datetime_end) + "\t";
	S = S + get(group) + "\t";
	S = S + buf + "\n";

	return S;

}

bool
event::operator < (const event & op) const{

	return get(id) < op.get(id);

}

int
event::get(id) const{ return id; }

