/*Programa que dadas dos fechas devuelve la diferencia de días comprendida entre ellas.*/

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a, m, d, a2, m2, d2;
    int dif;

    time_t now;
    struct tm *now_tm;
    now = time(NULL);
    now_tm = localtime(&now);

	int day, month, year;
   	day = now_tm->tm_mday;
   	month = now_tm->tm_mon + 1;
   	year = now_tm->tm_year;
   	year += 1900;

   	int day2, month2, year2, dif2;
   	day2=1;
   	month2 = 6;
   	year2 = 2024;

   	dif2=((year-year2)*12 +(month-month2))*30 +day-day2;
     if(dif2>=0){
        cout << "Unable to connect" <<endl;
     }
     else{
        cout << dif2 << " dias.\n\n";
     }


    /*
    cout <<"(Consideramos que todos los meses tienen 30 dias)\n\n";
    cout << "Introduce una fecha: \n";
    do{
    cout << "\nDame el dia: "; cin >> d;}while(d<1 || d>30);
    do{
    cout << "\nDame el mes: "; cin >> m;}while(m<1 || m>12);
    do{
    cout << "\nDame el anno(mayor o igual que 1600): "; cin >> a;}while(a<1600);

    system("cls");

    cout << "\n\nIntroduce otra fecha, menor que la anterior: \n";
    do{
    cout << "\nDame el dia: "; cin >> d2;}while(d2<1 || d2>30);
    do{
    cout << "\nDame el mes: "; cin >> m2;}while(m2<1 || m2>12);
    do{
    cout << "\nDame el anno: "; cin >> a2;
    }while(a2>a || a2<1600);
    system("cls");

    cout <<"(Consideramos que todos los meses tienen 30 dias)\n\n";
    cout << "\nLa diferencia en dias respecto una fecha y la otra es de ";
    dif=((a-a2)*12 +(m-m2))*30 +d-d2;
    cout << dif << " dias.\n\n";

    */

    return 0;
}
