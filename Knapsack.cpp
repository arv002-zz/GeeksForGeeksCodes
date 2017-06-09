#include <iostream>
using namespace std;

int knapsack(int a[],int b[], int n, int w)
{
    if(n==0 || w==0)
        return 0;

    if(b[n-1]>w)
        return(a,b,n-1,w);

    else
        return max((a[n-1]+knapsack(a,b,n-1,w-b[n-1])) ,
                   knapsack(a,b,n-1,w));


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

        cout<<knapsack(a,b,n,w);

    }
    return 0;
}
