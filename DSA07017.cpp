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

int check(char c)
{
    if (c == '^')
        return 4;
    else if (c == '*' || c == '/')
        return 3;
    else if (c == '+' || c == '-')
        return 2;
    return 1;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5], b[n + 5], c[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = n; i >= 1; i--)
        {
            while (!st.empty() && a[st.top()] <= a[i])
                st.pop();
            if (st.empty())
                b[i] = -1;
            else
                b[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for (int i = n; i >= 1; i--)
        {
            while (!st.empty() && a[st.top()] >= a[i])
                st.pop();
            if (st.empty())
                c[i] = -1;
            else
                c[i] = a[st.top()];
            st.push(i);
        }
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == -1)
                cout << -1 << ' ';
            else
                cout << c[b[i]] << ' ';
        }
        cout << endl;
    }
}