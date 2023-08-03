#pragma once
#include<cstdio>
class Cursor
{
	int n;
	char c = '^';
	char bs = '|';
	int in = 0;
public:
	Cursor(int n);
	void print() const;
	int getIndex() const;
	void move(int change);
	void changeCursor(char c,char bs);
};