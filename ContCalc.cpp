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
#include <time.h>
#include <wchar.h>

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
float soma(float& x, float& y);
float sub(float& x, float& y);
float mult(float& x, float& y);
float divi(float& x, float& y);
float raiz(float& x, float& y);
// ZONA DOS TEOREMAS
float pot(float& x, float& y);
float pit(float& x, float& y);
float fer(float& x, float& y, float& z, float& n, float& v);
int rest(int& a, int& b, int& c, int& d);
// ZONA DOS CONVERSORES
//						temperatura
float faren(float& x, float& y);
float cel(float& x, float& y);
// 					radianos e graus
float gr_rad(float& x, float& y);
float rad_gr(float& x, float& y);
//						cm e inches
float cm_inch(float& x, float& y);
float inch_cm(float& x, float& y);
//      metros e pes
float met_ft(float& x, float& y);
float ft_met(float& x, float& y);
//						km/h e m/s
float kmh_ms(float& x, float& y);
float ms_kmh(float& x, float& y);
// 					kilos e libras
float kil_lib(float& x, float& y);
float lib_kil(float& x, float& y);
// 						litros e galoes
float li_gal(float& x, float& y);
float gal_li(float& x, float& y);
//							OUTROS
//							IMC
float imc(float& a, float& b, float& c);
//							DESCONTO
float desc(float& x, float& y, float& z);
//							Tempo de viagem
float tViagem(float& x, float& y, float& z);
//							Impostos (PT)
float impostoPT(float& x, float& y, float& z);
//							Densidade
float densidade(float& x, float& y, float& z);
//							Proporcao
float proporcao(float& x, float& y, float& z);
//							Juros
float juros(float& x, float& y, float& z, float& n);
//							Distancia entre 2 pontos
float dist(float& x, float& y, float& z, float& n, float& v);
// 							Energia Cinetica
float ener_cin(float& x, float& y, float& z);				

int i;
string tel ; 



int main() {
	
	setlocale(LC_ALL, "Portuguese");

	char res;

	pessoa utilizador;
	cout << "Nome:";
	_flushall(); gets(utilizador.nome);
	system("cls");
	cout << "Data de nascimento:\n";
	cout << "Dia:";
	cin >> utilizador.dataNasc.dia;
	if (utilizador.dataNasc.dia <= 0.9 || utilizador.dataNasc.dia >= 31) {

		cout << "Esse dia e invalido, volte a introduzir o dia" << endl;
		cin >> utilizador.dataNasc.dia;
	}
	cout << "Mes: ";
	cin >> utilizador.dataNasc.mes;
	if (utilizador.dataNasc.mes < 1 || utilizador.dataNasc.mes >= 13) {

		cout << "Esse mes e invalido, volte a introduzir o mes" << endl;
		cin >> utilizador.dataNasc.mes;
	}
	cout << "Ano: ";
	cin >> utilizador.dataNasc.ano;
	
	if (utilizador.dataNasc.ano <= 1922 || utilizador.dataNasc.ano > 2018) {

		cout << "Esse ano de nascimento e invalido, volte a introduzir a data de nascimento" << endl;
		cin >> utilizador.dataNasc.ano;
	}
	
	system("cls");
	cout << "Introduza o numero de telefone: " << endl;
	cin >> tel;
	system("cls");
		
	cout << "Registro feito com sucesso Bem-Vindo.... (A carregar os seus dados) " << endl;
	
	cout << "Nome:" << endl;
	cout << utilizador.nome << "\n";
	cout << "Data de nascimento" << endl;
	cout << utilizador.dataNasc.dia << "/";
	cout << utilizador.dataNasc.mes << "/";
	cout << utilizador.dataNasc.ano << endl;
	cout << "Numero de telefone" << endl;
	cout << tel << endl;
	system("pause"); 
	system("cls");
	
	do {
	
	menu();
	
	
	cout << "Deseja continuar a usar o programa? (s/n)" << endl;
	cin >> res;
	} while(res == 's'|| res == 'S');

	cout << "A fechar o programa...." << endl;
	return 0;
}

void menu()
{
	float x, y, z, v, n;
	int a,b,c,d;
	int op;
	

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
	cout << "[32] Energia Cinetica" << endl;
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

		cout << "O resultado do teorema resto e: " << rest(a,b,c,d);
		break;
	
	case 10:
		
		cout << x  <<  "C e igual a: " << faren(x, y) << "F";
		break;
		
	case 11:
		
		cout << x  <<  "F  igual a: " << cel(x, y) << "C";
		break;
		
	case 12:
		
		cout << x << "Graus corresponde a: " << gr_rad(x,y) << "radianos" << endl;
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
		
		cout << x  <<   "Lbs e igual a:"	<< kil_lib(x,y) << "kg" 	<< endl;
		break;
		
	case 22:
		
		cout << x  <<   "L e igual a:"	<< li_gal(x,y) << "gal" 	<< endl;
		break;
		
	case 23:
		
		cout << x  <<   "Gal e igual a:" << gal_li(x,y) << "L" 	<< endl;
		break;
		
	case 24:
		
		cout << "O seu imc e de" << imc(x,y,z) << endl;
		break;
	
	case 25:
		
		cout << "O seu produto de " << 	x << " e com desconto de  " << y  << ", fica a	" <<  desc(x,y,z) << "euros"  << endl;
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

		cout << "O valor dos juros  e de: 	" << juros(x,y,z,n) << endl;
		break;

	case 31:

		cout << "A distancia entre 2 pontos e de: 	" << dist(x,y,z,v,n) << endl;
		break;

	case 32:

		cout << "O valor da energia cinética é de: 	" << ener_cin(x,y,z) << "Joules" << endl;
		break;

	}
}
// ZONA DOS CaLCULOS BaSiCOS
float soma(float& x, float& y) {
	cout << "Digite os numeros para fazer a soma (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a soma (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x + y);
}

float sub (float& x, float& y) {
	cout << "Digite os numeros para fazer a subtracao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a subtracao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x - y);
}

float mult(float& x, float& y) {
	cout << "Digite os numeros para fazer a mutiplicacao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a mutiplicacao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x * y);
}

float divi(float& x, float& y) {
	cout << "Digite os numeros para fazer a divisao (1/2)" << endl;
	cin >> x;
	cout << "Digite os numeros para fazer a divisao (2/2)" << endl;
	cin >> y;
	
	system("cls");
	return (x / y);
}

float raiz(float& x, float& y) {
	cout << "Digite o numero para fazer a raiz quadrada" << endl;
	cin >> x;
	system("cls");
	return (sqrt(x));
}
float pot(float& x, float& y) {
	cout << "Digite o expoente: " << endl;
	cin >> x;
	cout << "Digite a base: " << endl;
	
	system("cls");
	return (pow(x, y));
}
// ZONA DOS TEOREMAS
float pit(float& x, float& y) {
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
float fer(float& x, float& y, float& z, float& n, float& v) {
	
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
float faren(float& x, float& y) {

	
	cout << "Introduza os graus em Celsius para fazer a conversao: " << endl;
	cin >> x;
	
	y = (x*1.8)+32;
	
	system("cls");
	return (y);
}
float cel(float& x, float& y) {

	cout << "Introduza os graus em Farenheit para fazer a conversao: " << endl;
	cin >> x;
	
	y = (x - 32) * 0.5556;
	
	system("cls");
	return (y);
}
float gr_rad(float& x, float& y) {
	
	cout << "Introduza os graus para fazer a conversao" << endl;
	cin >> x;
	y = x * (3.14159265359/180);
	
	system("cls");
	return (y);
}
float rad_gr(float& x, float& y) {
	
	cout << "Introduza os radianos para fazer a conversao" << endl;
	cin >> x;
	y = x * (180/M_PI);
	
	system("cls");
	return (y);
}
float cm_inch(float& x, float& y) {

			
				cout << "Introduza a quantidade em cm para fazer a conversao: " << endl;
    cin >> x;
    y = x	/ 2.54;	
   	
   	system("cls");
   	return (y);
}
float inch_cm(float& x, float& y) {
				
				cout << "Digite a quantidade em polegadas para fazer a conversao: " << endl;
    cin >> x;
    y = x * 2.54;

	system("cls");
	return(y);
}
float met_ft(float& x, float& y) {
	
	cout << "Introduza a medida metrica para fazer a conversao" << endl;
	cin >> x;

	y = x * 3.28084;
	
	system("cls");
	return (y);
}
float ft_met(float& x, float& y) {
	
	cout << "Introduza a medida em pes para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 0.3048;
	
	system("cls");
	return (y);
}
float kmh_ms(float& x, float& y) {
	
	cout << "Introduza a velocidade em KM/h para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 3,6;
	
	system("cls");
	return (y);
}
float ms_kmh(float& x, float& y) {
	
	cout << "Introduza a velocidade em M/s para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 3,6;
	
	system("cls");
	return (y);
}
float kil_lib(float& x, float& y) {
	
	cout << "Introduza o peso em kilogramas para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 2.20462;
	
	system("cls");
	return (y);
}
float lib_kil(float& x, float& y) {
	
	cout << "Introduza o peso em libras para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 2.20462;
	
	system("cls");
	return (y);
}
float li_gal(float& x, float& y) {
	
	cout << "Introduza a quantidade em litros para fazer a conversao" << endl;
	cin >> x;
	
	y = x / 3,78541;
	
	system("cls");
	return (y);
}
float gal_li(float& x, float& y) {
	
	cout << "Introduza a quantidade em galoes para fazer a conversao" << endl;
	cin >> x;
	
	y = x * 3,78541;
	
	system("cls");
	return (y);
}
// ZONA OUTROS
float imc(float& a, float& b, float& c) {
	
	cout << "Digite o seu peso em KG" << endl;
	cin >> a;
	cout << "Digite a sua altura [Metros] " << endl;
	cin >> b;

	c = a / pow(b, 2);

	system("cls");
	return (c);
}
float desc(float& x, float& y, float& z) {
	
	cout << "Digite o preco do seu produto" << endl;
	cin >> x;
	cout << "Digite o desconto do produto" << endl;
	cin >> y;

	z = (x*y)/100;

	z = x - z;

	system("cls");
	return (z);
}
float tViagem(float& x, float& y, float& z) {

	cout << "Introduza a distancia percorrida (Km)" << endl;
	cin >> x;
	cout << "Introduza a velocidade media (Km/h)" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
float impostoPT(float& x, float& y, float& z) {

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
float densidade(float& x, float& y, float& z) {

	cout << "Introduza a massa (em gramas)" << endl;
	cin >> x;
	cout << "Introduza o volume (em cm3)" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
float proporcao(float& x, float& y, float& z) {

	cout << "Introduza a primeira parte" << endl;
	cin >> x;
	cout << "Introduza a segunda parte" << endl;
	cin >> y;

	z = x / y;

	system("cls");
	return (z);
}
float juros(float& x, float& y, float& z, float& n) {

	cout << "Introduza a capital (em euros)" << endl;
	cin >> x;
	cout << "Introduza a taxa de juros (em percentagem)" << endl;
	cin >> y;
	cout << "Introduza o tempo (em anos)" << endl;
	cin >> z;

	n = (x * y * z)/100;

	system("cls");
	return (z);
}
float dist(float& x, float& y, float& z, float& n, float& v) {

   cout << "Introduza as coordenadas do primeiro ponto (x1, y1): " << endl;
   cin >> x >> y;

   cout << "Introduza as coordenadas do segundo ponto (x2, y2): ";
   cin >> z >> v;

   n = sqrt(pow(z - x, 2) + pow(v - y, 2));

   system("cls");
   return(n);
}
float ener_cin(float& x, float& y, float& z) {

	cout << "Introduza o valor da massa" << endl;
	cin >> x;

	cout << "Introduza o valor de velocidade" << endl;
	cin >> y;

	z = 0.5 * x * pow(y, 2);

	return(z);
}

	
