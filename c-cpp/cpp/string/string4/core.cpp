#include <cstring>
#include "core.h"
#include <cassert>

void Core::init(const char *str)
{
	if (str ) 
    {
		len_ = strlen(str);
		
		str_ = new char[len_ + 1];
		assert(str_ );
		strcpy(str_, str);

	} 
    else 
    {
		len_ = 0;
		
		str_ = new char[1];
		assert(str_ );
		str_[0] = '\0';
	}
}



