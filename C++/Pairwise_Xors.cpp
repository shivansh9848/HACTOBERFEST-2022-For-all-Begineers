#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << -1<<endl;
            continue;
        }
        int m = n;
        while (m > 1)
        {
            m /= 2;
            if (m % 2 != 0)
                {
                break;
                }
        }
        if(m==1)
        cout<<-1<<endl;
        else 
            cout<<0<<" "<<n/2<<" "<<(n-(n & ~(n-1)))/2<<endl;

    }
}
