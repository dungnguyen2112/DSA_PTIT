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

void solve()
{
    string s;
    getline(cin, s);
    stack<char> st;
    int dem1 = 0, dem2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            dem1++;
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                dem1--;
                st.pop();
            }
            else
            {
                dem2++;
            }
        }
    }
    int dem3 = dem1 / 2 + dem2 / 2;
    dem3 += dem1 % 2 + dem2 % 2;
    cout << dem3 << endl;
}
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    while (x--)
    {
        solve();
    }
}