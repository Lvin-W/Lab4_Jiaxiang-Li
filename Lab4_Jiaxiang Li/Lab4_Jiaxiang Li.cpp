#include <iostream>

using namespace std;

void printMenu()
{
    cout << "Please select which operation you want to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your selection: ";
}

void factorial()
{
    float num{};
    int ans;
    bool EndCheck = false;

    do
    {
        cout << "Factorial:" << endl;
        cout << "Enter a number: ";
        cin >> num;

        ans = 1;
        int Inum = int(num);

        if (num == 0)
        {
            cout << "0! = 1" << endl;
            EndCheck = true;
        }
        else if (num / floor(num) != 1)
        {
            cout << "Nice try. But please enter an INTEGER..." << endl;
            EndCheck = false;
        }
        else
        {
            if (num < 0)
            {
                cout << "Nice try. But please enter a POSITIVE number..." << endl;
                EndCheck = false;
            }
            else
            {
                cout << Inum << "! = ";

                for (int i = 1; i <= Inum; i++)
                {
                    ans *= i;
                    if (i != Inum)
                    {
                        cout << i << " * ";
                    }
                    else
                    {
                        cout << i;
                    }
                }
                cout << " = " << ans << endl;
                EndCheck = true;
            }
        }

    } while (EndCheck == false);
}

void arithmetic()
{
    float start, add, ans, num{};
    bool EndCheck = false;
    
    do
    {
        cout << "Arithmetic Series:" << endl;

        cout << "Enter an number to start at: ";
        cin >> start;
        cout << "Enter a number to add each time: ";
        cin >> add;
        cout << "Enter the number of elements in the series: ";
        cin >> num;

        int Inum = int(num);
        ans = start;

        if (num <= 0)
        {
            cout << "Nice try. But pleaase enter a POSITIVE number for the number of elements in the series..." << endl << endl;
            continue;
        }
        else if (num / Inum != 1)
        {
            cout << "Nice try. But please enter an INTEGER for the number of elements in the series..." << endl << endl;
            continue;
        }
        

        if (num != 1)
        {
            cout << start;

            for (int i = 1; i <= Inum; i++)
            {
                if (i < Inum)
                {
                    ans += start + add * i;
                    cout << " + " << start + add * i;
                }
                else
                {
                    cout <<" = " << ans << endl;
                    EndCheck = true;
                }
            }
        }
        else
        {
            cout << start << endl;
            EndCheck = true;
        }
        
    } while (EndCheck == false);
    
}

void geometric()
{
    float start, mult, ans, num{};
    bool EndCheck = false;

    do
    {
        cout << "Geometric Series:" << endl;
        cout << "Enter a number to start at: ";
        cin >> start;
        cout << "Enter a number to multiply by each time: ";
        cin >> mult;
        cout << "Enter the number of elements in the series: ";
        cin >> num;

        int Inum = int(num);
        ans = start;

        if (num <= 0)
        {
            cout << "Nice try. But pleaase enter a POSITIVE number for the number of elements in the series..." << endl << endl;
            continue;
        }
        else if (num / Inum != 1)
        {
            cout << "Nice try. But please enter an INTEGER for the number of elements in the series..." << endl << endl;
            continue;
        }

        if (num == 1)
        {
            cout << start;
            EndCheck = true;
        }
        else
        {
            cout << start;

            for (int i = 1; i <= Inum; i++)
            {
                if (i != Inum)
                {
                    ans += start * pow(mult, i);
                    cout << " + " << start * pow(mult, i);
                }
                else
                {
                    cout << " = " << ans << endl;
                    EndCheck = true;
                }

            }
        }
    } while (EndCheck == false);
    

}

int main()
{
    int choice;
    char repeat;

    do
    {
        printMenu();
        cin >> choice;

        if (choice < 1 || choice >3)
        {
            return 0;
        }
        else if (choice == 1)
        {
            factorial();
        }
        else if (choice == 2)
        {
            arithmetic();
        }
        else if (choice == 3)
        {
            geometric();
        }
        cout << "Go Again? [Y/N]";
        cin >> repeat;

        if (repeat == 'y' || repeat == 'Y')
        {
            cout << endl;
        }
    } while (repeat == 'y' || repeat == 'Y'); 
}