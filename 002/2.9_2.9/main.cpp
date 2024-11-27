#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

using std::setiosflags;
using std::setprecision;

main()
{
  int total, gradeCounter, grade;
  double average;

  total = 0;
  gradeCounter = 0;

  cout << "Forneça nota ou -1 para finalizar: ";
  cin >> grade;

  while (grade != -1)
  {
    total = total + grade;
    gradeCounter = gradeCounter + 1;
    cout << "Forneça nota ou -1 para finalizar: ";
    cin >> grade;
  }

  if (gradeCounter != 0)
  {
    average = static_cast<double>(total) / gradeCounter;
    cout << "A média da turma é " << setprecision(2) << setiosflags(ios::fixed | ios::showpoint) << average << endl;
  }
  else
  {
    cout << "Nenhuma nota foi fornecida" << endl;
  }

  cout << "A média da turma é " << average << endl;

  return 0;
}