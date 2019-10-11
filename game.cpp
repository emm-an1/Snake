// Game engine
#include<iostream>
#include "game.h"
#include "snake.h"

// Default ctor
Game::Game() :
    _snake(),
    _board{} {

    // Create borders
    for (int row = 1; row <= boardNRows; ++row) {
        for (int col = 1; col <= boardNCols; ++col) {
            switch(row) {
            case 1:
                _board[row][col] = '#';
            case boardNRows:
                _board[row][col] = '#';
            };
            switch(col) {
            case 1:
                _board[row][col] = '#';
            case boardNCols:
                _board[row][col] = '#';
            };
        }
    }


};



void Game::setBoardElement(int row, int col, char w) {
    _board[row][col] = w;
};


void Game::positionSnakeOnBoard() {
    for (int i = 0; i < 6; i++) {
   setBoardElement(_snake.getX(0), _snake.getY(0), char(223));
    }
};

void Game::drawBoard() {
    positionSnakeOnBoard(); // first update snake's position on board, before printing board's elements
    for (int row = 1; row <= boardNRows; ++row) {
        for (int col = 1; col <= boardNCols; ++col) {
            std::cout << _board[row][col];
        }
        std::cout << "\n";
    }

};
