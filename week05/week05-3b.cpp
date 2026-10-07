//week05-3b.cpp 學習計畫 Built-in Functoin第一題
//LeetCode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string now;
        while ( ss >> now ) {
        }
        return now.length();
    }
};
