#include <stdio.h>
#include <stdlib.h>
#include"Plateform_DataTypes.h"
#include"Queue.h"


uint32 Queue1MaxElem=0;
Queue_t *Queue1=NULL;
int main()
{
    QueueStatus_t ReturnQueueStatus=QUEUE_NOK;
    printf("please inter number of elements of the queue :  ");
    scanf("%i",&Queue1MaxElem);

    Queue1=CreateQueue(Queue1MaxElem,&ReturnQueueStatus);




    return 0;
}
