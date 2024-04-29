#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;
class Character {
protected:

    int health;
    int damage;
public:
    Character(int h, int d) : health(h), damage(d) {}
    void display() const {
        cout &lt;&lt; &quot;Health: &quot; &lt;&lt; health &lt;&lt; endl;
        cout &lt;&lt; &quot;Damage: &quot; &lt;&lt; damage &lt;&lt; endl;
    }
};
class Enemy : public Character {
public:
    Enemy(int h, int d) : Character(h, d) {}
    void display() const {
        cout &lt;&lt; &quot;Enemy Details:&quot; &lt;&lt; endl;
        Character::display();
    }
};
class Player : public Character {
public:
    Player(int h, int d) : Character(h, d) {}
    void display() const {
        cout &lt;&lt; &quot;Player Details:&quot; &lt;&lt; endl;
        Character::display();
    }
};
class Wizard : public Player {
private:
    int magicPower;
    string spells;
public:
    Wizard(int h, int d, int mp, const string&amp; sp)
        : Player(h, d), magicPower(mp), spells(sp) {}
    void display() const {
        cout &lt;&lt; &quot;Wizard Details:&quot; &lt;&lt; endl;
        Player::display();
        cout &lt;&lt; &quot;Magic Power: &quot; &lt;&lt; magicPower &lt;&lt; endl;

        cout &lt;&lt; &quot;Spells: &quot; &lt;&lt; spells &lt;&lt; endl;
    }
};
int main() {
 
    Wizard wizard(100, 20, 50, &quot;Fireball, Lightning Bolt&quot;);
    wizard.display();
    return 0;
}
