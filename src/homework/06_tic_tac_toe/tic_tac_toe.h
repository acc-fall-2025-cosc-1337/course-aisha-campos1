#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <memory>

class TicTacToe
{
public:
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	bool game_over();
	std::string get_player() const;
	std::string get_winner();
	void display_board() const;

private:
	void set_next_player();
	bool check_board_full() const;
	bool check_row_win() {return false; }
	bool check_diagonal_win() {return false; }

	void clear_board();
	void ser_next_player();

	std::string player;
	std::vector<std::string> pegs{9, " "};
};

#endif