#include "includes.hpp"

#include "commentcore.hpp"

#include "entity.hpp"
#include "utilitycore.hpp"
#include "event.hpp"
#include "event.hpp"

int
main(){

	freopen("in.txt", "r", stdin);

	int
	n;

	char
	ch;

	string
	S;

	set < event >
	events;

	cin >> n;
	//ch = 0;
	//while (ch != '\n') cin >> ch;
	
	getline(cin, S);

	for (int i = 0; i < n; ++i){

		getline(cin, S);

		event 
		newevent;
		
		newevent.fromstring(S);

		events.insert(newevent);

	}

	for (set < event >::iterator iter = events.begin(); iter != events.end(); ++iter){

		cout << iter->get(id) << "\t" << iter->tostring();

	}

	return 0;

}

