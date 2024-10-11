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

int check(string s, int n)
{
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        k = (k * 10 + (s[i] - '0')) % n;
    }
    return k == 0;
}
string s1[10005];
void np()
{
    queue<string> q;
    string s = "";
    q.push("1");
    int dem = 0;
    while (!q.empty())
    {
        s = q.front();
        q.pop();
        s1[dem++] = s;
        q.push(s + "0");
        q.push(s + "1");
    }
}
map<int, string> mp;
void solve()
{
    long long n, k;
    cin >> n;
    queue<long long> q;
    q.push(1);
    while (q.size())
    {
        k = q.front();
        if (k % n == 0)
        {
            cout << k << endl;
            break;
        }
        q.pop();
        q.push(k * 10);
        q.push(k * 10 + 1);
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}