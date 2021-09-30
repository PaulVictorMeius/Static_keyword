#include "my_strlen.h"

size_t my_strlen(const char* s)
{
	const char* p = s;
	while (*p) 
	{
		++p;
	}
	return (p - s);
}
