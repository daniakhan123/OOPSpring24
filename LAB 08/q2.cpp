#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    int health;
    int damage;

public:
    Character(int h, int d) : health(h), damage(d) {}

    void display() const {
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};

class Enemy : public Character {
public:
    Enemy(int h, int d) : Character(h, d) {}

    void display() const {
        cout << "Enemy Details:" << endl;
        Character::display();
    }
};

class Player : public Character {
public:
    Player(int h, int d) : Character(h, d) {}

    void display() const {
        cout << "Player Details:" << endl;
        Character::display();
    }
};

class Wizard : public Player {
private:
    int magicPower;
    string spells;

public:
    Wizard(int h, int d, int mp, const string& sp)
        : Player(h, d), magicPower(mp), spells(sp) {}

    void display() const {
        cout << "Wizard Details:" << endl;
        Player::display();
        cout << "Magic Power: " << magicPower << endl;
        cout << "Spells: " << spells << endl;
    }
};

int main() {
    Wizard wizard(100, 20, 50, "Fireball, Lightning Bolt");
    wizard.display();
    return 0;
}
