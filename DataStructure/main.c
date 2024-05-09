#include <stdio.h>
#include "LinkedList.h"

int main() {

    linkedList_h* L;
    listNode* p;

    L = createLinkedList_h();

    printf("(1) 공백 리스트 생성하기! \n");
    printList(L);

    printf("(2) 리스트에 [월], [수], [금] 노드 삽입하기! \n");
    insertLastNode(L, "월");
    insertLastNode(L, "수");
    insertLastNode(L, "금");
    printList(L);

    printf("(3) 리스트에서 [수] 노드 탐색하기! \n");
    p = searchNode(L, "수");
    if (p != NULL)
        printf("탐색 성공 : 찾은 데이터 = %s\n", p -> data);
    else
        printf("탐색 실패 : 찾는 데이터 없음\n");

    printf("(4) 리스트의 [수] 노드 뒤에 [목] 노드 삽입하기! \n");
    p = p -> link;
    insertMiddleNode(L, p, "금");
    printList(L);

    printf("(5) 리스트에서 [금] 노드 삭제하기! \n");
    p = searchNode(L, "금");
    deleteNode(L, p);
    printList(L);

    printf("(6) 리스트 순서를 역순으로 바꾸기! \n");
    reverse(L);
    printList(L);

    printf("\n(7) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
    freeLinkedList_h(L);
    printList(L);

    return 0;
}