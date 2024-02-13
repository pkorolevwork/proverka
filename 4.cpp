#include <iostream>

bool isMemberOfAP(int n, int f, int s) {
    // Проверяем, что разность между n и первым членом f делится на шаг s без остатка
    return (n - f) % s == 0;
}

int main() {
    int n, firstTerm, step;
    
    // Вводим данные
    std::cout << "Введите число n: ";
    std::cin >> n;
    std::cout << "Введите первый член арифметической прогрессии: ";
    std::cin >> firstTerm;
    std::cout << "Введите шаг арифметической прогрессии: ";
    std::cin >> step;
    
    // Проверяем, является ли n членом арифметической прогрессии
    if (isMemberOfAP(n, firstTerm, step)) {
        std::cout << n << " является членом арифметической прогрессии с первым членом " << firstTerm << " и шагом " << step << std::endl;
    } else {
        std::cout << n << " не является членом арифметической прогрессии с первым членом " << firstTerm << " и шагом " << step << std::endl;
    }
    
    return 0;
}
