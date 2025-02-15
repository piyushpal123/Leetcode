class Solution {
public:
#define ll long long
bool check(int index,int curr, string num,int target){
    if(index==num.length())return curr==target;
    for(int j=index;j<num.length();j++){
        int val=stoi(num.substr(index,j-index+1));
       
       if(check(j+1,curr+val,num,target))return true;
       
       
    }
    return false;


}
    int punishmentNumber(int n) {
        ll ans=0;
        for(int i=1;i<=n;i++){
            string num =to_string(i*i);
           if(check(0,0,num,i))ans+=i*i;

        }
        return ans ;
        
    }
};