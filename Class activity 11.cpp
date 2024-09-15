#include<iostream>

int main(){

    int value1, value2, largervalue;

    std::cout<<"Enter the first value:";
    std::cin>>value1;
    std::cout<<"Enter the second value:";
    std::cin>>value2;

    if(value1 > value2){
        largervalue = value1;
    } else {
        largervalue = value2;
    }

    std::cout<<"The larger value is:"<<largervalue<<std::endl;

    return 0;

}