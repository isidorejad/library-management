//
// Created by isido on 11/28/2023.
//

#include "Book.h"

using namespace std;

Book::Book(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemType)
        : ItemsInLibrary(itemUniqueID, itemTitle, itemAuthor, itemPublicationYear, itemAvailability, "Book"), bookNo("9780743273565"){}

string Book::getBookNo()const{
    return bookNo;
}
void Book::setBookNo(const string& newBookNo){
    bookNo = newBookNo;
}
void Book::displayBookInfo(){
    cout << "\n=== Books ==="<<endl;
    cout << "ISBN : " << bookNo <<endl;
    ItemsInLibrary::displayInfo();
    cout << "Item Type: " << "Book" <<endl;

}
