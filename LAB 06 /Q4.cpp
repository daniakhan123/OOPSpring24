#include <iostream>

using namespace std;

class CricketPlayer {
private:
    int totalRuns;
    int dismissals;
    int totalBallsFaced;

public:
    CricketPlayer(int runs = 0, int dis = 0, int balls = 0)
        : totalRuns(runs), dismissals(dis), totalBallsFaced(balls) {}

    // Function to calculate batting average
    double calculateBattingAverage() const {
        if (dismissals == 0) {
            return 0.0; // To avoid division by zero
        }
        return static_cast<double>(totalRuns) / dismissals;
    }

    // Function to calculate strike rate
    double calculateStrikeRate() const {
        if (totalBallsFaced == 0) {
            return 0.0; // To avoid division by zero
        }
        return (static_cast<double>(totalRuns) / totalBallsFaced) * 100;
    }
};

int main() {
    int totalRuns, dismissals, totalBallsFaced;

    cout << "Enter total runs scored by the player: ";
    cin >> totalRuns;
    cout << "Enter total number of times the player has been dismissed: ";
    cin >> dismissals;
    cout << "Enter total number of balls faced by the player: ";
    cin >> totalBallsFaced;

 
    CricketPlayer player(totalRuns, dismissals, totalBallsFaced);


    cout << "Batting Average: " << player.calculateBattingAverage() << endl;
    cout << "Strike Rate: " << player.calculateStrikeRate() << endl;

    return 0;
}
