#include "KolkoKrzyzyk.hpp"

std::ostream& operator<<(std::ostream& s, const Board& board)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			s << board.check(i, j);
			s << " ";
		}
		s << std::endl;
	}
	return s;
}
//Board board
//std::cout << board;

std::ostream& operator<<(std::ostream& s, const CheckerState& cs)
{
	// zamieniamy wszystkie std::cout na s
	if (cs == CheckerState::EMPTY)
		s << "-";
	else if (cs == CheckerState::X)
		s << "X";
	else if (cs == CheckerState::O)
		s << "O";

	return s;
}
//powyzsze przeciazenie pozwala np na:
//CheckerState cs12 = board.get(1, 2);
//std::cout << cs12;

bool Board::isOverRows()
{
	for (int i = 0; i < 3; i++)
	{
		if (table[i][0] != CheckerState::EMPTY &&
			(table[i][0] == table[i][1]) &&
			(table[i][1] == table[i][2]))
			return true;
	}
	return false;
}

bool Board::isOverCols()
{
	for (int i = 0; i < 3; i++)
	{
		if (table[0][i] != CheckerState::EMPTY &&
			(table[0][i] == table[1][i]) &&
			(table[1][i] == table[2][i]))
			return true;
	}
	return false;
}

bool Board::isOverDiagonals()
{
	return ((table[0][0] != CheckerState::EMPTY &&
		(table[0][0] == table[1][1]) &&
		(table[1][1] == table[2][2])) ||
		(table[2][0] != CheckerState::EMPTY &&
			(table[2][0] == table[1][1]) &&
			(table[1][1] == table[0][2])));
}

CheckerState Board::check(int x, int y) const
{
	//moze warto sie zabezpieczyc przed dziwnymi x, y?
	return table[x][y];
}

bool Board::set(CheckerState cs, int x, int y)
{
	table[x][y] = cs;
	return true;
}

bool Board::isOver()
{
	return isOverRows() || isOverCols() || isOverDiagonals();
}

bool Board::whoWon()
	{
		for (int i = 0; i < 3; i++)
		{
			if (table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][0] == (CheckerState::X) || (CheckerState::O))
			{
				std::cout << "Winner is: " << table[i][0] << std::endl;
				std::cout << "Coordinates of winning line: " << std::endl;
				for (int j = 0; j < 3; j++)
				{
					std::cout << i << "; " << j << std::endl;
				}
				return true;
			}
			if (table[0][i] == table[1][i] && table[1][i] == table[2][i] && table[0][i] == ((CheckerState::X) || (CheckerState::O))
			{
				std::cout << "Winner is: " << table[0][i] << std::endl;
				std::cout << "Coordinates of winning line: " << std::endl;
				for (int j = 0; j < 3; j++)
				{
					std::cout << j << "; " << i << std::endl;
				}
				return true;
			}
		}
		if (table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] == (CheckerState::X) || (CheckerState::O))
		{
			std::cout << "Winner is: " << table[1][1] << std::endl;
			std::cout << "Coordinates of winning line: " << std::endl;
			for (int j = 0; j < 3; j++)
			{
				std::cout << j << "; " << j << std::endl;
			}
			return true;
		}
		if (table[0][2] == table[1][1] && table[1][1] == table[2][0] && table[2][0] == (CheckerState::X) || (CheckerState::O))
		{
			std::cout << "Winner is: " << table[1][1] << std::endl;
			std::cout << "Coordinates of winning line: " << std::endl;
			for (int j = 0; j < 3; j++)
			{
				std::cout << j << "; " << 2 - j << std::endl;
			}
			return true;
		}
		return false;
	}


	return false;
}

Player::Player(CheckerState cs)
{
	this->colour = cs;
}

bool Player::makeTurn(Board& board)
{
	std::cout << "Current player: " << colour << std::endl;
	int x = 0, y = 0;
	do
	{
		std::cout << "Enter x, y: ";
		std::cin >> x;
		std::cin >> y;
	} while (board.check(x, y) != CheckerState::EMPTY);
	board.set(colour, x, y);

	return true;
}

void Game::swapPlayer()
{
	if (currentPlayer == player1)
		currentPlayer = player2;
	else
		currentPlayer = player1;
}

Game::Game(Player* p1, Player* p2)
{
	player1 = p1;
	this->player2 = p2; //this-> jest nadmiarowe bo jednoznaczne przypisanie
	this->currentPlayer = player1;
}

void Game::start()
{
	do
	{
		currentPlayer->makeTurn(board);
		swapPlayer();
		std::cout << board;
	} while (!board.isOver());
}
