#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int data;
    float r,jumlahx,jumlahy,jumlahx2,jumlahy2,jumlahxy,x[5],y[5],x2[5],y2[5],xy[5];

    cout<<"Masukkan Jumlah data:";cin>>data;
    for (int i = 0; i < data; i++) {
         cout<<"Data ke-"<<i+1<<endl;
         cout<<"X= "; cin>>x[i];
         cout<<"Y= ";cin>>y[i];

         x2[i]=x[i]*x[i];
         y2[i]=y[i]*y[i];
         xy[i]=x[i]*y[i];

    }
    jumlahx=0;
    jumlahy=0;
    jumlahx2=0;
    jumlahy2=0;
    jumlahxy=0;
    for (int i = 0; i < data; i++) {
        jumlahx=jumlahx+x[i];
        jumlahy=jumlahy+y[i];
        jumlahx2=jumlahx2+x2[i];
        jumlahy2=jumlahy2+y2[i];
        jumlahxy=jumlahxy+xy[i];
    }
    for (int i = 0; i < data; i++) {
    }
    float a1,a2,a3,a4;
    a1=data*jumlahxy;
    a2=jumlahx*jumlahy;
    a3=sqrt((data*jumlahx2)-(jumlahx*jumlahx));
    a4=sqrt((data*jumlahy2)-(jumlahy*jumlahy));
     r=(a1-a2)/(a3*a4);
    cout<<"Jumlah x= "<<jumlahx<<endl;
    cout<<"Jumlah y= "<<jumlahy<<endl;
    cout<<"Jumlah x2= "<<jumlahx2<<endl;
    cout<<"Jumlah y2= "<<jumlahy2<<endl;
    cout<<"Jumlah xy= "<<jumlahxy<<endl;

    cout<<"hasil Akhir(nilai korelasi)"<<r<<endl;

    return 0 ;
}