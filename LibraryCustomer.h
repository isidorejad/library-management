//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_LIBRARYCUSTOMER_H
#define TASK_2V2_1_LIBRARYCUSTOMER_H

#include "ItemsInLibrary.h"
//#include "Librarian.h"
#include <string>
#include <list>
#include <queue>

using namespace std;

class LibraryCustomer {

public:
    LibraryCustomer(const string& identifier, const string& customerName, int contact);
    string getUniqueIdentifier() const;
    string getName()const;
    int getContactInfo()const;

    void setUniqueIdentifier(const string& identifier);
    void setName(const string& customerName);
    void setContactInfo(int contact);

    void cust_CheckedOutItem(ItemsInLibrary& item, int returnDueDate);
    void returnItemBeforeDueDate(ItemsInLibrary& item); //Allows customers to return items before due  dates
    void printCustomerInfo();  // Function to print customer details.
    bool searchLibraryItems(const string& searchQuery) const;

private:
    string uniqueIdentifier;
    string name;
    int contactInfo;
    list<ItemsInLibrary> checkedOutItems;
    queue<int> returnDueDates;
    list<ItemsInLibrary> getCheckedOutItems()const;


};


#endif //TASK_2V2_1_LIBRARYCUSTOMER_H
