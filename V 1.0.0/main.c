#include "stdio.h"
#define ERROR 0
#define SUCCESS 1
typedef int status;

typedef struct tribint{
struct tribint* parent;
int data;
struct tribint* lchaild;
struct tribint* rchaild;

}tri;

typedef struct datapan{
    int data;
    struct datapan* next;
}temp;
void InitBitree(tri* T)
{
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
for(ac=head->next;ac!=tail;ac=ac->next)
{printf("%d\t",ac->data);}
printf("data load successfully\n");
/*--------------------------------------*/





}
status DestroyBiTree(tri* T);


int main()
{   tri* T=(tri*)malloc(sizeof(tri));
    if(T==NULL)
    {printf("malloc failed!");
    return 0;}
   
    T->lchaild=NULL;
    T->parent=NULL;
    T->rchaild=NULL;//set a pointer T to root


    FILE* fp;
    char test;
    if(fp=fopen("1.txt","r")==NULL||feof(fp))
    {printf("file not beenset up or no data structure!\n");
    fclose(fp);
    fp=NULL;//reset file pointer
    InitBitree(T);
    }

}