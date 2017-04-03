/*
* Contributer : github.com/tanmayah8958
* Email : tanmayag8958@gmail.com
*/

#include <stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
void update(int *a,int *b) {
    int i=*a;  
    *a=*a+*b;
       *b=i-*b;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    cout<<a<<endl<<abs(b);

    return 0;
}
