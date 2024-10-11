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
int n, c[100][100], FOPT = 1e9, X[100], cmin = 1e9;
bool visited[100];

void Try(int i, int sum)
{
    for (int j = 2; j <= n; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            X[i] = j;
            sum += c[X[i - 1]][X[i]];
            if (i == n)
            {
                FOPT = min(FOPT, sum + c[X[n]][1]);
            }
            else if (sum + (n - i + 1) * cmin < FOPT)
            {
                Try(i + 1, sum);
            }
            visited[j] = false;
            sum -= c[X[i - 1]][X[i]];
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            cmin = min(cmin, c[i][j]);
        }
    }
    memset(visited, false, sizeof(visited));
    X[1] = 1;
    Try(2, 0);
    cout << FOPT << endl;
}
