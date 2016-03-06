#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Dice.h"
using namespace std;



int main()
{

	srand((unsigned)time(NULL));
	Dice myDice;
	myDice.display();
	int i;
	for (i = 0; i < 10; i++){
		myDice.roll();
		myDice.display();
		

		 
		 }





	cin.get();
	return 0;
}