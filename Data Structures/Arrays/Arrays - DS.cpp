#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i = 0,count = 0;
    cin >> n;
    vector<int> file(n);
    for(int file_i = 0; file_i < n; file_i++){
       cin >> file[file_i];
    }
    

    while(i != n){
        i += file[i]+1;
        count++;
    }
    cout<<count;
    //  Print the number of arrays defined in 'file' to STDOUT.
    return 0;
}


