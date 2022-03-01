#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct note{
    int data;
    struct note* next;
}note;

note* creat_new_node(int num){ //生成節點
    note* temp=(note *) malloc(sizeof(note));
    temp->data=num;
    temp->next=NULL;
    return temp;
}

void creat_new_data_last(int num, note *head){ //串列最後面加入資料
    note* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=creat_new_node(num);
}

void print_data_after_node(note* start){ //印出有資料的字串
    while(start->next !=NULL){
        printf("%d ", start->data);
        start=start->next;
    }
}

void printall(note* head){ //印出全部
    if(head->next==NULL){
        printf(" \n");
    }else{
        print_data_after_node(head);
    }
}

int main(void){
    note *head = (note*) malloc(sizeof(note)); //定義開頭指標
    int num;
    char str[15]="";
    while(scanf("%s", str) !=EOF){
        if(!strcmp(str, "add")){
            scanf("%d", &num);
            creat_new_data_last(num, head);
            printf("add_succ\n");
        }
        if(!strcmp(str, "print")){
            printall(head);
        }
    }
}
