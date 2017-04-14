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

struct query
    {
    int a,b,c;
};
int main() {
     int n,y,x;
    cin>>n;
    query q[n];
    for(int i=0;i<n;i++)
        {
        cin>>q[i].a>>q[i].b>>q[i].c;
    }
    for(int i=0;i<n;i++)
        {
        x=q[i].a-q[i].c;
        y=q[i].b-q[i].c;
        if(abs(x)==abs(y))
            cout<<"Mouse C"<<endl;
        else if(abs(x)<abs(y))
            cout<<"Cat A"<<endl;
            else if(abs(x)>abs(y))
            cout<<"Cat B"<<endl;
    }
    return 0;
}
