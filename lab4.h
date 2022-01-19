/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
 *  * TENURES OF THE OHIO STATE UNIVERSITYâ€™S ACADEMIC INTEGRITY POLICY
 WITH RESPECT TO THIS ASSIGNMENT*    *  */

#include <stdio.h>
#include <stdlib.h>

/* prototypes */
struct Cost {
float wholesalePrice;
float retailPrice;
int wholesaleQuantity;
int retailQuantity;
};
struct Data {
char item[50];
char department[30];
 int stockNumber;
 struct Cost pricing;
};
typedef struct Node {
struct Data grocery_item;
struct Node *next;
} Node; 

/*fundamental functions */
int fillNode(Node *newNodePtr, FILE *input);
void insertNode(Node **list_head, Node *newNodePtr);
void printList(Node *list_head, FILE *output);
int *getDateNum(char *date, int *dateAndYear);
int isLeap(int year);
void makeList(Node **list_head, FILE *input);

/*functions to help with 10 line limit */
int foundIt(Node *traversePtr, Node *priorNode);
int firstInList(Node *traversePtr, Node **list_head);
void mainRun(Node *list_head,FILE *output,char *argv[]);
/*functions in fptr array */
float totalRevenue(Node *list_head, int b);
float totalWholesaleCost(Node *list_head, int b);
float currentInvestment(Node *list_head, int b);
float totalProfit(Node *list_head, int b);
float totalSales(Node *list_head, int b);
float averageProfit(Node *list_head, int b);
float printInStock(Node *list_head, int b);
float printOutOfStock(Node *list_head, int b);
float printDepartment(Node *list_head,int b);
void buyItem(Node **list_head);
void addNode(Node **list_head);
void deleteNode(Node **list_head);
void freeNodes(Node **list_head);


