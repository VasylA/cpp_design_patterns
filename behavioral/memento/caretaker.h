#ifndef CARETAKER_H
#define CARETAKER_H

#include <stack>

using std::stack;

class GameOriginator;
class GameMemento;

class Caretaker
{
public:
    Caretaker();
    ~Caretaker();

    void shootThatDumbAss();

    void F5();
    void F9();

private:
    GameOriginator *_game;
    stack<GameMemento*> _quickSaves;
};

#endif // CARETAKER_H
