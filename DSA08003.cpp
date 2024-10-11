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
    deque<int> q;
    while (x--)
    {
        string s;
        cin >> s;
        if (s == "PUSHFRONT")
        {
            int k;
            cin >> k;
            q.push_front(k);
        }
        else if (s == "PRINTFRONT")
        {
            if (q.empty())
                cout << "NONE\n";
            else
                cout << q.front() << endl;
        }
        else if (s == "PUSHBACK")
        {
            int k;
            cin >> k;
            q.push_back(k);
        }
        else if (s == "PRINTBACK")
        {
            if (q.empty())
                cout << "NONE\n";
            else
                cout << q.back() << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!q.empty())
                q.pop_front();
        }
        else
        {
            if (!q.empty())
                q.pop_back();
        }
    }
}