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
int n, m, dem;
int a[100][100], final[100][100];
void Try(int i, int j){
    if (i == n - 1 && j == m - 1)
    {
        dem++;
        return;
    }
    if (i + 1 <= n - 1)
    {
        Try(i + 1, j);
    }
    if (j + 1 <= m - 1)
    {
        Try(i, j + 1);
    }
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        dem = 0;
        cin >> n >> m;
        memset(final, 0, sizeof(final));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(0, 0);
        cout << dem << endl;
    }
}