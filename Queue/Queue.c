#include <stdio.h>
#include <stdlib.h>
#include"Plateform_DataTypes.h"
#include"Queue.h"


////////////////////////////////////////////////////////////////////////
Queue_t *CreateQueue(uint32 maxSize,QueueStatus_t *ret_status)
{
    Queue_t *MyQueue;

   MyQueue=(Queue_t *)malloc(sizeof(Queue_t));
   if(NULL==MyQueue)
   {
      *ret_status=QUEUE_NOK;
   }
   else
   {
     MyQueue->QueueArray=(void **)calloc(maxSize,sizeof(void *));
     if(NULL==MyQueue->QueueArray)
     {
       *ret_status=QUEUE_NOK;
     }
     else
     {

     MyQueue->QueueFront=-1;
     MyQueue->QueueRear=-1;
     MyQueue->ElementCount=0;
     MyQueue->QueueMaxSize=maxSize;

      *ret_status=QUEUE_OK;
     }


     *ret_status=QUEUE_OK;
   }



   return MyQueue;
}

/////////////////////////////////////////////////
QueueStatus_t EenqueueElemnt(Queue_t *queue_obj,void *item_ptr)
{
   QueueStatus_t status= QUEUE_NOK;
   if((NULL==queue_obj)||(NULL==item_ptr))
   {
     status=QUEUE_NOK;
   }
    else
    {
        if(queue_obj->ElementCount==queue_obj->QueueMaxSize)
        {

         status=QUEUE_FULL;
        }
        else
        {
        (queue_obj->QueueRear)++;

        (queue_obj->ElementCount)++;
        if(queue_obj->QueueRear==queue_obj->QueueMaxSize)
        {
          queue_obj->QueueRear=0;
        }

           queue_obj->QueueArray[queue_obj->QueueRear]=item_ptr;
           if(queue_obj->ElementCount==0)
           {
             queue_obj->QueueFront=0;
             queue_obj->ElementCount=1;
           }
           else
           {
               (queue_obj->ElementCount)++;
           }

           status=QUEUE_OK;
        }

      status=QUEUE_OK;
    }


  return status;
}
////////////////////////////////////////////////////
void  * DequeueElemnt(Queue_t *queue_obj,QueueStatus_t *status)
{
      //QueueStatus_t status= QUEUE_NOK;
    void *ReturnedElem=NULL;

   if((NULL==queue_obj)||(NULL==status))
   {
     *status=QUEUE_NOK;

   }
    else
    {
        if(!queue_obj->ElementCount)
        {

           status=QUEUE_EMPTY;
            ReturnedElem=NULL;
        }
         else
         {

        ReturnedElem=queue_obj->QueueArray[queue_obj->QueueFront];
        (queue_obj->QueueFront++);

         }

      *status=QUEUE_OK;
    }


  //return () ;

}

///////////////////////////////////////////////
void  * queueFront(Queue_t *queue_obj,QueueStatus_t *status)
{

      QueueStatus_t status= QUEUE_NOK;
   if((NULL==queue_obj)||(NULL==status))
   {
     *status=QUEUE_NOK;
   }
    else
    {


      *status=QUEUE_OK;
    }


  return () ;

}
///////////////////////////////////////////////////
void  * queueRear(Queue_t *queue_obj,QueueStatus_t *status)
{


      QueueStatus_t status= QUEUE_NOK;
   if((NULL==queue_obj)||(NULL==status))
   {
     *status=QUEUE_NOK;
   }
    else
    {


      *status=QUEUE_OK;
    }


  return () ;
}
/////////////////////////////////////////////////////////////
QueueStatus_t GetQueueCount(Queue_t *queue_obj,uint32 *QueueCount)
{

      QueueStatus_t status= QUEUE_NOK;
   if((NULL==queue_obj)||(NULL==QueueCount))
   {
     status=QUEUE_NOK;
   }
    else
    {


      status=QUEUE_OK;
    }


  return status ;

}
////////////////////////////////////////////////////////////

QueueStatus_t DestroyQueue(Queue_t *queue_obj)
{
   QueueStatus_t status= QUEUE_NOK;
   if((NULL==queue_obj))
   {
     status=QUEUE_NOK;
   }
    else
    {


      status=QUEUE_OK;
    }


  return status;
}
//////////////////////////////////////////////////
