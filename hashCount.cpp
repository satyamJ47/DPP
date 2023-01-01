#include<bits/stdc++.h>
using namespace std;

void count(int a[],int n)
{
    unordered_map <int,int>ump;
    for(int i=0;i<n;i++)
    {
        ump[a[i]]+=1;
    }

    for(int i=0;i<n;i++)
    {
        if(ump[a[i]]!=-1)
        {
            cout<<a[i]<<" "<<ump[a[i]]<<endl;
            ump[a[i]]=-1;    
            
        }
    }

}

int main()
{
    int a[]={3,1,2,2,1,3,3,2,2,2,1,1,};
    int n=sizeof(a)/sizeof(a[0]);
    count(a,n);
}