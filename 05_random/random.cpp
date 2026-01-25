#include<iostream>
#include<random> 
//for generating random numbers

//<random> is better because:
//higher quality of randomness
//threat safe

int main(void) {

    // generate a seed
    std:: random_device rd;

    //create a random number engine
    std::mt19937 eng(rd());

    //define distribution
    std::uniform_int_distribution<int> dist(1, 100);

    for(int i=0; i<20; i++) {
        
        int x= dist(eng);

        std::cout << x << std::endl;
    }

    return 0;
}

