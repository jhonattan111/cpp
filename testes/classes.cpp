#include <iostream>

class Counter {
public:
    Counter();

    char message[10];
    void increase();
    void decrease();
    void printCount();
    int getCount();

private:
    int count;
};

int Counter::getCount() {
    return count;
}

Counter::Counter() {
    count = 0;
}

void Counter::printCount() {
    std::cout << "counter: " << getCount() << std::endl;
}

void Counter::increase() {
    int* cnt = &count;
    *cnt += 1;
}

void Counter::decrease() {
    count--;
}

int main() {
    Counter cnt;
    std::cout << "sizeof " << sizeof cnt << std::endl;
    cnt.printCount();
    cnt.increase();
    cnt.printCount();
    std::cout << "sizeof " << sizeof cnt << std::endl;
    cnt.decrease();
    cnt.printCount();
    std::cout << "sizeof " << sizeof cnt << std::endl;
    std::cout << "sizeof" << sizeof cnt.getCount() << std::endl;
    return 0;
}