#pragma once
#include <iostream>

enum class CheckerState { EMPTY, X, O }; //3 stany!

class Board
{
	CheckerState table[3][3]; //char -> 'a' '!'
	bool isOverRows();
	bool isOverCols();
	bool isOverDiagonals();
public:
	CheckerState check(int x, int y) const;
	bool set(CheckerState cs, int x, int y);
	bool isOver(); //sugeruje rozbic to na 3 metody - sprawdzanie wierszy (petla), sprawdzanie kolumn (petla), sprawdzanie przeatnych/diagonali
	bool xWon(); //or CheckerState whoWon();
};

class Player
{
	//Board* board; -- nie do konca potrzebne, bo przekazujemy w parametrze metody makeTurn
	CheckerState colour; // mala niedoskonalosc - gracz moglby byc reprezentowany przez puste pola, zamiast X lub O, bo korzysta z 3-stanowego enuma
public:
	//bool makeTurn(Board* board);
	Player(CheckerState cs);
	bool makeTurn(Board& board);
};

class Game
{
	//CheckerState currentColour; -- da sie tak zaimplementowac - mozna prosciej
	Player* currentPlayer;
	Player* player1; //Player *player1, *player2;
	Player* player2;
	Board board;
	void swapPlayer();
public:
	Game(Player* p1, Player* p2);
	void start(); //petla gry
	void reset(); //czysci plansze
};

/*
X - -
- O -
X X O
*/
std::ostream& operator<<(std::ostream& s, const Board& board);

std::ostream& operator<<(std::ostream& s, const CheckerState& cs);


//board.draw();
//std::cout << board - dzieki przeciazeniu operatora << mozemy tak pisac
