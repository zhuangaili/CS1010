#include <stdio.h>
#include <stdlib.h>

/* self-referential structure */

struct listNode{
	char data; /*each listNode contains a character */
	struct listNode *nextPtr; /* pointer to next node */
};


typedef struct listNode ListNode; /*synonym for struct listNode */
typedef ListNode *ListNodePtr; /*synonym for ListNode* */
/* prototypes*/

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void){
	ListNodePtr startPtr=NULL;
	int choice;/* user's choice */
	char item; /* char entered by user */
	instructions();
	printf("? ");
	scanf("%d",&choice);
	/*loop while user does not choose 3 */
	while(choice!=3){
		switch(choice){
			case 1: 
				printf("Enter a character:");
				scanf("\n%c",&item);
				insert(&startPtr,item); /* insert item in list */
				printList(startPtr);
				break;
			case 2: /*delete an element */
					/* if list is not empty */
				if(!isEmpty(startPtr)){
					printf("Enter Character to be deleted:");
					scanf("\n%c",&item);
					/* if character is found, remove it */
					if(delete(&startPtr,item)){
						printf("%c deleted \n",item);
						printList(startPtr);
					}
					else{
						printf("%c not found.\n\n",item);
					}
				}
				else{
					printf("List is empty.\n");
				}
				break;
			default:
				printf("Invalid Choice");
				instructions();
				break;
		}/* end switch*/
		printf("?");
		scanf("%d",&choice);	
	} /*end while*/
	printf("End of run.\n");
	return 0;
}


void instructions(void){
	printf("Enter your choice:\n"
	"1 to insert an element into the list\n"
	"2 to delete an element from the list\n"
	"3 to end.\n");
}/*end function instructions */

/* insert a new value into the list into sorted order */
void insert(ListNodePtr *sPtr, char value){
	ListNodePtr newPtr; /*pointer to new node */
	ListNodePtr previousPtr; /* pointer to previous node in list  */
	ListNodePtr currentPtr; /* pointer to the current ndoe in the list */
	newPtr=malloc(sizeof(ListNode)); /*create node */
	if(newPtr!=NULL){
		newPtr->data=value; /*Place value in the node */
		newPtr->nextPtr=NULL; /* ensure that the node does not link to another node */

		previousPtr = NULL;
		currentPtr = *sPtr;
		/* loop to find the correct location in the list */
		while( currentPtr!= NULL && value>currentPtr->data){
			previousPtr=currentPtr; /* shift of control*/
			currentPtr=currentPtr->nextPtr; /*next node */	
		}
		/*insert new node at beginning of list */
		if(previousPtr==NULL){
			newPtr->nextPtr=*sPtr;
			*sPtr=newPtr;
		} /*end if */
		else{ /* insert new node between previousPtr and currentPtr */
			previousPtr->nextPtr=newPtr;
			newPtr->nextPtr=currentPtr;
		}

	}
	else{
		printf("%c not inserted. No memory available.\n", value);
	} /*end else */

}/*end function insert */


/*Delete a list element */
char delete(ListNodePtr *sPtr, char value){
	ListNodePtr previousPtr; /*pointer to previous node in list */
	ListNodePtr currentPtr; /* pointer to current node in list */
	ListNodePtr tempPtr; /*temporary node pointer */

	/*delete first node*/
	if(value==(*sPtr)->data){
		tempPtr=*sPtr; /*hold onto node being removed */
		*sPtr=(*sPtr)->nextPtr;
		free(tempPtr);
		return value;
	}
	else{
		previousPtr=*sPtr;
		currentPtr=(*sPtr)->nextPtr;
		/* loop to find the correct location in the list */
		while(currentPtr!=NULL &&currentPtr->data!=value){
			previousPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
		}/*end while */
		/* delete node at currentPtr */
		if(currentPtr!=NULL){
			tempPtr=currentPtr;
			previousPtr->nextPtr=currentPtr->nextPtr;
			free(tempPtr);
			return value;
		} /*end if */
	} /*end else */
	return '\0';
}/* end function delete */


/* Return 1 if the list is empty, 0 otherwise */
int isEmpty(ListNodePtr sPtr){
	return sPtr==NULL;
}

/*Print the list */
void printList(ListNodePtr currentPtr){
	/*if the list is empty */
	if(currentPtr==NULL){
		printf("List is empty.\n\n");
	}
	else{
		printf("The List is:\n");
		/*while not the end of the list */
		while(currentPtr!=NULL){
			printf("%c --->", currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}/* end while */

		printf("NULL\n\n");
	}/* end else */
}/*end function printList*/