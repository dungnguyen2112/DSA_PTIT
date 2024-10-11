#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int a[505][505];
int n, m;
void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && a[x][y])
        {
            loang(x, y);
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    dem++;
                    loang(i, j);
                }
            }
        }
        cout << dem << endl;
        memset(a, 0, sizeof(a));
    }
}