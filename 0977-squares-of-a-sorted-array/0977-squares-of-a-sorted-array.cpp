class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int left=0,right=n-1;
        int i=n-1;
        while(left<=right){
            int lsq=nums[left]*nums[left];
            int rsq=nums[right]*nums[right];
            if(lsq>rsq){
                result[i]=lsq;
                left++;
           } else{
                result[i]=rsq;
                right--;
           }
           i--;
        }
        return result;
    }
};