#include "stdio.h"
#include "algo1_list.h"

void init_list(List *L)
{
    memset(L->data, 0, sizeof(L));
    L->length = 0;
}

Status list_empty(List *L)
{
    if(L->length == 0)
    {
        return TRUE;
    }else{
        return FALSE;
    }
}



int main()
{
    List l1;
    init_list(&l1);
    printf("Length %d", list_empty(&l1));
    return 0;

}