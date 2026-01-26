#include<iostream>
#include<iomanip>

using namespace std;

int main (void) {

    int n;
    
    cout << "Enter a number from 1 to 15: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){

        for(int j = 0; j < n - i ; j++){
            cout << setw(3) << " ";
        }

        for (int p = i; p >= 1; p--){
            cout << setw(3) << p;
        }

        for(int t = 2; t <= i; t++){
            cout << setw(3) << t;
        }

        cout << endl;
    }
    
    return 0;
}
