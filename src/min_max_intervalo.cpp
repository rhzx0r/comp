#include <iostream>
#include <vector>
#include <algorithm>

void minmax(int inicio, int fin, std::vector<int> vec)
{
  // auto it = vec.begin() - 1 + inicio;
  // auto it2 = vec.begin() + fin;

  // // Obtener la posición a la que apunta begin() usando aritmética de punteros
  // size_t posicion = it - vec.begin(); // Esto dará la posición del iterador respecto al inicio del vector
  // size_t posicion2 = it2 - vec.begin(); // Esto dará la posición del iterador respecto al inicio del vector

  // // Imprimir la posición
  // std::cout << "La posición a la que apunta begin() es: " << posicion << " " << posicion2 << * it2 << std::endl;

  auto min_it = std::min_element(vec.begin() - 1 + inicio, vec.begin() + fin);
  auto max_it = std::max_element(vec.begin() - 1 + inicio, vec.begin() + fin);

  std::cout << *min_it << " " << *max_it << std::endl;
}

int main()
{

  int n, c;

  std::cout << "Escribe los números" << std::endl;
  std::cin >> n >> c;

  std::vector<int> numeros(n);

  for (int i = 0; i < n; ++i)
  {
    std::cin >> numeros[i];
  }

  char letra;
  int a, b;

  // cantidad de consultas
  for (int i = 0; i < c; i++)
  {
    std::cout << "Escribe la consulta" << std::endl;
    std::cin >> letra >> a >> b;

    if (letra == 'C')
    {
      minmax(a, b, numeros);
    }
    else
    {
      numeros[a-1] = b;
    }
  }

  return 0;
}