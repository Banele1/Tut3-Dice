#pragma once
class Dice
{
public:
	Dice();
	 int roll();
	 void display();
	 void average();

	 ~Dice();

private:
		 int LastRoll;
		 int TotalRolls;
		 int score;


	
};

