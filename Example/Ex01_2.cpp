#include <iostream>

int main(void){
    char name[100];
    char phone_num[200];

    std::cout<<"Input your name: ";
    std::cin>>name;

    std::cout<<"Input your phone number";
    std::cin>>phone_num;

    std::cout<<"your name is "<<name<<"your phone number is "<< phone_num<<std::endl;
    return 0;
}