#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


double addition (double fir_num, double sec_num)
{
	double result = fir_num + sec_num;
    cout << fir_num << " + " << sec_num << " = " << fixed << setprecision(2) << result ;
    cout << "\n";

    return result;
}

double subtraction (double fir_num, double sec_num)
{
	double result = fir_num - sec_num;
    cout << fir_num << " - " << sec_num << " = " << fixed << setprecision(2) << result << "\n";
    cout << "\n";
    
    return result;
}

double multiplication (double fir_num, double sec_num)
{
	double result = fir_num * sec_num;
    cout << fir_num << " * " << sec_num << " = " << fixed << setprecision(2) << result << "\n";
    cout << "\n";

    return result;
}

double division (double fir_num, double sec_num)
{
    if (sec_num != 0)
    {
    	double result = fir_num / sec_num;
        cout << fir_num << " / " << sec_num << " = " << fixed << setprecision(2) << result << "\n";
        cout << "\n";

        return result;
    }
    else
    {
        cout <<"Division par 0 impossible. Vueillez redemarrer l'application." << "\n";
        return 0;
    }
}

int main ()
{
    int operation;
    double fir_num;
    double sec_num;

    cout << "Entrer un nombre: " << "\n";
    cin >> fir_num;
    cout << "Entrer un autre nombre: " << "\n";
    cin >> sec_num;
    cout << "Choisissez une operation (1,2,...)" << "\n";
    cout << "1. addition(+)\n";
    cout << "2. subtraction(-)\n";
    cout << "3. multiplication(*)\n";
    cout << "4. division(/)\n";
    cout << "Selection: ";
    cin >> operation;
    if(!(operation<1 && operation>4)){
	    switch (operation)
	    {
	        case 1:
	            addition(fir_num, sec_num);
	            break;
	        case 2:
	            subtraction(fir_num, sec_num);
	            break;   
	        case 3:
	            multiplication(fir_num, sec_num);
	            break;
	        case 4:
	            division(fir_num, sec_num);
	            break;
	    }
    }
    return 0;
}
