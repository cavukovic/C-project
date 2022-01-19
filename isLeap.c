/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*returns 1 if 4 digit number given is a leap year */
int isLeap(int year){
int b = 0;
if(((year % 4 ==0) && (year % 100 != 0) || (year % 400 == 0))){
b=1;
}
return b; 

}

