#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdlib>
using namespace std;

std::string rps(const std::string& p1, const std::string& p2)
{   
    if(p1[0] == 's' && p2[0] == 'p') return "Player 1 won!";
    else if(p1[0] == 's' && p2[0] == 'r') return "Player 2 won!";
    else if(p1[0] == 'r' && p2[0] == 'p') return "Player 2 won!";
    else if(p1[0] == 'r' && p2[0] == 's') return "Player 1 won!";
    else if(p1[0] == 'p' && p2[0] == 's') return "Player 2 won!";
    else if(p1[0] == 'p' && p2[0] == 'r') return "Player 1 won!";
    else return "Draw!";
}

int main() {
    string player1 = "scissors";
    string player2 = "paper";

    cout<<rps(player1, player2);


    return 0;
}
