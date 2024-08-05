#include <iostream>
#include <vector>
#include <algorithm> 

void reverseVector(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
}

int main() {
    std::vector<int> vec = {5, 1, 2, 3, 4, 5};

    std::cout << "Исходный вектор: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    reverseVector(vec);

    std::cout << "Развернутый вектор: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
