#include<iostream>
#include<vector>

using namespace std;

template <typename T> T smallest(const T& n1, const T& n2, const T& n3) {
    if(n1 <= n2 && n1 <= n3){
        return n1;
    } else if(n2 <= n3) {
        return n2;
    } else {
        return n3;
    }
}

template <typename T> void print(const T& value){
    cout << "Generic: " << value << endl; 
}

void print(bool value){
    cout << "Boolean: " << value << endl;
}

//find max in a vector
template <typename T> T findMax(const vector<T>& v){
    if(v.empty()){
        throw string("findMax: empty vector");
    }

    for(int i = 1; i < v.size(); i++){
        if (v[i] > max){
            maix = v[i];
        }
    }
}


int main(void) {

    int i1 = 2, i2 = 4, i3 = 6;


    vector <> 
    //call the templates function
    cout << smallest(i1, i2, i3) << endl;

    //test print function
    print(12);
    print(true);

    vector<double> v(1.2, 3.5, 4.6, 7.8, 12.3, 5.4);
    cout << findMax(v) << endl;
    return 0;
}