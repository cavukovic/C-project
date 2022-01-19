/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*deletes node of specified stock number from the list  */
void deleteNode(Node **list_head){
int stockNum;
int b = 0;
Node *traversePtr;
Node *priorNode;
Node *tempPtr;
printf("\nEnter the stock number of the item you wish to delete: ");
scanf("%d",&stockNum);

traversePtr = *list_head;
/* dont need to check if list is empty because if it is, item will never be found */

if(traversePtr->grocery_item.stockNumber == stockNum){
/* first in list */
b = firstInList(traversePtr,list_head);
}else{
/*otherwise update traverse */
priorNode = traversePtr;
traversePtr = traversePtr->next;
}

while(traversePtr != NULL && b==0){
/*check all items */
if(traversePtr->grocery_item.stockNumber == stockNum){/*found it  */
b = foundIt(traversePtr, priorNode);
}else{
/* update traverse */
priorNode = traversePtr;
traversePtr = traversePtr->next;
}

}
/* print results */
if(b==0){
printf("\nItem was not found\n");
}else{
printf("\nGrocery item with stock number %d was deleted.\n",stockNum);
}


}
