#include <iostream>

using std::cout;
using std::endl;

void print_hello(char * const, const int, char* (*dept)(int));
char* get_department(const int);
char* get_department_foreign(const int);

int main() {

    char name[] = "jhonattan";
    print_hello(name, 2, get_department);
    print_hello(name, 3, get_department_foreign);
}

void print_hello(char * const name, const int d, char* (*dept)(int)) {
    cout << "Hello, " << name << ", welcome to " << dept(d) << "!" << endl;
}

char* get_department(const int department) {
    switch(department) {
        case 1:
            return (char*) "Sales";
        case 2:
            return (char*) "Marketing";
        case 3:
            return (char*) "Development";
        case 4:
            return (char*) "Accounting";
        default:
            return (char*) "None";
    }
}

char* get_department_foreign(const int department) {
    char* dept;

    switch(department) {
        case 1:
            dept = (char*)"Ventas";
            break;
        case 2:
            dept = (char*)"Mercadeo";
            break;
        case 3:
            dept = (char*)"Desarrollo";
            break;
        case 4:
            dept = (char*) "Contabilidad";
            break;
        default:
            dept = (char*) "Ninguno";
    }

    return dept;
}