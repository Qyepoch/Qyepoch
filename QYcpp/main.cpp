//main
#include<iostream>
using namespace std;
#include"function.cpp"  //vc6.0���������function.h
#include"WangDao.cpp"

#if 0  //ע��1
int main()
{
    list *head=listinit();
    head->next=head;    //ѭ��������

    insertlist(head);   //����Ԫ��

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
    //Trapezoid();//���κ���
    //DieK();
    //LS_Dessert();
   //Trans_people();
   cout<<Is_Sane();
    return 0;
}
