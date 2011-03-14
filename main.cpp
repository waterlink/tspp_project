#include "includes.hpp"

#include "commentcore.hpp"

#include "entity.hpp"
#include "utilitycore.hpp"
#include "lecturer.hpp"

int
main(){

	freopen("in.txt", "r", stdin);

	int
	n;

	char
	ch;

	string
	S;

	set < lecturer >
	lecturers;

	cin >> n;
	//ch = 0;
	//while (ch != '\n') cin >> ch;
	
	getline(cin, S);

	for (int i = 0; i < n; ++i){

		getline(cin, S);

		lecturer 
		newlecturer;
		
		newlecturer.fromstring(S);

		lecturers.insert(newlecturer);

	}

	for (set < lecturer >::iterator iter = lecturers.begin(); iter != lecturers.end(); ++iter){

		cout << iter->tostring();

	}

	return 0;

}

