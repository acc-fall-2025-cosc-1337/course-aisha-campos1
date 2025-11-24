//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager:: save_game(std::unique_ptr<TicTacToe>& game)
{
    games.push_back(std::move(game));

}
void TicTacToeManager::display_games() const
{
    for (const auto& g : games)
    {
        g->display_board();
        std::cout << "\n";
    }

}