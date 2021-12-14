#include <iostream>
#include <thread>

void print() {
    std::cout << "Hello, World" << std::endl;
}

int main() {
    void(*printPointer)() = print;
    std::thread t1(printPointer);

    t1.join();

    return 0;
}