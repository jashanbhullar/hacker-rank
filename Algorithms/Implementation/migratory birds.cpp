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
     int n,largest=0,count,type;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<=5;i++)
        {
           count=0;
             for(int j=0;j<n;j++)
                {
                  if(a[j]==i)
                      count++;
              }
        if(largest<count)
            {
            largest=count;
            type = i;
        }
    }
    cout<<type;
    return 0;
}
