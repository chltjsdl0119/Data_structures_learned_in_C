////
//// Created by 최승원 on 24. 5. 10.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include "InsertLinkedList.h"
//
//linkedList_h* createLinkedList_h(void) {
//    linkedList_h* L;
//    L = (linkedList_h*)malloc(sizeof(linkedList_h));
//    L -> head = NULL;
//    return L;
//}
//
//void freeLinkedList_h(linkedList_h* L) {
//    listNode* p;
//    while (L -> head != NULL) {
//        p = L -> head;
//        L -> head = L -> head -> link;
//        free(p);
//        p = NULL;
//    }
//}
//
//void printList(linkedList_h* L) {
//    listNode* p;
//    printf("L = (");
//    p = L -> head;
//    while (p != NULL) {
//        printf("%s", p -> data);
//        p = p -> link;
//        if (p != NULL)
//            printf(", ");
//    }
//    printf(")\n");
//}
//
//void insertFirstNode(linkedList_h* L, char* x) {
//    listNode* newNode;
//    newNode = (listNode*)malloc(sizeof(listNode));
//    strcpy(newNode -> data, x);
//    newNode -> link = L -> head;
//    L -> head = newNode;
//}
//
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
//    listNode* newNode;
//    newNode = (listNode*)malloc(sizeof(listNode));
//    strcpy(newNode -> data, x);
//    if (L -> head == NULL) {
//        newNode -> link = NULL;
//        L -> head = newNode;
//    } else if (pre == NULL) {
//        free(newNode);
//        printf("error\n");
//    } else {
//        newNode -> link = pre -> link;
//        pre -> link = newNode;
//    }
//}
//
//void insertLastNode(linkedList_h* L, char* x) {
//    listNode* newNode;
//    listNode* p;
//    newNode = (listNode*)malloc(sizeof(listNode));
//    strcpy(newNode -> data, x);
//    newNode -> link = NULL;
//    if (L -> head == NULL) {
//        L -> head = newNode;
//    } else {
//        p = L -> head;
//        while (p -> link != NULL)
//            p = p -> link;
//        p -> link = newNode;
//    }
//}