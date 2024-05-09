#include <stdio.h>
#include "InsertLinkedList.h"

int main() {

    linkedList_h* L;
    listNode* p;
    L = createLinkedList_h();
    printf("(1) 공백 리스트 생성하기! \n");
    printList(L);

    printf("(2) 리스트에 [월] 노드 삽입하기! \n");
    insertFirstNode(L, "월");
    printList(L);

    printf("(3) 리스트의 [월] 노드 뒤에 [수] 노드 삽입하기! \n");
    p = L -> head;
    insertMiddleNode(L, p, "수");
    printList(L);

    printf("(4) 리스트의 [수] 노드 뒤에 [금] 노드 삽입하기! \n");
    p = p -> link;
    insertMiddleNode(L, p, "금");
    printList(L);

    printf("(5) 리스트의 [수] 노드 뒤에 [목] 노드 삽입하기! \n");
    p = p -> link;
    insertMiddleNode(L, p, "목");
    printList(L);

    printf("\n(6) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
    freeLinkedList_h(L);
    printList(L);

    return 0;
}