class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]=i;
        }
        for(int i=0;i<arr.size();i++){
            int value=2*arr[i];
            if(mpp.find(value)!=mpp.end()&&mpp[value]!=i)return true;
        }

     return false;   
    }
};