class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for (auto it : prerequisites) {
			adj[it[1]].push_back(it[0]);
		}
        
        int indegree[numCourses];
        
        for(int i=0; i<numCourses; i++){
            indegree[i]=0;
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int> q;
		for (int i = 0; i < numCourses; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
        vector<int>ans;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            ans.push_back(f);
            for(auto it:adj[f]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==numCourses) return true;
        else return false;
        
    }
};