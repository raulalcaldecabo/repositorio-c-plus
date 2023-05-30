#include <iostream>

using namespace std;

int main()
{
    const double IVA=0.21;
    const double HQ {55.3};
    const double MQ {35.5};
    int squareMetersHQ{0};
    int squareMetersMQ{0};
    double priceMQ;
    double priceHQ;
    double totalPrice;
    double taxes;

    cout<< "¿Cuantos metros quieres instalar de calidad media?";
    cin>> squareMetersMQ;

    cout<< "¿Cuantos metros quieres instalar de calidad alta?";
    cin>> squareMetersHQ;

    priceMQ=squareMetersMQ*MQ;
    priceHQ=squareMetersHQ*HQ;

    totalPrice=priceMQ+priceHQ;
    taxes=totalPrice*IVA;

    cout<<"-------------------------------------------------------------------------------------------"<<endl;

    cout<<"El presupuesto tiene una valicez de 30 dias: " <<endl;
    cout<<"Cantidad de metros calidad media: " << squareMetersMQ <<endl;
    cout<<"Cantidad de metros calidad alta: " << squareMetersHQ <<endl;
    cout<<"El precio de la calidad media es: " << priceMQ << " €."<< endl;
    cout<<"El precio de la calidad alta es: " << priceHQ << " €."<< endl;
    cout<<"El total asciende a: " << totalPrice << " €."<< endl;
    cout<<"Importe del impuesto: " << taxes << " €."<< endl;
    totalPrice=totalPrice+taxes;
    cout<<"Total con IVA: " << totalPrice << " €."<< endl;
}
