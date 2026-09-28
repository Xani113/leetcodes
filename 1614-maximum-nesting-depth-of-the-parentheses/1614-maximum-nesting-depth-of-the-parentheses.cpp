class Solution {
public:
    int maxDepth(string s) {
      int dt=0,ans=0;
      for(char c:s){
        if(c=='('){
            dt++;
            ans=max(ans,dt);
        }
        else if(c==')') dt--;
      }
      return ans;  
    }
};