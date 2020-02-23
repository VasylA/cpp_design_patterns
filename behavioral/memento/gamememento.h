#ifndef GAMEMEMENTO
#define GAMEMEMENTO

#include "gamestate.h"

class GameMemento
{
public:
    explicit GameMemento(const GameState &state)
        : _state(state)
    {}

    GameState state() const
    {
        return _state;
    }

private:
    GameState _state;
};
#endif // GAMEMEMENTO
