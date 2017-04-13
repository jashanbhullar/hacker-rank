/*
* Contributer : github.com/tanmayag8958
* Email : tanmayag8958@gmail.com
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,j,i,k,x=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=a[n-1];i<=b[0];i++)
        {
        for(j=0;j<n;j++)
            {
            if(i%a[j]!=0)
                break;
        }
        if(j==n)
            {
            for(k=0;k<m;k++)
                {
                if(b[k]%i!=0)
                    break;
            }
           if(k==m)
            x++; 
        }
        
    }
    cout<<x;
    return 0;
}
