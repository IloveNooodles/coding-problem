#include <iostream>

int n;
int main(){
    scanf("%d", &n);
    if(n < 10){
        std::cout << "satuan" << std::endl;
    } else if(n < 100){
        std::cout << "puluhan" << std::endl;
    } else if(n < 1000){
        std::cout << "ratusan" <<std::endl;
    } else if(n < 10000){
        std::cout << "ribuan" <<std::endl;
    } else if(n < 100000){
        std::cout << "puluhribuan" <<std::endl;
    } else std::cout << "" ;
    return 0;
}
