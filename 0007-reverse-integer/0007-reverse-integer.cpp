class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
            int r=x%10;
            ans=ans*10+r;
            x=x/10;
        }
        long long a=INT_MAX;
        long long b=INT_MIN;
        if(ans>a){
            return 0;
        }
        else if(ans<b){
            return 0;
        }
        else{
            return ans;
        }
    }
};