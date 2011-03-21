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

	//res.clear();
	//res.resize(50);

	unsigned int 
	found, lf = 0, n = 0;

	for (; (found = source.find(substr, lf)) != string::npos; lf = found + substr.size()){

		string
		S = source.substr(lf, found - lf);

		res.push_back(S);

		n++;

	}

	if (lf <= source.size() - 1){

		string
		S = source.substr(lf);

		res.push_back(S);

		n++;

	}

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

	int 
	idr = id[target];

	id[target]++;

	return idr;

}

int
stringcopier::getint(string source){

	int
	r = 0;

	if (sscanf(source.c_str(), "%d", &r) <= 0){

		errorstate::error = "stringcopier::getint: error 3: can't extract int from string";
		errorstate::code = 3;

		return 0;

	}

	return r;

}

