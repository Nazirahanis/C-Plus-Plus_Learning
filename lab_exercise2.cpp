/*Name : NUR NAZIRAH HANIS BINTI NAZRI
Maric no : A25CS0319
Date : 19/12/2025*/

#include <iostream>
using namespace std;

void dispStatus(int active){
    string status;
    if (active > 40) 
        status = "Red zone";
    else if (active >= 21 && active <= 40) 
        status = "Orange zone";
    else if (active >= 1 && active <= 20) 
        status = "Yellow zone";
    else 
        status = "Green zone";
    cout << "Status\t\t: " << status << endl;
}

void getInput(int &totalcase, int &newCase, int &death, int &recover){
    cout << "Total cases\t: ";
    cin >> totalcase;
    cout << "New cases\t: ";
    cin >> newCase;
    cout << "Total death\t: ";
    cin >> death;
    cout << "Total recovered\t: ";
    cin >> recover;

    cin.ignore();
}

void dispOutput(int active){
    string status;
    cout << "Active cases\t: " << active << endl;
    dispStatus(active);
}

int main(){

    string state, higheststate = " ";
    int active, totalcase, newCase, death, recover, avg; 
    int total = 0, highest = 0, totalState = 0;
    char enter;

    do{
        char state[50];
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>>>>" << endl;
        cout << "State name\t: "; 
        cin.getline(state, 50);
        totalState = totalState + 1;

        getInput(totalcase, newCase, death, recover);
        cout << endl;

        cout << "<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>>>>" <<endl;
        active = totalcase + newCase - death - recover;
        dispOutput(active);
        total = total + active;
        avg = total/totalState;
        if (active > highest) {
            highest = active;
            higheststate = state;
        }
        cout << endl;

        cout << "Press <ENTER> to continue...";
        enter = cin.get();
        
        cout << endl;
        
    } while(enter == '\n');
    
    cout << "<<<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>>>>>>>" << endl;
    cout << "Total\t: " << total << endl;
    cout << "Highest\t: " << highest << " (" << higheststate << ")"  << endl;
    cout << "Average for " << totalState << " states: " << avg << endl;

    return 0;

}