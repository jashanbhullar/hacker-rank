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
    int n,m,d,sum,count=0;
    cin>>n;
    int choc[n];
    for(int i=0;i<n;i++)
        cin>>choc[i];
    cin>>d>>m;
    for(int i=0;i<n;i++)
        {
         sum=0;
        for(int j=i;j<i+m;j++)
            {
            sum=sum+choc[j];
        }
        if(sum==d)
            count++;
    }
    cout<<count;
    return 0;
}
