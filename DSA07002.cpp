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
    int n;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int a;
            cin >> a;
            st.push(a);
        }
        else if (s == "POP")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (s == "PRINT")
        {
            if (!st.empty())
            {
                int b = st.top();
                cout << b << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
}