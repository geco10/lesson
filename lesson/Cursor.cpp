#include "Cursor.h"

Cursor::Cursor(int n)
{
	this->n = n;
}

void Cursor::print() const
{
	for(int i=0;i<n;++i){
		if (i == in)printf("%c ",c);
		else printf("%c ",bs);
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

void Cursor::changeCursor(char c, char bs)
{
	this->c = c;
	this->bs = bs;
}
