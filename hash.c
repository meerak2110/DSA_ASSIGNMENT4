//Assignment 4
// Hashing
//Name:Meera Kurup
//Date:12-04-2024

//hash.c


#include"hash.h"

#include <stdio.h>

int h1(int k, int M) {
    return k % M;
}

int h2(int k, int R) {
    return R - (k % R);
}

int h(int k, int M, int R, int i) {
    return (h1(k, M) + i * h2(k, R)) % M;
}

void hashInit(int* hashTable, int* input, int M, int R) {
    for (int i = 0; i < M; i++) {
        hashTable[i] = -1; // initialize all elements to -1 
    }

    for (int j = 0; j < M; j++) {
        int index = h(input[j], M, R, 0); // initial  index
        int i = 1;
        while (hashTable[index] != -1) {
            index = h(input[j], M, R, i); // double hashing to handle collisions
            i++;
        }
        hashTable[index] = input[j];
    }
}


//  to print contents of hash table
void printHashTable(int* hashTable, int M) {
    printf("Hash Table Contents:\n");
    for (int i = 0; i < M; i++) {
        printf("%d: %d\n", i, hashTable[i]);
    }
}
