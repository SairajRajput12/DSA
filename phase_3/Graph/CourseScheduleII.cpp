#include<bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // to give the order : we can use the topological sort 
        vector<int> ans; 
        int visited[2000] = {0}; 
        vector<int> adj[numCourses]; 

        for(auto it : prerequisites){
            int from = it[0]; 
            int to = it[1]; 
            adj[to].push_back(from); 
        }

        int indegree[2000] = {0}; 
        for(int i = 0; i < numCourses; i ++){
            for(auto it : adj[i]){
                indegree[it] ++; 
            }
        }

        queue<int> q; 
        for(int i = 0; i < numCourses; i ++){
            if(indegree[i] == 0){
                q.push(i); 
            }
        }

        while(!q.empty()){
            int node = q.front(); 
            q.pop(); 

            ans.push_back(node); 

            for(auto it : adj[node]){
                indegree[it] --; 
                if(indegree[it] == 0){
                    q.push(it); 
                }
            }
        }
        vector<int> temp; 
        return (ans.size() == numCourses) ? ans : temp; 
    }
};


int main(){
	cout << "This is the competition vilas bro" <<endl; 
}
