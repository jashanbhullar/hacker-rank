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
    int s,n,m;
    cin>>s>>n>>m;
    int k[n],u[m];
    for(int i=0;i<n;i++)
        cin>>k[i];
    for(int i=0;i<m;i++)
        cin>>u[i];
    int largest=0,count=0;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
                if(k[i]+u[j]>s)
                    {
                    count++;
                    continue;
                }
                if(largest<k[i]+u[j])
                    largest=k[i]+u[j];
            
        }
    }
    if(count==n*m)
        cout<<"-1";
    else
    cout<<largest;
    return 0;
}
