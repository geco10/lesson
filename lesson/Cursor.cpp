#include "Cursor.h"

Cursor::Cursor(int n)
{
	this->n = n;
}

void Cursor::print() const
{
	for(int i=0;i<n;++i){
		if (i == in)printf("1 ");
		else printf("0 ");
	}
}

int Cursor::getIndex() const
{
	return in;
}

void Cursor::move(int change)
{
	in += change;
}
