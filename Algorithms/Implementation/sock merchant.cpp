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
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for( int i=0;i<n-1;i++)
        {
         if(a[i]==0)
             continue;
        for(int j=i+1;j<n;j++)
            {
            if(a[i]==a[j])
                {
                count++;
                a[i]=a[j]=0;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
