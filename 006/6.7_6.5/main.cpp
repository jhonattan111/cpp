#include <iostream>
#include "time.cpp"

using std::cout;
using std::endl;

int main() {
    Time t;

    cout << "A hora militar inicial é: ";
    t.printMilitary();
    cout << endl << "A hora padrão é: ";
    t.printStandard();

    t.setTime(12, 27, 6);
    cout << endl << endl;

    cout << "A hora militar depois de settime é: ";
    t.printMilitary();
    cout << endl << "A hora padrão de setTime é: ";
    t.printStandard();

}