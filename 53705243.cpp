#include <iostream>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--){
        int x, y;
        cin >> x >> y;
        
        if (x == 0 && y % 2 == 0){
            cout << "Yes" << endl;
        }
        else if (x == 0 && y % 2 != 0){
            cout << "NO" << endl;
        }
        else if ((x + (2 * y)) % 2 ==0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
