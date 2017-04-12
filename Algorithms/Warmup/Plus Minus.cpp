/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float a=0,s=0,d=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)
            ++a;
        if(arr[arr_i]<0)
            ++s;
        if(arr[arr_i]==0)
            ++d;
    }
    cout<<a/n<<"\n"<<s/n<<"\n"<<d/n<<"\n";
    return 0;
}
