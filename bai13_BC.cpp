#include <bits/stdc++.h>
 
using namespace std;
int n,m;
int a[100001];
int f[100001],s[100001];
void tinh()
{
    sort(a+1,a+m+1); //sap xep
    int sl=m;
    for(int i=1;i<=m;i++) if(a[i]>n) sl--;
    m=sl;
    f[0]=1;
    int sn=1;
    s[sn]=0;
    for(int i=1;i<=m;i++)
    {
        int sl=sn;
        for(int j=sl;j>=1;j--)
        if(f[s[j]+a[i]]==0 && s[j]+a[i]<=n)
        {
            f[s[j]+a[i]]=1;
            s[++sn]=s[j]+a[i];
        }
    }
 
    for(int i=n;i>=0;i--)
        if(f[i]==1)
    {
        cout<<i;
        return;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>a[i];
    tinh();
}
