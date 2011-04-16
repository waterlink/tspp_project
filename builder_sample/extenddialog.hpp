
#ifndef extenddialog_hpp
#define extenddialog_hpp

#include <vector>
#include "dialog.hpp"
#include "extendclass.hpp"
#include "complicatedobject.hpp"
#include <string>

class
extenddialog: public dialog{

public:

	extenddialog(){}
	~extenddialog(){}

	void
	play();

	virtual void
	add(extendclass *);

	class
	builder: public complicatedobject::builder{

	public:

		builder();
		~builder();

		complicatedobject *
		build();

		virtual void
		add(extendclass * X){ dlg->add(X); }

		virtual void
		addnew(std::string str);

	private:

		extenddialog
		*dlg;

	};

protected:

	std::vector < extendclass * >
	V;

private:

	

};

#endif

