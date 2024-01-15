#include <iostream>

int main() {
    int array1[5];
    int array2[5];

   
    std::cout << "enter array 1 : ";
    for(int i = 0; i < 5; i++) {
        std::cin >> array1[i];
    }

    
    std::cout << "enter array 2: ";
    for(int i = 0; i < 5; i++) {
        std::cin >> array2[i];
    }

    
    for(int i = 0; i < 5; i++) {
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

  
    std::cout << "array 1 ba'd az taviz: ";
    for(int i = 0; i < 5; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "array 2 ba'd az taviz: ";
    for(int i = 0; i < 5; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}