#include <iostream>

struct Time {
public:
    Time();
    void setTime(int, int, int);
    void printMilitary();
    void printStandard();
private:
    int hour;
    int minute;
    int second;
};

Time::Time() { hour = minute = second = 0; };

void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printMilitary() {
    std::cout << (hour < 10 ? "0" : "") << hour << ":"
        << (minute < 10 ? "0" : "") << minute;
}

void Time::printStandard() {
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << (minute < 10 ? "0" : "") << minute << ":"
        << (second < 10 ? "0" : "") << second
        << (hour < 12 ? " AM" : " PM");
}

int main() {
    Time t;

    std::cout << "A hora militar inicial é ";
    t.printMilitary();
    std::cout << std::endl << "A hora padrão inicial é ";
    t.printStandard();

    t.setTime(13, 27, 6);
    std::cout << std::endl << "A hora militar após setTime é ";
    t.printMilitary();
    std::cout << std::endl << "A hora padrão após setTime é ";
    t.printStandard();

    t.setTime(99, 99, 99);

    std::cout << std::endl << "Após tentar uma inicialização inválida" << std::endl << "Hora militar: ";
    t.printMilitary();

    std::cout << std::endl << "Hora padrão: ";
    t.printStandard();
    std::cout << std::endl;
    return 0;
}