#include <iostream>
#include "Charge.h"

#include <iostream>
using namespace std;

int main() {
    std::cout << "Testing that valgrind detects memory leaks" << std::endl;
    int* blah = new int[10];
    std::unique_ptr<Charge> charge1 = std::make_unique<Charge>(1);
    std::unique_ptr<Charge> charge2 = std::make_unique<Charge>(-1);

    return 0;
}
