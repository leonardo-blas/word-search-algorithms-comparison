#include "read_helpers.h"

void read_dictionary_into_string(std::string& string_based_dictionary) {
    std::ifstream dictionary_stream("dictionary.txt");

    if (!dictionary_stream.is_open()) {
        std::cout << "Error. Can't open dictionary.txt.";
        return;
    }

    std::string word;

    while (dictionary_stream >> word) {
        string_based_dictionary += word;
    }

    dictionary_stream.close();
}

void read_dictionary_into_vector(std::vector<std::string>& vector_based_dictionary) {
    std::ifstream dictionary_stream("dictionary.txt");

    if (!dictionary_stream.is_open()) {
        std::cout << "Error. Can't open dictionary.txt.";
        return;
    }

    std::string word;

    while (dictionary_stream >> word) {
        vector_based_dictionary.push_back(word);
    }

    dictionary_stream.close();
}

void read_dictionary_into_trie(Trie& trie_based_dictionary) {
    std::ifstream dictionary_stream("dictionary.txt");

    if (!dictionary_stream.is_open()) {
        std::cout << "Error. Can't open dictionary.txt.";
        return;
    }

    std::string word;

    while (dictionary_stream >> word) {
        trie_based_dictionary.insert(word);
    }

    dictionary_stream.close();
}