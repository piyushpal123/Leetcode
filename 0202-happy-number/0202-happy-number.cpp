class Solution {
public:
int squaresum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d*d;
        n/=10;
    }
    return sum;
}
    bool isHappy(int n) {
      unordered_set<int>visited;
      while(n!=1&&
      visited.find(n)==visited.end()){
        visited.insert(n);
        n=squaresum(n);


      }
      return n==1;
        


        
    }
};