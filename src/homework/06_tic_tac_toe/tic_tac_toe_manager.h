//h
#ifndef tic_tac_toe_manager.h
#define tic_tac_toe_manager.h

#include <vector>
#include <memory>
#include "tic_tac_toe.h"

class TicTacToeManager
{
    public:
    void save_game(std::unique_ptr<TicTacToe>& game);
    void display_game() const;

    private:
    std::vector<std::unique_ptr<TicTacToe>> games;

};
#endif
