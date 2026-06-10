#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int cnt = 0;

void dewy(vector<vector<int> > &grid, int row, int col) {
    grid[row][col] = 0;
    for (int i = 0; i < 8; i++) {
        int nr = row + dx[i];
        int nc = col + dy[i];
        if (nr >= 0 && nr < (int) grid.size() && nc >= 0 && nc < grid[0].size() && grid[nr][nc] == 1) {
            dewy(grid, nr, nc);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    for (auto &i: a) for (auto &j: i) cin >> j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1) {
                dewy(a, i, j);
                cnt++;
            }
    }
    cnt = 0;
}

int main() {
    __init__ solve();
}
