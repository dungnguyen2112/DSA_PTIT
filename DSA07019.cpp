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

long long solve(vector<int> a)
{
    int n = a.size();
    vector<int> l(n), r(n);
    stack<int> st;
    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
            l[i] = 0;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }
    while (!st.empty())
        st.pop();
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
            r[i] = n - 1;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }
    long long res = 0;
    for (int i = 0; i < n; ++i)
    {
        res = max(res, 1LL*a[i] * (r[i] - l[i] + 1));
    }
    return res;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(a, a + n);
        cout << solve(b) << endl;
    }
    return 0;
}
