#include"function.h"
#include"struct.h"
#include<iostream>
using namespace std;
#include<cstdlib>>

//��ʼ�ڵ�
list * listinit(){
    list *head=(list*)malloc(sizeof(list));
    if(head==NULL){
        cout<<"����ʧ�ܣ�"<<endl;
        exit(0);
    }else{
        head->next=NULL;
        head->data=0;
        return head;
    }
}
//��������
int insertlist(list *head){
    int x;
    cout<<"������Ҫ�����Ԫ��:";
    cin>>x;
    list *node=listinit();
    node->data=x;
    if(head!=NULL){
        list *p=head;
        while(p->next!=head){   //�����һ��Ԫ��
            p=p->next;
        }
        p->next=node;
        node->next=head;
        return 1;
    }else{
        cout<<"ͷ�ڵ�����Ԫ��"<<endl;
        return 0;
    }
}
//ѭ������Ĳ���
list * insert_list(list *head,int pos,int data){
    list *node=listinit();  //�½��ڵ�
    list *p=head;   //p��ʾ�µ�����
    list *t;
    t=p;
    node->data=data;
    if(head!=NULL){
        for(int i=1;i<pos;i++){
            t=t->next;
        }
        node->next=t->next;
        t->next=node;   //�ߵ���Ҫ�����λ�ô�
        return p;
    }
    return p;
}
