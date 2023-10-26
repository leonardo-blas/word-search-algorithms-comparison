#include "test_helpers.h"

void trie_test(const Trie& trie_based_dictionary,
               const std::vector<std::string>& to_search,
               const size_t& trials,
               std::map<std::string, std::chrono::duration<double>>& test_data) {
    for (std::size_t i = 0; i < trials; ++i) {
        for (const std::string& word: to_search) {
            auto start = std::chrono::high_resolution_clock::now();
            bool result = trie_based_dictionary.search(word);
            auto stop = std::chrono::high_resolution_clock::now();

            if (result) {
                test_data[word] += std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);
            }
        }
    }

    for (auto& it : test_data) {
        it.second /= trials;
    }
}

void Boyer_Moore_test(const std::string& string_based_dictionary,
                      const std::vector<std::string>& to_search,
                      const size_t& trials,
                      std::map<std::string, std::chrono::duration<double>>& test_data) {
    for (std::size_t i = 0; i < trials; ++i) {
        for (const std::string& word: to_search) {
            auto start = std::chrono::high_resolution_clock::now();
            bool result = Boyer_Moore_search(string_based_dictionary, word);
            auto stop = std::chrono::high_resolution_clock::now();

            if (result) {
                test_data[word] += std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);
            }
        }
    }

    for (auto& it : test_data) {
        it.second /= trials;
    }
}

void string_brute_force_test(const std::string& string_based_dictionary,
                             const std::vector<std::string>& to_search,
                             const size_t& trials,
                             std::map<std::string, std::chrono::duration<double>>& test_data) {
    for (std::size_t i = 0; i < trials; ++i) {
        for (const std::string& word: to_search) {
            auto start = std::chrono::high_resolution_clock::now();
            bool result = string_brute_force_search(string_based_dictionary, word);
            auto stop = std::chrono::high_resolution_clock::now();

            if (result) {
                test_data[word] += std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);
            }
        }
    }

    for (auto& it : test_data) {
        it.second /= trials;
    }
}

void vector_brute_force_test(const std::vector<std::string>& vector_based_dictionary,
                             const std::vector<std::string>& to_search,
                             const size_t& trials,
                             std::map<std::string, std::chrono::duration<double>>& test_data) {
    for (std::size_t i = 0; i < trials; ++i) {
        for (const std::string& word: to_search) {
            auto start = std::chrono::high_resolution_clock::now();
            bool result = vector_brute_force_search(vector_based_dictionary, word);
            auto stop = std::chrono::high_resolution_clock::now();

            if (result) {
                test_data[word] += std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);
            }
        }
    }

    for (auto& it : test_data) {
        it.second /= trials;
    }
}

void print_test_data(const std::map<std::string, std::chrono::duration<double>>& test_data) {
    for (const auto& it : test_data) {
        std::cout << it.first << '\t' << std::fixed << std::setprecision(9)<< it.second.count() << '\n';
    }
}