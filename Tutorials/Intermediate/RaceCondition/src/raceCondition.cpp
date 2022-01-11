#include <iostream>
#include <thread>


int global_variable = 1;
int global_range = 10000;

void evenCheck() {
    for(int i = 0; i < global_range; i++) {
        global_variable++;

        if(global_variable % 2 == 0) {
            if(global_variable % 2 != 0) {
                std::cout << "\tGlobal Variable is even: " << global_variable << "\n";
            }
        }
    }
}

void increment() {
    for(int i = 0; i < global_range; i++) {
        global_variable++;
    }
}

int main() {

    std::thread t1(evenCheck);
    std::thread t2(increment);

    t1.join();
    t2.join();

    return 0;
}