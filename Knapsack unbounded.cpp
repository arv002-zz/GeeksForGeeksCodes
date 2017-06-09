#include <iostream>
using namespace std;

int unknapsack(int a[],int b[], int n, int w)
{

    int dp[w+1]= {0};

    for(int i=0; i<=w; i++)
        for(int j=0; j<n; j++)
        {
            if(b[j]<=i)
                dp[i]=max(dp[i],a[j]+dp[i-b[j]]);
        }

    return dp[w];
}
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int i,j,n,w;
        cin>>n>>w;
        int a[n],b[n];

        for(i=0; i<n; i++)
            cin>>a[i];

        for(i=0; i<n; i++)
            cin>>b[i];

        cout<<unknapsack(a,b,n,w);

    }
    return 0;
}
