//Author: Harit Sharma
//Week 5: Ques 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    int m;
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++)
        cin>>a2[i];
    int i=0,j=0;
    sort(a1,a1+n);
    sort(a2,a2+m);
    while(i!=n && j!=m)
    {
        if(a1[i]==a2[j])
        {
            cout<<a1[i]<<" ";
            i++;
            j++;
        }
        else if(a1[i]<a2[j])
            i++;
        else
            j++;
    }
    return 0;
}