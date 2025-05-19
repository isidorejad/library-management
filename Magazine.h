//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_MAGAZINE_H
#define TASK_2V2_1_MAGAZINE_H

#include "ItemsInLibrary.h"
#include <iostream>
#include <string>

using namespace std;

class Magazine: public ItemsInLibrary{
    string issueNo;

public:
    Magazine(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemMagazine_Type);
    string getIssueNo()const;

    void setIssueNo(const string& newIssueNo);
    void displayMagazineInfo();
};


#endif //TASK_2V2_1_MAGAZINE_H
