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
int n, dem;
bool cot[10], cheoxuoi[20], cheonguoc[20];

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (!cot[j] && !cheoxuoi[i + j - 1] && !cheonguoc[i - j + n])
        {
            cot[j] = cheoxuoi[i + j - 1] = cheonguoc[i - j + n] = true;
            if (i == n)
                dem++;
            else
                Try(i + 1);
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
        cin >> n;
        Try(1);
        cout << dem << endl;
    }
}