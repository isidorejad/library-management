//
// Created by isido on 11/28/2023.
//

#include "Librarian.h"
#include <iostream>
using namespace std;

Librarian::Librarian(const std::string& uniqueID, const std::string& name, int contactInfo)
        : staffUniqueID(uniqueID), staffName(name), staffContactInfo(contactInfo) {}

string Librarian::getStaffUniqueID() const {
    return staffUniqueID;
}

string Librarian::getStaffName() const {
    return staffName;
}

int Librarian::getStaffContactInfo() const {
    return staffContactInfo;
}

void Librarian::setStaffUniqueID(const std::string& uniqueID) {
    staffUniqueID = uniqueID;
}

void Librarian::setStaffName(const string& name) {
    staffName = name;
}

void Librarian::setStaffContactInfo(int contactInfo) {
    staffContactInfo = contactInfo;
}

// Function to create a new customer/member account
 void Librarian::createCustomerAccount(list<LibraryCustomer>&members, const string& identifier, const string& customerName, int contact) {
     LibraryCustomer newCustomer(identifier, customerName, contact);
     members.push_back(newCustomer);
     cout << "New customer: "<<endl;
     cout << "ID: " << identifier << endl;
     cout << "Name: " << customerName<<endl;
     cout <<"\n";
 }

// Function to check out an item for a customer
void Librarian::lib_CheckOutItem(LibraryCustomer& member, ItemsInLibrary& item, Librarian& staff) {
    if (item.isCheckedOut()) {
        cout << "Item is already checked out." << endl;
        cout << "Signed: "<<staff.getStaffName()<<endl;
    } else {
        member.cust_CheckedOutItem(item, 5); // Example: Due in 5 days after checkout

        // Display information about the checked-out item only if checkout was successful
        cout << "Item checked out successfully" << endl;
        cout << "Item ID: " << item.getItemUniqueID() << endl;
        cout << "Title: " << item.getItemTitle() << endl;
        cout << "Author: " << item.getItemAuthor() << endl;
        cout << "Signed: " << staff.getStaffName()<<endl;
        cout<<"\n";
    }
}

// Function to handle the return of an item by a customer
void Librarian::returnItem(LibraryCustomer& member, ItemsInLibrary& item, Librarian& staff ) {
    cout << "Returning item: \n" << item.getItemTitle() << endl; // Print the item being returned
    cout << member.getName()<< " returned " <<item.getItemTitle()<<endl;
    cout << "Item returned successfully." << endl;
    cout << "Signed: " <<staff.getStaffName()<<endl;
    member.returnItemBeforeDueDate(item);
}

// Function to search for an item in the library inventory
void Librarian::searchLibraryInventory(const list<ItemsInLibrary> &inventory, const string& searchQuery){
    bool found = false;
    for (const auto& item : inventory) {
        if (item.searchItem(searchQuery)) {
            // Print or use the found item information
            cout << "\nSearch Functionality"<<endl;
            cout <<"Results: ITEM FOUND"<< " \n";
            cout<<"Name: "<<item.getItemTitle() <<endl;
            cout<<"Dir : " <<item.getItemAuthor() <<endl;
            cout<<"Publ: "<<item.getItemPublicationYear()<<endl;
            cout<<"Type: "<< item.getItemType() <<endl;
            found = true;
        }
    }
    if (!found) {
        cout << "\nSearch Functionality"<<endl;
        cout <<"Results: ITEM NOT FOUND"<< " \n";
        cout << "No items matching the search query found in the library inventory." << endl;
    }
}

// Function to display librarian information
void Librarian::printLibrarianInfo() {
    cout << "\n=== Librarian Info ==="<<endl;
    cout << "Staff ID: " << staffUniqueID << endl;
    cout << "Name: " << staffName << endl;
    cout << "Contact Info: " << staffContactInfo << endl;
}
