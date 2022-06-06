#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
    //formatting entry message
    cout << setw(70) << setfill('*') << '\n';
    cout << setw(19) << '*';
    cout << " Welcome to the domain of cheese... ";
    cout << setw(14) << '*' << '\n';
    cout << setw(69) << '*' << '\n'<<'\n';
    //init constants
    double const cheese_container = 2.76;
    double const container_cost = 4.12;
    double const container_profit = 1.45;
    //init variables that will be calculated or inputted
    int containers_needed, cheese_produced;
    double produced_cost, total_profit;
    //user input for amount of cheese produced
    cout << "Please enter the number of cheese produced: ";
    cin >> cheese_produced;
    //calc containers needed 
    containers_needed = cheese_produced / cheese_container;
     //creating string to format output containers needed 
    string s1 = "The number of containers to hold the cheese is:";
    cout << s1 << setfill(' ') << setw(22) << right << containers_needed << '\n';
    //formatting second string using to_string to add the containers into the string
    string s2 = "The cost of producing " + to_string(containers_needed) + " container(s) of cheese is: ";
    cout << left << s2 << '$' << setw(15) << right << containers_needed * container_cost <<'\n'; 
    //formatting the final string for the total profit
    string s3 = "The profit from producing " + to_string(containers_needed) + " cotainer(s) of cheese is: ";
    //final output 
    cout << s3 << '$' << setw(12) << right <<containers_needed * container_profit << '\n';
    //creating press any key to ocntinue...
    cout << "Press any key to continue...";
    cin.get(); //takes any character and is received by getchar, ends the program.
    getchar();     


}