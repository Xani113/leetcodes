class Solution {
public:
    int hammingWeight(int n) {
        int ct=0;
        while(n){
            ct++;
            n=n&(n-1);
        }
        return ct;
    }
};