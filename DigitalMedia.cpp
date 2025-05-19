//
// Created by isido on 11/28/2023.
//

#include "DigitalMedia.h"

using namespace std;

DigitalMedia::DigitalMedia(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemDigitalMediaFormat_Type)
        : ItemsInLibrary(itemUniqueID, itemTitle, itemAuthor, itemPublicationYear, itemAvailability, "Digital Media"), digitalMediaFormat("Song"){}

string DigitalMedia::getDigitalMediaFormat()const{
    return digitalMediaFormat;
}
void DigitalMedia::setDigitalMediaFormat(const string& newDigitalMediaFormat){
    digitalMediaFormat = newDigitalMediaFormat;
}
void DigitalMedia::displayDigitalMediaInfo(){
    cout << "\n=== Digital Media ==="<<endl;
    cout<< "Digital Media Format: " << digitalMediaFormat <<endl;
    ItemsInLibrary::displayInfo();
    cout << "Item Type: " << "Digital Media" <<endl;

}