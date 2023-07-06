# Hash Tables

This repository contains C programs that demonstrate the implementation of hash tables and related operations.

## Files

The repository contains the following files:

1. `hash_tables.h`: This header file defines the data structures and 2- function prototypes for working with hash tables.

2. `0-hash_table_create.c`: This file contains the implementation of the hash_table_create function, which creates a hash table.

3. `1-djb2.c`: This file contains the implementation of the hash_djb2 function, which implements the djb2 hash algorithm.

4. `0-main.c`: This file provides a sample program to test the hash_table_create function.

5. `1-main.c`: This file provides a sample program to test the hash_djb2 function.


## Compilation and Usage

To compile the programs, use the following command:

```shell

gcc -Wall -Werror -Wextra -pedantic -std=c89 <filename.c> -o <output_file>

```

## Task Descriptions
### Task 0: hash_table_create

In this task, we implement a function hash_table_create that creates a hash table.

Prototype: `hash_table_t *hash_table_create(unsigned long int size);`

1. The size parameter represents the size of the hash table array.

2. The function returns a pointer to the newly created hash table.

3. If something went wrong during the creation of the hash table, the function returns NULL.

Usage Examples
Example 1: Creating a Hash Table

```c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
---------------
Output: run with valgrind
---------------
valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```

### Task 1: djb2

In this task, we implement the hash_djb2 function, which implements the djb2 hash algorithm.

Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

The str parameter is a string that will be hashed.

1. The function returns the hash value calculated using the djb2 algorithm.


```c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}

================
Output:
================
6953392314605
237
3749890792216096085
341
5861846
470
=================
```
