#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool end_of_word;

    TrieNode() : end_of_word(false) {}
};

#endif
