//arvind002

#include<bits/stdc++.h>

using namespace std;
int a[505];
void uglynumber()
{
    int i,j,k;
    int i3=0,i2=0,i5=0; // variables for traversing 
    a[0]=1;
    int ugly_2=2;
    int ugly_3=3;
    int ugly_5=5;
    int next_ugly;
    
    for(i=1;i<500;i++)
    {
        next_ugly= min(ugly_2, min(ugly_3,ugly_5));
        a[i]=next_ugly;
        if(next_ugly==ugly_2)
        {
            i2++;
            ugly_2=a[i2]*2;
            
        }
        if(next_ugly==ugly_3)
        {
            i3++;
            ugly_3=a[i3]*3;
        }
        if(next_ugly==ugly_5)
        {
            i5++;
            ugly_5=a[i5]*5;
        }
        
    }
    
}

int main()
{
    long n;
    uglynumber();
    cin>>n;
    cout<<a[n];
}
