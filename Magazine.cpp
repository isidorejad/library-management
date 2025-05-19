//
// Created by isido on 11/28/2023.
//

#include "Magazine.h"

using namespace std;

Magazine::Magazine(int itemUniqueID, string itemTitle, string itemAuthor, string itemPublicationYear, bool itemAvailability, string itemMagazine_Type)
        : ItemsInLibrary(itemUniqueID, itemTitle, itemAuthor, itemPublicationYear, itemAvailability, "Magazine"), issueNo("Issue 225, Volume 36"){}

string Magazine::getIssueNo()const{
    return issueNo;
}
void Magazine::setIssueNo(const string& newIssueNo) {
    issueNo = newIssueNo;
}
void Magazine::displayMagazineInfo(){
    cout << "\n=== Magazine ==="<<endl;
    cout << "Journal Issue Number: " << issueNo <<endl;
    ItemsInLibrary::displayInfo();
    cout << "Type: " << "Magazine" <<endl;
}