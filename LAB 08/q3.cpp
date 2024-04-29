#include &lt;iostream&gt;
using namespace std;
class Position {
protected:
    float x, y, z;
public:

    Position(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    void setPosition(float _x, float _y, float _z) {
        x = _x;
        y = _y;
        z = _z;
    }
    void getPosition() {
        cout &lt;&lt; &quot;Position: (&quot; &lt;&lt; x &lt;&lt; &quot;, &quot; &lt;&lt; y &lt;&lt; &quot;, &quot; &lt;&lt; z &lt;&lt; &quot;)&quot; &lt;&lt; endl;
    }
};
class Health {
protected:
    int health;
public:
    Health(int _health) : health(_health) {}
    void setHealth(int _health) {
        health = _health;
    }
    void getHealth() {
        cout &lt;&lt; &quot;Health: &quot; &lt;&lt; health &lt;&lt; endl;
    }
};
class Character : public Position, public Health {
private:
    string name;
public:
    Character(float _x, float _y, float _z, int _health, const string&amp; _name) :
Position(_x, _y, _z), Health(_health), name(_name) {}
    void move(float dx, float dy, float dz) {
        x += dx;
        y += dy;
        z += dz;
    }
    void setName(const string&amp; _name) {
        name = _name;
    }
    void displayInfo() {
        cout &lt;&lt; &quot;Character: &quot; &lt;&lt; name &lt;&lt; endl;
        getPosition();
        getHealth();
    }
};

int main() {
    Character player(0.0f, 0.0f, 0.0f, 100, &quot;Player1&quot;);
    player.displayInfo();
    player.move(1.0f, 2.0f, 3.0f);
    player.setHealth(80);
    player.setName(&quot;Player2&quot;);
    player.displayInfo();
    return 0;
}
