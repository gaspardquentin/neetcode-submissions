class Solution {
public:

    bool is_alphanum(char c) {
        return (c >= '0' && c <= '9') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z');
    }

    bool isPalindrome(std::string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i <= j) {
            if (!is_alphanum(s[i])) {
                i++;
                continue;
            }
            if (!is_alphanum(s[j])) {
                j--;
                continue;
            }
            char ci, cj;
            ci = s[i] <= 'Z' ? s[i] + 32 : s[i];
            cj = s[j] <= 'Z' ? s[j] + 32 : s[j];
            if (ci != cj) {
                return false;
            }

            i++;j--;
        }
	    return true;
    }
};
