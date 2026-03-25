#include<iostream>

using namespace std;


//notes:
//by default, we could set the typename T1 to an integer or whatever type you want
//with that, you could create a pair without soecifying that it will be an integer
//if you have a common type, you may want to use this
//^^ the other times, we could specify this whatever the type needed is

//template class
template <typename T1, typename T2> class Pair{


public:
//constructor
Pair(const T1& f, const T2& s): first (f), second(s){

}

//getters
const T1& getFirst(){
    return first;
}
const T2& getSecond(){
    return second;
}

//setters
void setFirst(const T1& first) {
    this->first = first;
}
void setSecond(const T2& second) {
    this->second= second;
}


private:
    T1 first;
    T2 second;
};

//create function to take 2 arguments of any type and returns pair of those arguments
template <typename T1, typename T2> Pair<T1, T2> createPair(T1& f, T2& s) {
    return Pair<T1, T2>(f, s);
} 


int main (void) {

    //create pair object
    Pair<int, double> p(1, 4.5);

    cout << "(" << p.getFirst() << ", " << p.getSecond() << ")" << endl;
    
    //create pair test
    Pair<std::string, char> p2 = createPair(std::string("Hello"), '!');
    cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")" << endl;
    
    auto p3 = createPair(Pair<int, int>(1,2), Pair<int, int>("hello", "bye"));
    cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")" << endl;

    Pair p4(5, 5.4);
    
    
    return 0;

}