#ifndef READ_HELPERS_H
#define READ_HELPERS_H

#include <fstream>
#include <iostream>
#include "Trie.h"

void read_dictionary_into_string(std::string& string_based_dictionary);
void read_dictionary_into_vector(std::vector<std::string>& vector_based_dictionary);
void read_dictionary_into_trie(Trie& trie_based_dictionary);

#endif
