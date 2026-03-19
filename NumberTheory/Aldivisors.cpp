#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void factors(long long n)
{
    vector<long long> ans;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);

            if (i != n / i)
            {
                ans.push_back(n / i);
            }
        }
    }

    sort(ans.begin(), ans.end());

    for (auto x : ans)
    {
        cout << x << endl;
    }
}

int main()
{
    long long n;
    cin >> n;
    factors(n);
}