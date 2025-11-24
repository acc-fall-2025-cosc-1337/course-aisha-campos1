//h
#ifndef tic_tac_toe.h
#define tic_tac_toe.h

#include "tic_tac_toe.h"

class TicTacToe : public TicTacToe
{
    public:
    tic_tac_toe_4() : tic_tac_toe_(4) {}

    private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

};
#endif

