cmake_minimum_required(VERSION 3.28)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

add_executable(DataStructure main.c
        listS.h
        listS.c
        SparseMatrixTranspose.h
        SparseMatrixTranspose.c
        addPoly.h
        addPoly.c
        InsertLinkedList.h
        InsertLinkedList.c
        LinkedList.h
        LinkedList.c)
