#include "includes.hpp"

#include "commentcore.hpp"

#include "entity.hpp"
#include "utilitycore.hpp"
#include "event.hpp"
#include "event.hpp"
#include "tui.hpp"
#include "usercore.hpp"
#include "utilparams.hpp"
#include "comlineparam.hpp"

// lab 2 completed

int
main(
		int argc,
		char ** argv
	){

	//freopen("in.txt", "r", stdin);

	comlineaquirer
	*comline = new comlineaquirer(argc, argv);

	paramaquirer
	&commands = *comline;

	tui 
	mytui;

	ui 
	&my = mytui;

	string
	par1, par2, par3,
	com;

	int
	id1, id2, id3;

	for (int i = 1; i < argc; ++i){

		com = commands(i);

		// set active class
		if (com == "-c"){

			// -a "activeclass"
			par1 = commands(++i);

			my.show("setting active class...\n");
			my.set(activeclass, par1);
			my.show("Done.\n");

		}

		// load
		if (com == "-l"){ 

			my.show("loading data...\n");
			my.loaddata();
			my.show("Done.\n");

		}

		// save
		if (com == "-s"){ 

			my.show("saving data...\n");
			my.savedata();
			my.show("Done.\n");

		}

		// view
		if (com == "-v"){ 

			my.show("viewing data...\n");
			my.showdata_to_user();
			my.show("Done.\n");

		}

		// update
		if (com == "-u"){

			// -u "id" "propertynum" "value"
			par1 = commands(++i);
			par2 = commands(++i);
			par3 = commands(++i);

			my.show("updating data...\n");

			id1 = stringcopier::getint(par1);
			id2 = stringcopier::getint(par2);
			if (errorstate::code != 0){

				my.showerror(errorstate::error);
				break;

			}

			my.setrowparambyid(id1, id2, par3);

			my.show("Done.\n");

		}

		// new row
		if (com == "-a"){

			// -a and user enter
			my.show("adding new row...\n");

			my.show("enter new row:\n");
			par1 = my.get(info_from_user);

			my.add(par1);

			my.show("Done.\n");

		}

		// delete row
		if (com == "-d"){

			// -d "id"
			par1 = commands(++i);

			my.show("deleting a row...\n");

			id1 = stringcopier::getint(par1);
			if (errorstate::code != 0){

				my.showerror(errorstate::error);
				break;

			}

			my.del(id1);

			my.show("Done.\n");

		}

	}

	my.show("Exiting...\nDone.\n");

	return 0;

}

