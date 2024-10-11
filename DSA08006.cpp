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
void solve()
{
    int n;
    cin >> n;
    queue<string> q;
    string s = "";
    q.push("9");
    while (true)
    {
        s = q.front();
        q.pop();
        if (check(s, n))
        {
            cout << s;
            return;
        }
        q.push(s + "0");
        q.push(s + "9");
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
        cout << endl;
    }
}