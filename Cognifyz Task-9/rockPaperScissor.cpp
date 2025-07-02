#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getComputerChoice() {
    string options[3] = {"rock", "paper", "scissors"};
    return options[rand() % 3];
}

string determineWinner(string user, string computer) {
    if (user == computer) return "Draw";
    if ((user == "rock" && computer == "scissors") ||
        (user == "paper" && computer == "rock") ||
        (user == "scissors" && computer == "paper"))
        return "User";
    return "Computer";
}

int main() {
    srand(time(0));
    int userWins = 0, computerWins = 0, draws = 0;
    int rounds;

    cout << "🎮 Welcome to Rock-Paper-Scissors Game!\n";
    cout << "How many rounds do you want to play? ";
    cin >> rounds;

    for (int i = 1; i <= rounds; i++) {
        string userChoice, computerChoice, result;
        cout << "\nRound " << i << ": Enter rock, paper, or scissors: ";
        cin >> userChoice;

        computerChoice = getComputerChoice();
        cout << "Computer chose: " << computerChoice << endl;

        result = determineWinner(userChoice, computerChoice);
        if (result == "User") userWins++;
        else if (result == "Computer") computerWins++;
        else draws++;

        cout << "Result: " << result << " wins this round!\n";
    }

    cout << "\n Final Scoreboard:";
    cout << "\nUser Wins: " << userWins;
    cout << "\nComputer Wins: " << computerWins;
    cout << "\nDraws: " << draws << endl;

    if (userWins > computerWins)
        cout << "\n You are the overall winner!\n";
    else if (computerWins > userWins)
        cout << "\n Computer wins overall. Better luck next time!\n";
    else
        cout << "\n It's a tie overall!\n";

    return 0;
}
