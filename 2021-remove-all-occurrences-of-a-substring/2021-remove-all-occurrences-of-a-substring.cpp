class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        while(s.find(part)!=std::string::npos){
            int index=s.find(part);
            if(index!=string::npos){
                s.erase(index,n);
            }
            else{
                return s;
            }
        }
      
        return s;
        
    }
};