#ifndef __SINTTYPES_H__
#define __SINTTYPES_H__

typedef struct IntegerSet {
    // very similar to a vector
    long long int* data;

    // number of elements in the set, maximum of long
    long int size;

    // number of elements in the set, maximum of long
    long int capacity;
} IntegerSet;

typedef struct Position {
    long int location;
    long long int value;
} Position;

typedef struct CartesianProduct {
    long long int** data; // 2D array
    long int size;
    long int capacity;
} CartesianProduct;

#endif