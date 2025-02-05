#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    // Constructor to initialize a Book object
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    // Copy constructor to create a copy of another Book object
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
        cout << "Copy constructor called!" << endl;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    // Create an object 'book1' using the constructor
    Book book1("C++ Programming", 300);
    
    // Create a new object 'book2' using the copy constructor (copying 'book1')
    Book book2 = book1;

    // Display details of both books
    cout << "Details of book1:" << endl;
    book1.display();  // Output: Title: C++ Programming, Pages: 300

    cout << "Details of book2:" << endl;
    book2.display();  // Output: Title: C++ Programming, Pages: 300

    return 0;
}

