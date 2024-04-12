//Assignment 4
// Hashing
//Name:Meera Kurup
//Date:12-04-2024

//hash.h

#pragma once

#include <stdio.h>
#include <stdlib.h>

// function prototypes
int h1(int key, int M);
int h2(int key, int R);
int h(int k, int M, int R, int i);
void hashInit(int* hashTable, int* input, int M, int R);
void printHashTable(int* hashTable, int M);
