#include <iostream>
#include <cstdlib>
 using namespace std;
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
  int main(int argc, char** argv)
   { float v1, v2, v3, vr;
   float total;
    cout<< "insira o valor da primeira venda : ";
cin>>(v1); cout<< "insira o valor da segunda venda : ";
 cin>>(v2); cout<< "insira o valor da terceira venda : ";
 cin>>(v3); total = (v1 + v2 + v3)/3;
  if (total <= 120){ vr = total * 10 /100;
   cout<<"voce ficou abaixo da media com : "<<(total);
cout<< "\n o valor recebido foi "<<(vr);
}
 else { vr = total * 20 /100; cout<<"vc ficou acima da media com : "<<(total);
  cout<< "\n o valor recebido foi : "<<(vr); };
   return 0; }
