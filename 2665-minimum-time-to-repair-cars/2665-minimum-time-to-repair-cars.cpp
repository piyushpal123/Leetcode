class Solution {
public:
bool ispossible(vector<int>ranks,long long mid,int c){
     long long ans=0;
    for(auto a:ranks){
        ans+=sqrt(mid/a);
    }
    return ans>=c;
}
    long long repairCars(vector<int>& ranks, int cars) {
        int n=ranks.size();
        long long int l=1,r=*max_element(begin(ranks),end(ranks))*1LL*cars*cars;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(ispossible(ranks,mid,cars)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};