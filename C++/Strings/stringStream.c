/*
* Contributer : github.com/tanmayah8958
* Email : tanmayag8958@gmail.com
*/


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

void parseInts(string str) {
   // Complete this function
    for(int i=0;i<str.size();i++){
        if(str[i]!=',')
            cout<<str[i];
        else
            cout<<endl;
    }
}

int main() {
    string str;
    cin >> str;
    parseInts(str);

    return 0;
}
