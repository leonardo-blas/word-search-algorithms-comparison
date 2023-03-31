## Description
This is a time complexity analysis of three string search algorithms: Brute force, Boyer-Moore, and trie search.
For this, we downloaded a dictionary of about 355,000 English words from the internet and tried to find 26 words, each starting with a different letter.

```cpp
const std::string to_search[] = { "apple", "banana", "coconut", "date",
	 "elderberry", "fig", "grape", "hackberry", "imbe", "jackfruit", "kiwi",
	 "lime", "mango", "nectarine", "orange", "papaya", "quesadilla", "rambutan",
	 "strawberry", "tangerine", "ugli", "vanilla", "watermelon", "xray",
	 "yellow", "zucchini" };
```

In the case of the trie search, it was preloaded with the dictionary's words before timing the trie search times.

## Results
![graph](https://raw.githubusercontent.com/leonardo-blas/word-search-algorithms-comparison/main/Graph.png)

## Credits
My classmate, Pauline Garingan, created the StringAlgorithms.cpp file.
