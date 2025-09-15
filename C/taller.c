#include <stdio.h>

void ejercicio1() {
    int y = 15;
    int *p = &y;
    printf("Ejercicio 1: Dirección de y = %p, Valor de y = %d\n", (void*)p, *p);
}
void ejercicio2() {
    int z = 7;
    int *p = &z;
    *p = 99;
    printf("Ejercicio 2: Nuevo valor de z = %d\n", z);
}
void ejercicio3() {
    int arr[4] = {4, 8, 12, 16};
    int *p = arr;
    printf("Ejercicio 3: Segundo elemento = %d\n", *(p + 1));
}
void ejercicio4() {
    int nums[6] = {1, 2, 3, 4, 5, 6};
    int *p = nums;
    int suma = 0;
    for(int i = 0; i < 6; i++) {
        suma += *(p + i);
    }
    printf("Ejercicio 4: Suma de elementos = %d\n", suma);
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    return 0;
}
