#ifndef GAMEORIGINATOR
#define GAMEORIGINATOR

#include "gamestate.h"
#include "gamememento.h"

#include <iostream>

using std::cout;
using std::endl;

class GameOriginator
{
public:
    GameOriginator()
        : _state(100, 0)
    {}

    void play()
    {
        cout << _state << endl;
        _state.setHealthLevel(_state.healthLevel() * 0.9);
        _state.setKilledMonsters(_state.killedMonsters() + 2);
    }

    GameMemento *gameSave()
    {
        return new GameMemento(_state);
    }

    void loadGame(GameMemento *memento)
    {
        _state = memento->state();
    }

private:
    GameState _state;
};

#endif // GAMEORIGINATOR

