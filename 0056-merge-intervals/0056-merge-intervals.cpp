class Solution {
public:
bool overlap(int l,int r,vector<int>&inter){
    return(inter[0]<=r);

}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int l=intervals[0][0],r=intervals[0][1];

        for(auto c:intervals){
        if(overlap(l,r,c)){
              r = max(r, c[1]);

        }
        else{
            ans.push_back({l,r});
            l=c[0];
            r=c[1];
         
           
        }

        }
        ans.push_back({l,r});
    
        
        return ans;
        

        
    }
};