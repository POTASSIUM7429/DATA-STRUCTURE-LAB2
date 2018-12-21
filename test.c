#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
#define MAXSPACE 255

typedef struct tribint{
struct tribint* parent;
int data;
int layers;
int orders;
struct tribint* lchaild;
struct tribint* rchaild;

}tri;

typedef struct datapan{
    int data;
    struct datapan* next;
}temp;


int main()
{ tri space[MAXSPACE];
    
    int counter=0;
    int i=0;
    
    printf("put in a queue and empty node filled with 255 and end with -1 \n");
temp* head=(temp*)malloc(sizeof(temp));
temp* tail=head;
temp* ac=head;
int pan=0;

while(pan!=-1)
{tail=(temp*)malloc(sizeof(temp));
ac->next=tail;
scanf("%d",&pan);
tail->data=pan;
tail->next=NULL;
ac=tail;
}
for(ac=head->next;ac!=tail;ac=ac->next,counter++)
{printf("%d\t",ac->data);}
printf("data load successfully\n");
printf("elems is %d\n",counter);
// auto fill sys.
int fillsize=pow(2,(int)(log(counter)/log(2)+2))-1;
printf("purpose size is %d\n",fillsize);
int queue[fillsize];

memset(queue,0,fillsize*sizeof(int));
printf("after set\n");

for(i=0;i<fillsize;i++)
printf("%d\t",queue[i]);
printf("\n");

for(i=0,ac=head->next;ac!=tail;ac=ac->next,i++)
{queue[i]=ac->data;}
printf("the queue has been modified\n");

for(i=0;i<fillsize;i++)
printf("%d\t",queue[i]);
printf("\n");

int* start=queue;
int* end=queue;

for(i=0;i<fillsize;i++)
{space[i].data=queue[i];
space[i].layers=(int)(log(i+1)/log(2))+1;
space[i].orders=(i-pow(2,space[i].layers)+space[i].layers-1);
printf("the %d elem is%d and  %d layers and %d orders\n",i+1,space[i].data,space[i].layers,space[i].orders);
}
printf("log2.8=%d",log(8)/log(2));

/*do
{}*/


getchar();
getchar();
return 0;
}