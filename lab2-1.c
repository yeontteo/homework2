#include <stdio.h>

int main(){
    char charType; // char �ڷ��� ���� charType ����
    int integerType; // int �ڷ��� ���� integerType ����
    float floatType; // float �ڷ��� ���� floatType ����
    double doubleType; // double �ڷ��� ���� doubleType ���� 

    printf("[----- ������ 2023041030 -----]\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); // �ڷ��� char�� ������ ���� charType�� ũ�⸦ ����Ѵ�.
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // �ڷ��� int�� ������ ���� integerType�� ũ�⸦ ����Ѵ�.
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // �ڷ��� float�� ������ ���� floatType�� ũ�⸦ ����Ѵ�.
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // �ڷ��� double�� ������ ���� doubleType�� ũ�⸦ ����Ѵ�.

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); // �ڷ��� char�� ũ�⸦ ����Ѵ�.
    printf("Size of int: %ld bytes\n",sizeof(int)); // �ڷ��� int�� ũ�⸦ ����Ѵ�.
    printf("Size of float: %ld bytes\n",sizeof(float)); // �ڷ��� float�� ũ�⸦ ����Ѵ�.
    printf("Size of double: %ld bytes\n",sizeof(double)); // �ڷ��� double�� ũ�⸦ ����Ѵ�.

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); // char�� ������ ������ ũ�⸦ ����Ѵ�.
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int�� ������ ������ ũ�⸦ ����Ѵ�.
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float�� ������ ������ ũ�⸦ ����Ѵ�.
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double�� ������ ������ ũ�⸦ ����Ѵ�.

    return 0; 
}
