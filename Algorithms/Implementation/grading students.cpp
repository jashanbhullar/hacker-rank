/*
*Contributer : github.com/tanmayag8958
* Email : tanmayag8958@gmail.com
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
        {
        if(a[j]%5>=3)
            {
            x=a[j]+(5-(a[j]%5));
            if(x<40)
                cout<<a[j]<<endl;
            else
                cout<<x<<endl;
        }
        else cout<<a[j]<<endl;
    }
    return 0;
}
