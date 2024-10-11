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
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int y = st.top();
            st.pop();
            int x = st.top();
            st.pop();
            int z = calculate(x, y, s[i]);
            st.push(z);
        }
        else
            st.push(s[i] - '0');
    }
    cout << st.top() << endl;;
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