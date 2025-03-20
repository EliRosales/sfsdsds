#include <iostream> // Maneja la Entrada y Salida de datos. 
#include <vector> // para usar vectores y crear matrices dinamicas.

using namespace std; // Evita usar std en todos los elementos de la biblioteca Estandar.

int main() { // Punto de entrada del programa.
    vector<int> numeros = { 1, 2, 3, 4, 5 }; // El Vector almacenara la variable numero que son de tipo entero.

    cout << "Elementos del vector: "; // Num Recorrera cada valor del vector numero.
    for (const auto& num : numeros) { // Num Recorrera cada numero de la variable numeros.
        cout << num << " "; // Muestra los valores Recorridos del vector numeros.
    }
    cout << endl; // Salto de linea

    for (auto& num : numeros) { // Num Recorrera cada valor de la variable numeros Y modificaran los valores contenidos en el vector numeros.
        num += 1; // Incrementar cada valor del vector en 1
    }

    cout << "Elementos modificados: "; // Mostrara en la consola Elementos modificados.
    for (const auto& num : numeros) { // Num Recorrera cada valor del vector numero.
        cout << num << " "; // Muestra los valores Recrridos del vector numeros
    }
    cout << endl; // Salto de Linea

    return 0; // Indica que la ejecucion del programa a finaliado correctamente.
}