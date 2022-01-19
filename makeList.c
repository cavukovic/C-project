/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/* creates the initial linked list from store inventory file */ 
/* will it work if I make the nodes outside of main? */
void makeList(Node **list_head, FILE *input){
Node *newNodePtr;
int b=1;
int count=0;
int fillNodeReturn;
while(b == 1){

newNodePtr = (Node *)malloc (sizeof (Node)); /* free later */
count = count+1;
if (newNodePtr == NULL) {
	printf("ERROR: Storage could not be allocated");
	exit(0);
}else if(((fillNodeReturn = fillNode(newNodePtr,input)) == 0) || (fillNodeReturn ==EOF)){
	/* check if the end of file has been reached */
	free(newNodePtr);
	b=0;
	count = count-1;
}else{ /* if not, fill it and insert it then loop again */
	/* insert it */
	insertNode(list_head,newNodePtr);
}
}
}
 

 
