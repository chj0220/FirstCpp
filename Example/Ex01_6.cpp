#include <iostream>

//문제 1
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main(void)
{
    std::cout<<"[3, 3, 3] : " << BoxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : " << BoxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : " << BoxVolume(7)<<std::endl;
   // std::cout<<"[D, D, D] : " << BoxVolume()<<std::endl;

    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}

int BoxVolume(int length, int width)
{
    return length*width*1;
}

int BoxVolume(int length)
{
    return length*1*1;
}

//문제2
//답: SimpleFunc라는 함수를 실행시켰을때 나올수 있는 값이 10 과 11 두가지임으로 오류발생.