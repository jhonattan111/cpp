#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int total, gradeCounter, grade, average;

  total = 0;
  gradeCounter = 1;

  while (gradeCounter <= 10)
  {
    int grade = 0;
    cout << "Forneça nota: ";
    cin >> grade;
    total = total + grade;
  }

  average = total / 10;

  cout << "A média da turma é " << average << endl;

  return 0;
}