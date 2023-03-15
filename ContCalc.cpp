#include <ctime>
#include <math.h>
#include <stdio.h>
#include <cstdio>
#include <locale>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct data
{
	int ano;
	int mes;
	int dia;
};
struct pessoa
{
	char nome[30];
	data dataNasc;
};

void menu();

// ZONA DOS CALCULOS BASICOS
int soma(int& x, int& y);
int sub(int& x, int& y);
int mult(int& x, int& y);
int divi(int& x, int& y);
int raiz(int& x, int& y);
// ZONA DOS TEOREMAS
int pot(int& x, int& y);
int pit(int& x, int& y);
int fer(int& x, int& y, int& z, int& n, int& v);
int rest(int& x, int& y, int& z, int& n);
// ZONA DOS CONVERSORES
//						temperatura
int faren(int& x, int& y);
int cel(int& x, int& y);
// 					radianos e graus
int gr_rad(int& x, int& y);
int rad_gr(int& x, int& y);
//						cm e inches
int cm_inch(int& x, int& y);
int inch_cm(int& x, int& y);
//      metros e pes
int met_ft(int& x, int& y);
int ft_met(int& x, int& y);
//						km/h e m/s
int kmh_ms(int& x, int& y);
int ms_kmh(int& x, int& y);
// 					kilos e libras
int kil_lib(int& x, int& y);
int lib_kil(int& x, int& y);
// 						litros e galoes
int li_gal(int& x, int& y);
int gal_li(int& x, int& y);
//							OUTROS
//							IMC
int imc(int& x, int& y, int& z);
//							DESCONTO
int desc(int& x, int& y, int& z);
//							Tempo de viagem
int tViagem(int& x, int& y, int& z);
//							Impostos (PT)
int impostoPT(int& x, int& y, int& z);
//							Densidade
int densidade(int& x, int& y, int& z);
//							Proporcao
int proporcao(int& x, int& y, int& z);
//							Juros
int juros(int& x, int& y, int& z, int& n);
//							Distancia entre 2 pontos
int dist(int& x, int& y, int& z, int& n, int& v);

int i;


int main() {
		
	
	setlocale(LC_ALL, "Portuguese");
	
	pessoa utilizador;
	cout << "Nome:";
	_flushall(); gets(utilizador.nome);
	cout << "Data de nascimento:\n";
	cout << "Dia:";
	cin >> utilizador.dataNasc.dia;
	cout << "Mês: ";
	cin >> utilizador.dataNasc.mes;
	cout << "Ano: ";
	cin >> utilizador.dataNasc.ano;
	system("cls");
	

	system("cls");
		
	cout << "Registro feito com sucesso Bem-Vindo.... (A carregar os seus dados) " << endl;
		
	cout << utilizador.nome << "\n";
	cout << utilizador.dataNasc.dia << "/";
	cout << utilizador.dataNasc.mes << "/";
	cout << utilizador.dataNasc.ano << "/";
	system("pause");
	system("cls");
	
	menu();
}

void menu()
{
	int x, y, z, v, n ,op;
	cout << "******************************Contas Basicas******************************" << endl;
	cout << "[1] Soma" << endl;
	cout << "[2] Subtracao" << endl;
	cout << "[3] Mutiplicacao" << endl;
	cout << "[4] Divisao" << endl;
	cout << "[5] Potencias" << endl;
	cout << "[6] Raiz quadrada" << endl;
	cout << "******************************Teoremas******************************" << endl;
	cout << "[7] Pitagoras" << endl;
	cout << "[8] Resto" << endl;
	cout << "[9] Fermat" << endl;
	cout << "******************************Conversores******************************" << endl;
	cout << "[10] Celsius ->  Fahrenheit" << endl;
	cout << "[11] Farenheit ->  Celsius" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[12] Graus -> Radianos" << endl;
	cout << "[13] Radianos -> Graus" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[14] Centimetros -> inches (Polegadas)" << endl;
	cout << "[15] Inches (Polegadas) -> centimteros" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[16] Metros ->  pes" << endl;
	cout << "[17] Pes ->  metros" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[18] Kilometros por hora -> metro por segundo" << endl;
	cout << "[19] Metros por segundo ->  kilometros por hora" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[20] Kilogramas -> libras" << endl;
	cout << "[21] Libras -> kilogramas" << endl;
	cout << "\t-----------------------\t" << endl;
	cout << "[22] Litros -> galoes" << endl;
	cout << "[23] Galoes -> litros" << endl;
	cout << "******************************Outros Calculos******************************" << endl;
	cout << "[24] IMC" << endl;
	cout << "[25] Desconto de um produto" << endl;
	cout << "[26] Tempo de uma viagem" << endl;  
	cout << "[27] Impostos [Portugal]" << endl;
	cout << "[28] Densidade" << endl;
	cout << "[29] Proporcao" << endl;
	cout << "[30] Juros" << endl;
	cout << "[31] Distancia entre 2 pontos" << endl;
	cin >> op;
	system("cls");

	switch (op)
	{
	case 1:

		cout << "O resultado da soma e: " << soma(x, y);
		break;
	case 2:

		cout << "O resultado da subtracao e: " << sub(x, y);
		break;

	case 3:

		cout << "O resultado da multiplicacao e: " << mult(x, y);
		break;

	case 4:

		cout << "O resultado da divisao e: " << divi(x, y);
		break;

	case 5:

		cout << "O resultado da potencia e: " << pot(x, y);
		break;

	case 6:

		cout << "O resultado da raiz e: " << raiz(x, y);
		break;
	
	case 7:

		cout << "O resultado da hipotenusa e: " << pit(x, y);
		break;
		
	case 8:
		
		fer(x,y,z,n,v);
		break;
	
	case 9:

		cout << "O resultado do teorema resto e: " << rest(x,y,z,n);
		break;
	
	case 10:
		
		cout << x  <<  "C e igual a: " << faren(x, y) << "F";
		break;
		
	case 11:
		
		cout << x  <<  "F  igual a: " << cel(x, y) << "C";
		break;
		
	case 12:
		
		cout << x	<< "Graus corresponde a: " << gr_rad(x,y) << "radianos" << endl;
		break;
		
	case 13:
		
		cout << x	<< "Radianos corresponde a: " << rad_gr(x,y) << "graus" << endl;
		break;
		
	case 14:
		
			cout << x << "CM corresponde a" <<  cm_inch(x,y) << "inches" << endl;
			break;
		
	case 15:
		
			cout << x << "Inches corresponde a" <<  inch_cm(x,y) << "CM" << endl;
			break;
		
	case 16:
		
		cout << x  <<   "metros e igual a: " << met_ft(x, y) <<  "pes";
		break;
		
	case 17:
		
		cout << x  <<   "pes e igual a:  "  << ft_met(x, y) <<  "metros";
		break;
		
	case 18:
		
		cout << x  <<   "Km/h e igual a:"  	<< kmh_ms(x, y) << 	"M/s" << endl;
		break;
		
	case 19:
		
		cout << x  <<   "M/s e igual a:"  	<< ms_kmh(x, y) << 	"Km/h" << endl;
		break;

	case 20:
		
		cout << x  <<   "Kg e igual a:"		<< kil_lib(x,y) << "lbs" 	<< endl;
		break;
		
	case 21:
		
		cout << x  <<   "Lbs e igual a:"		<< kil_lib(x,y) << "kg" 	<< endl;
		break;
		
	case 22:
		
		cout << x  <<   "L e igual a:"		<< li_gal(x,y) << "gal" 	<< endl;
		break;
		
	case 23:
		
		cout << x  <<   "Gal e igual a:"		<< gal_li(x,y) << "L" 	<< endl;
		break;
		
	case 24:
		
		cout << "O seu imc e de" << imc(x,y,z) << endl;
		break;
	
	case 25:
		
		cout << "O seu produto de " << 	x 	<< 	" e com desconto de  " <<  y  << " , fica a	" <<  desc(x,y,z) <<  "euros"  << endl;
		break;

	case 26:

		cout <<  "O tempo da sua viagem e de	" << 	tViagem(x,y,z) << endl;
		break; 

	case 27:

		cout << "O imposto total e de: " << impostoPT(x,y,z) << "euros" << endl;
		break;

	case 28:

		cout << "A densidade e de: " << densidade(x,y,z) << " g/cm3." << endl;
		break;

	case 29:

		cout << "A proporcao e de" << proporcao(x,y,z) << endl;
		break;

	case 30:

		cout << "O valor de juros em euros e de: 	" << juros(x,y,z,n) << endl;
		break;

	case 31:

		cout << "A distancia entre 2 pontos e de: 	" << dist(x,y,z,v,n) << endl;
		break;

	}
}
// ZONA DOS CaLCULOS BaSCOS
int soma(int& x, int& y) {
	cout << "Digite os numeros para fazer a soma (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a soma (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x + y);
}

int sub(int& x, int& y) {
	cout << "Digite os numeros para fazer a subtracao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a subtracao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x - y);
}

int mult(int& x, int& y) {
	cout << "Digite os numeros para fazer a mutiplicacao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a mutiplicacao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x * y);
}

int divi(int& x, int& y) {
	cout << "Digite os numeros para fazer a divisao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a divisao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x / y);
}

int raiz(int& x, int& y) {
	cout << "Digite o numero para fazer a raiz quadrada" << endl;
	cin >> x;
	system("cls");
	return (sqrt(x));
}
int pot(int& x, int& y) {
	cout << "Digite o expoente: " << endl;
	cin >> x;
	cout << "Digite a base: " << endl;
	
	system("cls");
	return (pow(x, y));
}
// ZONA DOS TEOREMAS
int pit(int& x, int& y) {
	double h;
	cout << "Digite o valor de um cateto (1/2)" << endl;
	cin >> x;
	cout << "Digite o valor de um cateto (2/2)" << endl;
	cin >> y;
	
	h = sqrt(x * x + y * y);
	
	system("cls");
	return (h);
}
int rest(int& x, int& y, int& z, int& n) {
	cout << "Digite o valor de a" << endl;
	cin >> x;
	cout << "Digite o valor de b" << endl;
	cin >> y;
	cout << "Digite o valor de c" << endl;
	cin >> z;
	
	n = (x % y) % z;

	system("cls");
	return (n);
}
int fer(int& x, int& y, int& z, int& n, int& v) {
	long long int resultado;
	cout << "Digite o valor de x :" << endl;
	cin >> x;
	cout << "Digite o valor de y :" << endl;
	cin >> y;
	cout << "Digite o valor de z :" << endl;
	cin >> z;
	cout << "Digite o valor de n :" << endl;
	cin >> n;

	v = pow(x, n) + pow(y, n) - pow(z, n);

	if (v == 0 && n > 2) {
		cout << "O Teorema de Fermat e verdadeiro para esses valores." << endl;
	}
	else {
		cout << "O Teorema de Fermat e falso para esses valores." << endl;
	}

	system("cls");
	cout << "O resultado e:" << endl;
	cout << fixed << setprecision(2) << v;
}
// ZONA DOS CONVERSORES
int faren(int& x, int& y) {

	
	cout << "Introduza os graus em Celsius para fazer a conversao: " << endl;
	cin >> x;
	
	y = (x*1.8)+32;
	
	system("cls");
	return (y);
}
int cel(int& x, int& y) {

	cout << "Introduza os graus em Farenheit para fazer a conversao: " << endl;
	cin >> x;
	
	y = (x - 32) * 0.5556;
	
	system("cls");
	return (y);
}
int gr_rad(int& x, int& y) {
	
	cout << "Introduza os graus para fazer a conversao" << endl;
	cin >> x;
	y = x * (M_PI/180);
	
	system("cls");
	return (y);
}
int rad_gr(int& x, int& y) {
	
	cout << "Introduza os radianos para fazer a conversao" << endl;
	cin >> x;
	y = x * (180/M_PI);
	
	system("cls");
	return (y);
}
int cm_inch(int& x, int& y) {

			
				cout << "Introduza a quantidade em cm para fazer a conversao: " << endl;
    cin >> x;
    y = x	/ 2.54;	
   	
   	system("cls");
   	return (y);
}
int inch_cm(int& x, int& y) {
				
				cout << "Digite a quantidade em polegadas para fazer a conversao: " << endl;
    cin >> x;
    y = x * 2.54;
}
int met_ft(int& x, int& y) {
	
	cout << "Introduza a medida metrica para fazer a conversao" << endl;
	cin >> x;

	y = x * 3.28084;
	
	system("cls");
	return (y);
}
int ft_met(int& x, int& y) {
	
	cout << "Introduza a medida em pes para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 0.3048;
	
	system("cls");
	return (y);
}
int kmh_ms(int& x, int& y) {
	
	cout << "Introduza a velocidade em KM/h para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 3,6;
	
	system("cls");
	return (y);
}
int ms_kmh(int& x, int& y) {
	
	cout << "Introduza a velocidade em M/s para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 3,6;
	
	system("cls");
	return (y);
}
int kil_lib(int& x, int& y) {
	
	cout << "Introduza o peso em kilogramas para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 2.20462;
	
	system("cls");
	return (y);
}
int lib_kil(int& x, int& y) {
	
	cout << "Introduza o peso em libras para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 2.20462;
	
	system("cls");
	return (y);
}
int li_gal(int& x, int& y) {
	
	cout << "Introduza a quantidade em litros para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 3,78541;
	
	system("cls");
	return (y);
}
int gal_li(int& x, int& y) {
	
	cout << "Introduza a quantidade em galoes para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 3,78541;
	
	system("cls");
	return (y);
}
// ZONA OUTROS
int imc(int& x, int& y, int& z) {
	
	cout << "Digite o seu peso em KG" << endl;
	cin >> x;
	cout << "Digite a sua altura " << endl;
	cin >> y;

	z = x / pow(y, 2);

	system("cls");
	return (z);
}
int desc(int& x, int& y, int& z) {
	
	cout << "Digite o preco do seu produto" << endl;
	cin >> x;
	cout << "Digite o desconto do produto" << endl;
	cin >> y;

	z = x - (x * (y/100));

	system("cls");
	return (z);
}
int tViagem(int& x, int& y, int& z) {

	cout << "Introduza a distancia percorrida (Km)" << endl;
	cin >> x;
	cout << "Introduza a velocidade media (Km/h)" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
int impostoPT(int& x, int& y, int& z) {

	cout << "Introduza o seu rendimento anual" << endl;
	cin >> x;

	if (x < 7000) {
	  y = 0.0;
   }
   else if (x >= 7000 && x < 20000) {
      y = 0.14;
   }
   else if (x >= 20000 && x < 40000) {
      y = 0.23;
   }
   else if (x >= 40000 && x < 80000) {
      y = 0.33;
   }
   else {
      y = 0.45;
   }

	z = x * y;

	system("cls");
	return (z);
}
int densidade(int& x, int& y, int& z) {

	cout << "Introduza a massa (em gramas)" << endl;
	cin >> x;
	cout << "Introduza o volume (em cm3)" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
int proporcao(int& x, int& y, int& z) {

	cout << "Introduza a primeira parte" << endl;
	cin >> x;
	cout << "Introduza a segunda parte" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
int juros(int& x, int& y, int& z, int& n) {

	cout << "Introduza a capital (em euros)" << endl;
	cin >> x;
	cout << "Introduza a taxa de juros (em percentagem)" << endl;
	cin >> y;
	cout << "Introduza o tempo (em anos)" << endl;
	cin >> z;

	n = x * (y/ 100) * z;

	system("cls");
	return (z);
}
int dist(int& x, int& y, int& z, int& n, int& v) {

   cout << "Introduza as coordenadas do primeiro ponto (x1, y1): " << endl;
   cin >> x >> y;

   cout << "Introduza as coordenadas do segundo ponto (x2, y2): ";
   cin >> z >> v;

   n = sqrt(pow(z - x, 2) + pow(v - y, 2));

   system("cls");
   return(n);
}
