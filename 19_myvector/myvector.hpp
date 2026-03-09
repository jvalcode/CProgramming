#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector{

private:
    int* elements;//array of elements 
    int size;//current number of elements
    int capacity;//max number of elements vect can hold

public:
    //constructor
    MyVector(int capacity = 1);

    //copy constructor
    MyVector(const MyVector&  other);
    
    //Destructor
    ~MyVector();

    void print() const;
    void push_back(int val);


};


#endif