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
<br>
The string stores the words in alphabetical order.

### String-based brute force search
Like the Boyer-Moore search algorithm, this brute force approach is executed on a single string containing all downloaded words.

### Vector-based brute-force search
Unlike the other brute force search algorithm, this brute force method is executed on a vector of strings which contains one word per index.

## Results
<img width="1225" alt="graph" src="https://github.com/leonardo-blas/word-search-algorithms-comparison/assets/125172895/4019bc60-15ae-4c58-a1ff-b04633228141">

We can see how the string-based brute force approach is, by far, the least effective method. It performs well when finding some words, like ugli, lime, and date, which tend to be short in length, but this is not a rule of thumb (fig). There is no clear pattern to predict when the string-based brute force search will perform well. Additionally, we could explain the progressively increasing times via the storage modality: The string containing all dictionary words does so in alphabetical fashion. Hence, the further away the word (xray, zucchini), the worst its runtime.
<br>
The vector-based brute force approach worked surprisingly well, better than the Boyer-Moore approach. This occurs because, if the first character of a vector element is not a match, this algorithm will continue to the next location, skipping a handful of characters per element. If compared to the string-based brute force approach, in both cases the 355 thousand words are stored in contiguous memory, but this approach doesn't check every single character. Like in the string-based brute force method, the searching times increase the further away the word is from the origin (the first element), reinforcing the idea that the further away the word (xray, yellow), the worst the runtime.
<br>
The Boyer-Moore search method plot's shape is very similar to the string-based brute force's. Since this algorithm works on a single string holding the 355 thousand words, this further reinforces the idea that the further away the word (xray, yellow), the worst its runtime. Moreover, it also looks like it performs well on shorter words, but again, this is not a rule of thumb (xray).
<br>
The best word searching algorithm, by far, is the standard trie method. This is no surprise, as tries are designed to find strings and are commonly used in dictionary software (which is exactly what we are doing). Unlike all the other methods, there is no observable runtime increase caused by the position of the word being searched (yellow, zucchini).

## Note
The trials variable in main is set to 1000. It will take a while to run.
