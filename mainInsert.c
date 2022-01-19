/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*deals with the main insertion in insertNode */ 
int mainInsert(Node *newNodePtr, Node *traversePtr, Node *priorNode, Node **list_head){
int b = 0;
if(traversePtr->grocery_item.stockNumber < newNodePtr->grocery_item.stockNumber){
                newNodePtr->next = traversePtr;
                priorNode->next = newNodePtr;
                return 0; /* node has been inserted */
}else if(traversePtr->next == NULL){ /* case for last element in the list */
	traversePtr->next = newNodePtr;
        newNodePtr->next = NULL;
        return  -1;
}else{
	/* move the list along*/
	priorNode = traversePtr;
        traversePtr = traversePtr->next;
}
return 1; /* node has not been inserted, move along */

}
