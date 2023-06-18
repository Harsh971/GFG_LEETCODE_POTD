class Solution {
  public:
    int distributeTicket(int N, int K) {
        deque<int>q;
        for(int i=1;i<=N;i++){
            q.push_back(i);
        }
        while(!q.empty()){
            for(int i=0;i<K;i++){
                if(q.size()>1)
                q.pop_front();
                else
                return q.front();
            }
            for(int i=0;i<K;i++){
                if(q.size()>1)
                q.pop_back();
                else
                return q.back();
            }
        }
    }
};
