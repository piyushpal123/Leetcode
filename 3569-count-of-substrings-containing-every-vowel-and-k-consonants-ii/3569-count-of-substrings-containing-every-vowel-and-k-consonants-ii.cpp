class Solution {
public:
    bool vowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    long long countOfSubstrings(string word, int k) {
        int cnt = 0;
        int n = word.size();
        unordered_map<char, int> mpp;
     

      //preprocess  of consonant

      vector<int>nextcons(n);
      int preindex=n;
      for(int i=n-1;i>=0;i--){
        nextcons[i]=preindex;

        if(!vowel(word[i]))preindex=i;
      }
      int l=0,r=0;
      long long count=0;
      int cons=0;
      while(r<n){
        char ch=word[r];
        if(vowel(ch))mpp[ch]++;
        else{
            cons++;

        }

        // shrink window if cons>k
            while(l<n&&cons>k){
                char ch=word[l];
                if(vowel(ch)){
                    mpp[ch]--;
                    if(mpp[ch]==0)mpp.erase(ch);
                }
                else{
                    cons--;
                }
                l++;
            }

            while(l<n&&mpp.size()==5&&cons==k){
                int index=r;

                count+=nextcons[index]-r;

                char ch=word[l];

                if(vowel(ch)){mpp[ch]--;
                if(mpp[ch]==0)mpp.erase(ch);}

                else{
                        cons--;
                }
                l++;

            }
            r++;
      }
    

           
    

        return count;
    }
};
