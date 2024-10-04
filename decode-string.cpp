class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return helper(i, s);
    }
    string helper(int& idx, string s) {
        int n = 0;
        string ans = "";
        while (idx < s.size()) {
…                return ans;
            else
                ans += c;
            idx++;
        }
        return ans;
    }
};
