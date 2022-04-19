#include "stdio.h"
#include "memory.h"

// Define macros
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

// Define alias
typedef int ElementType;
typedef int Status;

//Define structure
typedef struct
{
    ElementType data[MAXSIZE];
    int length;
}List;


//Init List
void init_list(List *L);

//Check wheather list is empty or not
Status list_empty(List *L);

//Clear list
void clear_list(List *L);

//Get element 
Status get_elem(List L, int i, ElementType *e);

//Get element position
Status locate_elem(List L, ElementType e);

//Insert new element
Status list_insert(List *L, int i, ElementType e);

//Delete element
Status list_delete(List *L, int i, ElementType *e);

//Get list length
Status list_length(List L);
