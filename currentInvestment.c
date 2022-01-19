/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*determines and prints the current inverstment in grocery items */
float currentInvestment(Node *list_head, int b){
float sum = 0.0;
float paren = 0.0;
struct Data *Dptr;
Node *traversePtr;
traversePtr = list_head;
/* loop through list */
while(traversePtr != NULL){
/* calculations */
Dptr = &(traversePtr->grocery_item);
paren =  Dptr->pricing.wholesaleQuantity - Dptr->pricing.retailQuantity; 
sum = sum + (Dptr->pricing.wholesalePrice * paren);
traversePtr = traversePtr->next;
}
/*print with format */
if(b==1){
printf("\nCurrent Investment: $%.2f \n",sum);
}
return sum;
} 

