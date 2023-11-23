#include <iostream>
// #include <string>
#include <algorithm>
#include <vector>
#include <cstdint>

int main() {

  int n;
  std::cout << "Ingrese la cantidad de playeras: ";
  std::cin >> n;

  std::vector<int32_t> numeros(n);

  std::cout << "Ingrese " << n << " numeros separados por espacios: ";
  for (int i = 0; i < n; ++i)
  {
    std::cin >> numeros[i];
  }

  std::sort(numeros.rbegin(), numeros.rend());

  std::cout << numeros[2] << std::endl;

  return 0;
}