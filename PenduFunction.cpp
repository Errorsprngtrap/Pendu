#include <string>
#include <vector>
#include <iostream>
#include<ctime>
#include <random>
#include "PenduFunction.h"

PenduFunction::PenduFunction() {}

//choose a word at random
std::string PenduFunction::chooseRandomWord(std::vector<std::string> words_list) {
	srand(time(NULL));
	int numberRd = rand() % words_list.size();

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
		for (int i = 0; i < wordToFind.length(); i++) {
			found = false;

			for (int l = 0; l < lettersFound.size(); l++) {
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

	if (wordScan == wordToFind) {
		return true;
	}
	return false;
}

//add letters
void PenduFunction::addLetters(char letter) {

	for (int i = 0; i < wordToFind.length(); i++) {
		if (wordToFind[i] == letter) {
			lettersFound.push_back(letter);
			return;
		}

	}

	health--;
	std::cout << "HP Lefts: " << health << "\n";

}

//check if dead
bool PenduFunction::isAlive() {
	if (health > 0) {
		return true;
	}

	return false;
}