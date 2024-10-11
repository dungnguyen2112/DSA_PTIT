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
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string tmp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            string z = tmp + y + x;
            st.push(z);
        }
        else
            st.push(tmp);
    }
    cout << st.top() << endl;
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