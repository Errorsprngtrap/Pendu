#include <string>
#include <vector>
#include <iostream>
#include<ctime>
#include <random>
#include "PenduFunction.h"

PenduFunction::PenduFunction(){}

//choose a word at random
std::string chooseRandomWord(std::vector<std::string> words_list) {
    srand(time(NULL));
    int numberRd = rand() % words_list.size();

    std::cout << numberRd << "\n";
    std::cout << words_list[numberRd] << "\n";

    return words_list[numberRd];
}