#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include"struct.h"

//初始节点
list *listinit();
//插入数据
int insertlist(list *head);
//循环链表的插入
list *insert_list(list *head,int pos,int data);

#endif // FUNCTION_H_INCLUDED
