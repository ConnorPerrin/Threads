#include <iostream>
#include <thread>

void printName(std::string name) {
    std::cout << "Hello, " << name << std::endl;
}

int main() {
    std::thread t1(printName, "John");

    t1.join();

    return 0;
}