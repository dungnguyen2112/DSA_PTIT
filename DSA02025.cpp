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
string s[15], a[15];
bool visited[15];
int sum = INT_MAX, n;
void Try(int i, int count)
{
    if (i > n)
    {
        sum = min(sum, count);
    }
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            a[i] = s[j];
            int mp[127] = {};
            for (auto x : a[i])
            {
                mp[x]++;
            }
            for (auto x : a[i - 1])
            {
                mp[x]++;
            }
            int dem = 0;
            for (int i = 'A'; i <= 'Z'; ++i)
            {
                if (mp[i] == 2)
                    dem++;
            }
            if (count + dem < sum)
            {
                Try(i + 1, count + dem);
            }
            visited[j] = false;
        }
    }
}
int main()
{
    faster()
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    Try(1, 0);
    cout << sum;
}