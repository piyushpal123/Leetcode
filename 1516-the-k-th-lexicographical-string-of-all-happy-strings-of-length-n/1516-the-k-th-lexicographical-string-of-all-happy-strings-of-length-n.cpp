class Solution {
public:
   
         void maker(int n, string s, vector<string>& res, string& a) { 
        if (s.size() == n) {
            res.push_back(s);
            return;
        }
        for (int i = 0; i < 3; i++) {
            if (s.empty() || s.back() != a[i]) {
                s.push_back(a[i]);
                maker(n, s, res, a);
                s.pop_back(); 
            }
        }
    }

    string getHappyString(int n, int k) {
        vector<string> res;
        string a = "abc";
        maker(n, "", res, a);

        if (res.size() < k) return "";  
        
        return res[k - 1];   
    }
        
    
};