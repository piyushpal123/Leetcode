class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans;
            vector<int>indices;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1')indices.push_back(i);
        }
        
       for(int i=0;i<n;i++){
            int sum=0;
            for(auto it:indices){
                if(it!=i){
                    sum+=abs(it-i);
                }

            }
            ans.push_back(sum);
       }

       return ans; 
    }
};