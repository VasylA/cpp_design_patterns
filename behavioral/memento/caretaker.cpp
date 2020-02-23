#include "caretaker.h"
#include "gameoriginator.h"
#include "gamememento.h"

Caretaker::Caretaker()
    : _game(new GameOriginator)
{
}

Caretaker::~Caretaker()
{
    while (!_quickSaves.empty())
    {
        GameMemento *top = _quickSaves.top();
        _quickSaves.pop();
        delete top;
    }
    delete _game;
}

void Caretaker::shootThatDumbAss()
{
    _game->play();
}

void Caretaker::F5()
{
    _quickSaves.push(_game->gameSave());
}

void Caretaker::F9()
{
    if (!_quickSaves.empty())
        _game->loadGame(_quickSaves.top());
}
