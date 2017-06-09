// Using Dynamic Programming
//time:-O(nW)
//Space:-O(nW)
//arv002


#include <iostream>
using namespace std;
int dp[2005][2005];
int knapsack(int a[],int b[], int n, int w)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=w; j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;

            else if(b[i-1]>j)
                dp[i][j]=dp[i-1][j];

            else
                dp[i][j]=max(a[i-1]+dp[i-1][j-b[i-1]] ,dp[i-1][j]);
        }
    }
    return dp[n][w];
}
int main()
{

    int i,j,n,w;
    cin>>w>>n;
    int a[n],b[n];

    for(i=0; i<n; i++)
        cin>>b[i]>>a[i];



    cout<<knapsack(a,b,n,w);


    return 0;
}
