/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        unsigned long long current;
        cin >> current;
        
        if (current == 1) {
            cout << 0 << endl;
            continue;
        }
        
        unsigned long long temp = 1;
        int position = -1;
        int counter = -1;
        do {
            counter++;
            position++;
            temp *= p[position];
        } while (temp <= current);
        
        cout << counter << endl;
    }
    return 0;
}
