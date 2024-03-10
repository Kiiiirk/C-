#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Press Enter to start the stopwatch...";
    std::cin.ignore();

    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();

    std::cout << "Stopwatch started! Press Enter to stop...";
    std::cin.ignore();

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Elapsed time: " << elapsed_seconds.count() << " seconds" << std::endl;

    return 0;
}
    