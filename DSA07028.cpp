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

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = 1; i <= n; i++)
        {
            while (!st.empty() && a[st.top()] <= a[i])
                st.pop();
            if (st.empty())
                cout << i << ' ';
            else
                cout << i - st.top() << ' ';
            st.push(i);
        }
        cout << endl;
    }
}