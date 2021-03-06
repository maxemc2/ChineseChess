#pragma once
#include "ConsoleInterface.h"
#include "Chess.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Board
{
private:
	short pointerX , pointerY;
	vector<vector<COORD>>  cursor;
	vector<vector<string>> base;
public:
	Board();
	~Board();
	void print();
	void put(Chess);
	void setPointer(int , int);
	COORD getCursor();
	COORD getPointer();
};
