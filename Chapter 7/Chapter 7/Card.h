#pragma once
enum Suit { clubs, diamonds, hearts, spades };
//from 2 to 10 are integers without names
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
class Card
{
private:
	int number; //2 to 10, jack, queen, king, ace
	Suit suit; //clubs, diamonds, hearts, spades
public:
	Card(); //constructor
	void set(int n, Suit s); //set card
	void display(); //display card
};

