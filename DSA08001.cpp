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
        queue<int> q;
        while (n--)
        {
            int m;
            cin >> m;
            if (m == 1)
                cout << q.size() << endl;
            else if (m == 2)
                if (q.empty())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            else if (m == 3)
            {
                int k;
                cin >> k;
                q.push(k);
            }
            else if (m == 4)
            {
                if (!q.empty())
                    q.pop();
            }
            else if (m == 5)
            {
                if (q.empty())
                    cout << -1 << "\n";
                else
                    cout << q.front() << endl;
            }
            else
            {
                if (q.empty())
                    cout << -1 << "\n";
                else
                    cout << q.back() << endl;
            }
        }
    }
}