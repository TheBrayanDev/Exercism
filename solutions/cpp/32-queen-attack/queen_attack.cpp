#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack {

chess_board::chess_board(std::pair<int, int> w, std::pair<int, int> b) : queen_white(w), queen_black(b)
{
    if (w.first < 0 || w.first > 7 || w.second < 0 || w.second > 7)
    {
        throw std::domain_error("White queen position is out of bounds");
    }
    if (b.first < 0 || b.first > 7 || b.second < 0 || b.second > 7)
    {
        throw std::domain_error("Black queen position is out of bounds");
    }
    if (w == b)
    {
        throw std::domain_error("Queens cannot occupy the same position");
    }
}

std::pair<int, int> chess_board::white() const
{
return queen_white;
}

std::pair<int, int> chess_board::black() const
{
    return queen_black;
}

bool chess_board::can_attack() const
{

    if (queen_white.first == queen_black.first || queen_white.second == queen_black.second || 
        queen_white.first + queen_white.second == queen_black.first + queen_black.second ||
        queen_white.first - queen_white.second == queen_black.first - queen_black.second){
        return true;
    }

    return false;
}

} // namespace queen_attack
