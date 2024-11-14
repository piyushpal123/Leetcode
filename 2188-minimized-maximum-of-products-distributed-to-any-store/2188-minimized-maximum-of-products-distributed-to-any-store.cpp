class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        auto can_dis=[&](int x){
            int stores=0;
            for(int q:quantities){
                stores+=ceil(static_cast<double>(q)/x);
                if(stores>n)return false;
            }
            return stores<=n;
        };
        int l=1,r=*std::max_element(quantities.begin(), quantities.end());
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(can_dis(mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};