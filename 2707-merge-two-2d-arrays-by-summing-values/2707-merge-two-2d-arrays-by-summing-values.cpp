class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mpp;
        for(auto i:nums1){
            mpp[i[0]]+=i[1];

        }
        for(auto i:nums2){
            mpp[i[0]]+=i[1];

        }
        vector<vector<int>>ans;
        int a=0;
        for(auto c:mpp){

           ans.push_back({c.first,c.second});
        }
        return ans;
        
    }
};