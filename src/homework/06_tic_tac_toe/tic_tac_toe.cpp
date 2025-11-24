#include "tic_tac_toe.h"

#include <iostream>
#include <algorithm>
#include <cctype>

bool TicTacToe::game_over()
{
	return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
	if (!first_player.empty())
	{
		first_player[0] = static_cast<char>(std::toupper(first_player[0]));
	}

	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		player = "X";
	}

	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= static_cast<int>(pegs.size()))
	{
		pegs[position - 1] = player;
		set_next_player();
	}
}

std::string TicTacToe::get_player() const
{
	return player;
}

void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i < pegs.size(); i += 3)
	{
		std::cout << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << '\n';
		if (i < pegs.size() - 3)
		{
			std::cout << "---------" << '\n';
		}
	}
}

void TicTacToe::set_next_player()
{
	player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() const
{
	for (const auto& peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}

	return true;
}

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
	winner = (player == "X") ? "O" : "X";
		return true;
	}
 
	if (check_board_full())
	{
	winner = "c";
	return true;
	}
	return false;
}

std::string TicTacToe::get_winner()
{
	return winner;
}
void TicTacToe:: display_board() const
{
	int size =sqrt(pegs.size());
	for (int i=0; i < size * size; ++i)
	{
		std::cout <<pegs[i];
		if((i +1) % size==0)
			std::cout << "\n";
		else
		std::cout << "|";
	}
}

void TicTacToe::clear_board()
{
	std::fill(pegs.begin(), pegs.end(), " ");
}