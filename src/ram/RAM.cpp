#include "ram.h"

std::array <int, 8> buffer;

void write(const std::array<int, 8>& data) {
    buffer = data;
}
std::array<int, 8> read(){
    return buffer;
}