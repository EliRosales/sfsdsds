#include <iostream> // Maneja la entrada y salida de datos.
#include <vector> // para usar vectores y crear matrices dinamicas.

using namespace std; // Evita la necesidad de escribir std:: en todos los elementos de la biblioteca estandar.
int main() { // Punto de entrada del programa.
    int filas = 3, columnas = 4; // Declara el numero de filas que son 3 y columnas que son 4.

    vector<vector<int>> matriz(filas, vector<int>(columnas)); // Crea la matiz con el numero de filas y columnas.

    for (int i = 0; i < filas; i++) { // el bucle se inicializa en 0 y terminara cuando i alzance el valor de filar y i auemntra despues de cada iterracion del bucle.  
        for (int j = 0; j < columnas; j++) { // El bucle se inicia en 0 y terminara cuando j alcance el valor de columnas y j aumentra en cada iterracion del bucle.
            matriz[i][j] = (i + 1) * (j + 1); // Asigna el producto de (i+1)*(j+1) al elemento de la matriz en la posicion [i][j]
        }
    }

    for (const auto& fila : matriz) { // Recorre cada fila de la matriz 
        for (int valor : fila) { // Recorre cada valor de la fila 
            cout << valor << "\t"; // Muestra los valores de la fila 
        }
        cout << endl; // Salto de linea 
    }
    
    return 0; // Indica que la ejecucion del programa a finalizado correctamente.
}