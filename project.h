#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED
#define true 1
#define false 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//================================================================
// declaration struct


typedef struct
{
 int arr [8];
    int top ;
    int bottom;

}Stack;

//================================================================
//initialization function definition for every stack


void Init_1 (Stack*ptr_stack_1);
void Init_2 (Stack*ptr_stack_2);
void Init_3 (Stack*ptr_stack_3);
void Init_4 (Stack*ptr_stack_4);
void Init_5 (Stack*ptr_stack_5);
void Init_6 (Stack*ptr_stack_6);
void Init_7 (Stack*ptr_stack_7);
void Init_8 (Stack*ptr_stack_8);
void Init_9 (Stack*ptr_stack_9);
void Init_10 (Stack*ptr_stack_10);

//================================================================
//push function definition for every stack

int push_1 ( Stack *ptr_stack_1);
int push_2 ( Stack *ptr_stack_2);
int push_3 ( Stack *ptr_stack_3);
int push_4 ( Stack *ptr_stack_4);
int push_5 ( Stack*ptr_stack_5);
int push_6 ( Stack*ptr_stack_6);
int push_7 ( Stack *ptr_stack_7);
int push_8 ( Stack *ptr_stack_8);
int push_9 ( Stack *ptr_stack_9);
int push_10( Stack *ptr_stack_10);


//================================================================
//is empty function definition for every stack


int IS_empty_1(Stack*ptr_stack_1);
int IS_empty_2(Stack*ptr_stack_2);
int IS_empty_3(Stack*ptr_stack_3);
int IS_empty_4(Stack*ptr_stack_4);
int IS_empty_5(Stack*ptr_stack_5);
int IS_empty_6(Stack*ptr_stack_6);
int IS_empty_7(Stack*ptr_stack_7);
int IS_empty_8(Stack*ptr_stack_8);
int IS_empty_9(Stack*ptr_stack_9);
int IS_empty_10(Stack*ptr_stack_10);

//================================================================
//remove function definition for every stack


int stacksize_1(Stack*ptr_stack_1);
int stacksize_2(Stack*ptr_stack_2);
int stacksize_3(Stack*ptr_stack_3);
int stacksize_4(Stack*ptr_stack_4);
int stacksize_5(Stack*ptr_stack_5);
int stacksize_6(Stack*ptr_stack_6);
int stacksize_7(Stack*ptr_stack_7);
int stacksize_8(Stack*ptr_stack_8);
int stacksize_9(Stack*ptr_stack_9);
int stacksize_10(Stack*ptr_stack_10);

//================================================================

int id_list(Stack*ptr_stack_1,Stack*ptr_stack2,Stack*ptr_stack_3,Stack*ptr_stack_4,Stack*ptr_stack_5,Stack*ptr_stack_6,Stack*ptr_stack_7,Stack*ptr_stack_8,Stack*ptr_stack_9,Stack*ptr_stack_10);
int read(Stack*ptr_stack_1);
int is_exit(Stack*ptr_stack_1,Stack*ptr_stack_2,Stack*ptr_stack_3,Stack*ptr_stack_4,Stack*ptr_stack_5,Stack*ptr_stack_6,Stack*ptr_stack_7,Stack*ptr_stack_8,Stack*ptr_stack_9,Stack*ptr_stack_10);



#endif // PROJECT_H_INCLUDED

