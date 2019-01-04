/**
 * Disclaimer: This project is for Google Hash Code Compitition 2019 Practice Program
 * Owned by LI Yuyang & XIE Zhilin
 */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    cout << "?";

    char path[60];
    cin.getline(path, 60);

    long row, column, limit, maximum;

    cout << "?";

    FILE* file = fopen(path, "r");
    
    fprintf(file, "%s", "s");

    if(file == NULL){
        cout << "Error" << endl;
        return 0;
    }

    cout << "?";

    while(fscanf(file,"%d%d%d%d", row, column, limit, maximum)){
        cout << row << column << limit << maximum << endl;
    }

    return 0;
}