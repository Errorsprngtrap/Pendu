#include <iostream>
#include <string>
#include <vector>
#include "PenduFunction.h"

//List of words
std::vector<std::string> words_list = {
    "words",
    "friends",
    "potato",
    "cutie",
    "minecraft"
};

//
bool gameFinish = false;

//main loop
int main() {
    PenduFunction p;
    std::string randomWord = p.chooseRandomWord(words_list);
    p.showWord();
    
    while (!gameFinish and p.isAlive())
    {
        char choosenLetter;
        std::cin >> choosenLetter;
        p.addLetters(choosenLetter);
        p.showWord();
    }

    std::cout << "You failed, The word was" << randomWord;


    return 0;
}
