
#ifndef _QUEUE_ARRAY_H_
#define _QUEUE_ARRAY_H_


#include"Plateform_DataTypes.h"
typedef struct
{
 void **QueueArray;
 uint32 QueueMaxSize;
 sint32 ElementCount;
 sint32 QueueFront;
 sint32 QueueRear;


} Queue_t;


typedef enum
{

QUEUE_NOK=0,
 QUEUE_OK,
 QUEUE_FULL,
 QUEUE_EMPTY

} QueueStatus_t;


Queue_t *CreateQueue(uint32 maxSize,QueueStatus_t *ret_status);
QueueStatus_t EenqueueElemnt(Queue_t *queue_obj,void *item_ptr);








#endif // _QUEUE_ARRAY_H_
