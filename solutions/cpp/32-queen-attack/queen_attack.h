#pragma once

#include <utility>

namespace queen_attack {

    class chess_board
    {
    private:
        /* data */
    public:
        const std::pair<int, int> queen_white;
        const std::pair<int, int> queen_black;
        chess_board(std::pair<int, int> w, std::pair<int, int> b);
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;
        bool can_attack() const;
        ~chess_board() {};
    };

}  // namespace queen_attack
