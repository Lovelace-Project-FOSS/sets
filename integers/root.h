#ifndef __SET__INTEGERS__H__
#define __SET__INTEGERS__H__
#include "sinttypes.h"

IntegerSet *create_IntSet(long int capacity);

void IntSet_free(IntegerSet *set);

void IntSet_cpy(IntegerSet *src, IntegerSet *dest);

// all fundamental set operations are implemented
void IntSet_union(IntegerSet *set1, IntegerSet *set2); // set2 is destination

void IntSet_intersection(IntegerSet *set1, IntegerSet *set2); // set2 is destination

void IntSet_difference(IntegerSet *set1, IntegerSet *set2); // set2 is destination

void IntSet_symmetric_difference(IntegerSet *set1, IntegerSet *set2); // set2 is destination

void IntSet_complement(IntegerSet *set);

// basic arithmetic operations are implemented
void IntSet_scale(IntegerSet *set, long long int factor);

// scalar operations are implemented (Set + Constant, Set * Constant)
void IntSet_add(IntegerSet *set, long long int constant);
void IntSet_multiply(IntegerSet *set, long long int constant); // Still 1D

// Index operations are implemented
void IntSet_add_S(IntegerSet *set1, IntegerSet *set2); // set2 is destination
void IntSet_multiply_S(IntegerSet *set1, IntegerSet *set2); // set2 is destination

// Standard set operations are implemented
void IntSet_cartesian_product(IntegerSet *set1, IntegerSet *set2, CartesianProduct *product); // set2 is destination

// Position operations are implemented
void IntSet_position(IntegerSet *set, long int location, Position *position);
long long int IntSet_value(IntegerSet *set, long int location);

void IntSet_modify(IntegerSet *set, long int location, long long int value);

// utility functions
void IntSet_print(IntegerSet *set);
void IntSet_resize(IntegerSet *set, long int capacity);

#endif