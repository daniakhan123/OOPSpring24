#include <iostream>
#include <string>

using namespace std;

class Logo {
private:
    string logo;

public:
    Logo(string logo) : logo(logo) {}

    string getLogo() const {
        return logo;
    }

    friend class Server;
};


class Platform {
public:
    string name;
    Logo logo;

    Platform(string name, Logo logo) : name(name), logo(logo) {}
};


class Server {
public:
    string name;
    Platform platform;

    Server(string name, Platform platform) : name(name), platform(platform) {}

    void display() const {
        cout << "Server: " << name << endl;
        cout << "Platform: " << platform.name << endl;
        cout << "Original Logo: " << platform.logo.getLogo() << endl;
    }
};


int main() {
    Logo originalLogo("Blue Bird");
    Logo modifiedLogo("Doge Coin");

    Platform twitter("Twitter", originalLogo);
    Server server1("Server 1", twitter);

    // Display with original logo
    server1.display();

    // Change the logo
    twitter.logo = modifiedLogo;

    // Display with modified logo
    server1.display();

    return 0;
}
