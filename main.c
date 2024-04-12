//Assignment 4
// Hashing
//Name:Meera Kurup
//Date:12-04-2024

//main.c

#include"hash.h"

int main() {
    int input[] = { 764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507 };
    int M = 11;
    int R = 7;
    int* hashTable = (int*)malloc(M * sizeof(int));

    // to crate the tabel
    hashInit(hashTable, input, M, R);

    // to print the table
    printHashTable(hashTable, M);

    // to free the dynamically allocated memory
    free(hashTable);
    
    return 0;
}
