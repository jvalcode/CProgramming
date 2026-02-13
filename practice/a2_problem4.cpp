#include<iostream>
#include<random>

using namespace std;

int f1(mt19937& eng) {
    uniform_int_distribution<int>dist(1, 6);
    return dist(eng);
}

int main(void) {

    int seed;
    cout << "Enter the seed ";
    cin >> seed;

    mt19937 eng(seed);

    int die1 = f1(eng);
    int die2 = f1(eng);
    int sum = die1 + die2;

    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;

    if(sum ==2 || sum == 3 || sum == 12){
        cout << "You lose" << endl;
        return 0;
    } else if (sum == 7 || sum == 11){
        cout << "You win" << endl;
        return 0;
    } else{
        
        int point = sum;
        
        while (true){
            die1 = f1(eng);
            die2 = f1(eng);
    
            sum = die1 + die2;
    
            cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;
    
            if (sum == point) {
                cout << "You win" << endl;
                break;
            } else if (sum == 7) {
                cout << "You lose" << endl;
                break;
            }
        }
    }


    return 0;
}