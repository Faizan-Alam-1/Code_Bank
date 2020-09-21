#include <iostream>
using namespace std;
int main()

{
                       /* Here We Assume Below Array is Database of real Bank   */

    //                     *******      | Bank DataBase |  **********

    
    int card_number_database[] = {20, 23, 56, 60};
    int Pin_code_database[] = {12345, 67568, 12556};
    int Deposit_money_database = 500000;

    //                            *****    | Logic | ***********

    cout << "Please,Insert The Card" << endl; // we ask for card insertion.
    int card;
    cin >> card; // User enter card.

    int count = 0;  // variable declear.
     

    for (int i = 0; i < 4; i++)
    {
        if (card == card_number_database[i])
        {
            count++;

            cout << "Please Enter Five Digit Pin Code" << endl;

            int pin_code;
            cin >> pin_code;

            if (pin_code == Pin_code_database[i])
            {
                cout << "Please , Enter Amount Which You Want to Widraw" << endl;
                double Withdraw_amount;
                cin >> Withdraw_amount;

                if (Withdraw_amount <= Deposit_money_database)
                {

                    double remain = (Deposit_money_database - Withdraw_amount);
                    cout << "Remaining Balance is : "<< " ";      
                    cout << remain;
                }

                else
                {
                    cout << "Insufficient Balance" << endl;
                }
            }

            else 
            {
                cout << "worng pin code" << endl;
            }
        }
    }

    if (count == 0)
    {
        cout << "You Card Get Expire. Please Contact To The Bank" << endl;
    }
}