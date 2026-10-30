#include <iostream>
#include <string>
#include <vector>

//List of words
std::vector<std::string> words_list = {
    "words",
    "friends",
    "potato",
    "cutie"
};

//Letter found
std::vector<char> letters_found = {};

//life before death
int lifeCount = 6;
bool gameFinish = false;


//purely for test purpose
void printTest() {
    int words_amount = words_list.size();
    std::cout << words_amount<< "\n";
    for (int i = 0; i < words_amount; i++) {
        std::cout << words_list[i] << "\n";
    } 
}

//choose a word at random
std::string chooseRandomWord() {
    srand(time(NULL));
    int numberRd = rand() % words_list.size();

    std::cout << numberRd << "\n";
    std::cout << words_list[numberRd] << "\n";

    return words_list[numberRd];
}

//main loop
int main() {
    std::string randomWord = chooseRandomWord();

    //while (lifeCount > 0 && !gameFinish) {

    //}

    return 0;
}
