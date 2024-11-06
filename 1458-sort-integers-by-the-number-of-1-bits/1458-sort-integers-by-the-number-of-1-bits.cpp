class Solution {
public:
int count(int n){
    int cnt=0;
    while(n){
        cnt+=n&1;
        n>>=1;
    }
    return cnt;
}
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(count(arr[j])>count(arr[j+1]))swap(arr[j],arr[j+1]);
             if(count(arr[j])==count(arr[j+1])&&arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
     }
       return arr; 
    }
};