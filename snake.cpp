#include"snake.h"

Snake::Snake():
    m_x{2}, m_y{2}, m_d{'R'} {
};

int Snake::getX(int i) {
    return m_x[i];
};

int Snake::getY(int i) {
    return m_y[i];
};
char Snake::getD(int i) {
    return m_d[i];
};

int Snake::getSnakeLength() {
    return m_x.size();
};
