#include"function.h"
#include"struct.h"
#include<iostream>
using namespace std;
#include<cstdlib>>

//初始节点
list * listinit(){
    list *head=(list*)malloc(sizeof(list));
    if(head==NULL){
        cout<<"创建失败！"<<endl;
        exit(0);
    }else{
        head->next=NULL;
        head->data=0;
        return head;
    }
}
//插入数据
int insertlist(list *head){
    int x;
    cout<<"请输入要插入的元素:";
    cin>>x;
    list *node=listinit();
    node->data=x;
    if(head!=NULL){
        list *p=head;
        while(p->next!=head){   //找最后一个元素
            p=p->next;
        }
        p->next=node;
        node->next=head;
        return 1;
    }else{
        cout<<"头节点已无元素"<<endl;
        return 0;
    }
}
//循环链表的插入
list * insert_list(list *head,int pos,int data){
    list *node=listinit();  //新建节点
    list *p=head;   //p表示新的链表
    list *t;
    t=p;
    node->data=data;
    if(head!=NULL){
        for(int i=1;i<pos;i++){
            t=t->next;
        }
        node->next=t->next;
        t->next=node;   //走到需要插入的位置处
        return p;
    }
    return p;
}
