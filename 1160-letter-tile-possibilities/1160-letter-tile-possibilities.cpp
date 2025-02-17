class Solution {
public:
int ans(vector<int>&fre){
    int total=0;
    for(int i=0;i<26;i++){
        if(fre[i]>0){
            fre[i]--;
            total+=1+ans(fre);
            fre[i]++;//wapas hote time frequency same karde 
        }

    }
    return total;
}
    int numTilePossibilities(string tiles) {
        vector<int>fre(26,0);
        for(char c:tiles){
            fre[c-'A']++;

        }
        return ans(fre);
        
    }
};