class Solution {
public:
bool solve(vector<int>&day,int mid,int m,int k){
    int n=day.size();
    int cnt=0;
    int bday=0;
    for(int i=0;i<n;i++){
        if(day[i]<=mid){
            cnt++;
        }
        else{
            bday+=(cnt/k);
            cnt=0;
        }
    }
    bday+=(cnt/k);
    return bday>=m;

}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=m *1ll * k *1ll;
        if(val>n)return -1;
       int minimumDay=INT_MAX;
       int maximumDay=INT_MIN;
       for(auto c:bloomDay){
        minimumDay=min(minimumDay,c);
          maximumDay=max(maximumDay,c);
       }

        int low=minimumDay;
        int high=maximumDay;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(solve(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         

        }
      
        return low;
       
       


        
    }
};