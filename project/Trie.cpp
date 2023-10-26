#include "Trie.h"

void Trie::insert(const std::string& word) {
    TrieNode* node = root;

    for (char c : word) {
        if (!node->children[c]) {
            node->children[c] = new TrieNode();
        }

        node = node->children[c];
    }

    node->end_of_word = true;
}

bool Trie::search(const std::string& word) const {
    TrieNode* node = root;

    for (char c : word) {
        if (!node->children[c]) {
            return false;
        }

        node = node->children[c];
    }

    return node->end_of_word;
}