#include <iostream>

int main(void){
    int sell=0;

    while(true){
        std::cout<<"판매 금액을 만원 단위로 입력( -1 to end): ";
        std::cin>>sell;
        if(sell==-1) break;
        std::cout<<"이번달 급여: "<<50+sell*0.12<<"만원"<<std::endl;
    }
    std::cout<<"프로그램을 종료합니다.";
    return 0;
}