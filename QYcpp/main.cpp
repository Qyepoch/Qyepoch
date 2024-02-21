//main
#include<iostream>
using namespace std;
#include"function.cpp"  //vc6.0中引入的是function.h
#include"WangDao.cpp"

#if 0  //注释1
int main()
{
    list *head=listinit();
    head->next=head;    //循环单链表

    insertlist(head);   //插入元素

    list *l=head;
    do{
        cout<<l->data<<endl;
        l=l->next;
    }while(l->next!=head);

    return 0;
}
#endif // 0
int main()
{
    //Trapezoid();//矩形函数
    //DieK();
    //LS_Dessert();
   //Trans_people();
   cout<<Is_Sane();
    return 0;
}
