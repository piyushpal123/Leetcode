class Solution {
public:
void solve(int indi,vector<int>&can,vector<vector<int>>&ans,vector<int>&ds,int tar){
        if(indi==can.size()){
            if(tar==0)ans.push_back(ds);
            
                return;
        
        }
        if(can[indi]<=tar){ds.push_back(can[indi]);
         solve(indi,can,ans,ds,tar-can[indi]);
         ds.pop_back();}
         //do not pick condition 
          solve(indi+1,can,ans,ds,tar);
}

    vector<vector<int>> combinationSum(vector<int>& can, int target) {
    vector<vector<int>>ans;
    vector<int>ds;
        solve(0,can,ans,ds,target);
        return ans;
        
    }
};