#include "Integer.h"

int main() {
    Integer int1(10);
    Integer int2(5);

    int1.printNumber();
    int2.printNumber();

    Integer int3 = int1.add(int2);
    Integer int4 = int1.subtract(int2);
    Integer int5 = int1.multiply(int2);
    Integer int6 = int1.divide(int2);

    std::cout << "int1 + int2 = ";
    int3.printNumber();

    std::cout << "int1 - int2 = ";
    int4.printNumber();

    std::cout << "int1 * int2 = ";
    int5.printNumber();

    std::cout << "int1 / int2 = ";
    int6.printNumber();

    return 0;
}