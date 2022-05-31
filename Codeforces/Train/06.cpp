#include <iostream>

int i, j, Matrix[3][3], Transpose[3][3];
int main(){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            std::cin >> Matrix[i][j];
        }
    }
        for(i = 0; i < 3; i++){
             for(j = 0; j < 3; j++){
                Transpose[j][i] = Matrix[i][j];
             }
        }

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            std::cout << Transpose[i][j] << " ";
        }
        std::cout << std::endl;
     }
     return 0;
}
