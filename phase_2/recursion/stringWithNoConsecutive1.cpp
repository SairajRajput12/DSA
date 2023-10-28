#include <vector>
#include <string>

using namespace std;

void solve(int N, string temp, vector<string>& ans, int index) {
    if (index == N) {
        ans.push_back(temp);
        return;
    }

    // Add 0
    temp.push_back('0');
    solve(N, temp, ans, index + 1);
    temp.pop_back();

    // Add 1, if possible
    if (temp.empty() || temp.back() == '0') {
        temp.push_back('1');
        solve(N, temp, ans, index + 1);
        temp.pop_back();
    }
}

vector<string> generateString(int N) {
    vector<string> ans;
    string temp = "";
    solve(N, temp, ans, 0);
    return ans;
}
