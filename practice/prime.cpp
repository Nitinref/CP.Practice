#include <iostream>
using namespace std;

void factor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (n / i != i)
            {
                cout << n / i << endl;
            }
        }
    }
}

void primefactor(int n)
{

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            int exp = 0;
            while (n % i == 0)
            {

                n /= i;
                exp++;
            }

            cout << i << exp << endl;
        }
    }
    if (n > 1)
    {
        cout << n << 1 << endl;
    }
}