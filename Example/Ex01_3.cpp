#include <iostream>

int main(void){
    int num;

    std::cout<<"숫자 하나를 입력하시오.: ";
    std::cin>>num;

    for(int i=1; i<=9;i++){
        std::cout<<num<<'X'<<i<<'='<<num*i<<std::endl;
    }
    return 0;
}