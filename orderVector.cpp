#include<iostream>
using namespace std;

int v[5];
int n=5;
int y;
int k;
int posiz=0;
int minimo;
int appoggio;

int main()
{
    for(k=1;k<=n;k++)
    {
          cout<<"inserire il "<<k<<" numero del vettore";
          cin>>v[k];
    }

    for(k=1;k<=5;k++)
    {
                    minimo=v[k];
                    for(y=k+1;y<=n;y++)
                    {
                          if(v[y]<minimo)
                            {
                               minimo=v[y];
                               posiz=y;

                            }
                    }
                              appoggio=v[k];
                              v[k]=minimo;
                              minimo=appoggio;
    }

    for(k=1;k<=n;k++)
          cout<<v[k]<<endl;

system("pause");
}
