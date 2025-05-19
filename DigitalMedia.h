//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_DIGITALMEDIA_H
#define TASK_2V2_1_DIGITALMEDIA_H

#include "ItemsInLibrary.h"
#include <string>
#include <iostream>


class DigitalMedia: public ItemsInLibrary{
    string digitalMediaFormat;

public:
    DigitalMedia(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemDigitalMediaFormat_Type);

    string getDigitalMediaFormat()const;

    void setDigitalMediaFormat(const string& newDigitalMediaFormat);
    void displayDigitalMediaInfo();
};


#endif //TASK_2V2_1_DIGITALMEDIA_H
