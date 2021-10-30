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
vector<vector<lli>> edge; // adjacency list
vector<lli> vis;
vector<lli>value;
lli xx;	   // stores visit status
lli coun=0;
lli dfs(lli cur)
{
    lli x = value[cur];
	for (lli j = 0; j < edge[cur].size(); j++)
	{
		lli k = edge[cur][j];
		if (vis[k] == 0)
		{
			vis[k] = 1;
			x^=dfs(k);
		}
	}
   
	if(x ==xx)
    {
        coun+=1;
        return 0;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while(t--)
    {
        lli n,k;
        cin >> n >>k;
        edge.clear();
        vis.clear();
        value.clear();
        edge.resize(n+1,vector<lli>(0));
        vis.resize(n+1,0);
        value.resize(n+1);
        vector<lli>deg(n+1,0);
        xx=0;
        coun=0;
        for(int i=0;i<n;i++)
        {
            lli a;
            cin >> a;
            value[i+1]=a;
            xx^=a;
        }
        for1(i,0,n-1)
        {
            int a,b;
            cin >> a >> b;
            edge[a].pb(b);
            edge[b].pb(a);
            deg[a]+=1;
            deg[b]+=1;
        }
        if(!xx)
        {
            cout <<"YES"<<endl;
            continue;
        
        }
        else if(k==2)
        {
            cout <<"NO"<<endl;
            continue;
        }
        int root =1;
        for1(i,1,n+1)
        {
            if(deg[i] == 1)
            {
                root = i;
                vis[i]=1;
                break;
            }
        }
       
        dfs(root);
        if(coun >=2)
        {
             cout <<"YES"<<endl;
            continue;
        
        }
        else 
        {
            cout <<"NO"<<endl;
            continue;
        }
       


    }
}