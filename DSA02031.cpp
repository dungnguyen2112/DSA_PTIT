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
int final[127];

void khoitao()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E')
        {
            if (i > 0 && i < s.size() - 1 && (s[i - 1] != 'A' && s[i - 1] != 'E') && (s[i + 1] != 'A' && s[i + 1] != 'E'))
                return;
        }
    }
    cout << s << endl;
}
void Try(char i)
{
    for (char j = 'A'; j <= c; j++)
    {
        if (!final[j])
        {
            s.push_back(j);
            final[j] = true;
            if (s.length() == c - 'A' + 1)
                khoitao();
            else
                Try(i + 1);
            s.pop_back();
            final[j] = false;
        }
    }
}

int main()
{
    faster()
            cin >>
        c;
    Try('A');
}