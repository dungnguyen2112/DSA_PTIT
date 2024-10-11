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
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ')')
        {
            st.push(s[i]);
        }
        else
        {
            bool ok = true;
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                {
                    ok = false;
                }
                if (c == '(')
                {
                    break;
                }
            }
            if (ok)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
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