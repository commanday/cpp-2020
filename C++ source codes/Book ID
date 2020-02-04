#include <iostream>
#include <cstring>
 
using namespace std;
void printBook( struct Books book );
 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;                  
 
   strcpy( Book1.title, "Alan Walker");
   strcpy( Book1.author, "Walker"); 
   strcpy( Book1.subject, "Singer");
   Book1.book_id = 12345;
 
 
   printBook( Book1 );
 
   return 0;
}
void printBook( struct Books book )
{
   cout << "Title : " << book.title <<endl;
   cout << "Author : " << book.author <<endl;
   cout << "Subject : " << book.subject <<endl;
   cout << "Book ID : " << book.book_id <<endl;
}
