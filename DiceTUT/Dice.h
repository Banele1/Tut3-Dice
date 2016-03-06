#pragma once
class Dice
{
public:
	Dice();
	 int roll();
	 void display();
	 void average( int, int );
	 void average(double, int);
	 ~Dice();

private:
		 int LastRoll;
		 int TotalRolls;
		 int score;


	
};

