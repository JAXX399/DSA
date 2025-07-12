#include<bits/stdc++.h> //includes all standard libraries
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x: " << x << "value of y:"<<y;
    string s= "raj" ;
    do_something(s); // This will modify the string s
    cout << "Original string after function call: " << s << endl; // This will be unchanged
    // because we passed by value, so the original string remains unchanged
    //pass by reference would have modified the original string
    //pass by reference example 
    string s1="raj";
    do_something_ref(s1); // This will modify the string s1
    cout << "Original string after function call: " << s1 << endl; // This will be modified

    return 0;



}


//data tyoes =int ,long,long long, float, double, char, bool, string, vector, map, set

int data_type() {
    int a = 10; //integer -10^9 to 10^9
    long b = 1000000; //long integer -10^12 to 10^12
    long long c = 10000000000; //long long integer -10^18 to 10^18
    double d = 10.5; //double precision floating point
    char ch = 'A'; //character
    float d = 10.5; //floating point number




    string s1,s2;
    cin >> s1 >> s2; //string input
    cout << "String 1: " << s1 << ", String 2: " << s2 << endl;
    cout<< s1[2]; //accessing character at index 2 of string s1
    string str;
    getline(cin, str); //getline for string input





    return 0;
}


int if_else() {
    int a = 10;
    if (a > 0) {
        cout << "a is positive" << endl;
    } else if (a < 0) {
        cout << "a is negative" << endl;
    } else {
        cout << "a is zero" << endl;
    }
    return 0;
}


int switch_case() {

    int day;
    cin >> day;
    // 1 for Monday, 2 for Tuesday, ..., 7 for Sunday

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    return 0;
}


int array_example() {
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "Array elements are: ";

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}

int _2d_array() {
    int arr[3][3];
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix elements are:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//pass by value passed str will have copy of the original string
void do_something(string str){
    str[0]='T';
    cout<< str <<endl; // This will print the modified string
} 


//pass by reference passed str will modify the original string
void do_something_ref(string &str){
    str[0]='T';
    cout<< str <<endl; // This will print the modified string
}