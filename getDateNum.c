/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

/* converst day month and year into a number*/
#include "lab4.h"
int *getDateNum(char *date, int *dateAndYear){
int day, month, year;
int dateNum;
int months[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int leapMonths[] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
/* read in date*/
sscanf(date,"%d/%d/%d", &month, &day, &year);
/*check if leap year */ 
if(isLeap(year)==1){
dateNum = months[month]+day;
}else{
dateNum = leapMonths[month]+day;
}
/*populate values of dateNum and year */
*dateAndYear = dateNum;
*(dateAndYear+1) = year;
return dateAndYear;

}
