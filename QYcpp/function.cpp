//function.cpp
#include"function.h"
#include"struct.h"
#include<iostream>
using namespace std;
#include<cstdlib>>

//��ʼ�ڵ�
list *listinit(){
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
list *insert_list(list *head,int pos,int data){
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
//ѭ��������dataԪ�ص�ɾ��
int delete_list(list *head){
    if(head==NULL){
        cout<<"����Ϊ�գ�"<<endl;
        return 0;
    }   //ѭ�������ҵ����һ��Ԫ��ʱ�Զ�ָ��ͷԪ��
    list *temp=head;
    list *ptr=head->next;

    int del;
    cout<<"��������Ҫɾ����Ԫ�أ�";
    cin>>del;
    while(ptr!=head){
        if(ptr->data==del){
            if(ptr->next==head){    //ptr��ָΪ���һ��Ԫ��
                temp->next=head;
                free(ptr);
                return 1;   //�쳣����
            }
            temp->next=ptr->next;
            free(ptr);
            return 1;
        }
        temp=temp->next;
        ptr=ptr->next;
    }
    cout<<"û���ҵ�Ҫɾ����Ԫ��"<<endl;
    return 0;   //������������
    }
