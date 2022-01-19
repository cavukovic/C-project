/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*prints list to given file */
void printList(Node *list_head, FILE *output){

struct Data *Dptr;
Node *traversePtr;

fprintf(output,"Stock List: \n");
traversePtr = list_head;

while(traversePtr != NULL){
/* do all the printing here */ 
Dptr = &(traversePtr->grocery_item);
/*loop through whole list printing every item */
fprintf(output,"%s\t%s\t%d\t%.2f\t%.2f\t%d\t%d\t\n",Dptr->item,Dptr->department,Dptr->stockNumber,
Dptr->pricing.wholesalePrice, Dptr->pricing.retailPrice, Dptr->pricing.wholesaleQuantity,
Dptr->pricing.retailQuantity);


traversePtr = traversePtr->next;

}

}
