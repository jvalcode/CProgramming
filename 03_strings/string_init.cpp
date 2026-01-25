#include<iostream>

int main(void) {

    //
    std::string str1(" First string");

    //initialize the 
    std::string str2(str1);

    //initialize the string charcter and number of the occurence 
    std::string str3(100,'&');
    //initialize the string by a part 
    std::string str4(str1, 6,7);//start from index 6 and take 5 characters

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;


    if(str1 == str2){

        std::cout << str4 + str1 << std::endl;
    }

    return 0;
}