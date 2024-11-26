/*
 CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, 
 PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND 
PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT. 
*/

#include<stdio.h>
struct item 
{
	char itemname;
	int quantity;
	int price ;
	int amount;
}item1;

int function_item(){
	printf("Enter the name of the item :\n");
	scanf(" %[^\n]", &item1.itemname);
	printf("Enter the quantity of the item :\n");
	scanf("%d", &item1.quantity);
	printf("Enter the price of the item :\n");
	scanf("%d", &item1.price);
	item1.amount = item1.price * item1.quantity;
	return item1.amount;
}

int main(){
int result;
result = function_item();
printf("The final amount is %d ", result);

return 0;
}
