class Solution {
    public int scoreOfParentheses(String s) {
        int score = 0;
        int depth = 0;
        int n = s.length();
        char[] chars = s.toCharArray();
        for (int i = 0; i < n; i++) {
            if (chars[i] == '(') {
                depth++;
            } else {
                depth--;
                if (chars[i - 1] == '(') {
                    score += (1 << depth);
                }
            }
        }
        return score;
    }
}