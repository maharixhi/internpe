#include <iostream>

int main() {
    int count = 0;

    loop:  // Label for the named loop
    std::cout << "Count: " << count << std::endl;
    count++;

    if (count < 5) {
        goto loop;  // Jump back to the named loop
    }

    return 0;
}
