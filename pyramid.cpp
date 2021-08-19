#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << endl;

    for (int i = 1; i < n+1; i++) {
        for (int j =0;j<n-i;j++) {
            cout << " ";
        }
        for (int k=0;k<i*2-1;k++) {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}