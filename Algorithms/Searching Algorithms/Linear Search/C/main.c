#include <stdio.h>
#include <stdlib.h>

int linear_search(int data[],int size,int key)
{
    int found=0;
    int position=-1;
    int index=0;
    while (index<size  && !found)
    {
      if(data[index]==key)
      {
        found = 1;
        position = index;
        break;
      }
        index++;
   }
    return position;
}
int main()
{
    int size,key,i;
    printf("input the size of the array:");
    scanf("%d",&size);
    int data[size];
    for(i=0;i<size;i++)
    {
        printf("input %d element of the array:",i+1);
        scanf("%d",&data[i]);
    }
    printf("input the key you want to find:");
    scanf("%d",&key);
    printf("Key is found at position %d",linear_search(data,size,key));
}
