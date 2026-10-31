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
    bool found = false;

    if (lettersFound.empty()) {
        for (int i = 0; i < wordToFind.length(); i++) {
            wordScan.append("_");
        }
    }
    else {
        std::cout << "size " << lettersFound.size() << "\n";

        for (int i = 0; i < wordToFind.length(); i++) {
            for (int l = 0; l < lettersFound.size(); l++) {
                std::cout << lettersFound[l] << "\n";
                if (wordToFind[i] == lettersFound[l]) {
                    wordScan.push_back(lettersFound[l]);
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                wordScan.push_back('_');
                found = false;
            }
        }

    }

    std::cout << wordScan << "\n";
    return false;
}

//add letters
void PenduFunction::addLetters(char letter) {
    lettersFound.push_back(letter);
}

//check if dead
bool PenduFunction::isAlive() {
    if (health > 0) {
        return true;
    }

    return false;
}