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

int calculate(int x, int y, char o)
{
    switch (o)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else if (s[i] == ']' && !st.empty() && st.top() == '[')
        {
            st.pop();
        }
        else if (s[i] == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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