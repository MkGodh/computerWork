#include "disk.h"

void save() {
    std::ofstream data("data.txt");
    if (data.is_open()) {
        auto buffer = read();  // Получаем данные из оперативной памяти
        for (int num : buffer) {
            data << num << " ";
        }
    }
    std::cout << "Data saved." << std::endl;
}

void load() {
    std::ifstream data("data.txt");
    std::array<int, 8> buffer;
    if (data.is_open()) {
        for (int& num : buffer) {
            data >> num;
        }
        write(buffer);  // Записываем данные в оперативную память
    }
    std::cout << "Data loaded." << std::endl;
}