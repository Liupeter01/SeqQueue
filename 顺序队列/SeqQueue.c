#include"SeqQueue.h"

void InitSeqQueue(SeqQueue* Q)           //顺序队列的初始化
{
		  Q->base = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
		  assert(Q->base != NULL);
		  Q->front = Q->rare = 0;		//队头队尾指针
}

void ClearSeqQueue(SeqQueue* Q)          //顺序队列的清除
{
		  Q->front = Q->rare = 0;		//队头队尾指针
}

void DestroySeqQueue(SeqQueue* Q)        //顺序队列的摧毁
{
		  free(Q->base);
		  Q->base = NULL;
		  Q->front = Q->rare = 0;
}

void DisplaySeqQueue(SeqQueue* Q)         //顺序队列的输出
{
		  for (int i = Q->front; i < Q->rare; ++i)
		  {
					printf("%d   ", Q->base[i]);
		  }
}

BOOL IsQueueEmpty(SeqQueue Q)             //顺序队列的判空
{
		  return Q.front == Q.rare;
}

BOOL IsQueueFull(SeqQueue Q)              //顺序队列的判满
{
		  return Q.rare >= MAXSIZE;
}

BOOL EnQueue(SeqQueue* Q, ElemType x)            //顺序队列的入队操作
{
		  if (!IsQueueFull(*Q))
		  {
					Q->base[Q->rare++] = x;
					return TRUE;
		  }
		  else
		  {
					printf("队列已满不能继续入队");
					return FALSE;
		  }
}

BOOL DeQueue(SeqQueue* Q, ElemType* e)             //顺序队列的出队操作
{
		  if (!IsQueueEmpty(*Q))
		  {
					*e = Q->base[(Q->front++)];
					return TRUE;
		  }
		  else
		  {
					printf("队列为空，不能出队");
					return FALSE;
		  }
}

ElemType GetHead(SeqQueue Q)          //顺序队列获取队头的值
{
		  return  ((!IsQueueEmpty(Q)) ? Q.base[Q.front] : ERRCODE);
}

int length(SeqQueue Q)             //顺序队列长度
{
		  return (Q.rare - Q.front);
}