# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
#TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
#THIS ASSIGNMENT.
#Author: Charlie Vukovic

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c
# target all means all targets defined in this file
all: lab4.zip lab4

#zip file target
lab4.zip: Makefile lab4.h fillNode.c insertNode.c lab4Readme makeList.c getDateNum.c totalRevenue.c isLeap.c lab4main.c printList.c totalWholesaleCost.c currentInvestment.c totalProfit.c totalSales.c averageProfit.c printInStock.c printOutOfStock.c printDepartment.c addNode.c deleteNode.c freeNodes.c buyItem.c foundIt.c mainRun.c firstInList.c 
	zip lab4.zip  Makefile lab4.h fillNode.c insertNode.c lab4Readme makeList.c getDateNum.c totalRevenue.c isLeap.c lab4main.c printList.c totalWholesaleCost.c currentInvestment.c totalProfit.c totalSales.c averageProfit.c printInStock.c printOutOfStock.c printDepartment.c addNode.c deleteNode.c freeNodes.c buyItem.c foundIt.c mainRun.c firstInList.c 

#target for lab4
lab4: fillNode.o insertNode.o makeList.o getDateNum.o isLeap.o lab4main.o printList.o totalRevenue.o totalWholesaleCost.o currentInvestment.o totalProfit.o totalSales.o averageProfit.o printInStock.o printOutOfStock.o printDepartment.o addNode.o deleteNode.o freeNodes.o buyItem.c foundIt.o firstInList.o mainRun.o
	gcc fillNode.o insertNode.o makeList.o getDateNum.o isLeap.o lab4main.o printList.o totalRevenue.o totalWholesaleCost.o currentInvestment.o totalProfit.o totalSales.o averageProfit.o printInStock.o printOutOfStock.o printDepartment.o addNode.o deleteNode.o freeNodes.o buyItem.c foundIt.o firstInList.o mainRun.o -o lab4

#target for fillNode.o
fillNode.o: fillNode.c
	gcc $(gcc_opt) -o fillNode.o fillNode.c

#target for insertNode.o
insertNode.o: insertNode.c
	gcc $(gcc_opt) -o insertNode.o insertNode.c  

#target for makeList.o
makeList.o: makeList.c
	gcc $(gcc_opt) -o makeList.o makeList.c

#target for getDateNum.o
getDateNum.o: getDateNum.c
	gcc $(gcc_opt) -o getDateNum.o getDateNum.c

#target for isLeap.o
isLeap.o: isLeap.c
	gcc $(gcc_opt) -o isLeap.o isLeap.c 

#target for lab4main.o
lab4main.o: lab4main.c
	gcc $(gcc_opt) -o lab4main.o lab4main.c

#target for printList.o
printList.o: printList.c
	gcc $(gcc_opt) -o printList.o printList.c

#target for totalRevenue.o
totalRevenue.o: totalRevenue.c
	gcc $(gcc_opt) -o totalRevenue.o totalRevenue.c

#targe totalWholesaleCost.o
totalWholesaleCost.o: totalWholesaleCost.c
	gcc $(gcc_opt) -o totalWholesaleCost.o totalWholesaleCost.c

#targe  currentInvestment.o
currentInvestment.o: currentInvestment.c
	gcc $(gcc_opt) -o currentInvestment.o currentInvestment.c

#targe  totalProfit.o
totalProfit.o: totalProfit.c
	gcc $(gcc_opt) -o totalProfit.o totalProfit.c

#targe  totalSales.o
totalSales.o: totalSales.c
	gcc $(gcc_opt) -o totalSales.o totalSales.c

#targe averageProfit.o
averageProfit.o: averageProfit.c
	gcc $(gcc_opt) -o averageProfit.o averageProfit.c

#targe printInStock.o
printInStock.o: printInStock.c
	gcc $(gcc_opt) -o printInStock.o printInStock.c

#targe  printOutOfStock.o
printOutOfStock.o: printOutOfStock.c
	gcc $(gcc_opt) -o printOutOfStock.o printOutOfStock.c

#targe printDepartment.o
printDepartment.o: printDepartment.c
	gcc $(gcc_opt) -o printDepartment.o printDepartment.c

#targe  addNode.o
addNode.o: addNode.c
	gcc $(gcc_opt) -o addNode.o addNode.c

#targe deleteNode.o
deleteNode.o: deleteNode.c
	gcc $(gcc_opt) -o deleteNode.o deleteNode.c

#targe  freeNodes.o
freeNodes.o: freeNodes.c
	gcc $(gcc_opt) -o freeNodes.o freeNodes.c

#target buyItem.o
buyItem.o: buyItem.c
	gcc $(gcc_opt) -o buyItem.o buyItem.c

#target foundIt.o
foundIt.o: foundIt.c
	gcc $(gcc_opt) -o foundIt.o foundIt.c

#target firstInList.o
firstInList.o: firstInList.c
	gcc $(gcc_opt) -o firstInList.o firstInList.c

#target mainRun.o
mainRun.o: mainRun.c
	gcc $(gcc_opt) -o mainRun.o mainRun.c


clean: 
	rm -rf *.o lab4 lab4.zip
test: 
	./verify    
