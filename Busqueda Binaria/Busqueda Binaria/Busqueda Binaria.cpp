#include <iostream> // Maneja la Entrada y salida de datos
#include <algorithm> // Para usar sort

using namespace std; // Evita usar std:: en todos los elementos de la biblioteca estandar.

int main() { // Punto de entrada del programa 
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 }; // Declaracion de un arreglo de enteros.
    int clave; // Declaracion de clave de tipo entero.
    bool encontrado = false; // Declaracion de una variable boleana llamada encontrado con el valor False.
    int indice = -1; // Declaracion de una variable llamada indice de tipo entera con el valor -1.

    int tammo = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula la longitud del arreglo y la guarda en tammo
    sort(arreglo, arreglo + tammo); // Ordena los elementos del arreglo desde eñ primer elemento hasta uno justo antes de arreglo+tammo.

    cout << "Array ordenado: "; // Muestra en la consola Array ordenado 
    for (int n : arreglo) cout << n << " "; // Muestra en la consola cada elemento del arreglo ordenado.
    cout << endl; // Salto de linea 

    cout << "Ingrese un numero a buscar: "; // Muestra en la pantalla Ingrese un numero a buscar.
    cin >> clave; // Guarda el numero ingresado en la variable Clave

    int izquierda = 0; // Declara la variable izquierda de tipo entero que se le asigan 0. 
    int derecha = tammo - 1; // Declara la variable izquierda de tipo entero que se le asigna -1.

    while (izquierda <= derecha) { // Ciclo donde izquierda va a ser menor o igual a derecha y se termina.
        int medio = izquierda + (derecha - izquierda) / 2; // Calcula el punto medio entre izquierda y derecha y lo almacena en medio.

        if (arreglo[medio] == clave) { // Ciclo donde arreglo[medio] se va a comparar si es igual a clave.
            encontrado = true; // Encontrado se le asigna true que es verdadero si lo encontraron.
            indice = medio; // Indice se le asigna medio.
            break; // Finaliza el ciclo
        }
        else if (arreglo[medio] < clave) { // si la condicion if fue falsa se ejecuta este parte donde arreglo[medio] va a ser menor a clave.
            izquierda = medio + 1; // Va a buscar del lado izquierdo la posicion en el arreglo.
        }
        else { // si la condicion else if fue salsa se ejecuta esta parte.
            derecha = medio - 1; // Va a bucar la posicion del lado derecho del arreglo.
        }
    }

    if (encontrado) { // Un ciclo donde va a evaluar a encontrado
        cout << "Numero encontrado en la posicion: " << indice << endl; // Muestra en la consola Numero encontrado en la posicion: y indice tiene la posicion encontrada y hace un salto de linea.
    }
    else { //si la condicion if no fue verdadera se cumple esta condicion.
        cout << "Numero no encontrado" << endl; // Muestra en la consola Numero no encontrado y hace un salto de linea.
    }
    return 0; // La ejecucion del programa fue realizada exitosamente GHASDGHJKL
}