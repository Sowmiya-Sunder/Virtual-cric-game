#include "game.h"
using namespace std;


int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	

    game.showAllPlayers();

	cout << "\nPress Enter to continue";
	

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    

    game.toss();

    game.startFirstInnings();

	return 0;
}
