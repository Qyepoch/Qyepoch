//function.h
#ifndef FUNCTION_H
#define FUNCTION_H

#include"struct.h"

//��ʼ�ڵ�
list *listinit();
//��������
int insertlist(list *head);
//ѭ������Ĳ���
list *insert_list(list *head,int pos,int data);

#endif // FUNCTION_H
