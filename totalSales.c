/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*determines and prints the totaly number of sales for all grocery items */
float totalSales(Node *list_head, int b){
float num = 0.0;
struct Data *Dptr;
Node *traversePtr;
traversePtr = list_head;

while(traversePtr != NULL){ /*loop through whole list */
Dptr = &(traversePtr->grocery_item);
num = num + Dptr->pricing.retailQuantity;
traversePtr = traversePtr->next;
}
if(b==1){ /*print with format */
printf("\nTotal number of Sales: %.f \n",num);
}
return num;

}


  
