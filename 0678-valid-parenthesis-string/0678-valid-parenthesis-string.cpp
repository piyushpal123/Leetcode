class Solution {
public:
bool check(string &s){
    int n=s.size();
    int i=0;
    int mini=0,maxi=0;
    while(i<n){
        if(s[i]==')'){
            maxi--;
            mini--;

        }
       else if(s[i]=='('){maxi++;
        mini++;}
        else{mini--;
        maxi++;}
        if(mini<0)mini=0;
        if(maxi<0)return false;
        i++;

    }
    
   return (mini==0);

}
    bool checkValidString(string s) {
        
            return check(s);

        
    }
};