/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*determines and prints the totaly wholesale cost from all grocery items sold */
float totalWholesaleCost(Node *list_head, int b){
float sum = 0.0;
struct Data *Dptr;
Node *traversePtr;
traversePtr = list_head;

while(traversePtr != NULL){ /*loop through list */
Dptr = &(traversePtr->grocery_item);
sum = sum + (Dptr->pricing.wholesalePrice * Dptr->pricing.wholesaleQuantity); /* calculations */
traversePtr = traversePtr->next;
}
if(b==1){ /*print with format */
printf("\nTotal Wholesale Cost: $%.2f \n",sum);
}
return sum;
} 

