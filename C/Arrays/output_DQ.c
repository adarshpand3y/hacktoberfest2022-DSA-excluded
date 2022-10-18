//program to establish working of output restricted double ended queue
//sucessfully working

#include<stdio.h>
int ODQ[5];
main(){
    int r=0,c=1,ch,f=-1;
    int insertr(int);
    int insertf(int);
    void deletef(int);
    void show(void);

    while(1){
        printf("1. insert rear \n 2. insert front\n 3. delete front\n 4. display\n 5. exit");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1: while(c && r<5){   //some elements avb
            c=insertr(r);
            r++;
            }
            if(c==0){       //1 element avb
                c=1;   
                r--;
            }
            else
            if(f<0)
            printf("DE QUEUE FULL\n");
            break;

            case 2: insertf(f);
            break;

            case 3: deletef(++f);
            break;

            case 4: show();
            break;
            
            default: exit(0);

        }
    }
}

void show(){
    int j;
    printf("elements are");
    for(j=0;j<5;j++)
    printf("%d",ODQ[j]);
}

int insertr(int h){
    int k;
    printf("enter an element");
    scanf("%d",&k);
    ODQ[h]=k;
    return(k);
}

int insertf(int m){
    int h;
    if(ODQ[m]==0 && m>=0){     //checks if space avb in front
        printf("enter a element");
        scanf("%d",&h);
        ODQ[m]=h;
    }
    else
    printf("no space available");
    return --m;
}

void deletef(int f){
    ODQ[f] = NULL;    //nullifying the element deletes it
}

