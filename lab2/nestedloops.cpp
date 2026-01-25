#include<iostream>

using namespace std;

int main (void) {

    int n;
    
    cout << "Enter a number from 1 to 9: " << endl;
    cin >> n;

    for (int i =1; i<=n; i++){
        
        for(int j=0; j<n-i; j++){
            cout << "  ";

        }

        for (int p=i; p>=1; p--){
            cout << p << ((p > 1) ? " " : "");


        }

        for( int t = 2; t <= i; t++){
            cout<< " " << t;
        }

        cout << endl;
    } 



    return 0;
}