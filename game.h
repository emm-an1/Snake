
#ifndef GAME_H
#define GAME_H

#include<iostream>
#include "snake.h"

class Game {
  public:
    Game(); // ctor
    enum {boardNRows=20, boardNCols=80}; // Number of rows and columns for the board.
    void drawBoard(); // Prints board
    void positionSnakeOnBoard();
    void setBoardElement(int, int, char); // set a specific cell of the board to a char symbol.

  protected:
    Snake _snake; //  ~~~~~~~~:E

  private:
    char _board[boardNRows][boardNCols]; //Contains: Borders, snake, fruit.
    void moveSnake();
    void spawnFruit();
    void eatFruit(); //Increase snake's tail by one, increase score, call spawnFruit to get a new fruit

};



#endif
