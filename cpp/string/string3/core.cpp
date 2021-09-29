#include <cstring>
#include "core.h"
#include <cassert>

void Core::init(const char *str)
{
	if (str ) {
		len_ = strlen(str);
		
		str_ = new char[len_ + 1];
		assert(str_ );
		strcpy(str_, str);

	} else {
		len_ = 0;
		
		str_ = new char[1];
		assert(str_ );
		str_[0] = '\0';
	}
}

Core::Core(const char *str)
{
	this->init(str);
}
/*
Core::Core(const Core& rhs)
{
	this->init(rhs.str_);	
}

Core& Core::operator=(const Core& rhs)
{
	if (this != rhs) {
		delete [] str_;
		
		this->init(rhs.str_);
	}
	
	return *this;
}
*/

Core::~Core()
{
	//delete []	;
}


