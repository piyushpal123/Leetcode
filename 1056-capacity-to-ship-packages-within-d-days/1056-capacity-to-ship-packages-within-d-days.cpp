class Solution {
public:
bool ispossible(vector<int>&w,int mid,int day){
    int cnt=1;
    int sum=0;
    int n=w.size();
    for(int i=0;i<n;i++){
       if(w[i]>mid)return false;
       if(sum+w[i]>mid){cnt++;
       sum=w[i];}
       else{
        sum+=w[i];
       }
    }
    return cnt<=day;


}
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end()),
        r=accumulate(weights.begin(),weights.end(),0);
        int res=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ispossible(weights,mid,days)){
                res=mid;
               
                r=mid-1;
            }else l=mid+1;

        }
        return res;
        
    }
};