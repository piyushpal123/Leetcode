class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();

        vector<int>ans(n);
        unordered_set<int>a;
        int cnt=0;
      
        for(int i=0;i<n;i++){
            
           
            if(a.count(A[i]))cnt++;
            else{
                a.insert(A[i]);
            }
            if(a.count(B[i]))cnt++;
            else{
                 a.insert(B[i]);
            }
               
          ans[i]=cnt;  
        }

      return ans;  
    }
};