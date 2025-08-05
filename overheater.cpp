// WARNING: This code will max out one CPU core.
// Stop the program manually (Ctrl + C) if it runs too long.
#include <iostream>

int main() {
    std::cout << "CPU stress test started (single core). Press Ctrl+C to stop." << std::endl;

    while (true) {
        // Useless floating point math to keep CPU busy
        volatile double x = 1.0;
        for (int i = 0; i < 1000000; ++i) {
            x = x * x + 1.0;
        }
    }

    return 0;
}
// WARNING: This code will max out one CPU core.