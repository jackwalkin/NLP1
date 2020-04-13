#include <iostream>

//**when adding a value user action (add/remove display) comes up once value added and entered
//display works g
//**remove wrong input:
    //this list does not contain IS TWICE
    // removed item from list
    //User action (...): try again
//**remove value
    //this list does not contain this item
    //removed this item from list
    //user action(...): try again

#include <vector>

using namespace std;

void replaceV(vector<int>&);
void addVector(vector<int>&);
void displayVector(vector<int>&);


int main()
{
    string userinput;
    cout << "Welcome to the Shopping List 5000 (trademarked)" << endl;
    vector<int> List;

    do{
        cout << "User action (add/remove/display):";
        getline(cin, userinput);

        if (userinput == "display"){
            displayVector(List);
        }
        else if(userinput == "add"){
            addVector(List);
        }
        else if (userinput == "remove"){
            replaceV(List);
        }
        else {
          cout << "Try again" << endl;
        }
    }while (userinput != "end");

    return 0;
}

void displayVector(vector<int>& List) {
    cout << "Display Shopping List 5000: " << endl;

    for(unsigned int i = 0; i <List.size(); i++){
            cout << "> " << List[i] << endl;
    }
}


void addVector(vector<int>& List){
    int add_value;

    cout << "Add this item: ";
    cin >> add_value;
    List.insert(List.begin(), add_value);//add to top
}


void replaceV(vector<int>& List) {
    int old;

    cout << "Remove this item: ";
    cin >> old;

    for(unsigned int i=0; i < List.size(); i++){
        if(List[i] == old){
            List.erase(List.begin() + i);//Remove at index, first remove elelment... find index if exists
        }
        else if(List[i] != old){
            cout << "The list does not contain this item..." << endl;
        }
    }
    cout << "Removed this item from your list..." << endl;
}
