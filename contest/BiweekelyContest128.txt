class Solution {
public:
    int scoreOfString(string s) {
        int answer = 0; 
        for(int i = 1; i < s.size(); i ++){
            int diff = abs((int)s[i] - (int)s[i-1]); 
            answer += diff; 
        }
        return answer; 
    }
};


// problem 2 
class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        // step 1: declare the answer variable 
        int answer = 0; 
        int y_max = INT_MIN; 
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto it : points){
            int x_cor = it[0]; 
            int y_cor = it[1]; 
            y_max = max(y_max,y_cor); 
            pq.push({x_cor,y_cor});
        }
        
        while(!pq.empty()){
            auto it = pq.top(); 
            // cout << it.first << " " << it.second << endl; 
            int newX2 = it.first + w; 
            int newY2 = y_max; 
            int newX1 = it.first; 
            int newY1 = 0; 
            // pq.pop(); 
            cout << newX1 << " " << newY1 << endl;
            cout << newX2 << " " << newY2 << endl; 
            // cout << "time limit exceed" << endl; 
            while(!pq.empty()){
                
                if(pq.top().first > newX2){
                    break; 
                }
                cout << pq.top().first << endl; 
                pq.pop(); 
            }
            answer ++;            
        }
        // step final: return the answer 
        return answer; 
    }
};
