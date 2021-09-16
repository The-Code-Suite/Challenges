// Submission by kerchooboi420#5927
//   Date: 2021-09-15

using namespace std;
#include <iostream>

int main()
{
    int num; //This is the user number
    int product; //this the number ill output to the screen.

    cout << "Please enter your number" << endl;

    cin >> num; //here I just input num.

    //here I make the table
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            product = i * j;
            cout << product << " , ";



        }
        cout << endl;
    }
    return 0;
}
