리스트란? 
: 물리적으로 흩어져 있는 자료들을 서로 연결하여 하나로 묶는 방법.

리스트의 응용?
데이터 저장 및 관리 : 리스트는 데이터를 저장하고 관리하는 데 사용됩니다. 예를 들어, 사용자 정보, 제품 목록, 성적표 등 다양한 데이터 유형을 리스트에 저장할 수 있습니다.

반복 작업 : 리스트는 반복 작업에 매우 유용합니다.반복문을 사용하여 리스트의 모든 요소를 하나씩 처리하거나 특정 조건을 만족하는 요소를 검색할 수 있습니다.

필터링과 검색 : 리스트에서 특정 조건을 만족하는 요소를 검색하거나, 원하지 않는 요소를 제거하는 작업에 리스트가 활용됩니다.이를 통해 데이터를 필터링하거나 검색할 수 있습니다. 
	

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
        printf("리스트가 가득 찼습니다.\n");
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

    printf("리스트 요소: ");
    printList(&myList);

    freeList(&myList);

    return 0;
}

