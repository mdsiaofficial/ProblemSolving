#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // For std::rand and std::srand
#include <ctime>   // For std::time

using namespace std;

int main()
{
    // Seed the random number generator for more varied names
    srand(time(0));

    vector<string> firstL = {
        "Super", "evil", "Pro", "Sad", "Golden", "Best", "Beautiful", "Green", "Blue", "Fat",
        "Old", "Wise", "Young", "First", "Big", "fast", "Small", "Smart", "tiny", "Super",
        "Mega", "Pro", "Unreal", "Anti", "", "Cool", "Big", "Little", "Mr.", "Alpha", "",
        "sA_", "Ultra", "MC.", "DJ.", "Pro100", "", "GG_", "SaD_", "Sad", "Cyber", "Binary",
        "", "Black", "Anime", "White", "Trash", "Close", "", "Crazy", "Squeeze", "Easy",
        "Delta", "Gold", "Silver", "Emerald"};

    vector<string> secondL = {
        "Jumper", "Killer", "Noob", "Man", "Hero", "devil", "Thief", "Kid", "Dragon", "skeleton",
        "Archer", "Runner", "Jumper", "Knight", "Adventurer", "Warrior", "Mage", "Druid", "Ninja",
        "God", "Killer", "Crab", "Sniper", "Hacker", "Daddy", "Dad", "Mum", "Ass", "Dick",
        "Lololo", "Qwerty", "King", "Noob", "Void", "Winner", "Lemon", "Pisos", "Meat", "Angel",
        "Nitro", "Ace", "Crusher", "Dragon", "Man", "Boy", "Hit", "Someone", "Cookies", "Noname",
        "Neko", "Schoolboy", "Kitten", "Chicken", "Time", "Hydra", "Acid", "Riper", "Volcano",
        "Gangster", "Chastener", "Droid", "Lucker", "Unlucker", "Legend", "Burger", "Penguin",
        "Crystal", "Agent", "Cock", "Rooster", "Storm", "Zadrot", "Gold", "Silver", "Emerald",
        "Robot", "Troll", "Doctor"};

    int firstIndex = rand() % firstL.size();
    int secondIndex = rand() % secondL.size();

    string fs = firstL[firstIndex] + secondL[secondIndex];

    cout << "Your name is: " << endl;
    cout << fs << endl;

    return 0;
}
