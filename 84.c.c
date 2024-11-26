#include<stdio.h>
/*84) WRITE A FUNCTION TO READ INFORMATION OF BOOK AND
 DISPLAY THE INFORMATION USING POINTER TO STRUCTURE.*/
struct bookinfo{
char name [20];
char author [20];
char publishers [50];
int price [10];
int  ISBN[20];
}st;

int book_information()
{
 struct bookinfo *p=&st;
 
 printf("ENTER THE NAME OF BOOK:\n");
 gets(p->name);
 
 printf("ENTER THE NAME OF AUTHOR: \n");
 gets(p->author);
 
 printf("ENTER THE NAME OF PUBLISHERS: \n");
 gets(p->publishers);
 
 printf("ENTER THE PRICE OF THE BOOK:\n");
 gets(p->price);
 
 printf("ENTER THE ISBN NUMBER : \n");
 gets(p->ISBN);
 
 }
 
 int main()
 {
 book_information();
 printf("\"%s\"\n", st.name);
 printf("By %s \n",st.author);
 printf("published by %s \n", st.publishers);
 printf("Price:%s/-\n",st.price);
 printf("ISBN number: %s\n",st.ISBN);
 
  return 0;
 }
