#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *prev;
	struct node *next;
	
};

int initNode(struct node **inithead,struct node **initcurrent, struct node **inittail);
void printNodes(struct node **printHead, struct node **printTail);
void insertNodes(struct node **insertHead,struct node **insertcurrent,struct node **insertTail);
void deleteNodes(struct node **deleteHead,struct node **deleteTail);
void sumTheData(struct node **sumhead,struct node **sumtail);

int main(){
	
	int ch; // this is for the menu choice 
	int initF=0; // this is a flag for the init of the DS
	struct node *head,*current,*tail; // these are pointer that they will hold the DS (backbone)
	
	while(1){
	printf("SELECT AN OPTION :");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
			if(initF == 0){
				printf("Initializing...\n");
				initF = initNode(&head,&current,&tail);
				tail = head;
			}else{
				printf("Initialization happend ... \n");
			}
			break;
		case 2:
			printNodes(&head,&tail);
			break;
		case 3:
			insertNodes(&head,&current,&tail);
			break;
		case 4:
			deleteNodes(&head,&tail);
			break;
		case 5:
			sumTheData(&head,&tail);
			break;
		default:
			printf("\n\n WRONG CHOICE TRY AGAIN !!! \n");
	}
		
		
	}
	return 0;
}

int initNode(struct node **inithead,struct node ** initcurrent, struct node **inittail){
	
	
		
	*inithead = (struct node *)malloc(sizeof(struct node));
    (*inithead)->next = NULL;
    (*inithead)->prev = NULL;
    *initcurrent = *inithead;
		
		printf(
				"**************************\n"
				"* head    : %p *\n"
				"* current : %p     		  *\n"
				"* prev    : %p      		  *\n"
				"* next    : %p     		  *\n"
				"* data    : %d     		  *\n"
				"* tail    : %p     		  *\n"
				"**************************\n",
				*inithead,
				*initcurrent,
				(*inithead)->prev,
				(*inithead)->next,
				0,
				*inittail);
		return 1;		
}

void printNodes(struct node **printHead, struct node **printTail){
	
	struct node *ptr;
	ptr = (struct node *)NULL;
	ptr = (struct node *)malloc(sizeof(struct node ));
	ptr = *printHead;
	
	puts("Here");
	while(1){
				
				printf(
				"**************************\n"
				"* head    : %p *\n"
				"* current : %p     		  *\n"
				"* prev    : %p      		  *\n"
				"* next    : %p     		  *\n"
				"* data    : %d     		  *\n"
				"* tail    : %p     		  *\n"
				"**************************\n",
				*printHead,
        ptr,
        (ptr)->prev,
        (ptr)->next,
        (ptr)->data,
        *printTail);
        
		printf("Inside loop");
		
		if(ptr->next != NULL ){
				ptr = ptr->next;
		}
		
		if(ptr->next == NULL)
			break;
		
	}
	
}
void insertNodes(struct node **insertHead,struct node **insertcurrent,struct node **insertTail){
		
	*insertcurrent = (struct node *)malloc(sizeof(struct node));
    (*insertcurrent)->next = NULL;
    (*insertcurrent)->prev = *insertTail;
		
		(*insertcurrent)->next = NULL;// the next unalloced node 
		
		
		*insertTail = *insertcurrent; // now we put the tail in the end
		
		
		printf("\n... Insert the node number : ");
		scanf("%d",(&(*insertcurrent)->data));
		
		printf(
				"**************************\n"
				"* head    : %p *\n"
				"* current : %p     		  *\n"
				"* prev    : %p      		  *\n"
				"* next    : %p     		  *\n"
				"* data    : %d     		  *\n"
				"* tail    : %p     		  *\n"
				"**************************\n",
				*insertHead,
        *insertcurrent,
        (*insertcurrent)->prev,
        (*insertcurrent)->next,
        (*insertcurrent)->data,
        *insertTail);
		 
}
void deleteNodes(struct node **deleteHead,struct node **deleteTail){
	
}

void sumTheData(struct node **sumhead,struct node **sumtail){
	
}
