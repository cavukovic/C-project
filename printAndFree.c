/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"

/*prints the linked list to output and frees all nodes in the list */
void printAndFree(Node **list_head, FILE *output){

printlist(*list_head,output);
freeNode(list_head);

}
