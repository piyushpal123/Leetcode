class Solution {
public:
void solve(vector<string>&ans,string temp,int open,int end,int n){
   if(temp.size()==2*n){
    ans.push_back(temp);
    return;
   }
    if(open<n)solve(ans,temp+"(",open+1,end,n);
    if(end<open)solve(ans,temp+")",open,end+1,n);
}

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
       
        solve(ans,"",0,0,n);
        return ans;
        
    }
};