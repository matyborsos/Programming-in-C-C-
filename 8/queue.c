/* CH-230-A
   a8 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item pitem, Queue *pq)
{
	Node *newel = (Node *) malloc(sizeof(Node));
    if(newel == NULL)
    {
        printf (" Error allocating memory \n");
        return -1;
    }
    // dynamically allocates memory for the new node
    if(queue_is_full( pq ))
        return -1;
    // checks if the queue is full
	newel -> item = pitem;
	// copy item to the node
	newel -> next = NULL;
	// sets next pointer to NULL
	if(queue_is_empty( pq )){ // checks if the queue is empty
        pq -> front = newel;
        // sets front node if queue was empty
	}
    else{
        pq -> rear -> next = newel;
        // sets current rear node's next pointer
        // to new node if queue already exists
    }
    pq -> rear = newel;
    // sets rear pointer to new node
    pq -> items = pq -> items + 1;
    // it also increases the number of items
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	if(queue_is_empty(pq))
        return -1;
    // checks if the queue is empty
    *pitem = pq -> front -> item;
    // copy item to waiting variable
    pq -> front = pq -> front -> next;
    // resets front pointer to the next item in queue
    free(pitem);
    // free memory
    if(queue_is_empty(pq)) // checks if the queue is empty
        initialize_queue(pq);
        // resets front and rear pointers to NULL, if last item is removed
    else
        pq -> items = pq -> items - 1;
        // if not, decrement item count
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue pq)
{
    while(pq.front !=NULL) // loops as long as there are elements in the queue
    {
        printf("%d ",pq.front ->item); // prints the elementss
        pq.front = pq.front ->next; // moves inside the queue
    }
    // This won't effect the queue, because it is not transmitted by reference
}
