#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dlistint_t {
    int n;
    struct dlistint_t *next;
    struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
#endif
