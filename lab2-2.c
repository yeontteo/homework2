#include <stdio.h> 

int main()
{
    int i; // int형 변수 i 선언
    int *ptr; // int형 포인터 변수 ptr 선언
    int **dptr; // int형 이중포인터 변수 dptr 선언

    i = 1234; // i의 값은 1234

    printf("[----- 남연서 2023041030 -----]\n");
    
    printf("[checking values before ptr = &i] \n"); // ptr에 i의 주소를 할당하기 전 값을 확인
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값 출력 (초기화되지 않은 포인터의 값이므로 쓰레기값인 주소이다.)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력 

    
    ptr = &i;  // ptr is now holding the address of i
                // prt에 i의 주소 할당

    printf("\n[checking values after ptr = &i] \n"); // ptr에 i의 주소를 할당한 후 값을 확인
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값 출력 (i의 주소가 출력된다.)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력 (값만 할당한 것이므로 주소는 변함이 없다.)
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소의 값 출력 (=i의 값, 역참조연산자 사용)


    dptr = &ptr; // dptr is now holding the address of ptr
                // dptr에 ptr의 주소 할당

    printf("\n[checking values after dptr = &ptr] \n"); // dptr에 ptr의 주소를 할당한 후 값을 확인
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값 출력 (i의 주소가 출력된다.)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력 (값만 할당한 것이므로 주소는 변함이 없다.)
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소의 값 출력 (=i의 값, 역참조연산자 사용)
    printf("value of dptr == %p\n", dptr); // dptr의 값 출력 (dptr에 ptr의 주소를 할당했으므로 ptr의 주소가 출력된다.)
    printf("address of dptr == %p\n", &dptr); // dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr); // dptr이 가리키는 주소의 값 출력 (=ptr의 값이므로 ptr이 담고있는 주소가 출력된다.)
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소(값)가 가리키는 주소의 값 출력 (=ptr의 주소를 가리키므로 ptr이 가리키고 있는 주소의 값인 i의 값이 출력된다.)

    *ptr = 7777; // changing the value of *ptr

    printf("\n[after *ptr = 7777] \n"); // ptr이 가리키는 주소의 값을 7777로 바꾼 후
    printf("value of i == %d\n", i); // i의 값 출력 (7777)
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소의 값 출력 (역참조연산자 사용, 7777)
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소가 가리키는 주소의 값 출력 (이중포인터 사용, 7777) 

    **dptr = 8888; // changing the value of **dptr

    printf("\n[after **dptr = 8888] \n"); // dptr이 가리키는 주소가 가리키는 주소의 값을 8888로 바꾼 후
    printf("value of i == %d\n", i); // i의 값 출력 (8888)
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소의 값 출력 (역참조연산자, 8888)
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소가 가르키는 주소의 값 출력 (이중포인터 사용, 8888)

    return 0;
}   