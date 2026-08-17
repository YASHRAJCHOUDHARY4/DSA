class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;

        while (i >= 0) {

            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            int end = i;

            // Find beginning of word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            // Add space before every word except first
            if (!ans.empty()) {
                ans += ' ';
            }

            ans += s.substr(i + 1, end - i);
        }

        return ans;
    }
};