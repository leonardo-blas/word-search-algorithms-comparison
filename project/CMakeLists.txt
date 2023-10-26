cmake_minimum_required(VERSION 3.26)
project(word_algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(word_algorithms main.cpp
        read_helpers.cpp
        read_helpers.h
        Trie.h
        Trie.cpp
        TrieNode.h
        BoyerMoore.cpp
        BoyerMoore.h
        brute_force_algorithms.h
        brute_force_algorithms.cpp
        test_helpers.h
        test_helpers.cpp)
