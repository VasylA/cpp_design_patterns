#ifndef GAMESTATE
#define GAMESTATE

#include <ostream>

using std::ostream;

using std::endl;

class GameState
{
public:
    GameState(int healthLevel, int killedMonsters)
        : _healthLevel(healthLevel),
          _killedMonsters(killedMonsters)
    {
    }

    int healthLevel() const
    {
        return _healthLevel;
    }
    void setHealthLevel(int healthLevel)
    {
        _healthLevel = healthLevel;
    }

    int killedMonsters() const
    {
        return _killedMonsters;
    }
    void setKilledMonsters(int killedMonsters)
    {
        _killedMonsters = killedMonsters;
    }

//    ostream &operator << (ostream &stream)
//    {
//        stream << "Health: " << healthLevel() << endl
//               << "Killed Monsters: " << killedMonsters() << endl;

//        return stream;
//    }

private:
    int _healthLevel;
    int _killedMonsters;
};

ostream &operator << (ostream &stream, const GameState &state)
{
    stream << "Health: " << state.healthLevel() << endl
           << "Killed Monsters: " << state.killedMonsters() << endl;

    return stream;
}

#endif // GAMESTATE
