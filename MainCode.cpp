#include <iostream>
#include <string>
#include <vector>
#include "PenduFunction.h"

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

//main loop
int main() {
    PenduFunction p;
    std::string randomWord = p.chooseRandomWord(words_list);
    //while (lifeCount > 0 && !gameFinish) {

    //}

    return 0;
}
