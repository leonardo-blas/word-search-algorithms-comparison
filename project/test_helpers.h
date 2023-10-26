#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#include <map>
#include <iomanip>
#include "Trie.h"
#include "BoyerMoore.h"
#include "brute_force_algorithms.h"

void trie_test(const Trie& trie_based_dictionary,
               const std::vector<std::string>& to_search,
               const size_t& trials,
               std::map<std::string, std::chrono::duration<double>>& test_data);

void Boyer_Moore_test(const std::string& string_based_dictionary,
                      const std::vector<std::string>& to_search,
                      const size_t& trials,
                      std::map<std::string, std::chrono::duration<double>>& test_data);

void string_brute_force_test(const std::string& string_based_dictionary,
                             const std::vector<std::string>& to_search,
                             const size_t& trials,
                             std::map<std::string, std::chrono::duration<double>>& test_data);

void vector_brute_force_test(const std::vector<std::string>& vector_based_dictionary,
                             const std::vector<std::string>& to_search,
                             const size_t& trials,
                             std::map<std::string, std::chrono::duration<double>>& test_data);

void print_test_data(const std::map<std::string, std::chrono::duration<double>>& test_data);

#endif
