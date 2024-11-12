class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n=items.size();
        int m=queries.size();
        sort(items.begin(),items.end());
        // yaha sara queries hai with original index
        vector<pair<int,int>>sor_q;
        for(int i=0;i<m;i++){
                sor_q.push_back({queries[i],i});

        }
        sort(sor_q.begin(),sor_q.end());
        
        

        vector<int>ans(m,0);
       
        int maxi=0;
        int j=0;
        for(auto& [p,i]:sor_q){
             
        
          while(j<n&&p>=items[j][0]){
            
            maxi=max(maxi,items[j][1]);
            j+=1;

          }
          ans[i]=maxi;
            
           

          }
  
      return ans;
        
    }
};