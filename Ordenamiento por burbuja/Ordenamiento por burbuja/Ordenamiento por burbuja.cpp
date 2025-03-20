#include <iostream> // Entrada y salida de datos
using namespace std; // Evita usar sdt:: en todos los elementos de la  biblioteca estandar

void bubbleSort(int arr[], int n) { // Toma los arreglos de enteros de arr[] y utiliza el ordenamiento de burbuja.
    for (int i = 0; i < n - 1; i++) { // Ciclo externo que controla el numero de pasadas a traves del arreglo.
        for (int j = 0; j < n - i - 1; j++) { // cCiclo interno que compara los pares de elementos 
            if (arr[j] > arr[j + 1]) { // Verifica si los valores estan en el orden correcto
                swap(arr[j], arr[j + 1]); // Intercambian los valores arr[j] y arr[j + 1]
            }
        }
    } 
}

void printArray(int arr[], int n) { // Imprime los elementos de la array 
    for (int i = 0; i < n; i++) { //  El bucle se inicia en 0 y terminara cuando i alcance el valor de columnas y i aumentra en cada iterracion del bucle.
        cout << arr[i] << " "; // Muestra en la consola el array ordenado
    }
    cout << endl; // Salto de linea  
}

int main() { //Punto de entrada del programa 
    int arr[] = { 5, 2, 9, 1, 5, 6 }; // Declaracion de la variable arr con valores enteros.
    int n = sizeof(arr) / sizeof(arr[0]); // calcula la longitud del array y la guarda en la variable n

    bubbleSort(arr, n); // llama a la funcjon bubbleSort.
    printArray(arr, n); // llama a la funcionprintArray.

    return 0;  //La ejecucion del programa fue realizada exitosamente 
}
