class Solution {
public:
bool  vowel(char ch){
    return(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i');

    
}
    int countVowelSubstrings(string word) {
          int n = word.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mpp;

            for (int j = i; j < n; j++) {
                if (!vowel(word[j])) break;

                mpp[word[j]]++;
                if (mpp.size() == 5) count++;
            }
        }
        return count;
    
        
    }
};