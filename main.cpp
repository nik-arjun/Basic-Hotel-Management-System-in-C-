#include <iostream>

using namespace std;

int main()
{
    int choice,quantity,totalSale;
    //Rooms and Food Available
    int Qrooms,Qpaneer,Qburger,Qchowmein,Qroti,Qveg,Qsalad,QfruitChat;
    //Rooms and food Sold
    int Srooms=0,Spaneer=0,Sburger=0,Schowmein=0,Sroti=0,Sveg=0,Ssalad=0,SfruitChat=0;
    //Price of Rooms and Food;
    int Prooms=1500,Ppaneer=250,Pburger=99,Pchowmein=110,Proti=10,Pveg=285,Psalad=85,PfruitChat=50;
    //Total Price of each thing
    int Trooms=0,Tpaneer=0,Tburger=0,Tchowmein=0,Troti=0,Tveg=0,Tsalad=0,TfruitChat=0;

    cout << "Enter the no. of Rooms Available." << endl;
    cin >> Qrooms;
    cout << "Enter the Bowls of Paneer Manchurian." << endl;
    cin >> Qpaneer;
    cout << "Enter the Quantity of Burger." << endl;
    cin >> Qburger;
    cout << "Enter the Quantity of Chowmein." << endl;
    cin >> Qchowmein;
    cout << "Enter the Quantity of Roti." << endl;
    cin >> Qroti;
    cout << "Enter the Bowls of Mix veg." << endl;
    cin >> Qveg;
    cout << "Enter the Quantity of salad." << endl;
    cin >> Qsalad;
    cout << "Enter the Quantity of Fruit Chat." << endl;
    cin >> QfruitChat;

    m:

    cout << "-------Kaake The Dhaba-------" << endl;
    cout << "1) Rooms" << endl;
    cout << "2) Paneer Manchurian" << endl;
    cout << "3) Burger" << endl;
    cout << "4) Chowmein" << endl;
    cout << "5) Roti" << endl;
    cout << "6) Mix Veg" << endl;
    cout << "7) Salad" << endl;
    cout << "8) Fruit Chat" << endl;
    cout << "9) Information Regarding Total Sales" << endl;
    cout << "10) Exit" << endl;

    cout << "Please choose from the above available Options." << endl;
    cin >> choice;

    switch(choice) {
    case 1:
        cout << "Enter the Quantity of Rooms you want." << endl;
        cin >> quantity;

        if(Qrooms-Srooms >= quantity) {
            Srooms += quantity;
            Trooms += quantity*Prooms;
            cout << quantity << " Rooms assigned to you." << endl;
        }
        else if(Qrooms-Srooms==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qrooms-Srooms << " Rooms Available." << endl;
        break;
    case 2:
        cout << "Enter the Bowls of Paneer Manchurian you want." << endl;
        cin >> quantity;

        if(Qpaneer-Spaneer >= quantity) {
            Spaneer += quantity;
            Tpaneer += quantity*Ppaneer;
            cout << quantity << " Bowls Paneer Manchurian would be handed to you." << endl;
        }
        else if(Qpaneer-Spaneer==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qpaneer-Spaneer << " Bowls of Paneer Manchurian Available." << endl;
        break;
    case 3:
        cout << "Enter the Quantity of Burgers you want." << endl;
        cin >> quantity;

        if(Qburger-Sburger >= quantity) {
            Sburger += quantity;
            Tburger += quantity*Pburger;
            cout << quantity << " Burgers would be handed to you." << endl;
        }
        else if(Qburger-Sburger==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qburger-Sburger << " Burgers Available." << endl;
        break;
    case 4:
        cout << "Enter the Quantity of Chowmein you want." << endl;
        cin >> quantity;

        if(Qchowmein-Schowmein >= quantity) {
            Schowmein += quantity;
            Tchowmein += quantity*Pchowmein;
            cout << quantity << " Chowmein would be handed to you." << endl;
        }
        else if(Qchowmein-Schowmein==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qchowmein-Schowmein << " Plates Chowmein Available." << endl;
        break;
    case 5:
        cout << "Enter the Quantity of Roti you want." << endl;
        cin >> quantity;

        if(Qroti-Sroti >= quantity) {
            Sroti += quantity;
            Troti += quantity*Proti;
            cout << quantity << " Roti would be handed to you." << endl;
        }
        else if(Qroti-Sroti==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qroti-Sroti << " Roti Available." << endl;
        break;
    case 6:
        cout << "Enter the Bowls of Mix Veg you want." << endl;
        cin >> quantity;

        if(Qveg-Sveg >= quantity) {
            Sveg += quantity;
            Tveg += quantity*Pveg;
            cout << quantity << " Bowls Mix Veg would be handed to you." << endl;
        }
        else if(Qveg-Sveg==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qveg-Sveg << " Bowls of Mix Veg Available." << endl;
        break;
    case 7:
        cout << "Enter the Plates of Salad you want." << endl;
        cin >> quantity;

        if(Qsalad-Ssalad >= quantity) {
            Ssalad += quantity;
            Tsalad += quantity*Psalad;
            cout << quantity << " Plates Salad would be handed to you." << endl;
        }
        else if(Qsalad-Ssalad==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << Qsalad-Ssalad << " Plates of Salad Available." << endl;
        break;
    case 8:
        cout << "Enter the Plates of Fruit Chat you want." << endl;
        cin >> quantity;

        if(QfruitChat-SfruitChat >= quantity) {
            SfruitChat += quantity;
            TfruitChat += quantity*PfruitChat;
            cout << quantity << " Plates Fruit Chat would be handed to you." << endl;
        }
        else if(QfruitChat-SfruitChat==0)
            cout << "No rooms are available." << endl;
        else
            cout << "Only " << QfruitChat-SfruitChat << " Plates of Fruit Chat Available." << endl;
        break;
    case 9:
        cout << "Total no. of Rooms = " << Qrooms << endl;
        cout << "Total no. of Rooms sold = " << Srooms << endl;
        cout << "Remaining Rooms = " << Qrooms-Srooms << endl;
        cout << "Amount Collected = " << Trooms << endl;

        cout << "\nTotal no. of Bowls of Paneer Manchurian = " << Qpaneer << endl;
        cout << "Total no. of Bowls of Paneer Manchurian sold = " << Spaneer << endl;
        cout << "Remaining Bowls of Paneer Manchurian = " << Qpaneer-Spaneer << endl;
        cout << "Amount Collected = " << Tpaneer << endl;

        cout << "\nTotal no. of Burgers = " << Qburger << endl;
        cout << "Total no. of Burgers sold = " << Sburger << endl;
        cout << "Remaining Burgers = " << Qburger-Sburger << endl;
        cout << "Amount Collected = " << Tburger << endl;

        cout << "\nTotal no. of Plates of Chowmein = " << Qchowmein << endl;
        cout << "Total no. of Plates of Chowmein sold = " << Schowmein << endl;
        cout << "Remaining Plates of Chowmein = " << Qchowmein-Schowmein << endl;
        cout << "Amount Collected = " << Tchowmein << endl;

        cout << "\nTotal no. of Roti = " << Qroti << endl;
        cout << "Total no. of Roti sold = " << Sroti << endl;
        cout << "Remaining Roti = " << Qroti-Sroti << endl;
        cout << "Amount Collected = " << Troti << endl;

        cout << "\nTotal no. of Bowls of Mix Veg = " << Qveg << endl;
        cout << "Total no. of Bowls of Mix Veg sold = " << Sveg << endl;
        cout << "Remaining Bowls of Mix Veg = " << Qveg-Sveg << endl;
        cout << "Amount Collected = " << Tveg << endl;

        cout << "\nTotal no. of Plates of Salad = " << Qsalad << endl;
        cout << "Total no. of Plates of Salad sold = " << Ssalad << endl;
        cout << "Remaining Plates of Salad = " << Qsalad-Ssalad << endl;
        cout << "Amount Collected = " << Tsalad << endl;

        cout << "\nTotal no. of Plates of Fruit Chat = " << QfruitChat << endl;
        cout << "Total no. of Plates of Fruit Chat sold = " << SfruitChat << endl;
        cout << "Remaining Plates of Fruit Chat = " << QfruitChat-SfruitChat << endl;
        cout << "Amount Collected = " << TfruitChat << endl;

        totalSale = Trooms+Tpaneer+Tburger+Tchowmein+Troti+Tveg+Tsalad+TfruitChat;
        cout << "\nTotal Sales of the Day :- " << totalSale << endl;
        break;
    case 10:
        exit(0);
    default:
        cout << "Please select the option from the below." << endl;
    }

    goto m;
}
