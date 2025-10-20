#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int> res(nums.size());//se creo un vector vacio "res" del mismo tamaño que el arreglo nums

        for (int i = 0; i < nums.size(); i++) {
            //int i = 0 inicializa el indice i en 0(primera posición)
            //i < nums.size(), mientras i sea menor que el numero de elementos se puede ejecutar. Ejemplo; si nums.size es 4
            //el ciclo correra con i=0,1,2,3
            //i++ incrementa a la siguiente posición
            if (i == 0) {
                res[i] = nums[i]; // primera posición: no hay nada “antes” que sumar
            }
            else {
                res[i] = res[i -1] + nums[i]; //acumulado anterior + actual
            }
        }
        return res;
    }
};

int main() {
    Solution sol; //Se crea un objeto sol de tu clase Solution
    int n; //n es el número de elementos del vector (lo guarda)
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n); //Se crea un vector nums de tamaño n
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) { //Ciclo para leer los elementos del vector
        cin >> nums[i]; //Se leen los elementos del vector
    }

    vector<int> result = sol.runningSum(nums); //Se llama a la función runningSum y se guarda el resultado en result
    cout << "Running Sum: ";
    for (int num : result) { //recorrer todos los elementos de un contenedor
        cout << num << " "; //Se imprimen los elementos del vector resultante
    }
    cout << endl;
    return 0;  

}