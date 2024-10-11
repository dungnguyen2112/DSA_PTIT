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
void check(string s)
{
    string s1 = s;
    cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
        int res = (s[i - 1] - '0') ^ (s[i] - '0');
        cout << res;
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s2;
        cin >> s2;
        check(s2);
    }
}