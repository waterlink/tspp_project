#ifndef complicatedobject_hpp
#define complicatedobject_hpp

#include "object.hpp"

class
complicatedobject: public object{

public:

	class
	builder{

	public:

		virtual 
		~builder() = 0;

		virtual complicatedobject *
		build() = 0;

	};

	virtual 
	~complicatedobject() = 0;

};

#endif
