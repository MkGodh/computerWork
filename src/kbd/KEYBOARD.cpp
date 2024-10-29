#include "keyboard.h"


void input() {
    std::array<int, 8> buffer;
    std::cout << "Input nums for buffer: " << std::endl;
    for(int i = 0;i < 8;++i) {
        std::cin >> buffer[i];
    }
    write(buffer);
    std::cout << "Data has been writen." << std::endl;
}
