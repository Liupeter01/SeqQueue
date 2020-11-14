#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>

#define ElemType int
#define MAXSIZE 8
#define ERRCODE 0x7FF

typedef struct SeqQueue
{
          ElemType* base;
          int front;         //��ͷָ��
          int rare; 		  //��βָ��
}SeqQueue;

/*˳����еĳ�ʼ���ݻ����������*/
void InitSeqQueue(SeqQueue* Q);           //˳����еĳ�ʼ��
void ClearSeqQueue(SeqQueue* Q);           //˳����е����
void DestroySeqQueue(SeqQueue* Q);           //˳����еĴݻ�

/*˳����е���ʾ���*/
void DisplaySeqQueue(SeqQueue* Q);           //˳����е����

/*�п��Լ���������*/
BOOL IsQueueEmpty(SeqQueue Q);              //˳����е��п�
BOOL IsQueueFull(SeqQueue Q);              //˳����е�����

/*����Լ����Ӳ���*/
BOOL EnQueue(SeqQueue* Q, ElemType x);            //˳����е���Ӳ���
BOOL DeQueue(SeqQueue* Q, ElemType* e);             //˳����еĳ��Ӳ���

/*��������*/
ElemType GetHead(SeqQueue Q);              //˳����л�ȡ��ͷ��ֵ
int length(SeqQueue Q);                 //˳����г���
