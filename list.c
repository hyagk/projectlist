����Ʈ��? 
: ���������� ����� �ִ� �ڷ���� ���� �����Ͽ� �ϳ��� ���� ���.

����Ʈ�� ����?
������ ���� �� ���� : ����Ʈ�� �����͸� �����ϰ� �����ϴ� �� ���˴ϴ�.���� ���, ����� ����, ��ǰ ���, ����ǥ �� �پ��� ������ ������ ����Ʈ�� ������ �� �ֽ��ϴ�.

�ݺ� �۾� : ����Ʈ�� �ݺ� �۾��� �ſ� �����մϴ�.�ݺ����� ����Ͽ� ����Ʈ�� ��� ��Ҹ� �ϳ��� ó���ϰų� Ư�� ������ �����ϴ� ��Ҹ� �˻��� �� �ֽ��ϴ�.

���͸��� �˻� : ����Ʈ���� Ư�� ������ �����ϴ� ��Ҹ� �˻��ϰų�, ������ �ʴ� ��Ҹ� �����ϴ� �۾��� ����Ʈ�� Ȱ��˴ϴ�.�̸� ���� �����͸� ���͸��ϰų� �˻��� �� �ֽ��ϴ�. 
	

#include <stdio.h>
#include <stdlib.h>


struct List {
    int* arr;         
    int capacity;    
    int size;        
};


void initList(struct List* list, int capacity) {
    list->arr = (int*)malloc(capacity * sizeof(int));
    list->capacity = capacity;
    list->size = 0;
}

void append(struct List* list, int value) {
    if (list->size < list->capacity) {
        list->arr[list->size] = value;
        list->size++;
    }
    else {
        printf("����Ʈ�� ���� á���ϴ�.\n");
    }
}

void printList(struct List* list) {
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->arr[i]);
    }
    printf("\n");
}

void freeList(struct List* list) {
    free(list->arr);
    list->capacity = 0;
    list->size = 0;
}

int main() {
    struct List myList;
    int capacity = 5;
    initList(&myList, capacity);

    append(&myList, 1);
    append(&myList, 2);
    append(&myList, 3);

    printf("����Ʈ ���: ");
    printList(&myList);

    freeList(&myList);

    return 0;
}

