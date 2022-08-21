#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int main()
{
Stack stack_1,stack_2,stack_3,stack_4,stack_5,stack_6,stack_7,stack_8,stack_9,stack_10;
int counter,studint_id, studint_year, course1_id, course1_grade, course2_id, course2_grade, course3_id, course3_grade, id,size,size1,size2,size3,size4,size5,size6,size7,size8,size9,size10,ide;
char TOF;

    Stack*ptr_stack_1 = &stack_1;
    Stack*ptr_stack_2 = &stack_2;
    Stack*ptr_stack_3 = &stack_3;
    Stack*ptr_stack_4 = &stack_4;
    Stack*ptr_stack_5 = &stack_5;
    Stack*ptr_stack_6 = &stack_6;
    Stack*ptr_stack_7 = &stack_7;
    Stack*ptr_stack_8 = &stack_8;
    Stack*ptr_stack_9 = &stack_9;
    Stack*ptr_stack_10 = &stack_10;


    Init_1 (ptr_stack_1);
    Init_2 (ptr_stack_2);
    Init_3 (ptr_stack_3);
    Init_4 (ptr_stack_4);
    Init_5 (ptr_stack_5);
    Init_6 (ptr_stack_6);
    Init_7 (ptr_stack_7);
    Init_8 (ptr_stack_8);
    Init_9 (ptr_stack_9);
    Init_10 (ptr_stack_10);


    //int element ;
    //int*ptr_element = &element ;

    while (true)
    {
        int choose = 0;
        printf ("\n Welcome to avanger company  \n Please choose your option: \n ======================================\n (1) Check if the database is full \n (2) Add student \n (3) Remove student \n (4) Search by id \n (5) Get the numder of entries \n (6) Get the list of IDs of the students \n (7) Enter ID to check if it is exist \n(8) exist  \n");
        scanf(" %d", &choose);
        if(choose == 8)
        {
            break ;
        }
        switch (choose)
        {
//==============================================================================
            case 1 :
            if (IS_empty_1(ptr_stack_1)==true)
            {
            printf ("\nthe database is not full\n");
            break;
            }
            else if (IS_empty_2(ptr_stack_2)==true)
            {
            printf ("                         the database is not full\n");
            break;
            }
            else if (IS_empty_3(ptr_stack_3)==true)
            {
            printf ("                        \n the database is not full\n");
            break;
            }
            else if (IS_empty_4(ptr_stack_4)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_5(ptr_stack_5)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_6(ptr_stack_6)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_7(ptr_stack_7)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_8(ptr_stack_8)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_9(ptr_stack_9)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else if (IS_empty_10(ptr_stack_10)==true)
            {
            printf ("                         \n the database is not full\n");
            break;
            }
            else
            {
                printf ("                        \n the database is full                  \n TRUE");
            }
            break;
//==============================================================================

            case 2 : if (IS_empty_1(ptr_stack_1)==true)
            {
                push_1 (ptr_stack_1);
                break;
            }


            else if (IS_empty_2(ptr_stack_2)==true)
            {
                push_2 (ptr_stack_2);
                break;
            }


            else if (IS_empty_3(ptr_stack_3)==true)
            {
                push_3 (ptr_stack_3);
                break;
            }


            else if (IS_empty_4(ptr_stack_4)==true)
            {
                push_4 (ptr_stack_4);
                break;
            }


            else if (IS_empty_5(ptr_stack_5)==true)
            {
                push_5 (ptr_stack_5);
                break;
            }


            else if (IS_empty_6(ptr_stack_6)==true)
            {
                push_6 (ptr_stack_6);
                break;
            }


            else if (IS_empty_7(ptr_stack_7)==true)
            {
                push_7 (ptr_stack_7);
                break;
            }

            else if (IS_empty_8(ptr_stack_8)==true)
            {
                push_8 (ptr_stack_8);
                break;
            }


            else if (IS_empty_9(ptr_stack_9)==true)
            {
                push_9 (ptr_stack_9);
                break;
            }

            else if (IS_empty_10(ptr_stack_10)==true)
            {
                push_10 (ptr_stack_10);
                break;
            }

            else
            {
                printf ("\n sorry the database is full \n");
            }
                break ;
//==============================================================================
            case 3 :
                printf("the id that you will remove: ");
                scanf("%d",&id);
             if (id == ptr_stack_1->arr[0])
            {
                ptr_stack_1->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_2->arr[0])
            {

                ptr_stack_2->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_3->arr[0])
            {

                ptr_stack_3->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_4->arr[0])
            {

                ptr_stack_4->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_5->arr[0])
            {

                ptr_stack_5->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_6->arr[0])
            {

                ptr_stack_6->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_7->arr[0])
            {
                ptr_stack_7->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_8->arr[0])
            {
                ptr_stack_8->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_9->arr[0])
            {
                ptr_stack_9->top = -1;
                printf ("\n Removing done successfully");
            }
             else if (id == ptr_stack_10->arr[0])
            {
                ptr_stack_10->top = -1;
                printf ("\n Removing done successfully");
            }
             else
            {
                printf ("\n This id is not exist\n");
            }
             break;
//==============================================================================
            case 4 :
                printf ("please enter the id : ");
            scanf(" %d", &id);
            if (id == ptr_stack_1->arr[0])
            {
                if(ptr_stack_1->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_1->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_1->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_1->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_1->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_1->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_1->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_1->arr[7]);
            }else
                 printf("the id is not found ");
            }
//*****************************************************************************
            if (id == ptr_stack_2->arr[0])
            {
                if(ptr_stack_2->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_2->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_2->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_2->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_2->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_2->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_2->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_2->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_3->arr[0])
            {
                if(ptr_stack_3->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_3->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_3->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_3->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_3->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_3->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_3->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_3->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_4->arr[0])
            {
                if(ptr_stack_4->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_4->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_4->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_4->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_4->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_4->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_4->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_4->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_5->arr[0])
            {
                if(ptr_stack_5->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_5->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_5->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_5->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_5->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_5->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_5->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_5->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_6->arr[0])
            {
                if(ptr_stack_6->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_6->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_6->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_6->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_6->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_6->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_6->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_6->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_7->arr[0])
            {
                if(ptr_stack_7->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_7->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_7->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_7->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_7->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_7->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_7->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_7->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_8->arr[0])
            {
                if(ptr_stack_8->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_8->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_8->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_8->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_8->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_8->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_8->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_8->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_9->arr[0])
            {
                if(ptr_stack_9->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_9->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_9->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_9->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_9->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_9->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_9->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_9->arr[7]);
            }else
                 printf("the id is not found ");}
//*****************************************************************************
            if (id == ptr_stack_10->arr[0])
            {
                if(ptr_stack_10->top!=-1){
                printf("\n The database of the student %d is : ", id);
                printf("\n student year   : %d ",ptr_stack_10->arr[1]);
                printf("\n course 1 id    : %d ",ptr_stack_10->arr[2]);
                printf("\n course 1 grade : %d ",ptr_stack_10->arr[3]);
                printf("\n course 2 id    : %d ",ptr_stack_10->arr[4]);
                printf("\n course 2 grade : %d ",ptr_stack_10->arr[5]);
                printf("\n course 3 id    : %d ",ptr_stack_10->arr[6]);
                printf("\n course 3 grade : %d \n",ptr_stack_10->arr[7]);
            }

            else
            {
                printf ("\n This id is not found\n");
            }
                break;
//==============================================================================
            case 5 :

                counter = 0;
                if (ptr_stack_1->top != -1)
                    counter ++;

                if (ptr_stack_2->top != -1)
                    counter ++;

                if (ptr_stack_3->top != -1)
                    counter ++;

                if (ptr_stack_4->top != -1)
                    counter ++;

                if (ptr_stack_5->top != -1)
                    counter ++;

                if (ptr_stack_6->top != -1)
                    counter ++;

                if (ptr_stack_7->top != -1)
                    counter ++;

                if (ptr_stack_8->top != -1)
                    counter ++;

                if (ptr_stack_9->top != -1)
                    counter ++;

                if (ptr_stack_10->top != -1)
                    counter ++;

                printf("\n Numder of entries is : %d\n",counter);
                break ;
                /*
                size1 = stacksize_1(ptr_stack_1);
                size2 = stacksize_2(ptr_stack_2);
                size3 = stacksize_3(ptr_stack_3);
                size4 = stacksize_4(ptr_stack_4);
                size5 = stacksize_5(ptr_stack_5);
                size6 = stacksize_6(ptr_stack_6);
                size7 = stacksize_7(ptr_stack_7);
                size8 = stacksize_8(ptr_stack_8);
                size9 = stacksize_9(ptr_stack_9);
                size10 = stacksize_10(ptr_stack_10);
                size = size1+size2+size3+size4+size5+size6+size7+size8+size9+size10 ;
                printf("size is %d",size);
                break ;*/
//==============================================================================
            case 6 :
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
            if (ptr_stack_3->top != -1)
            {
                printf("%d\n",ptr_stack_3->arr[0]);
            }
     //............................................
            if (ptr_stack_4->top != -1)
            {
                printf("%d\n",ptr_stack_4->arr[0]);
            }
     //............................................
            if (ptr_stack_5->top != -1)
            {
                printf("%d\n",ptr_stack_5->arr[0]);
            }
     //............................................
            if (ptr_stack_6->top != -1)
            {
                printf("%d\n",ptr_stack_6->arr[0]);
            }
     //............................................
            if (ptr_stack_7->top != -1)
            {
                printf("%d\n",ptr_stack_7->arr[0]);
            }
     //............................................
            if (ptr_stack_8->top != -1)
            {
                printf("%d\n",ptr_stack_8->arr[0]);
            }
     //............................................
            if (ptr_stack_9->top != -1)
            {
                printf("%d\n",ptr_stack_9->arr[0]);
            }
     //............................................
            if (ptr_stack_10->top != -1)
            {
                printf("%d\n",ptr_stack_10->arr[0]);
            }

            break;

//==============================================================================
            case 7 :
                 is_exit(ptr_stack_1,ptr_stack_2,ptr_stack_3,ptr_stack_4,ptr_stack_5,ptr_stack_6,ptr_stack_7,ptr_stack_8,ptr_stack_9,ptr_stack_10);
                break;
            default :
                printf("wrong choise");
                break ;


        }}}}




