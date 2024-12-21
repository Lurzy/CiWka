#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 1;
const int MAX_COUNT = 9;

void print_numbers(bool is_nechet) {
    while (counter <= MAX_COUNT) {
        std::lock_guard<std::mutex> lock(mtx);
        if ((counter % 2 != 0) == is_nechet) {
            std::cout << (is_nechet ? "Nechet: " : "Chet: ") << counter << std::endl;
            ++counter;
        }
    }
}

int main() {
    std::thread nechet_thread(print_numbers, true);
    std::thread chet_thread(print_numbers, false);

    nechet_thread.join();
    chet_thread.join();

    return 0;
}
