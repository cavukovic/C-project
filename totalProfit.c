/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*determines the total prifit for all grocery items */
float totalProfit(Node *list_head, int b){
float num = 0.0;
/*calculations */
num = totalRevenue(list_head,0) - totalWholesaleCost(list_head,0);
num = num + currentInvestment(list_head,0);
if(b==1){
printf("\nTotal Profit: $%.2f \n",num);
}
return num;
}
