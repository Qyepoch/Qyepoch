//main

#include<iostream>	
using namespace std;
#include"function.h"

int main()
{
    list *head=listinit();
    head->next=head;    //Ñ­»·µ¥Á´±í

    insertlist(head);

    list *l=head;
    do{
        cout<<l->data<<endl;
        l=l->next;
    }while(l->next!=head);

    return 0;
}
