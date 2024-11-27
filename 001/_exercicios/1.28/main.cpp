/*
  Escreva um programa que imprime uma caixa, uma oval, uma seta e um losango da seguinte maneira:

    *********          ***              *              *
    *       *        *     *           ***            * *
    *       *       *       *         *****          *   *
    *       *       *       *           *           *     *
    *       *       *       *           *          *       *
    *       *       *       *           *           *     *
    *       *       *       *           *            *   *
    *       *        *     *            *             * *
    *********          ***              *              *

*/

#include <iostream>

using std::cout;

int main()
{
  cout << "**********\n"
       << "*        *\n"
       << "*        *\n"
       << "*        *\n"
       << "*        *\n"
       << "**********\n";

  cout << "\n\n\n";
  cout << "    ***   \n"
       << "  *     *\n"
       << "*         *\n"
       << "*         *\n"
       << "*         *\n"
       << "  *     *\n"
       << "    ***\n";

  cout << "\n\n\n";
  cout
      << "  *  \n"
      << " ***\n"
      << "*****\n"
      << "  *  \n"
      << "  *  \n"
      << "  *  \n"
      << "  *  \n"
      << "  *  \n";

  cout << "\n\n\n";

  cout
      << "    *    \n"
      << "   * *   \n"
      << "  *   *  \n"
      << " *     * \n"
      << " *     * \n"
      << "  *   *  \n"
      << "   * *   \n"
      << "    *    \n";

  return 0;
}