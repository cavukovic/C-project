/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
#include <string.h>

/* prints all items in department provided by user*/
float printDepartment(Node *list_head, int b){
char department[30];
struct Data *Dptr;
Node *traversePtr;

printf("\nEnter the name of the department to print: ");
scanf(" %[^\n]",&department);

printf("\nGrocery items in %s: \n",department);

traversePtr = list_head;
while(traversePtr != NULL){
Dptr = &(traversePtr->grocery_item);
if(strstr(Dptr->department,department)){ /* item is in department, print it */
printf("\nIn Stock: %d \t Stock Number: %d \tDepartment: %s \t Item: %s \n",
Dptr->pricing.wholesaleQuantity - Dptr->pricing.retailQuantity,Dptr->stockNumber,Dptr->department,Dptr->item);
}

traversePtr = traversePtr->next;
}
return 0;
}
