#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    Hero(int health, string level)
    {
        this->health = health;
        this->level = level;
    }

    int getHealth()
    {
        return this->health;
    }

    string getLevel()
    {
        return this->level;
    }

private:
    int health;
    string level;
};

int main(int argc, char const *argv[])
{

    Hero *victor = new Hero(22, "D");

    cout << "Health is: " << victor->getHealth() << "Level is: " << victor->getLevel();

    return 0;
}
