#include <iostream>
#include <thread>

void getName(){
    std::string name;
    while(true) {
        std::cout << "What is your name: "; 
        std::cin >> name; 
    }
}

void printHelloWorld(){
    while(true) {
        std::cout << "Hello, World" << std::endl;
    }
}

int main() {
    std::thread helloWorldThread(printHelloWorld);
    std::thread getNameThread(getName);

    helloWorldThread.join();
    getNameThread.join();

    return 0;
}