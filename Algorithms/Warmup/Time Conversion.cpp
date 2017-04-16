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
    string time;
    cin>>time;
    if(time[8]=='P' && (time[0]!='1' || time[1]!='2')){
        time[0]+=1;
        time[1]+=2;
    }
    if(time[8]=='A' && time[0]=='1' && time[1]=='2'){
        time[0]='0';
        time[1]='0';
    }
    cout<<time.substr(0,8);
    return 0;

}
