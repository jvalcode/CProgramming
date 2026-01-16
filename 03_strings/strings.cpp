#include<iostream>
#include<string>


int main(void){

    //create string
    // git satus shows current narnch
    std:: string str = "Hello";

    std:: cout << str << "has length"<< str.length() << std::endl;
    
    str += "World!";
    std:: cout << str << "has length"<< str.length() << std::endl;
    
    return 0;
}