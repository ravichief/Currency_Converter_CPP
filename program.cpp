/*
Name of project: Currency Converter

Currency	             INR
US dollar (USD)	         79.85
Euro (EUR)	             89.71
Japanese yen (JPY)	     0.69
Pound sterling (GBP)	 99.41
Australian dollar (AUD)	 53.85
Canadian dollar (CAD)	 56.70
Swiss franc (CHF)	     85.16
Chinese renminbi (CNH)	 7.77
Hong Kong dollar (HKD)	 7.85
New Zealand dollar (NZD) 50.37

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value_in_rupee, index, trying = 1, change;
    float converted_value;
    cout << "Welcome\nPlease enter the amount in rupees : ";
    cin >> value_in_rupee;
    while (trying == 1)
    {
        cout << "\n\t1.US dollar (USD)\n\t2.Euro(EUR)\n\t3.Japanese yen(JPY)\n\t4.Pound sterling(GBP)\n\t5.Australian dollar(AUD)\n\t6.Canadian dollar(CAD)\n\t7.Swiss franc(CHF)\n\t8.Chinese renminbi(CNH)\n\t9.Hong Kong dollar(HKD)\n\t10.New Zealand dollar(NZD)\n\nPlease enter the index of the currency to which you want to convert " << value_in_rupee << " Rupees : ";
        cin >> index;
        cout << "\n";
        switch (index)
        {
        case 1:
            converted_value = ((float)(value_in_rupee / 79.85));
            cout << "The equivalent US dollar (USD) is " << converted_value << endl;
            break;

        case 2:
            converted_value = ((float)(value_in_rupee / 89.71));
            cout << "The equivalent Euro (EUR) is " << converted_value << endl;
            break;

        case 3:
            converted_value = ((float)(value_in_rupee / 0.69));
            cout << "The equivalent Japanese yen (JPY) is " << converted_value << endl;
            break;

        case 4:
            converted_value = ((float)(value_in_rupee / 99.41));
            cout << "The equivalent Pound sterling (GBP) is " << converted_value << endl;
            break;

        case 5:
            converted_value = ((float)(value_in_rupee / 53.85));
            cout << "The equivalent Australian dollar (AUD) is " << converted_value << endl;
            break;

        case 6:
            converted_value = ((float)(value_in_rupee / 56.70));
            cout << "The equivalent Canadian dollar (CAD) is " << converted_value << endl;
            break;

        case 7:
            converted_value = ((float)(value_in_rupee / 85.16));
            cout << "The equivalent Swiss franc (CHF) is " << converted_value << endl;
            break;

        case 8:
            converted_value = ((float)(value_in_rupee / 7.77));
            cout << "The equivalent Chinese renminbi (CNH) is " << converted_value << endl;
            break;

        case 9:
            converted_value = ((float)(value_in_rupee / 7.85));
            cout << "The equivalent Hong Kong dollar (HKD) is " << converted_value << endl;
            break;

        case 10:
            converted_value = ((float)(value_in_rupee / 50.37));
            cout << "The equivalent New Zealand dollar (NZD) is " << converted_value << endl;
            break;

        default:
            cout << "Wrong choice made.";
        }
        cout << "\n1:Again\n2:Exit\nEnter your choice : ";
        cin >> trying;
        if (trying != 2)
        {
            cout << "\nDo you want to change the amount in rupees?\n1.Yes\n2.No\nEnter your choice : ";
            cin >> change;
            if (change == 1)
            {
                cout << "\nEnter the new amount in rupees : ";
                cin >> value_in_rupee;
            }
        }
    }
    return 0;
}