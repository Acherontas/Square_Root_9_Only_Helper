#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc,char** argv)
{
    long double mynmb;
    long double x_mgc=9;
    long double x;
    long double z;
    long double tmp,tmpo,rst;
    long double sqrte;
    int preci;
    cout<<"ur number  the precision 9 or 99 or 990 or .. \n";
    mynmb=stoll(argv[1]);
    preci=stoi(argv[2]);
    x_mgc=stoi(argv[3]);
    tmp=(long double)mynmb/(long double)x_mgc;
    rst=tmp;

    cout<<"\n";
    cout<<"from " <<std::setprecision(preci) << mynmb << " / " <<std::setprecision(preci) << x_mgc <<" ::== " <<std::setprecision(preci) << rst <<"\n";
    tmpo=tmp;
    tmp=(long double)tmp/(long double)x_mgc;
    cout<<"from " <<std::setprecision(preci) << tmpo <<" / " <<std::setprecision(preci) << x_mgc <<" ::== " <<std::setprecision(preci) << tmp <<"\n";
    sqrte=sqrt(tmp);
    z=sqrte;
    cout<<"the square root of tmp " <<std::setprecision(preci) << tmp << " z ::== " <<std::setprecision(preci) << sqrte <<"\n";
    x=z*x_mgc;
    cout<<"\n";
    cout<<"*****************The Power is**************************************************************\n";
    cout<<"the x ::== " <<std::setprecision(preci) << x <<"\n";
    cout<<"the validation from math.h header file is : " <<std::setprecision(preci) << sqrt(mynmb) <<"\n";
    cout<<"*******************************************************************************************\n";
    cout<<"\n";
    cout<<"-----------------------------------------------\n";
    cout<<"from " <<std::setprecision(preci) << mynmb << " / " <<std::setprecision(preci) << x_mgc <<" ::== " <<std::setprecision(preci) << rst <<"\n";
    tmp=(long double)rst/(long double)x;
    cout<<"from " <<std::setprecision(preci) << rst << " / " <<std::setprecision(preci) << x << " ::== " <<std::setprecision(preci) << tmp <<"\n";
    tmpo=(long double)x/(long double)x_mgc;
    cout<<"from " <<std::setprecision(preci) << x << " / " <<std::setprecision(preci) << x_mgc <<" ::== " <<std::setprecision(preci) << tmpo <<"\n";
    cout<<"\n";


    return 0;
}
