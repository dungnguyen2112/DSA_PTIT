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
    queue<int> q;
    while (x--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int k;
            cin >> k;
            q.push(k);
        }
        else if (s == "PRINTFRONT")
        {
            if (q.empty())
                cout << "NONE\n";
            else
                cout << q.front() << endl;
        }
        else
        {
            if (!q.empty())
                q.pop();
        }
    }
}