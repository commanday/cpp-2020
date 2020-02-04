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
   Books Book2;            
 
   strcpy( Book1.title, "Alan Walker");
   strcpy( Book1.author, "Walker"); 
   strcpy( Book1.subject, "Singer");
   Book1.book_id = 12345;
 
   strcpy( Book2.title, "Water");
   strcpy( Book2.author, "Scientist");
   strcpy( Book2.subject, "Life");
   Book2.book_id = 12346;
 
   printBook( Book1 );
 
   printBook( Book2 );
 
   return 0;
}
void printBook( struct Books book )
{
   cout << "Title : " << book.title <<endl;
   cout << "Author : " << book.author <<endl;
   cout << "Subject : " << book.subject <<endl;
   cout << "Book ID : " << book.book_id <<endl;
}
