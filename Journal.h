//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_JOURNAL_H
#define TASK_2V2_1_JOURNAL_H


#include "ItemsInLibrary.h"
#include <iostream>

class Journal: public ItemsInLibrary{
    string journalName;

public:
    Journal(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemJournal_Type);
    string getjournalName()const;

    void setJournalName(const string& newJournalName);
    void displayJournalInfo();

};


#endif //TASK_2V2_1_JOURNAL_H
