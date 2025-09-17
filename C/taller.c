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
struct Persona {
    char nombre[20];
    int edad;
};

void ejercicio5() {
    struct Persona p1 = {"Ana", 30};
    struct Persona *ptr = &p1;
    printf("Ejercicio 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}
void ejercicio6() {
    int x = 7;
    int *p = &x;
    int **pp = &p;
    printf("Ejercicio 6: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}
void incrementar(int *n) {
    (*n)++;
}

void ejercicio7() {
    int x = 10;
    incrementar(&x);
    printf("Ejercicio 7: x incrementado = %d\n", x);
}
void ejercicio8() {
    int *p = (int*)malloc(sizeof(int) * 3);
    if (p != NULL) {
        p[0] = 100; p[1] = 200; p[2] = 300;
        printf("Ejercicio 8: %d %d %d\n", p[0], p[1], p[2]);
        free(p);
    }
}
void ejercicio9() {
    char *nombres[3] = {"Ana", "Luis", "Marta"};
    printf("Ejercicio 9: ");
    for(int i = 0; i < 3; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}
int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }

void ejercicio10() {
    int (*operacion)(int, int);
    operacion = suma;
    printf("Ejercicio 10: Suma = %d\n", operacion(2, 3));
    operacion = resta;
    printf("ejercicio 10: Resta = %d\n", operacion(5, 2));
}







int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    ejercicio10();
    
    return 0;
}
