/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/* frees all the nodes of the linked list and exits the program */
void freeNodes(Node **list_head){
Node *traversePtr;
Node *tempPtr;
int count = 0;
traversePtr = *list_head;
/* loop all contents */
while(traversePtr != NULL){
	tempPtr = traversePtr;
	traversePtr = traversePtr -> next;
	free(tempPtr);
	count = count+1;
}

exit(0);
}
