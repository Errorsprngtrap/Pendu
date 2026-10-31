#pragma once

#include <string>
#include <vector>

class PenduFunction
{
public:
	PenduFunction();

	std::string chooseRandomWord(std::vector<std::string> words_list);
	bool showWord();
	void addLetters(char letter);

private:
	int health = 6;
	std::string wordToFind;
	std::vector<char> lettersFound;
};

