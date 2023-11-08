class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights, int n) {
        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = 0;
        for (int i = 0; i < n; i++) {
            int l = heights[i];

            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& M) {
        if (M.empty() || M[0].empty()) {
            return 0;
        }

        int m = M.size();
        int n = M[0].size();
        vector<vector<int>> heights(m, vector<int>(n, 0));

        // Convert characters to integers
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                heights[i][j] = (M[i][j] == '1') ? 1 : 0;
            }
        }

        // Compute area for the first row
        int area = largestRectangleArea(heights[0], n);

        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Row update: by adding the previous row's value
                if (heights[i][j] != 0)
                    heights[i][j] = heights[i][j] + heights[i - 1][j];
                else
                    heights[i][j] = 0;
            }

            // Entire row is updated now
            area = max(area, largestRectangleArea(heights[i], n));
        }
        return area;
    }
};
