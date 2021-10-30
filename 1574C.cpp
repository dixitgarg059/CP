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
lli case1(lli a,lli b,lli sum,lli vn)
{
    lli ans =0;
    ans += (a-vn);
            if(sum - vn < b)
            {
                ans += (b-sum+vn);
            }
            return ans;
}
lli case2(lli a,lli b,lli sum,lli vn)
{
    lli ans=0 ;
    if(sum-vn<b)
            {
                ans += (b-sum+vn);

            }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin >> n;
    vector<lli> v;
    lli sum =0;
    for1(i,0,n)
    {
        lli a;
        cin >> a;
        v.pb(a);
        sum+=a;
    }
    sort(all(v));
    lli m;
    cin >> m;
    while(m--)
    {
        lli a,b,ans=0;
        cin >> a >> b;
        lli x = lower_bound(v.begin(),v.end(),a) - v.begin();
        if(x == n)
        {
           ans = case1(a,b,sum,v[n-1]);
        }
        else if(x == 0)
        {
           ans = case2(a,b,sum,v[0]);
        }
        else
        {
            ans= min(case1(a,b,sum,v[x-1]),case2(a,b,sum,v[x]));
        }
        cout << ans << endl;


    }
}