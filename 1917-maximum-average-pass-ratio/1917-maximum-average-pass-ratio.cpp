class Solution {
    #define pi pair<double,int>
public:
void solve(priority_queue<pi>&pq,vector<vector<int>>&classes,int idx){
    double curravg=(double)classes[idx][0]/classes[idx][1];

    double new_avg = ((double) classes[idx][0]+1)/(classes[idx][1]+1);
    double avg = new_avg -curravg;
    pq.push({avg,idx});
}
    double maxAverageRatio(vector<vector<int>>& classes, int st) {
        int n=classes.size();
        priority_queue<pi>pq;
        for(int i=0;i<n;i++)
            //average ko dalna 
            solve(pq,classes,i);
            
            while(st--){
                pi curr=pq.top();
                pq.pop();
                //add 1 extra student to curr index;
                int idx=curr.second;;
                classes[idx][0]++;
                classes[idx][1]++;
                solve(pq,classes,idx);
            }
            double final_avg=0.0;

            int total_student=0;
            for(int i=0;i<n;i++){
                final_avg+=(double)classes[i][0]/classes[i][1];

            }
            return final_avg/n;
        
        
    }
};