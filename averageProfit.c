/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*determines and prints the average profit per sale */
float averageProfit(Node *list_head, int b){
float num= 0.0;
/* calculation */
num = totalProfit(list_head,0) / totalSales(list_head,0);
if(b==1){
/* print with format */
printf("\nAverage Profit: $%.2f \n",num);
}
return num;
}


