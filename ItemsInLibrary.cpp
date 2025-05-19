#include "ItemsInLibrary.h"
#include <iostream>
using namespace std;

ItemsInLibrary::ItemsInLibrary(int itemUniqueID,string itemTitle, string itemAuthor, string itemPublicationYear,
                               bool itemAvailability, string itemType){
    this->itemUniqueID = itemUniqueID;
    this->itemTitle = itemTitle;
    this->itemAuthor = itemAuthor;
    this->itemPublicationYear = itemPublicationYear;
    this->itemAvailability = itemAvailability;
    this->itemType = itemType;
}
//Accessors - Setters
void ItemsInLibrary::setItemUniqueID(int newID) {
    itemUniqueID = newID;
}
void ItemsInLibrary::setItemTitle(const string& newTitle) {
    itemTitle = newTitle;
}
void ItemsInLibrary::setItemAuthor(const string& newAuthor) {
    itemAuthor = newAuthor;
}
void ItemsInLibrary::setItemPublicationYear(const string& newPublicationYear) {
    itemPublicationYear = newPublicationYear;
}
void ItemsInLibrary::setItemType(const string& newType) {
    itemType = newType;
}

//Mutators - Getters
int ItemsInLibrary::getItemUniqueID()const{
    return itemUniqueID;
}
string ItemsInLibrary::getItemTitle()const{
    return itemTitle;
}
string ItemsInLibrary::getItemAuthor()const{
    return itemAuthor;
}
string ItemsInLibrary::getItemPublicationYear()const{
    return itemPublicationYear;
}
string ItemsInLibrary::getItemType() const {
    return itemType;
}

bool ItemsInLibrary::isCheckedOut(){
    return !itemAvailability;
}
bool ItemsInLibrary::searchItem(const string& searchQuery) const{
    return(itemTitle == searchQuery || itemAuthor == searchQuery || itemType == searchQuery);
}
void ItemsInLibrary::checkOut(){
    if (itemReturnDueDate ==0){
        itemReturnDueDate = 5;
        itemAvailability = true;
    }else{
        itemAvailability = false;
    }
}
void ItemsInLibrary::returnItem(){
    if (itemReturnDueDate != 0)
        itemAvailability = false;
}
// Sorting algorithm (Bubble Sort) to sort items based on itemUniqueID
void ItemsInLibrary::bubbleSort(ItemsInLibrary items[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (items[j].getItemUniqueID() > items[j + 1].getItemUniqueID()) {
                // Swap items
                ItemsInLibrary temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

// Searching algorithm (Binary Search) to find an item by itemUniqueID
int ItemsInLibrary::binarySearch(ItemsInLibrary items[], int left, int right, int targetID) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (items[mid].getItemUniqueID() == targetID)
            return mid;

        if (items[mid].getItemUniqueID() > targetID)
            return binarySearch(items, left, mid - 1, targetID);

        return binarySearch(items, mid + 1, right, targetID);
    }

    // Item not found
    return -1;
}
void ItemsInLibrary::displayInfo(){
    cout << "Item ID: " << itemUniqueID << endl;
    cout << "Title: " << itemTitle << endl;
    cout << "Author: " << itemAuthor << endl;
    cout << "Publication Year: " << itemPublicationYear << endl;
    cout << "Availability: " << (itemAvailability ? "Available" : "Checked Out") << endl;
}

