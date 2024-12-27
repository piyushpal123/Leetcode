class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int mps=INT_MIN;
        int firstmaxi=values[0];
        for(int i=1;i<n;i++){
            int second=values[i]-i;
            mps=max(mps,firstmaxi+second);
            firstmaxi=max(firstmaxi,values[i]+i);
           
        }
        return mps;
        
    }
};