//
// Created by isido on 11/28/2023.
//

#ifndef TASK_2V2_1_ITEMSINLIBRARY_H
#define TASK_2V2_1_ITEMSINLIBRARY_H

using namespace std;
#include <string>

class ItemsInLibrary{
private:
    int itemUniqueID;
    string itemTitle;
    string itemAuthor;
    string itemPublicationYear;
    bool itemAvailability;
    string itemType;
    int itemReturnDueDate; //Library members will have up until 5 days to use any item borrowed from the library and then return it. This will be used to determine the availability of the item.
public:
    ItemsInLibrary(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemType);

    int getItemUniqueID()const;
    string getItemTitle()const;
    string getItemAuthor()const;
    string getItemPublicationYear()const;
    string getItemType() const;

    void setItemUniqueID(int newID);
    void setItemTitle(const string& newTitle);
    void setItemAuthor(const string& newAuthor);
    void setItemPublicationYear(const string& newPublicationYear);
    void setItemType(const string& newType);
    void bubbleSort(ItemsInLibrary items[], int size);
    int binarySearch(ItemsInLibrary items[], int left, int right, int targetID);

            bool isCheckedOut();
            bool searchItem(const string& searchQuery) const;
            void checkOut();
            void returnItem();
            void displayInfo();

};


#endif //TASK_2V2_1_ITEMSINLIBRARY_H
