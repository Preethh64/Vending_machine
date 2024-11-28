#include <iostream>
using namespace std;

int main()
{
    int ch,dep=0,prices[100]={10,15,20,25};
    string items[] = {"chips", "Soda", "Candy", "Cookies"};

    cout << "VENDING MACHINE" << endl;

    while (true)
    {
        cout << "\nItems available:" << endl;
        cout << "1. chips (10 coins)" << endl;
        cout << "2. Soda (15 coins)" << endl;
        cout << "3. Candy (20 coins)" << endl;
        cout << "4. Cookies (25 coins)" << endl;
        cout << "0. Exit" << endl;

        cout << "\nEnter the number of the item you want to buy (0 to exit): ";
        cin >> ch;

        if (ch == 0)
        {
            cout << "Exiting." << endl;
            break; 
        }

        if (ch < 1 || ch > 4) 
        {
            cout << "Invalid." << endl;
            continue;
        }

        cout << "You selected " << items[ch - 1] << ". Price: " << prices[ch - 1] << " coins." << endl;
        cout << "Enter money:";
        cin >> dep;

        if (dep < prices[ch - 1])
        {
            cout << "Insufficient funds! You need " << (prices[ch - 1] - dep) << " more coins." << endl;
            cout << "Transaction canceled. Please try again." << endl;
        } 
        else 
        {
            int change = dep - prices[ch- 1];
            cout << "Dispensing " << items[ch - 1] << "." << endl;
            if (change > 0) 
            {
                cout << "Returning change: " << change << " coins." << endl;
            }
            cout << "Thank you for your purchase!" << endl;
        }
    }
    return 0;
}
