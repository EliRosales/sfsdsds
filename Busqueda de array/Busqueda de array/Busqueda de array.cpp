#include <iostream> // Manejo de entrada y salida de datos
using namespace std; // Evita usar std:: en los elementos de la biblioteca estandar

int main() { // Punto de entrada del programa 
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 }; // Declaracion de la variable arreglo que contiene valores de tipo entero.
    int clave; // Declaracion de la variable clave de tipo entero.
    bool encontrado = false; // Declaracion de la variable encontrado tipo booleana con el valor False.

    cout << "Ingrese un numero a buscar: "; // Muestra en la consola Ingrese un numero a buscar.
    cin >> clave; // Guarda el nuemro ingresado en la variable clave 

    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula la longitud del arreglo y la guarda en la variable tamano.

    for (int i = 0; i < tamano; i++) { // Ciclo donde se va a terminar hasta que i sea menor que tamano.
        if (arreglo[i] == clave) { // Ciclo donde va a evaluar y comparar si arreglo[i] va a ser igual a clave.
            cout << "Numero encontrado en la posicion: " << i << endl; // Muestra en la consola Numero encontrado en la posicion donde i tiene la pocision y hace un salto de linea.
            encontrado = true; // indica que la variable a sido encontrada.
            break; // Finaliza el ciclo
        }
    }

    if (!encontrado) { // Ciclo donde evalua la variable si no ecnontrado.
        cout << "Numero no encontrado en el array" << endl; // Muestra en la consola Numero no encontrado en el array y hace un salto de linea.
    }
    return 0; // La ejecucion del programa se realizo correctamente.
}