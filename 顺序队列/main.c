#include"SeqQueue.h"

int main()
{
          SeqQueue queue;
          InitSeqQueue(&queue);         //��ʼ��

          for (int i = 0; i < 5; ++i)
          {
                    if (!EnQueue(&queue, i))
                    {
                              printf("enqueue error!!\n");
                    }
          }

          DestroySeqQueue(&queue);                //�ݻ�
          return 0;
}