//Write a program to draw the following patterns.

/*1.   *
       * *
       * * *
       * * * *
       * * * * *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*2.         *
           * *
         * * *
       * * * *
     * * * * *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*3.    * * * * *
        * * * *
        * * *
        * *
        *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("* ");
                else
                printf(" ");
        }
    printf("\n");
    }
}
*/

/*4.   * * * * *
         * * * *
           * * *
             * *
               *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*5.                    *
                      * * *
                    * * * * *
                  * * * * * * *
                * * * * * * * * *

main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*6.         * * * * * * * * *
               * * * * * * *
                 * * * * *
                   * * *
                     *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=10 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*7.   * * * * * * * * *
       * * * *   * * * *
       * * *       * * *
       * *           * *
       *               *


main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-i || j>=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*8.          1
             121
            12321
           1234321

main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*9.    1234321
         12321
          121
           1

main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*10.    1234321
         123 321
         12   21
         1     1

main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
*/

/*11.                 A
                    A B A
                  A B C B A
                A B C D C B A
              A B C D E D C B A


main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                j<5?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*12.           A B C D C B A
                  A B C B A
                    A B A
                      A


main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/

/*13.     A B C D E F G F E D C B A
          A B C D E F   F E D C B A
          A B C D E       E D C B A
          A B C D           D C B A
          A B C               C B A
          A B                   B A
          A                       A


main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c",k);
                j<7?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==7)
                    k--;
            }
        }
            printf("\n");
    }
}


*/

/*14.      *
           * *
           *   *
           *     *
           * * * * *


main()
{
    int totalrows;
    printf("Enter the number of rows:");
    scanf("%d",&totalrows);

    for(int rowno=1;rowno<=totalrows;rowno++)
    {
        for(int colno=1;colno<=rowno;colno++)
        {
            if((colno==1)||(rowno==totalrows)||(rowno==colno))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
*/

/*15.         *
            * *
          *   *
        *     *
      * * * * *


main()
{
    int i,j,totalrows;
    printf("Enter the number of rows:");
    scanf("%d",&totalrows);

    for(i=1;i<=totalrows;i++)
    {
        for(j=i;j<totalrows;j++)
        {
            printf(" ");
        }
        for(j=1;j<=totalrows;j++)
        {
            if(i==totalrows || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/

/*16.               *
                  *   *
                *       *
              *           *
            * * * * * * * * *


main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=i;j<rows;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/

/*17.   * * * * * * * * *
          *           *
            *       *
              *   *
                *

main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(rows*2-(2*i-1));j++)
        {
            if(i==1 || j==1 || j==(rows*2-(2*i-1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/


/*18                *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
              * * * * * * *
                * * * * *
                  * * *
                    *


main()
{
    int n,c,k;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(c=1;c<=n-k;c++)
            printf(" ");
        for(c=1;c<=2*k-1;c++)
            printf("*");
        printf("\n");
    }
    for(k=1;k<=n-1;k++)
    {
        for(c=1;c<=k;c++)
            printf(" ");
        for(c=1;c<=2*(n-k)-1;c++)
            printf("*");
        printf("\n");
    }
}
*/

//19.
#include<stdio.h>
#include<string.h>
int main()
{
   int n,i,j,len;
   char name[100];
   printf("Enter the name:");
   gets(name);
   printf("Enter the number:");
   scanf("%d",&n);
   len=strlen(name);
   for(i=n/2;i<=n;i+=2)
   {
       for(j=1;j<n-i;j+=2)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
   for(i=n;i>=1;i--)
   {
       for(j=i;j<n;j++)
       {
           printf(" ");
       }
       if(i==n)
       {
           for(j=1;j<=(n*2-len)/2;j++)
           {
               printf("*");
           }
           printf("%s",name);
           for(j=1;j<(n*2-len)/2;j++)
           {
               printf("*");
           }
       }
           else
           {
               for(j=1;j<=(i*2)-1;j++)
               {
                   printf("*");
               }
           }
           printf("\n");
       }
       return 0;
   }


