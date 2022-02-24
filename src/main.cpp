#include <iostream>
#include "lib/ansi.hpp"
#include "lib/betterwindows.hpp"

void clearconsole() {
    std::cout << ansi::reset;
}

int main(int argc, char** argv) {
    if(argc >= 2) {
        std::cout << ansi::fg_yellow << "Hello world!" << "\n";
    }
    return 0;
}