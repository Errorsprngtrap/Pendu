#include <string>
#include <vector>

#pragma once
class PenduFunction
{
public:
	PenduFunction();
	//choose a word at random
	std::string chooseRandomWord(std::vector<std::string> words_list);
};

