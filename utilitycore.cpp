#include "utilitycore.hpp"

string
errorstate::error = "";

int
errorstate::code = 0;

map < string, int >
idmaster::id;

void
stringcopier::copy(
			string & destination,
			string source
		){

	destination.clear();

	for (unsigned int i = 0; i < source.size(); ++i)
		destination.push_back(source[i]);

}

vector < string >
stringcopier::split(
			string substr,
			string source
		){

	vector < string > 
	res;

	res.clear();

	unsigned int 
	found, lf = 0;

	for (; (found = source.find(substr, lf)) != string::npos; lf = found + substr.size())
		res.push_back(source.substr(lf, found - lf));

	if (lf != source.size() - 1) res.push_back(source.substr(lf));

	return res;

}

void
stringcopier::replace(
				string substr,
				string source,
				string & destination
			){

	unsigned int 
	found, lf = 0;

	for (; (found = destination.find(substr, lf)) != string::npos; lf = found + 1)
		destination.replace(found, substr.size(), source);	

}

int
idmaster::gen(string target){

	return id[target]++;

}

