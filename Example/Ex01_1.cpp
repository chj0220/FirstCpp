#include <iostream>

int main(void){
    int num1=0,num2=0,num3=0,num4=0,num5=0;
    int sum=0;
    
    std::cout<<"Input= num1: ";
    std::cin>>num1;
    sum += num1;

    std::cout<<"Input num2: ";
    std::cin>>num2;
    sum += num2;

    std::cout<<"Input num3: ";
    std::cin>>num3;
    sum += num3;

    std::cout<<"Input num4: ";
    std::cin>>num4;
    sum += num4;

    std::cout<<"Input num5: ";
    std::cin>>num5;
    sum += num5;
    
    std::cout<<"Total: "<< sum;

    return 0;
}