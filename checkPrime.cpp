#include <iostream>
using namespace std;

int isPrime(int n)
{

    int m = 0, flag = 0;
    m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "No" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Yes" << endl;
    return 0;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        isPrime(n);
        cout << endl;
    }
    return 0;
}
