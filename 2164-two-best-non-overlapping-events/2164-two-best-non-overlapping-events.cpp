class Solution {
public:
struct comparetime{
    bool operator()(const vector<int>&a,const vector<int>&b){
        return a[1]>b[1];
    }
};
    int maxTwoEvents(vector<vector<int>>& events) {
     sort(events.begin(),events.end(),[](vector<int>&a,vector<int>&b){
        return a[0]<b[0];
     });
priority_queue<vector<int>,vector<vector<int>>,comparetime>pq;
int prevmax=0;
int res=0;
for(const auto& event:events){
    while(!pq.empty()&&pq.top()[1]<event[0]){
        prevmax=max(prevmax,pq.top()[2]);
        pq.pop();
    }
    res=max(res,prevmax+event[2]);
    pq.push(event);
}
    return res;    
    }
};