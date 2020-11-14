#include"SeqQueue.h"

int main()
{
          SeqQueue queue;
          InitSeqQueue(&queue);         //≥ı ºªØ

          for (int i = 0; i < 5; ++i)
          {
                    if (!EnQueue(&queue, i))
                    {
                              printf("enqueue error!!\n");
                    }
          }

          DestroySeqQueue(&queue);                //¥›ªŸ
          return 0;
}