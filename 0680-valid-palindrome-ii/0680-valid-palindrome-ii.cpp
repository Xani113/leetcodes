class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            { 
                int l = left + 1;
                int r = right;

                while (l < r && s[l] == s[r])
                {
                    l++;
                    r--;
                }

                if (l >= r)
                    return true;

                l = left;
                r = right - 1;

                while (l < r && s[l] == s[r])
                {
                    l++;
                    r--;
                }

                if (l >= r)
                    return true;

                return false;
            }
        }

        return true;
    }
};