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
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        x = x * 10 + (s[i] - '0');
        x %= n;
    }
    return x == 0;
}
void solve(){
    int n;
    cin >> n;
    queue<string> q;
    q.push("9");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        if (check(s, n))
        {
            cout << s << endl;
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
    }
}