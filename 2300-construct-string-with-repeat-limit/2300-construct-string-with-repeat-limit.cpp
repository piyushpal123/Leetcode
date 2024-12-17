class Solution {
public:
    string repeatLimitedString(string s, int Limit) {
        vector<int> fre(26, 0);
        priority_queue<pair<int, int>> pq;

        for (char c : s) {
            fre[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (fre[i] > 0) {
                pq.push({i,fre[i]});
            }
        }

        string ans = "";

        while (!pq.empty()) {
            int cnt = pq.top().second;
            char ch ='a'+ pq.top().first;
            pq.pop();

            int use = min(cnt, Limit);
            ans.append(use, ch);
            cnt -= use;

           if(cnt>0&&!pq.empty()){

          
                char next_ch = 'a'+pq.top().first;
                 int next_cnt = pq.top().second;
                pq.pop();

                ans += next_ch;
                next_cnt--;

                if (next_cnt > 0) {
                    pq.push({next_ch-'a', next_cnt});
                }
                pq.push({ch-'a',cnt});
            }
            else if(cnt>0){
                break;
            }
        }

        return ans;
    }
};
