#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include"struct.h"

//��ʼ�ڵ�
list *listinit();
//��������
int insertlist(list *head);
//ѭ������Ĳ���
list *insert_list(list *head,int pos,int data);

#endif // FUNCTION_H_INCLUDED
