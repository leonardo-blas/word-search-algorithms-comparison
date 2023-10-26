#ifndef BOYERMOORE_H
#define BOYERMOORE_H

#include <iostream>
#include <algorithm>

const int MAX_CHAR = 256;

void bad_char_heuristic(const std::string& pattern, std::vector<int>& bad_char);
bool Boyer_Moore_search(const std::string& text, const std::string& pattern);

#endif
