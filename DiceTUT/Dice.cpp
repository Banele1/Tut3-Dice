#include "Dice.h"
#include<iostream>
#include<ctime>
#include<cstdlib>

 
using namespace std;



Dice::Dice() : LastRoll(0), TotalRolls(0), score(0)
{
}



int Dice::roll( )
	{
		LastRoll = 0;
		TotalRolls++;

		// gerate random number

		LastRoll = rand() % 6 + 1;
		score += LastRoll;
		return score;

}
 
void Dice::display(){
	cout << "your last roll was:" << LastRoll << endl;
	cout << "Roll result :" << score << endl;
	cout << "Total Roll :" << TotalRolls << endl << endl;

}




Dice::~Dice()
{
}
/*
static int  r[10];

// set the seed
srand((unsigned)time(NULL));
for (int i = 0; i < 7; ++i)
{
	r[i] = rand();
	//cout << r[i] << endl;
}

return r;*/