#include <string>
#include <vector>
#include <iostream>
#include<ctime>
#include <random>
#include "PenduFunction.h"

PenduFunction::PenduFunction(){}

//choose a word at random
std::string PenduFunction::chooseRandomWord(std::vector<std::string> words_list) {
    srand(time(NULL));
    int numberRd = rand() % words_list.size();

    std::cout << numberRd << "\n";
    std::cout << words_list[numberRd] << "\n";

    wordToFind = words_list[numberRd];
    return words_list[numberRd];
}

//show the word found letters
bool PenduFunction::showWord() {
    std::string wordScan;

    if (lettersFound.empty()) {
        for (int i = 0; wordToFind.length(); i++) {
            std::cout << i << "\n";
            wordScan.append("_");
        }
    }

    std::cout << wordScan << "\n";
    return false;
}

//add letters
void PenduFunction::addLetters(char letter) {
    lettersFound.push_back(letter);
}