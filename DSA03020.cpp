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
        string s;
        cin >> s;
        stack<int> st;
        int dem = 0, dem2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                st.push(i);
                dem++;
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                    dem--;
                }
                else
                {
                    int j = i;
                    while (s[j] == ']')
                    {
                        j++;
                    }
                    swap(s[i], s[j]);
                    dem2 += j - i;
                    st.push(i);
                }
            }
        }
        cout << dem2  << endl;
    }
}