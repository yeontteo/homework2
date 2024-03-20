#include <stdio.h> 

int main()
{
    int i; // int�� ���� i ����
    int *ptr; // int�� ������ ���� ptr ����
    int **dptr; // int�� ���������� ���� dptr ����

    i = 1234; // i�� ���� 1234

    printf("[----- ������ 2023041030 -----]\n");
    
    printf("[checking values before ptr = &i] \n"); // ptr�� i�� �ּҸ� �Ҵ��ϱ� �� ���� Ȯ��
    printf("value of i == %d\n", i); // i�� �� ���
    printf("address of i == %p\n", &i); // i�� �ּ� ���
    printf("value of ptr == %p\n", ptr); // ptr�� �� ��� (�ʱ�ȭ���� ���� �������� ���̹Ƿ� �����Ⱚ�� �ּ��̴�.)
    printf("address of ptr == %p\n", &ptr); // ptr�� �ּ� ��� 

    
    ptr = &i;  // ptr is now holding the address of i
                // prt�� i�� �ּ� �Ҵ�

    printf("\n[checking values after ptr = &i] \n"); // ptr�� i�� �ּҸ� �Ҵ��� �� ���� Ȯ��
    printf("value of i == %d\n", i); // i�� �� ���
    printf("address of i == %p\n", &i); // i�� �ּ� ���
    printf("value of ptr == %p\n", ptr); // ptr�� �� ��� (i�� �ּҰ� ��µȴ�.)
    printf("address of ptr == %p\n", &ptr); // ptr�� �ּ� ��� (���� �Ҵ��� ���̹Ƿ� �ּҴ� ������ ����.)
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ּ��� �� ��� (=i�� ��, ������������ ���)


    dptr = &ptr; // dptr is now holding the address of ptr
                // dptr�� ptr�� �ּ� �Ҵ�

    printf("\n[checking values after dptr = &ptr] \n"); // dptr�� ptr�� �ּҸ� �Ҵ��� �� ���� Ȯ��
    printf("value of i == %d\n", i); // i�� �� ���
    printf("address of i == %p\n", &i); // i�� �ּ� ���
    printf("value of ptr == %p\n", ptr); // ptr�� �� ��� (i�� �ּҰ� ��µȴ�.)
    printf("address of ptr == %p\n", &ptr); // ptr�� �ּ� ��� (���� �Ҵ��� ���̹Ƿ� �ּҴ� ������ ����.)
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ּ��� �� ��� (=i�� ��, ������������ ���)
    printf("value of dptr == %p\n", dptr); // dptr�� �� ��� (dptr�� ptr�� �ּҸ� �Ҵ������Ƿ� ptr�� �ּҰ� ��µȴ�.)
    printf("address of dptr == %p\n", &dptr); // dptr�� �ּ� ���
    printf("value of *dptr == %p\n", *dptr); // dptr�� ����Ű�� �ּ��� �� ��� (=ptr�� ���̹Ƿ� ptr�� ����ִ� �ּҰ� ��µȴ�.)
    printf("value of **dptr == %d\n", **dptr); // dptr�� ����Ű�� �ּ�(��)�� ����Ű�� �ּ��� �� ��� (=ptr�� �ּҸ� ����Ű�Ƿ� ptr�� ����Ű�� �ִ� �ּ��� ���� i�� ���� ��µȴ�.)

    *ptr = 7777; // changing the value of *ptr

    printf("\n[after *ptr = 7777] \n"); // ptr�� ����Ű�� �ּ��� ���� 7777�� �ٲ� ��
    printf("value of i == %d\n", i); // i�� �� ��� (7777)
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ּ��� �� ��� (������������ ���, 7777)
    printf("value of **dptr == %d\n", **dptr); // dptr�� ����Ű�� �ּҰ� ����Ű�� �ּ��� �� ��� (���������� ���, 7777) 

    **dptr = 8888; // changing the value of **dptr

    printf("\n[after **dptr = 8888] \n"); // dptr�� ����Ű�� �ּҰ� ����Ű�� �ּ��� ���� 8888�� �ٲ� ��
    printf("value of i == %d\n", i); // i�� �� ��� (8888)
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ּ��� �� ��� (������������, 8888)
    printf("value of **dptr == %d\n", **dptr); // dptr�� ����Ű�� �ּҰ� ����Ű�� �ּ��� �� ��� (���������� ���, 8888)

    return 0;
}   