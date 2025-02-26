#include <iostream>

struct Time {
    int hour;
    int minute;
    int second;
};

void printMilitary(const Time& t);
void printStandard(const Time& t);

int main() {
    Time dinnerTime;

    dinnerTime.hour = 18;
    dinnerTime.minute = 30;
    dinnerTime.second = 0;

    std::cout << "O jantar será servido às ";
    printMilitary(dinnerTime);
    std::cout << " horário militar, " << std::endl << "que é o mesmo que ";
    printStandard(dinnerTime);

    dinnerTime.hour = 29;
    dinnerTime.minute = 73;

    std::cout << std::endl << "Hora com valores inválidos: ";
    printMilitary(dinnerTime);
    std::cout << std::endl;

    return 0;
}

void printMilitary(const Time& t) {
    std::cout << (t.hour < 10 ? "0" : "") << t.hour << ":"
        << (t.minute < 10 ? "0" : "") << t.minute;
}

void printStandard(const Time& t) {
    std::cout << ((t.hour == 0 || t.hour == 12) ? 12 : t.hour % 12) << ":"
        << (t.minute < 10 ? "0" : "") << t.minute << ":"
        << (t.second < 10 ? "0" : "") << t.second
        << (t.hour < 12 ? " AM" : " PM");
}