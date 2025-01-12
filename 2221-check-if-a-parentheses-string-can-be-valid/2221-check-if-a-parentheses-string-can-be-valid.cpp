class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0)return false;
        int locked_cnt=0;
        int unlocked_cnt=0;
        for(int i=0;i<n;i++){
            if(locked[i]=='0')unlocked_cnt+=1;
            else if(s[i]=='(')locked_cnt+=1;
            else{
                if(locked_cnt)locked_cnt-=1;
                else if(unlocked_cnt)unlocked_cnt-=1;
                else{
                    return false;
                }
            }
        }

         locked_cnt=0;
         unlocked_cnt=0;

         for(int i=n-1;i>=0;i--){
            if(locked[i]=='0')unlocked_cnt+=1;
            else if(s[i]==')')locked_cnt+=1;
            else{
                if(locked_cnt)locked_cnt-=1;
                else if(unlocked_cnt)unlocked_cnt-=1;
                else{
                    return false;
                }
            }
        }
return true;
        
    }
};