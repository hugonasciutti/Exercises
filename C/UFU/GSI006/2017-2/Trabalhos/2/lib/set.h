/*
    Caliton Marcos Gonçalves Junior - 11711BSI261
    Hugo Sousa Nasciutti -            11621BSI260
    Joao Barbosa de Souza Neto -      11711BSI212
*/

// Prototypes of struct set's functions

#include "set-def.h"

// setCard
// -------
// Return the cardinality of Set s.
int setCard (Set *s);

// setCreate
// ---------
// Create a set.
// Return a pointer to a Set or return NULL, in the case of malloc error.
Set * setCreate ();

// setDelete
// ---------
// Delete the element of position i in Set s.
void setDelete (int i, Set *s);

// setDestroy
// ----------
// Destroy Set s.
void setDestroy (Set *s);

// setGetE
// -------
// Get the i-th element of Set s (i = 0 means the first element in s).
// Return the pointer to the i-th element in s;
// or return NULL, if i >= s->N.
void * setGetE (Set *s, int i);

// setGetEP
// --------
// Get the element position of e in Set s.
// Return an integer (0..(s->N) - 1) that corresponds to the position of e in s;
// or return s->N, if e is not in s.
//
// cmp is a pointer to a comparison function which is provided by the application.
// This function compares whether x is less than, equal to, or greater than y,
// returning, respectively, a number less than, equal to, or greater than zero.
int setGetEP (void *e, Set *s, int (*cmp)(const void *x, const void *y));

// setIn
// -----
// Verify if element e is in Set s.
// Return 1, if e is in s; or return 0, otherwise.
//
// cmp is a pointer to a comparison function which is provided by the application.
// This function compares whether x is less than, equal to, or greater than y,
// returning, respectively, a number less than, equal to, or greater than zero.
int setIn (void *e, Set *s, int (*cmp)(const void *x, const void *y));

// setInsert
// ---------
// Insert element e into Set s.
// Return 1, if insertion occurred;
// or return 0, if insertion NOT occurred (s is full).
// It is up to the application verifying if e is already exists in s.
int setInsert (void *e, Set *s);

