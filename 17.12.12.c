#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main()
{
   int compress(char array[], int count[]);
   char array[LEN];
   int count[LEN];
   int i;
   int tail; //count数组的有效最末下标
   while(gets(array)!=NULL)
   {
      tail = compress(array, count);
      for(i=0;i<=tail;i++)
        i<tail ? printf("%d ",count[i]) : printf("%d\n",count[i]);
   }
   return 0;
}
int compress(char array[], int count[])
{
//start
    int i;
    int is_one_ahead = 1;
    int tail = -1;
    for(i=0;i<LEN;i++)
        count[i] = 0;
    i = 0;
    while(1)
    {
        if(array[i]!='\0')
        {
        if(array[i]==is_one_ahead)
            count[tail]++;
        else
            {tail++;
            count[tail]++;}
        is_one_ahead=array[i];
        }
        else
            break;
        i++;
      }
      return tail;
//end
}
