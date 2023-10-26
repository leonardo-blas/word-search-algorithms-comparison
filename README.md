## Description
This is a runtime comparison of four string search algorithms: Standard trie search, Boyer-Moore search, string-based brute force search, and vector-based brute force search.
<br>
To achieve this, I downloaded a dictionary of about 355,000 English words from the internet and tried to find 26 words, each starting with a different letter.
<br>

```cpp
const std::vector<std::string> to_search =
        { "apple", "banana", "coconut", "date","elderberry", "fig", "grape", "hackberry","imbe", "jackfruit", "kiwi",
          "lime", "mango", "nectarine", "orange", "papaya", "quesadilla", "rambutan", "strawberry", "tangerine", "ugli",
          "vanilla", "watermelon", "xray", "yellow", "zucchini"
        };
```

The searching process is conducted a "trials" number of times. This variable can be found and modified in main.cpp. Then, the times are averaged.
<br>
In this case, the searching of each of the 26 words was conducted 1000 times using each search method.

### Standard trie search
Relies on a user-defined standard Trie class.
<br>
A Trie object is prefilled with the 355 thousand words previous to the searching process.

### Boyer-Moore search
Relies on a user-defined standard Boyer-Moore search implementation.
<br>
The algorithm is excecuted on a single string, which was prefilled with all 355 thousand words.

### String-based brute force search
Like the Boyer-Moore search algorithm, this brute force approach is executed on a single string containing all downloaded words.

### Vector-based brute-force search
Unlike the other brute force search algorithm, this brute force method is executed on a vector of strings which contains one word per index.

## Results
<img width="1225" alt="graph" src="https://github.com/leonardo-blas/word-search-algorithms-comparison/assets/125172895/4019bc60-15ae-4c58-a1ff-b04633228141">

## Note
The trials variable in main is set to 1000. It will take a while to run.
