/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/* prints all in stock items in list*/
float printInStock(Node *list_head, int b){

struct Data *Dptr;
Node *traversePtr;

printf("Grocery items in stock: \nStock#\tQuantity\tDepartment\t\tItem");

traversePtr = list_head;
while(traversePtr != NULL){
Dptr = &(traversePtr->grocery_item);
if((Dptr->pricing.wholesaleQuantity - Dptr->pricing.retailQuantity) > 0){ /* is in stock */
printf("\n%d\t%d\t\t%s\t%s",Dptr->stockNumber,
Dptr->pricing.wholesaleQuantity - Dptr->pricing.retailQuantity,Dptr->department,Dptr->item);
}

traversePtr = traversePtr->next;
}
printf("\n");

return 0;
} 
