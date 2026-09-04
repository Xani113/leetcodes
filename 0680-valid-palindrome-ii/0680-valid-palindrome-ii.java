class Solution {
    public boolean validPalindrome(String s) {
        char[] chars = s.toCharArray();
        int l = 0, r = chars.length - 1; 
        while (l < r) {
            if (chars[l] == chars[r]) {
                l++;
                r--;
            } else {
                return isPalindrome(chars, l + 1, r) || isPalindrome(chars, l, r - 1);
            }
        }
        return true;
    }  
    private boolean isPalindrome(char[] chars, int l, int r) {
        while (l < r) {
            if (chars[l++] != chars[r--]) return false;
        }
        return true;
    }
}