#include <stdio.h>

int main(){
    char charType; // char 자료형 변수 charType 선언
    int integerType; // int 자료형 변수 integerType 선언
    float floatType; // float 자료형 변수 floatType 선언
    double doubleType; // double 자료형 변수 doubleType 선언 

    printf("[----- 남연서 2023041030 -----]\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); // 자료형 char로 선언한 변수 charType의 크기를 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // 자료형 int로 선언한 변수 integerType의 크기를 출력한다.
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // 자료형 float로 선언한 변수 floatType의 크기를 출력한다.
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 자료형 double로 선언한 변수 doubleType의 크기를 출력한다.

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); // 자료형 char의 크기를 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(int)); // 자료형 int의 크기를 출력한다.
    printf("Size of float: %ld bytes\n",sizeof(float)); // 자료형 float의 크기를 출력한다.
    printf("Size of double: %ld bytes\n",sizeof(double)); // 자료형 double의 크기를 출력한다.

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); // char형 포인터 변수의 크기를 출력한다.
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int형 포인터 변수의 크기를 출력한다.
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float형 포인터 변수의 크기를 출력한다.
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double형 포인터 변수의 크기를 출력한다.

    return 0; 
}
