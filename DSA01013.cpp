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
string check(string s)
{
    string s1 = s;
    for (int i = 1; i < s.size(); i++)
    {
        if ((s1[i - 1] - '0') ^ 0 == (s1[i] - '0'))
        {
            s1[i] = '0';
        }
        else
            s1[i] = '1';
    }
    return s1;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s2;
        cin >> s2;
        cout << check(s2) << endl;
    }
}