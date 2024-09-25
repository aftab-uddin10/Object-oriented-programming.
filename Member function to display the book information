#include <iostream>
#include <cstring>
using namespace std;
class Book{
    private:

       string title;
       string author;
       int pages;

    public:

    void Set(string set_title,string set_author,int set_pages){
           
           title = set_title ;
           author = set_author;
           pages = set_pages ;
    }
     
     void display(){
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Number of Pages: " << pages << endl;
     }
};

int main(){
    Book Book1,Book2;

    Book1.Set("The Great Gatsby", "F. Scott Fitzgerald", 180);
    Book2.Set("Pride and Prejudice","Jane Austen",320);

    Book1.display();
    Book2.display();
}
