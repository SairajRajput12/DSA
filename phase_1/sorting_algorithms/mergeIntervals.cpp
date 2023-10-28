class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res; 
        sort(intervals.begin(),intervals.end());
        int n = intervals.size(); 
        for(int i = 0; i < n; i ++){
            if(res.empty()){
                res.push_back(intervals[i]); 
            }
            else{
                vector<int> &v = res.back(); 
                int y = v[1]; 
                if(intervals[i][0] <= y){
                    v[1] = max(intervals[i][1],y); 

                }
                else{
                    res.push_back(intervals[i]);
                }
            }
        }
        return res; 
    }
};
