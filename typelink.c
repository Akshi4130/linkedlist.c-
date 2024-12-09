#include "LINKEDLIST.h"
int main()
{
    struct node*start=NULL;
    add_beg(&start,10);
    add_beg(&start,20);
    add_beg(&start,30);
    add_beg(&start,40);
    add_last(&start,90);
    delete_Beg(start);
    delete_End(&start);                                                                                                                                                                                                                                                                                                                                          
    show(start);
}