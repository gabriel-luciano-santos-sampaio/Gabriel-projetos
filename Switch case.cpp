#include <iostream>
#include <cstdlib>
 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int c=0;
cout<< ("escolha um estilo musical de 1 a 5\n1 - Funk\n2 - Rock\n3 - Pagode\n4 - POP\n5 - Sertanejo\n ");
cin>>(c);
switch (c)
{ case 1:
cout<< ("funko Estilo escolhido foi: ");
break;
case 2:
cout<< ("o Estilo escolhido foi: Rock");
break;
case 3:
cout<< ("o Estilo escolhido foi: Pagode");
break;
case 4:
cout<< ("o Estilo escolhido foi: POP");
break;
case 5:
cout<<("o Estilo escolhido foi: Sertanejo");
break;

default:
cout<< ("!nao existe essa opcao! ");
}

return 0;
}
