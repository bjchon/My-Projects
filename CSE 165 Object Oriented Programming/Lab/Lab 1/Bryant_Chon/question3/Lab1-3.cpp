#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string car;
    string car1;
    string car11;

    cout << "Enter a Top 15 major car brand and I will tell you its country of origin: " << endl;
    cout << "Enter the word exit to exit the program"<< endl;
    cin >> car;

    if(car == "exit")
        goto exit;

    car11 = car;
    transform(car.begin(), car.end(), car.begin(), ::tolower);

    if(car != "exit")
        {
            car1 = car;
            goto menu;
        }

    while(car1 != "exit")
        {
            cout << "Enter a Top 15 major car brand and I will tell you its country of origin: " << endl;
            cout << "Enter the word exit to exit the program"<< endl;
            cin >> car1;
            if(car1 == "exit")
                break;
            car11 = car1;
            transform(car1.begin(), car1.end(), car1.begin(), ::tolower);

        menu:
            int num = 0;
            if (car1 == "ford" || car1 == "chevrolet" || car1 =="jeep" || car1 == "ram" || car1 == "gmc" || car1 == "tesla")
                num = 1;
            if (car1 == "toyota" || car1 == "honda" || car1 == "nissan" || car1 == "subaru")
                num = 2;
            if (car1 == "hyundai" || car1 == "kia")
                num = 3;
            if (car1 == "volkswagen" || car1 == "bmw" || car1 == "mercedes-benz" || car1 == "mercedes")
                num = 4;

            switch(num)
                {
                    case 1:
                        cout << car11 << " is from the United States" << endl;
                        break;
                    case 2: 
                        cout << car11 << " is from Japan" << endl;
                        break;
                    case 3:
                        cout << car11 << " is from South Korea" << endl;
                        break;
                    case 4:
                        cout << car11 << " is from Germany" << endl;
                        break;
                    default:
                        cout << car11 << " is not recognized" << endl;
                        break;
                }
        }

    exit:
        cout << "program exit";

    return 0;
}