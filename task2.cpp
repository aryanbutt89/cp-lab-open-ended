#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Choose your option (1 or 2):" << endl; 
    cout << "1. Check prime number" << endl;
    cout << "2. Find Prime Numbers in a range "  << endl;
    cin >> x;
   switch(x)
   {
    case 'a':
    int num;
    cout << " Enter a number: ";
    cin >> num;
    for(int i = 2; i < num; i++)
    {
    if (num % i == 0){
    cout << num << " is not a prime number"<<endl;
    break;
    }
     else
    {
        cout << num <<"is a prime Number"<<endl;
        break;
    }

    }
    break;
     case 'b':
    int min;
        cout << " minimum: ";
    do
    {
    cin >> min;
    }
    while (min < 1);
    int max;
    cout << "\n  maximum: ";
           do
    {
        cin >> max;
    }
    while (min >= max);

    for (int j = min; j <= max; j++)
    {

    for  (int i = 2; i < max; i++)
    {
    if (j % i != 0)
    {
    cout << j <<endl;
    }

   break;

}
}
}
return 0;
}
