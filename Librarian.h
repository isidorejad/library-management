//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_LIBRARIAN_H
#define TASK_2V2_1_LIBRARIAN_H

#include "ItemsInLibrary.h"
#include "LibraryCustomer.h"
#include <string>
#include <list>

class Librarian {

public:
    Librarian(const string& uniqueID, const string& name, int contactInfo);
    string getStaffUniqueID()const;
    string getStaffName()const;
    int getStaffContactInfo()const;

    void setStaffUniqueID(const string& uniqueID);
    void setStaffName(const string& name);
    void setStaffContactInfo(int contactInfo);

    void createCustomerAccount(list<LibraryCustomer>&members, const string& identifier, const string& customerName, int contact);
    void lib_CheckOutItem(LibraryCustomer& member, ItemsInLibrary& item, Librarian& staff);
    void returnItem(LibraryCustomer& member, ItemsInLibrary& item, Librarian& staff);
    void searchLibraryInventory(const list<ItemsInLibrary> &inventory, const string& searchQuery);
    void printLibrarianInfo();  // Function to print librarian details.

private:
    string staffUniqueID;
    string staffName;
    int staffContactInfo;
    list<LibraryCustomer> members;

};

#endif //TASK_2V2_1_LIBRARIAN_H
