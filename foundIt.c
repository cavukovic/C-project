/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 *   WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include "lab4.h"
/*case for deleting node not at the start of the list */
int foundIt(Node *traversePtr, Node *priorNode){
int b = 0;
if(traversePtr->next != NULL){ /* if theres is a next node, update next and delete*/
                priorNode->next = traversePtr->next;
                free(traversePtr);
                b=1;
        }else{ /* end of the list, delete and set next to null*/
                priorNode->next = NULL;
                free(traversePtr);
                b=1;
        }
return b;
}
