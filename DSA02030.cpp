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
char c;
int k;
string s;

void Try(char i)
{
    for (char j = i; j <= c; ++j)
    {
        s.push_back(j);
        if (s.length() == k)
            cout << s << endl;
        else
            Try(j);
        s.pop_back();
    }
}

int main()
{
    faster()
    cin >> c >> k;
    Try('A');
}