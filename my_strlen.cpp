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

size_t w_my_strlen(const wchar_t* s)
{
	const wchar_t* p = s;
	while (*p) 
	{
		++p;
	}
	return (p-s);
}
