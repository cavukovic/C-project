/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/* purchases an item from the list and updates fields */
void buyItem(Node **list_head){
struct Data *Dptr;
Node *traversePtr;
int stockNum;
int pricePerItem;
int itemsSold;
int b = 0;

/* figure out which item */
printf("\nEnter the stock number of the item you want to buy: \n");
scanf("%d",&stockNum);
traversePtr = *list_head;
while(traversePtr != NULL){
Dptr = &(traversePtr->grocery_item);
if(Dptr->stockNumber == stockNum){
b = 1; /* found our item */

printf("The price per item is $%.2f, how many items do you want to purchase: ",Dptr->pricing.retailPrice);
scanf("%d",&itemsSold);

/* not enough stock */
if(itemsSold > Dptr->pricing.retailQuantity){
b=0;
break;
}
/*update the quantity */
Dptr->pricing.retailQuantity = (Dptr->pricing.retailQuantity  + itemsSold);

}

traversePtr = traversePtr->next;
}
if(b==0){
printf("\nERROR: Item not found or not enough stock\n");
}else{
printf("%d items have been purchased",itemsSold);
}
}
