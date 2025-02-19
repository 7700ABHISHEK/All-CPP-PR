#include <iostream>

using namespace std;

int main(){
    int i, count = 0, start_year, end_year;

    cout << "Enter Start and End Year : ";
    cin >> start_year >> end_year;

    if((start_year % 4 == 0) && (start_year % 100 != 0 || start_year % 400 == 0) ) {
        for(i = start_year; i <= end_year; i+=4){
            cout << i << " ";
            count++;
        }
    } else{
        start_year = start_year + (4 - (start_year % 4));
        for(i = start_year; i <= end_year; i+=4){
            cout << i << " ";
            count++;
        }
    }

    cout << endl << "count :" << count;

    return 0;
}