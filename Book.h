//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_BOOK_H
#define TASK_2V2_1_BOOK_H

#include "ItemsInLibrary.h"
#include <iostream>
#include <string>

class Book: public ItemsInLibrary{
    string bookNo;

public:
    Book(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemBook_Type);
    string getBookNo()const;

    void setBookNo(const string& newBookNo);
    void displayBookInfo();
};


#endif //TASK_2V2_1_BOOK_H
