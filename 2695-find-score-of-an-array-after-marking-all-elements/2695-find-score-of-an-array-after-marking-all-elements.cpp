class Solution {
    #define  ll long long
public:
    long long findScore(vector<int>& nums) {
       ll int n=nums.size();
        multimap<ll int,ll int>mp;
        unordered_set<ll int>st;
        for(ll int i=0;i<n;i++){
            //mp[nums[i]]=i;
            mp.insert({nums[i],i});
        }
       ll int ans=0;
        while(mp.size()){
            auto it=mp.begin();
           ll int a=it->first;
            ll int idx=it->second;
            if(st.find(idx)!=st.end()){
                mp.erase(mp.begin());
            }
            else{
                ans+=a;
                if(st.find(idx-1)==st.end()){
                    st.insert(idx-1);
                }
                if(st.find(idx+1)==st.end()){
                    st.insert(idx+1);
                }
                mp.erase(mp.begin());
            }
        }
        return ans;
    }
};