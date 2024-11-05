class Solution {
public:
int change(char ch){
    if(ch=='I')return 1;
    else if(ch=='V')return 5;
    else if(ch=='X')return 10;
    else if(ch=='L')return 50;
    else if(ch=='C')return 100;
     else if(ch=='D')return 500;
     else{
        return 1000;
     }
}
    int romanToInt(string s) {
        int ans=0;
        int i=0;
   while(i<s.length()){
            if(i+1<s.length()&&change(s[i])<change(s[i+1])) {ans+=change(s[i+1])-change(s[i]);
            i+=2;}
           else{
            ans+=change(s[i]);
            i++;
            
           }
        }
       return ans; 
    }
};