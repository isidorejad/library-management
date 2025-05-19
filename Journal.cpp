//
// Created by isido on 11/28/2023.
//

#include "Journal.h"

using namespace std;

Journal::Journal(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailabliity, string itemJournal_Type)
        : ItemsInLibrary(itemUniqueID, itemTitle, itemAuthor, itemPublicationYear, itemAvailabliity, "Journal"), journalName("Volume 100, Issue 3"){}

string Journal::getjournalName()const{
    return journalName;
}
void Journal::setJournalName(const string& newJournalName){
    journalName=newJournalName;
}
void Journal::displayJournalInfo(){
    cout << "\n=== Journal ==="<<endl;
    cout << "Journal Name: " << journalName <<endl;
    ItemsInLibrary::displayInfo();
    cout << "Item Type: " << "Journal" <<endl;

}