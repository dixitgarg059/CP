#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define rt return 0
#define endln "\n"
#define all(v) v.begin(), v.end()
#define for1(i, a, b) for (long long int i = a; i < b; i++)
#define for2(i, a, b) for (long long int i = a; i > b; i--)
//  cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;typedef long long int i;
typedef long long int lli;
typedef pair<lli, lli> pll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while(t--)
    {
        lli n,h;
        cin >> n >> h;
        vector<lli> v;
        for1(i,0,n)
        {
            lli a;
            cin >> a;
            v.pb(a);
        }
        sort(all(v));
        lli m1 = v[n-1];
        lli m2 = v[n-2];
        // if(h <= m1)
        // {
        //     cout <<"1"<<endl;
        //     continue;
        // }
        lli sum = m1+m2;
        lli x = h/sum;
        lli ans = x*2;
        lli rem = h - x*sum;
        if(rem)
        {if(rem <= m1)
        {
            ans+=1;
        }
        else
        {
            ans+=2;
        }
        }
        cout << ans << endl;


    }
}