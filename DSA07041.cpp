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
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else
            st.push(s[i]);
    }
    cout << s.length() - st.size();
}

int main()
{
    faster()
    int x;
    cin >> x;
    while (x--)
    {
        solve();
        cout << endl;
    }
    return 0;
}