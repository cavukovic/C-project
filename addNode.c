/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/* adds a node to linked list */
void addNode(Node **list_head){
Node *newNodePtr;
struct Data *Dptr;

newNodePtr = (Node *)malloc (sizeof (Node));
Dptr = &(newNodePtr->grocery_item);

/* read in details */
printf("\nEnter grocery item name:  \n");
scanf(" %[^\n]", Dptr->item);
printf("Enter Department: \n");
scanf(" %[^\n]", Dptr->department);
/* populate structure */
printf("Enter the item stock number: \n");
scanf("%d", &Dptr->stockNumber); 
printf("Enter the items retail price: \n");
scanf("%f",&Dptr->pricing.retailPrice);
printf("Enter the items wholesale price: \n");
scanf("%f",&Dptr->pricing.wholesalePrice);
printf("Enter the items retail quantity: \n");
scanf("%d",&Dptr->pricing.retailQuantity);
printf("Enter the items wholesale quantity: \n");
scanf("%d",&Dptr->pricing.wholesaleQuantity);


/* insert it */
insertNode(list_head, newNodePtr);

}
