#include "cpu.h"

void compute() {
    int result = 0;
    auto data = read();
    for(int i = 0;i < 8;++i) {
        result += data[i];
    }
    std::cout << "Result: " << result << std::endl;
}
