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
    vector<lli> v;
    while(t--)
    {
        lli n,x;
        cin >> n >> x;
        vector<lli>v,v1;
        for1(i,0,n)
        {
            lli a;
            cin >> a;
            v.pb(a);
            v1.pb(a);
        }
        sort(all(v1));
        bool sorted=true;
        for1(i,1,n)
        {
            if(v[i] < v[i-1])
            {
                sorted= false;
                break;
            }
        }
        if(sorted)
        {
            cout <<"YES" << endl;
            continue;
        }
        if(x >=n)
        {
             cout <<"NO" << endl;
            continue;
        }
       
        lli diff = n-x;
        sorted = true;
        for(int i = diff;i< n-diff;i++)
        {
            if(v[i] != v1[i])
            {
                sorted = false;
                break;
            }
        } 
        if(sorted)
        {
            cout <<"YES" << endl;
            continue;
        }
        else
        {
             cout <<"NO" << endl;
            continue;
        }

        
        

    }
}