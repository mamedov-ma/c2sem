#ifndef ifD
#define ifD 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//--------------------------------------------------------------
//структура области памяти
//--------------------------------------------------------------

typedef struct
{
	int * point;                                              //указатель на начало области
	int size;                                                  //размер области
} AllocPart;

//--------------------------------------------------------------
// структура задачи
//--------------------------------------------------------------
typedef struct  task_to_do{
    unsigned int pid;        //идентификатор задачи
    unsigned int time_act;   //время выполнения задачи
    unsigned int mem;        //количество памяти, нужное для размещения задачи
    unsigned int time_wait;  //время ожидания
    unsigned int status;     //статус: 0 - не поступила в очередь на исполнение
							 //		   1 - в очереди на исполнение
							 //		   2 - залилась в ОП
							 //		   3 - исполняется
							 //		   4 - выполнена
							 //		   5 - отклонена
	int *	 taken_mem;  //указатель на начало памяти, которое заняло данный task 
}Task;

//----------------------------------------------------------------------
// структура ноды, содержащей задачу
//----------------------------------------------------------------------

typedef struct Nod
{
	Task * 		 task;
	struct Nod * next;
	struct Nod * prev;
}Node;

//--------------------------------------------------------------
//структура листа памяти с задачами
//--------------------------------------------------------------

typedef struct Lst
{
	Node *head;
	Node *tail;
}List;


/*typedef struct nod
{
	AllocPart   *	task;
	struct nod * next;
	struct nod * prev;
}Node2;

typedef struct lst
{
	Node2 *head;
	Node2 *tail;
}List2;	*/

#endif