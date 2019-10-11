#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <vector>


class Snake {
  private:
    std::vector<int>  m_x; // m_x[i] is the x-coordinate of i-th element of the tail of the snake
    std::vector<int>  m_y; // y-coordinates.
    std::vector<char> m_d; //vector of directions. m_d[i] is the direction of the i-th elementh of the snake's tail. R, L, U, D

  public:
    Snake();

    int  getX(int); // Get x-coordinate of i-th element of snake's tail
    int  getY(int);
    char getD(int); // Get direction of i-th element
    int getSnakeLength(); // Get the number of elements in snake's tail


};



#endif
