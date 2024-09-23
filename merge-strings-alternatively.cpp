//We are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
//If a string is longer than the other, append the additional letters onto the end of the merged string.
//Input: word1 = "abc", word2 = "pqr"
//Output: "apbqcr"
//Input: word1 = "ab", word2 = "pqrs"
//Output: "apbqrs"

class Solution {
public:
    string mergeAlternately(string word1, string word2) {// we are given two strings, word 1 and word 2, both with a length not exceeding 100 characters

        string merged;//empty string declared
        int maxLength = max(word1.length(), word2.length());//max length of the merged string not more than the length of these two strings

        for (int i = 0; i < maxLength; i++) {//we iterate a loop that runs from the first character to the last character at the last index
            if (i < word1.length()) {// if the current character at the current index is smaller than the word 1 length, word 1 is added to the merged string that is to be returned
                merged += word1[i];
            }

            if (i < word2.length()) {//the same as we did with a given character of the first string
                merged += word2[i];
            }
        }

        return merged;//simply return the updated merged string
    }
};
