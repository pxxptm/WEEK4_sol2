#include<iostream>
#include<math.h>
using namespace std;


main()
{
    double k;
    cout << "Input number : ";
    cin >> k;

    if(ceil(k)==abs(k))
    {
        int n=(int)k;
        long long int fac[n+1];
        fac[0]=fac[1]=1;
        int i;
        for(i=2;i<=n;i++) fac[i]=i*fac[i-1];

        cout << n << "! = " << fac[n];
    }
    else cout << "cannot find factorial";

    return 0;
}

