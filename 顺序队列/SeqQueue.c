#include"SeqQueue.h"

void InitSeqQueue(SeqQueue* Q)           //˳����еĳ�ʼ��
{
		  Q->base = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
		  assert(Q->base != NULL);
		  Q->front = Q->rare = 0;		//��ͷ��βָ��
}

void ClearSeqQueue(SeqQueue* Q)          //˳����е����
{
		  Q->front = Q->rare = 0;		//��ͷ��βָ��
}

void DestroySeqQueue(SeqQueue* Q)        //˳����еĴݻ�
{
		  free(Q->base);
		  Q->base = NULL;
		  Q->front = Q->rare = 0;
}

void DisplaySeqQueue(SeqQueue* Q)         //˳����е����
{
		  for (int i = Q->front; i < Q->rare; ++i)
		  {
					printf("%d   ", Q->base[i]);
		  }
}

BOOL IsQueueEmpty(SeqQueue Q)             //˳����е��п�
{
		  return Q.front == Q.rare;
}

BOOL IsQueueFull(SeqQueue Q)              //˳����е�����
{
		  return Q.rare >= MAXSIZE;
}

BOOL EnQueue(SeqQueue* Q, ElemType x)            //˳����е���Ӳ���
{
		  if (!IsQueueFull(*Q))
		  {
					Q->base[Q->rare++] = x;
					return TRUE;
		  }
		  else
		  {
					printf("�����������ܼ������");
					return FALSE;
		  }
}

BOOL DeQueue(SeqQueue* Q, ElemType* e)             //˳����еĳ��Ӳ���
{
		  if (!IsQueueEmpty(*Q))
		  {
					*e = Q->base[(Q->front++)];
					return TRUE;
		  }
		  else
		  {
					printf("����Ϊ�գ����ܳ���");
					return FALSE;
		  }
}

ElemType GetHead(SeqQueue Q)          //˳����л�ȡ��ͷ��ֵ
{
		  return  ((!IsQueueEmpty(Q)) ? Q.base[Q.front] : ERRCODE);
}

int length(SeqQueue Q)             //˳����г���
{
		  return (Q.rare - Q.front);
}