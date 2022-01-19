/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*deals with the looping and calling of the function pointer array */
void mainRun(Node *list_head,FILE *output,char *argv[]){
int funcNum;
int b;
float (*fp_array1[9])(Node *list_head, int b);
void (*fp_array2[4])(Node **list_head);

/* makes the arrays */
fp_array1[0] = &totalRevenue;
fp_array1[1] = &totalWholesaleCost;
fp_array1[2] = &currentInvestment;
fp_array1[3] = &totalProfit;
fp_array1[4] = &totalSales;
fp_array1[5] = &averageProfit;
fp_array1[6] = &printInStock;
fp_array1[7] = &printOutOfStock;
fp_array1[8] = &printDepartment;

fp_array2[0] = &buyItem;
fp_array2[1] = &addNode;
fp_array2[2] = &deleteNode;
fp_array2[3] = &freeNodes;
/* prompt and loop */
while(funcNum != 12){
printf("\n Please enter an integer between 1 and 12:\n 1)  Print Total Revenue\n 2)  Print Total Wholesale Cost\n 3)  Print Current Grocery Item Investment\n 4)  Print Current Profit\n 5)  Print Total Number of Grocery Items Sold\n 6)  Print Average Profit per Grocery Item\n 7)  Print Grocery Items In Stock\n 8)  Print Out of Stock Grocery Items\n 9)  Print Grocery Items for a Department\n 10) Purchase and item \n 11) Add Grocery Item to Inventory\n 12) Delete Grocery Item from Inventory\n 13) Exit Program \n \nOption: ");
scanf("%d",&funcNum);
b = funcNum;
funcNum = funcNum-1;
/*call appropriate function */
if(funcNum <= 8){
        fp_array1[funcNum](list_head,1);
}else{
	if(funcNum == 12){
		printList(list_head,output);
       		printf("Grocery items were written to file: %s\n",argv[3]);
	        fclose(output);	
	}
	funcNum = funcNum - 9;
        fp_array2[funcNum](&list_head);
}
        
}

}




