//
// Created by isido on 11/28/2023.
//

#include "LibraryCustomer.h"
#include <iostream>
#include <stdexcept>

using namespace std;

LibraryCustomer::LibraryCustomer(const string& identifier, const string& customerName, int contact)
        : uniqueIdentifier(identifier), name(customerName), contactInfo(contact) {}

string LibraryCustomer::getUniqueIdentifier()  const{
    return uniqueIdentifier;
}
string LibraryCustomer::getName() const{
    return name;
}
int LibraryCustomer::getContactInfo() const{
    return contactInfo;
}

void LibraryCustomer::setUniqueIdentifier(const string& identifier) {
    uniqueIdentifier = identifier;
}
void LibraryCustomer::setName(const string& customerName) {
    name = customerName;
}
void LibraryCustomer::setContactInfo(int contact) {
    contactInfo = contact;
}
list<ItemsInLibrary> LibraryCustomer::getCheckedOutItems () const {
    return checkedOutItems;
}
void LibraryCustomer::cust_CheckedOutItem(ItemsInLibrary &item, int returnDueDate) {
    if (item.isCheckedOut()) {
        item.checkOut();
        checkedOutItems.push_back(item);
        returnDueDates.push(returnDueDate);
    } else {
        cout << "Item is already checked out." << endl;
//        cout << "Signed: "<< staff.getStaffName()<<endl;

    }
}

void LibraryCustomer::returnItemBeforeDueDate(ItemsInLibrary& item) {
    if (!item.isCheckedOut()) {
        cout << "Item is not checked out." << endl;
//        cout <<"Signed: "<< staff.getStaffName();
        return;
    }

    int dueDate = 5; // Assuming dueDate is 5 for demonstration
    int currentDate = 0; // Replace with actual current date logic

    try {
        if (currentDate < dueDate) {
            item.returnItem();

            // Find the item in the checkedOutItems list and remove it
            for (auto it = checkedOutItems.begin(); it != checkedOutItems.end(); ++it) {
                if (it->getItemUniqueID() == item.getItemUniqueID()) {
                    cout << "Item being returned before due date: " << it->getItemTitle() << endl;
                    checkedOutItems.erase(it);
                    break;
                }
            }
            returnDueDates.pop();

            cout << "NOTE: ITEM RETURNED BEFORE DUE DATE!\n" << endl;
        } else {
            // Find the item in the checkedOutItems list and print it as returned after due date
            for (const auto& checkedItem : checkedOutItems) {
                if (checkedItem.getItemUniqueID() == item.getItemUniqueID()) {
                    cout << "Item returned after due date: " << checkedItem.getItemTitle() << endl;
                    break;
                }
            }
            throw runtime_error("Item cannot be returned after the due date has passed.");
        }
    } catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    // Print the current list of checked-out items after the return
    cout << "Currently checked-out items:" << endl;
    for (const auto& checkedItem : checkedOutItems) {
        cout << checkedItem.getItemTitle() << endl;
    }
}

void LibraryCustomer::printCustomerInfo() {
    cout << "\n=== Customers Info ===" << endl;
    cout << "Customer ID: " << uniqueIdentifier << endl;
    cout << "Name: " << name << endl;
    cout << "Contact Info: " << contactInfo << endl;
    cout << "Checked Out Items: " << checkedOutItems.size() << endl;
    cout << "\n";
}

