#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

std::vector<int> obtenerDistancias(const std::vector<int> &nums)
{

  std::vector<int> resultado;

  for (auto it = nums.begin(); it != nums.end(); ++it) {

    int distanciaIzquierda = 0, distanciaDerecha = 0;

    // Calcular la distancia a la izquierda
    if (it != nums.begin()) {
        auto itIzquierda = std::find_if(std::make_reverse_iterator(it), nums.rend(), [&](int valor) {
            return valor > *it;
        });
        
        distanciaIzquierda = std::distance(itIzquierda.base(), it);
    }

    // Calcular la distancia a la derecha
    if (it != nums.end() - 1) {
        auto itDerecha = std::find_if(it + 1, nums.end(), [&](int valor) {
            return valor > *it;
        });

        distanciaDerecha = std::distance(it + 1, itDerecha);
    }

    int sumaDistancias = distanciaIzquierda + distanciaDerecha + 1;

    resultado.push_back(sumaDistancias);
    
  }

  return resultado;
}
int main() {
  
  uint16_t n;

  std::cin >> n;

  std::vector<int> numeros(n);
  
  for (int i = 0; i < n; ++i)
  {
    std::cin >> numeros[i];
  }

  std::vector<int> resultado = obtenerDistancias(numeros);

  // Imprimimos el resultado
  for (const auto &num : resultado)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}