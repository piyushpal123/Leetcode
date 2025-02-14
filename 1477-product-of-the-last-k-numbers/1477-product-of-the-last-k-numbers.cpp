class ProductOfNumbers {
public:
     vector<int>vv;
    ProductOfNumbers() {
        vv.push_back(1);
    }
    void add(int num) {
        int n=vv.size();
        if(num==0)vv={1};
        else vv.push_back(num*vv[n-1]);
    }
    int getProduct(int k) {
        int n=vv.size();
         if(k>=n)return 0;
        return vv[n-1]/vv[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */