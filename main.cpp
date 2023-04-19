#include <iostream>
using namespace std;

int main() {
    string personalIdentification;
    string games[] = {"Roulette", "Blackjack", "Slots", "Craps"};

    cout << "Welcome to the Space Casino!\nWhat is your personal identification?\n" << endl;

    cin >> personalIdentification;
    cout << "Hello, " + personalIdentification + "\n\n";

    for(int i = 0; i < sizeof(games) / sizeof(string); i++) {
        cout << i;
    }

    return 0;
}
