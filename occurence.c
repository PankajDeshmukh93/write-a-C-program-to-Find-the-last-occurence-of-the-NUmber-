

/*

3. Write a C  program  which accept N numbers from user and accept
one another number as NO , return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
*/

// 

#include <stdio.h>
#include<stdlib.h>

    int Check(int arr[] , int iNo ,int iVal)
    {
        //filter
        if(arr == NULL)
        {

            return -1;

        }

        //updator
        // if(iNo < 0)
        // {
        //     iNo = -iNo;
        // }

        int j = 0;
        for( j = iVal-1 ;  j >= 0 ; j--)
        {

            if( arr[j] == iNo )
            {

                   break;

            }

        }
        if(arr[j] != iNo)
        {       
                
            return -1;
                
        }
        else
        {
            return j;

        }
    }




   int main()
    {
        int iVal = 0;
        int iNo = 0;
        int i = 0;
        int* Ptr = NULL;

        int iRet = 0;
        

        printf("\nEnter the number of elemnts in the array : \n");
        scanf("%d", &iVal);

        printf("Enter the number whose  last occurence is to be returned from the array : \n");
        scanf("%d",&iNo);

        if(iVal < 0)
        {
            
            iVal = -iVal;

        }


        Ptr = (int*)malloc(iVal*sizeof(int));


        printf(" \n Enter the elements of the arrays: \n");

        for(i = 0 ; i<iVal ; i++)
        {
            
           scanf("%d" , &Ptr[i]);

        }

        iRet = Check(Ptr, iNo , iVal);

        if(iRet == -1)
        {
                
            printf(" \nNumber is not present in the array \n");

        }
        else
        {

            printf(" \nNumber's  first occurence  in the array is at poition : %d \n" ,iRet );

        }

        return 0;
    }
