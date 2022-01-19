/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*inserts node into list in correct order */
void insertNode(Node **list_head, Node *newNodePtr){
Node *traversePtr;
Node *priorNode;
traversePtr = *list_head;

if(*list_head == NULL){
priorNode = *list_head;
*list_head = newNodePtr; /* case for first in list */
newNodePtr->next = NULL;
}else if(newNodePtr->grocery_item.stockNumber > traversePtr->grocery_item.stockNumber){/*travPtr->next?*/
/*case for adding to the front of the list */
newNodePtr->next = traversePtr;
*list_head = newNodePtr;
priorNode = newNodePtr;
}else{
while(traversePtr !=NULL){

if(traversePtr->grocery_item.stockNumber < newNodePtr->grocery_item.stockNumber){
        newNodePtr->next = traversePtr;
        priorNode->next = newNodePtr;
        break; /* node has been inserted */
}else if(traversePtr->next == NULL){ /* case for last element in the list */
        traversePtr->next = newNodePtr;
        newNodePtr->next = NULL;
	traversePtr = NULL;
}else{
        /* move the list along*/
        priorNode = traversePtr;
        traversePtr = traversePtr->next;
}
}
}

}

