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
    int n,k,count=0,x;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
             x=a[i]+a[j];
            if(x%k==0)
                count++;
        }
    }
    cout<<count;
    return 0;
}
