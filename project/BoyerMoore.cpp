#include "BoyerMoore.h"

void bad_char_heuristic(const std::string& pattern, std::vector<int>& bad_char) {
    std::size_t m = pattern.length();

    for (std::size_t i = 0; i < MAX_CHAR; ++i) {
        bad_char[i] = -1;
    }

    for (int i = 0; i < m; ++i) {
        bad_char[static_cast<std::size_t>(pattern[i])] = i;
    }
}

bool Boyer_Moore_search(const std::string& text, const std::string& pattern) {
    long long m = pattern.length();
    long long n = text.length();
    long long s = 0;
    std::vector<int> bad_char(MAX_CHAR);
    bad_char_heuristic(pattern, bad_char);

    while (s <= n - m) {
        long long j = m - 1;

        while (j >= 0 && pattern[j] == text[s + j]) {
            --j;
        }

        if (j < 0) {
            return true;
        }

        else {
            s += std::max(static_cast<long long>(1), j - bad_char[static_cast<std::size_t>(text[s + j])]);
        }
    }

    return false;
}