#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include "TrieNode.h"

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(const std::string& word);
    bool search(const std::string& word) const;
};

#endif
