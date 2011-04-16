
#ifndef dialog_hpp
#define dialog_hpp

#include "classA.hpp"
#include "classB.hpp"
#include "classC.hpp"
#include "complicatedobject.hpp"

class
dialog: public complicatedobject{

public:

	dialog(){}
	~dialog(){}

	virtual void
	play();

	virtual void
	setA(classA *);

	virtual void
	setB(classB *);

	virtual void
	setC(classC *);

	class
	builder: public complicatedobject::builder{

	public:

		builder();
		~builder();

		complicatedobject *
		build();

		void
		configure(classA * replicA, classB * replicB, classC * replicC);

	private:

		dialog
		*dlg;

	};

private:

	classA
	*A;

	classB
	*B;

	classC
	*C;

};

#endif

