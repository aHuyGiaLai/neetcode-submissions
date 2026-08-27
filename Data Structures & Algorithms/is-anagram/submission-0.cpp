class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        } else {
            int n = s.length();
            int count[2][26] = {0};
            for (int i = 0; i < n; i++) {
                count[0][s[i] - 'a'] += 1;
                count[1][t[i] - 'a'] += 1;
            }

            for (int i = 0; i < 26; i++) {
                if (count[0][i] != count[1][i])
                    return false;
            }
            return true;
        }
    }
};
