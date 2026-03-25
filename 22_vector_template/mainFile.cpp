#include "MyVector.tpp"

//go thourgh all methods of the class and implement the template typename and make it work

int main(void){

    MyVector<int> mv;
    MyVector<int> mv2;

    for(int i =0; i < 10; i++){
        mv.push_back(i);
        mv2.push_back("hi");
    }
    
    mv.print();
    mv2.print();

    return 0;
}