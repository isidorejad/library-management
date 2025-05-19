//
// Created by isido on 11/28/2023.
//
//#include <list>

#include "LibraryCustomer.h"
#include "Librarian.h"
#include "Book.h"
#include "DigitalMedia.h"
#include "Journal.h"
#include "Magazine.h"


int main() {
    // Creating items for the library
    Book book1(001, "The Great Gatsby", "F. Scott Fitzgerald", "1925", true, "Book");
    DigitalMedia digitalMedia1(102, "For All the Dogs", "Drake", "2023", false, "Digital Media");
    Journal journal1(203, "Inspite of the Departure", "Jake Don Diaz", "2023", true, "Journal");
    Magazine magazine1(304, "Me, Him & Her: The Unforgettable", "Aaliyah Monroe", "2019", false, "Magazine");

    // Creating librarian and customers
    Librarian librarian("LS-001", "Lisa Smith", 3045108);
    LibraryCustomer customer1("LC-001", "Alice Khan", 2867019);
    LibraryCustomer customer2("LC-002", "Bob Shepro", 789123);

    // Sample actions
    list<LibraryCustomer> members;
    librarian.createCustomerAccount( members,"LC-003", "Jevina St. Johnson", 6623245);
    librarian.lib_CheckOutItem(customer1, book1,librarian);
    librarian.returnItem(customer2, magazine1, librarian);

    // Searching library inventory
    list<ItemsInLibrary> inventory;
    inventory.push_back(book1);
    inventory.push_back(digitalMedia1);
    inventory.push_back(journal1);
    inventory.push_back(magazine1);

    //Librarian performing search by Item Author
    librarian.searchLibraryInventory(inventory, "Drake");

    // Displaying librarian and customer information
    librarian.printLibrarianInfo();

    customer1.printCustomerInfo();
    customer2.printCustomerInfo();

    const int size = 4;
    ItemsInLibrary items[size] = {
            ItemsInLibrary(001, "The Great Gatsby", "F. Scott Fitzgerald", "1925", true, "Book"),
            ItemsInLibrary(102, "For All the Dogs", "Drake", "2023", false, "Digital Media"),
            ItemsInLibrary(203, "Inspite of the Departure", "Jake Don Diaz", "2023", true, "Journal"),
            ItemsInLibrary(304, "Me, Him & Her: The Unforgettable", "Aaliyah Monroe", "2019", false, "Magazine")
    };

    // Sort items by itemUniqueID using bubble sort
    ItemsInLibrary library(items[size]);
    library.bubbleSort(items, size);

    // Perform binary search
    int targetID = 102; // Example ID to search
    int index = library.binarySearch(items, 0, size - 1, targetID);

    if (index != -1) {
        // Item found
        items[index].displayInfo();
    } else {
        // Item not found
        cout << "Item with ID " << targetID << " not found." << endl;
    }

    // Displaying specific item information
    cout << "\n=== Items in Library Info ==="<<endl;
    book1.displayBookInfo();
    digitalMedia1.displayDigitalMediaInfo();
    journal1.displayJournalInfo();
    magazine1.displayMagazineInfo();

    return 0;
}
