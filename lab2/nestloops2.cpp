#include<iostream>
#include<iomanip>


using namespace std;

int main (void) {

    int n;
    
    cout << "Enter a number from 1 to 15: " << endl;
    cin >> n;

    //outer loop for how many rows it will have
    for (int i = 1; i<=n; i++){

        //loop for left spaces to push numbers to the right
        for(int j = 0; j * 2 < n - i; j++){
            cout << " ";
        }

        //loop for descending numbers going down towards 1
        for (int p = i; p>=1; p--){
            cout << setw(2) << p << ((p > 1) ? " " : "");
        }

        //loop for ascending numbers to complete the pyramid
        for(int t = 2; t <= i; t++){
            cout<< " " << setw(2) << t;
        }

        cout << endl;
    } 

    return 0;
}