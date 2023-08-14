class Solution {
public:
vector<int> solve(vector<int> &A, vector<int> &B, int C) {
{
    int n=A.size();
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    vector<int> ans;
    
    set<pair<int,int>>s;
    priority_queue<pair<int,pair<int,int>>>pq;
    pq.push({A[0]+B[0],{0,0}});
    for(int i=0; i<C; i++){
        auto top=pq.top();
        pq.pop();
        ans.push_back(p.first);
        int j=top.second.first;
        int k=top.second.second;
        auto f1=s.find({j+1,k});
        auto f2=s.find({j,k+1});
        if(f1==s.end() && j+1<A.size())
        {
            p.push({A[j+1]+B[k],j+1,k});
            s.insert({j+1,k});
        }
        
         if(f2==s.end() && k+1<B.size())
        {
            p.push({A[j]+B[k+1],j,k+1});
            s.insert({j,k+1});
        }
        
    }
    
    return ans;
}
};
