/*
* Contributer : github.com/tanmayah8958
* Email : tanmayag8958@gmail.com
*/

#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int max_of_four(int,int,int,int);
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int i,int j,int k,int l)
    {
    int large = i;
    if(large<j)
        large=j;
    if(large<k)
        large=k;
    if(large<l)
        large=l;
    return large;
}
