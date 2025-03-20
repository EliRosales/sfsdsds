#include <iostream> // Entrada y salida de datos
using namespace std; // Evitar usar std:: en los elementos de la biblioteca estandar.

void selectionSort(int arr[], int n) { // Define la funcion que ordena un arreglo de eneteros.
    for (int i = 0; i < n - 1; i++) { // Recorre ataraves de arr menos la ultima variable
        int minIdx = i; // Declara minIdx como el indice actual
        for (int j = i + 1; j < n; j++) { // Recorre la parte no ordenada del arreglo
            if (arr[j] < arr[minIdx]) { // Ciclo donde se evalua que arr[j] sea menor que arr[minIdx].
                minIdx = j; //Muestra el nuevo minimo 
            }
        }
        swap(arr[i], arr[minIdx]); // Intercambian los valores de arr[i] y arr[minIdx]
    }
}

int main() { // Punto de entrada del programa.
    int arr[] = { 64, 25, 12, 22, 11 }; // Declaracion de arr con valores enteros
    int n = sizeof(arr) / sizeof(arr[0]); // Obtener la longitud de arr y la guarda en la variable n

    selectionSort(arr, n); // Llama a la funcion para ordenar arr

    cout << "Array ordenado: "; // Muestra en la consola Array ordenado
    for (int i = 0; i < n; i++) { // Ciclo para imprimir los valores
        cout << arr[i] << " "; // Imprime los valores con espacio
    }
    return 0; // La ejecucion del programa fue realizada exitosamente 
}
