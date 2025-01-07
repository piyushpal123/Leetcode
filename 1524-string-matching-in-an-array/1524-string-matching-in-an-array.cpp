class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
         unordered_set<string> res;

    for (int i = 0; i < words.size(); ++i) {
        for (int j = 0; j < words.size(); ++j) {
            if (i != j && words[j].find(words[i]) != string::npos) {
                res.insert(words[i]);
                break; 
            }
        }
    }

  
    return vector<string>(res.begin(), res.end());
        
    }
};