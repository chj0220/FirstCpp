#include <iostream>

int main(void){
    int sell=0;

    while(true){
        std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�( -1 to end): ";
        std::cin>>sell;
        if(sell==-1) break;
        std::cout<<"�̹��� �޿�: "<<50+sell*0.12<<"����"<<std::endl;
    }
    std::cout<<"���α׷��� �����մϴ�.";
    return 0;
}