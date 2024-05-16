/// Abdur Rahman Salman ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define out cout;
#define in cin;
#define endl "\n"

#define Alhamdulillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


int Gcd(int n1,int n2)
{
    while(n2!=0)
    {
        int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}


int main()
{
    Alhamdulillah();

    while(1)
    {
        int n;
        cin >> n;
        if(n==0) break;

        int G=0;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                G += Gcd(i,j);
            }
        }
        cout << G << endl;
    }

    return 0;
}

