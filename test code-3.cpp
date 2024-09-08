#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
bool solve(int n, vector<vector<int>> arr)
{
    vector<vector<int>> visited(n, vector<int>(3, 0));
    int dx[3] = {-1, 0, 1};
    int dy[3] = {0, 1, 0};
    queue<pair<int, int>> qu;
    qu.push({n - 1, 1});
    while (!qu.empty())
    {
        pair<int, int> temp = qu.front();
        qu.pop();
        for (int i = 0; i < 3; i++)
        {
            int x = temp.first + dx[i];
            int y = temp.second + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < 3 && visited[x][y] == 0 && arr[x][y] == 0)
            {
                if (x == 0 && arr[x][y] == 0)
                {
                    return true;
                }
                qu.push({x, y});
                visited[x][y] = 1;
            }
        }
    }
    return false;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool ans = solve(n, arr);
        cout << ans << "\n";
    }
    return 0;
}