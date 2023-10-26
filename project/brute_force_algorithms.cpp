#include "brute_force_algorithms.h"

bool string_brute_force_search(const std::string& string_based_dictionary, const std::string& target) {
    std::size_t m = target.length();
    std::size_t n = string_based_dictionary.length();

    for (int i = 0; i <= n - m; ++i) {
        int j;

        for (j = 0; j < m; ++j) {
            if (string_based_dictionary[i + j] != target[j]) {
                break;
            }
        }

        if (j == m) {
            return true;
        }
    }

    return false;
}

bool vector_brute_force_search(const std::vector<std::string>& vector_based_dictionary, const std::string& target) {
    for (const std::string& word : vector_based_dictionary) {
        if (word == target) {
            return true;
        }
    }

    return false;
}