/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/* main function of lab4 */
int main(int argc, char *argv[]){
int dateNum;
int fileDateNum;
int fileYear;
int year;
int dateAndYear[2];
int *dateAndYearPtr;
int response;
FILE *input;
FILE *output;

float (*fp_array1[9])(Node *list_head, int b);
void (*fp_array2[4])(Node **list_head);


Node *list_head = NULL;
/* date stuff */
dateAndYearPtr = dateAndYear;
dateAndYearPtr = getDateNum(argv[1],dateAndYearPtr);
dateNum = *dateAndYear;
year = *(dateAndYear+1);
input = fopen(argv[2],"r");
fscanf(input,"%d%d", &fileDateNum,&fileYear);

printf("The difference between today's date and the date specified in the file is %d years and %d days, do you wish to continue? (1=yes,0 = no) ",(year-fileYear),(dateNum-fileDateNum));

scanf("%d",&response);
if(response == 0){ exit(0);}
/* make the actual linked list */
makeList(&list_head,input);
fclose(input);
output = fopen(argv[3],"w");
/* fptr array stuff in here */
mainRun(list_head,output,argv);


return 0; 
}
