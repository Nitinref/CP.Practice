#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#define NUMX 1000000
vector<int> arr(NUMX + 1, 1);

void preCompute()
{

    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i * i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j < arr.size(); j += i)
            {
                arr[j] = 0;
            }
        }
    }
}

void Tprime(long long n)
{
    long long x = sqrt(n);
    if (x * x == n && arr[x] == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    preCompute();
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        Tprime(n);
    }
}
