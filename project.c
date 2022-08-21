#include<stdio.h>
#include "project.h"
#define true 1
#define false 0

//================================================================
//initialization function for every stack

void Init_1 (Stack*ptr_stack_1)
{
    ptr_stack_1 ->top = -1 ;
    ptr_stack_1 ->bottom = ptr_stack_1->arr[0];
}
//................................................................
void Init_2 (Stack*ptr_stack_2)
{
    ptr_stack_2 ->top = -1 ;
    ptr_stack_2 ->bottom = ptr_stack_2->arr[0];
}
//................................................................
void Init_3 (Stack*ptr_stack_3)
{
    ptr_stack_3 ->top = -1 ;
    ptr_stack_3 ->bottom = ptr_stack_3->arr[0];
}
//................................................................
void Init_4 (Stack*ptr_stack_4)
{
    ptr_stack_4 ->top = -1 ;
    ptr_stack_4 ->bottom = ptr_stack_4->arr[0];
}
//................................................................
void Init_5 (Stack*ptr_stack_5)
{
    ptr_stack_5 ->top = -1 ;
    ptr_stack_5 ->bottom = ptr_stack_5->arr[0];
}
//................................................................
void Init_6 (Stack*ptr_stack_6)
{
    ptr_stack_6 ->top = -1 ;
    ptr_stack_6 ->bottom = ptr_stack_6->arr[0];
}
//................................................................
void Init_7 (Stack*ptr_stack_7)
{
    ptr_stack_7 ->top = -1 ;
    ptr_stack_7 ->bottom = ptr_stack_7->arr[0];
}
//................................................................
void Init_8 (Stack*ptr_stack_8)
{
    ptr_stack_8 ->top = -1 ;
    ptr_stack_8 ->bottom = ptr_stack_8->arr[0];
}
//................................................................
void Init_9 (Stack*ptr_stack_9)
{
    ptr_stack_9 ->top = -1 ;
    ptr_stack_9 ->bottom = ptr_stack_9->arr[0];
}
//................................................................
void Init_10 (Stack*ptr_stack_10)
{
    ptr_stack_10 ->top = -1 ;
    ptr_stack_10 ->bottom = ptr_stack_10->arr[0];
}//................................................................


//================================================================
//is empty function for every stack



int IS_empty_1(Stack*ptr_stack_1)
{
    if(ptr_stack_1->top == -1)
        return true ;
    else
        return false ;
}
//................................................................


int IS_empty_2(Stack*ptr_stack_2)
{
    if(ptr_stack_2->top == -1)
        return true ;
    else
        return false ;
}
//................................................................


int IS_empty_3(Stack*ptr_stack_3)
{
    if(ptr_stack_3->top == -1)
        return true ;
    else
        return false ;
}
//................................................................


int IS_empty_4(Stack*ptr_stack_4)
{
    if(ptr_stack_4->top == -1)
        return true ;
    else
        return false ;
}
//................................................................


int IS_empty_5(Stack*ptr_stack_5)
{
    if(ptr_stack_5->top == -1)
        return true ;
    else
        return false ;
}

//................................................................

int IS_empty_6(Stack*ptr_stack_6)
{
    if(ptr_stack_6->top== -1)
        return true ;
    else
        return false;
}
//................................................................
int IS_empty_7(Stack*ptr_stack_7)
{
    if(ptr_stack_7->top== -1)
        return true ;
    else
        return false;
}
//................................................................
int IS_empty_8(Stack*ptr_stack_8)
{
    if(ptr_stack_8->top== -1)
        return true ;
    else
        return false;
}
//................................................................
int IS_empty_9(Stack*ptr_stack_9)
{
    if(ptr_stack_9->top== -1)
        return true ;
    else
        return false;
}
//................................................................
int IS_empty_10(Stack*ptr_stack_10)
{
    if(ptr_stack_10->top== -1)
        return true ;
    else
        return false;
}
//................................................................

//================================================================
//push function for every stack

//................................................................
int element ;
int push_1 ( Stack *ptr_stack_1)
{
    if(ptr_stack_1->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_1->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

            ptr_stack_1->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_1->arr[ptr_stack_1->top] = element ;

        return 1;
        }
}
//................................................................
int push_2 ( Stack *ptr_stack_2)
{
    if(ptr_stack_2->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_2->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

            ptr_stack_2->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_2->arr[ptr_stack_2->top] = element ;

        return 1;
        }
}
//................................................................
int push_3 ( Stack *ptr_stack_3)
{
    if(ptr_stack_3->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_3->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

            ptr_stack_3->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_3->arr[ptr_stack_3->top] = element ;

        return 1;
        }
}
//................................................................
int push_4 ( Stack *ptr_stack_4)
{
    if(ptr_stack_4->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_4->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

            ptr_stack_4->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_4->arr[ptr_stack_4->top] = element ;

        return 1;
        }
}
//................................................................
int push_5 ( Stack *ptr_stack_5)
{
    if(ptr_stack_5->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_5->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

            ptr_stack_5->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_5->arr[ptr_stack_5->top] = element ;

        return 1;
        }
}
//................................................................
int push_6 ( Stack *ptr_stack_6)
{
    if(ptr_stack_6->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_6->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 2 grade : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

            ptr_stack_6->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_6->arr[ptr_stack_6->top] = element ;

        return 1;

        }
}
//................................................................
int push_7 ( Stack *ptr_stack_7)
{
    if(ptr_stack_7->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_7->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 2 grade");
            scanf("%d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

            ptr_stack_7->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_7->arr[ptr_stack_7->top] = element ;

        return 1;
        }}
//................................................................
int push_8 ( Stack *ptr_stack_8)
{
    if(ptr_stack_8->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_8->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 2 grade");
            scanf("%d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

            ptr_stack_8->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_8->arr[ptr_stack_8->top] = element ;

        return 1;
        }}
//................................................................
int push_9 ( Stack *ptr_stack_9)
{
    if(ptr_stack_9->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_9->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 2 grade");
            scanf("%d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

            ptr_stack_9->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_9->arr[ptr_stack_9->top] = element ;

        return 1;
        }}
//................................................................
int push_10 ( Stack *ptr_stack_10)
{
    if(ptr_stack_10->top == 8-1)

        return 0 ;
    else
        {
            ptr_stack_10->top ++ ;
            printf ("\n Enter the student id : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the student year : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 1 id : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 1 grade : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 2 id : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 2 grade");
            scanf("%d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 3 id : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

            ptr_stack_10->top ++ ;
            printf ("\n Enter the course 3 grade : ");
            scanf(" %d",&element);
            ptr_stack_10->arr[ptr_stack_10->top] = element ;

        return 1;
        }}
//=====================================================================
// get size

int stacksize_1(Stack*ptr_stack_1)
{
    if(ptr_stack_1->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_1->top +1);
    }
}
//-----------------------------------------------
int stacksize_2(Stack*ptr_stack_2)
{
    if(ptr_stack_2->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_2->top +1);
    }
}
//-----------------------------------------------

int stacksize_3(Stack*ptr_stack_3)
{
    if(ptr_stack_3->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_3->top +1);
    }
}
//-----------------------------------------------
int stacksize_4(Stack*ptr_stack_4)
{
    if(ptr_stack_4->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_4->top +1);
    }
}
//-----------------------------------------------
int stacksize_5(Stack*ptr_stack_5)
{
    if(ptr_stack_5->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_5->top +1);
    }
}
//-----------------------------------------------
int stacksize_6(Stack*ptr_stack_6)
{
    if(ptr_stack_6->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_6->top +1);
    }
}
//-----------------------------------------------
int stacksize_7(Stack*ptr_stack_7)
{
    if(ptr_stack_7->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_7->top +1);
    }
}
//-----------------------------------------------
int stacksize_8(Stack*ptr_stack_8)
{
    if(ptr_stack_8->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_8->top +1);
    }
}
//-----------------------------------------------
int stacksize_9(Stack*ptr_stack_9)
{
    if(ptr_stack_9->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_9->top +1);
    }
}
//-----------------------------------------------
int stacksize_10(Stack*ptr_stack_10)
{
    if(ptr_stack_10->top == -1)
    {
        return 0;
    }else
    {
        return (ptr_stack_10->top +1);
    }
}
//==============================================================================================
int id_list(Stack*ptr_stack_1,Stack*ptr_stack_2,Stack*ptr_stack_3,Stack*ptr_stack_4,Stack*ptr_stack_5,Stack*ptr_stack_6,Stack*ptr_stack_7,Stack*ptr_stack_8,Stack*ptr_stack_9,Stack*ptr_stack_10)
{
            if (ptr_stack_1->top != -1)
            {

                printf("%d\n",ptr_stack_1->arr[0]);
            }

     //............................................
            if (ptr_stack_2->top!= -1)
            {
                printf("%d\n",ptr_stack_2->arr[0]);
            }
     //............................................
            if (ptr_stack_3->top == -1)
            {
                ptr_stack_3->arr[0] = false;
                printf("%d\n",ptr_stack_3->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_3->arr[0]);
            }
     //............................................
            if (ptr_stack_4->top == -1)
            {
                ptr_stack_4->arr[0] = false;
                printf("%d\n",ptr_stack_4->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_4->arr[0]);
            }
     //............................................
            if (ptr_stack_5->top == -1)
            {
                ptr_stack_5->arr[0] = false;
                printf("%d\n",ptr_stack_5->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_5->arr[0]);
            }
     //............................................
            if (ptr_stack_6->top == -1)
            {
                ptr_stack_6->arr[0] = false;
                printf("%d\n",ptr_stack_6->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_6->arr[0]);
            }
     //............................................
            if (ptr_stack_7->top == -1)
            {
                ptr_stack_7->arr[0] = false;
                printf("%d\n",ptr_stack_7->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_7->arr[0]);
            }
     //............................................
            if (ptr_stack_8->top == -1)
            {
                ptr_stack_8->arr[0] = false;
                printf("%d\n",ptr_stack_8->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_8->arr[0]);
            }
     //............................................
            if (ptr_stack_9->top == -1)
            {
                ptr_stack_9->arr[0] = false;
                printf("%d\n",ptr_stack_9->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_9->arr[0]);
            }
     //............................................
            if (ptr_stack_10->top == -1)
            {
                ptr_stack_10->arr[0] = false;
                printf("%d\n",ptr_stack_10->arr[0]);
            }else
            {
                printf("%d\n",ptr_stack_10->arr[0]);
            }
}


int id ;
int is_exit(Stack*ptr_stack_1,Stack*ptr_stack_2,Stack*ptr_stack_3,Stack*ptr_stack_4,Stack*ptr_stack_5,Stack*ptr_stack_6,Stack*ptr_stack_7,Stack*ptr_stack_8,Stack*ptr_stack_9,Stack*ptr_stack_10)
{
    printf("insert the id: ",id);
    scanf("%d",&id);
    if(ptr_stack_1->arr[0] == id)
        printf("                    the id is exit ");
    else if (ptr_stack_2->arr[0] == id)
        printf("                    the id is exit ");
    else if (ptr_stack_3->arr[0] ==id)
        printf("                    the id is exit ");
    else if (ptr_stack_4->arr[0] ==id)
        printf("                    the id is exit ");
    else if (ptr_stack_5->arr[0]== id)
        printf("                    the id is exit ");
    else if (ptr_stack_6->arr[0] ==id)
        printf("                    the id is exit ");
    else if (ptr_stack_7->arr[0] == id)
        printf("                    the id is exit ");
    else if (ptr_stack_8->arr[0]== id)
        printf("                    the id is exit ");
    else if (ptr_stack_9->arr[0]== id)
        printf("                    the id is exit ");
    else if (ptr_stack_10->arr[0]== id)
        printf("                    the id is exit ");
    else
        printf("                    the id is not exit ");

}

