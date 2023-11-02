#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Name_of_Book, Borrow ;
    int Borrow_Days, Borrow_Date, Return_Date;
    int Total_days = 0;
    int Total_Days = Return_Date - Borrow_Date;
    int fine;
    cout << "Enter the Name Of Book You want: ";
    getline(cin, Name_of_Book);
    cout << Name_of_Book << " is Available. \n ";
    cout << "Do you want to Borrow a book? ";
    cin >> Borrow;
    if(Borrow == "YES" || Borrow == "yes")
    {
        cout << "You Must Return the book Within 5 Days. If you won't It will be fine/day. " << endl;
        cout << "Enter the date You Borrow Book";
        cin >> Borrow_Date;
         cout << "Enter the date You Return Book";
        cin >> Return_Date;

        if (Total_Days > 5)
        fine = Total_Days * 1;
        cout << "Your Fine Is " << fine;
    }
    else if(Total_Days < 6 )
    cout << "Thanks For Returning No Fine";
    else if(Borrow == "NO" && Borrow == "no")
    {
        cout << "Thanks";
    }
    return 0;







}