class NumberContainers {
public:
    NumberContainers() {
        
    }
     unordered_map<int,int>mp;
     unordered_map<int,set<int>>pq;
    void change(int index, int number) {
        // mp[index]=number;
        if(mp[index]>0){
            int a=mp[index];
            pq[a].erase(index);
            if(pq[a].size()==0)pq.erase(a);
        }
           mp[index]=number;
           pq[number].insert(index);
        }
    
    int find(int number) {
        if(pq.count(number)==0) return -1;
        return *pq[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */