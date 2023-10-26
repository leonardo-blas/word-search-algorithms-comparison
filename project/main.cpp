#include "read_helpers.h"
#include "test_helpers.h"

const std::vector<std::string> to_search =
        { "apple", "banana", "coconut", "date","elderberry", "fig", "grape", "hackberry","imbe", "jackfruit", "kiwi",
          "lime", "mango", "nectarine", "orange", "papaya", "quesadilla", "rambutan", "strawberry", "tangerine", "ugli",
          "vanilla", "watermelon", "xray", "yellow", "zucchini"
        };

int main() {
    const std::size_t trials = 1000;
    std::map<std::string, std::chrono::duration<double>> trie_test_data;
    std::map<std::string, std::chrono::duration<double>> Boyer_Moore_test_data;
    std::map<std::string, std::chrono::duration<double>> string_brute_force_test_data;
    std::map<std::string, std::chrono::duration<double>> vector_brute_force_test_data;

    Trie trie_based_dictionary;
    std::string string_based_dictionary;
    std::vector<std::string> vector_based_dictionary;

    read_dictionary_into_trie(trie_based_dictionary);
    read_dictionary_into_string(string_based_dictionary);
    read_dictionary_into_vector(vector_based_dictionary);

    std::cout << "TRIE:\n";
    trie_test(trie_based_dictionary, to_search, trials, trie_test_data);
    print_test_data(trie_test_data);

    std::cout << "\nBOYER-MOORE:\n";
    Boyer_Moore_test(string_based_dictionary, to_search, trials, Boyer_Moore_test_data);
    print_test_data(Boyer_Moore_test_data);

    std::cout << "\nSTRING-BASED BRUTE FORCE:\n";
    string_brute_force_test(string_based_dictionary, to_search, trials, string_brute_force_test_data);
    print_test_data(string_brute_force_test_data);

    std::cout << "\nVECTOR-BASED BRUTE FORCE:\n";
    vector_brute_force_test(vector_based_dictionary, to_search, trials, vector_brute_force_test_data);
    print_test_data(vector_brute_force_test_data);
}
