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
int n, dem, a[20][20];
bool cot[20], cheoxuoi[20], cheonguoc[20];

void Try(int i, int sum)
{
    for (int j = 1; j <= 8; ++j)
    {
        if (!cot[j] && !cheoxuoi[i + j - 1] && !cheonguoc[i - j + n])
        {
            cot[j] = cheoxuoi[i + j - 1] = cheonguoc[i - j + n] = true;
            if (i == 8)
                dem = max(dem, sum + a[i][j]);
            else
                Try(i + 1, sum + a[i][j]);
            cot[j] = cheoxuoi[i + j - 1] = cheonguoc[i - j + n] = false;
        }
    }
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        dem = 0;
        for (int i = 1; i <= 8; ++i)
        {
            for (int j = 1; j <= 8; ++j)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 0);
        cout << dem << endl;
    }
}