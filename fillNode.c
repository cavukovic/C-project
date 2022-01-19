/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/* populates the members of the node */
int fillNode(Node *newNodePtr, FILE *input){
int i;
struct Data *Dptr;

Dptr = &(newNodePtr->grocery_item);

/* read in 1 whole line */
i = fscanf(input," %[^\t] %[^\t]%d%f%f%d%d",Dptr->item,Dptr->department,&Dptr->stockNumber,
&Dptr->pricing.retailPrice, &Dptr->pricing.wholesalePrice, &Dptr->pricing.retailQuantity,
&Dptr->pricing.wholesaleQuantity);

/*returns the result of scanf */
return i;
}
