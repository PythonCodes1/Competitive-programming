/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have. 
Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: J = "aA", S = "aAAbbbb"
Output: 3
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        // Creating an unordered set
        unordered_set<char> jewels;
        
        // Inserting the chars that mean that it's a gem/jewel
        for(char c : J)
            jewels.insert(c);
            
        // Loop to see how many gems/jewels the cin has
        int count = 0;
        for(char c : S)
            if(jewels.find(c) != jewels.end()) count++;
        return count;
    }
};
