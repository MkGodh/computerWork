#include "display.h"


void display() {
    auto buffer = read();
    std::cout << "Buffer contents: ";
    for (int num : buffer) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
