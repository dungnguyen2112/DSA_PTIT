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
int n, k, sum;
string s[105], s1[105];
int visited[105], a[105];

void out()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            s1[i][j] = s[i][a[j]];
        }
    }
    sort(s1, s1 + n);
    int min1 = stoi(s1[0]);
    int max1 = stoi(s1[n - 1]);
    sum = min(sum, max1 - min1);
}

void Try(int i)
{
    for (int j = 0; j < k; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            a[i] = j;
            if (i == k - 1)
            {
                out();
            }
            else
            {
                Try(i + 1);
            }
            visited[j] = false;
        }
    }
}

int main()
{
    cin >> n >> k;
    sum = 1e9;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        s1[i] = s[i];
    }
    Try(0);
    cout << sum << endl;
}