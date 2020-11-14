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
          int front;         //队头指针
          int rare; 		  //队尾指针
}SeqQueue;

/*顺序队列的初始化摧毁与清除功能*/
void InitSeqQueue(SeqQueue* Q);           //顺序队列的初始化
void ClearSeqQueue(SeqQueue* Q);           //顺序队列的清除
void DestroySeqQueue(SeqQueue* Q);           //顺序队列的摧毁

/*顺序队列的显示输出*/
void DisplaySeqQueue(SeqQueue* Q);           //顺序队列的输出

/*判空以及判满操作*/
BOOL IsQueueEmpty(SeqQueue Q);              //顺序队列的判空
BOOL IsQueueFull(SeqQueue Q);              //顺序队列的判满

/*入队以及出队操作*/
BOOL EnQueue(SeqQueue* Q, ElemType x);            //顺序队列的入队操作
BOOL DeQueue(SeqQueue* Q, ElemType* e);             //顺序队列的出队操作

/*其他功能*/
ElemType GetHead(SeqQueue Q);              //顺序队列获取队头的值
int length(SeqQueue Q);                 //顺序队列长度
