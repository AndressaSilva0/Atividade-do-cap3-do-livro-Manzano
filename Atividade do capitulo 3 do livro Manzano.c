#include <stdio.h>
#include <math.h>

int main(){
 /*
A) 
   int celsius;
   int fahrenheit;
  printf("Digite o valor em graus Celsius para ser convertido em graus Fahrenheit: ");
  scanf("%d", &celsius);

fahrenheit = celsius*9/5+32;
  printf("%d graus celsius é igual a %d fahrenheit!", celsius, fahrenheit);
  */
/*
B)
int fahrenheit;
int celsius;
printf("Digite o valor em graus Fahrenheit que será convertido para graus celsius: ");
scanf ("%d", &fahrenheit);
  
  celsius = ((fahrenheit-32)*5)/9;

  printf("%d graus fahrenheit é igual a %d graus celsius!", fahrenheit, celsius);
  */
/*
C)
float raio;
float altura;
float volume;
printf("Digite o valor do raio: ");
scanf("%f", &raio);
print("Digite o valor da altura: ");
scanf("%f", &altura);

volume = 3,141592*(raio*raio)*altura;

printf("O volume da lata é %f", volume);
  */
/*
D)
int tempo;
int velocidade;
int distancia;
int litros_usados;

printf("Digite o valor do tempo: ");
scanf("%d", &tempo);
printf("Digite o valor de velocidade: ");
scanf("%d", &velocidade);

distancia = tempo*velocidade;
litros_usados = distancia/12;
printf("Em %d horas à uma velocidade de %d km/h você percorreu e utilizou %d litros de combustível!", tempo, velocidade, distancia, litros_usados);
*/
/*
E)
float prestacao;
float taxa_atraso;
int tempo_atraso;
float valor_acrescimo;

printf("Digite o valor da prestação do bem: ");
scanf("%f", &prestacao);
printf("Digite a porcentagem da taxa de atraso: ");
scanf("%f", &taxa_atraso);
printf("Digite o tempo de atraso: ");
scanf("%d", &tempo_atraso);

valor_acrescimo = prestacao+(prestacao*(taxa_atraso/100)tempo_atraso);
printf("O valor final da prestação R$%.2f", valor_acrescimo);
*/
/*
F)
int a, b, c;

printf("Valor de A: ");
scanf("%d", &a);
printf("Valor de B: ")
scanf("%d", &b);

c = b;
b = a;
a = c;
printf("Os valores de A e B agora %d e %d respectivamente!", a, b);
*/
/*
G)
int a, b, c, d;
int somaAB, somaAC, somaAD, somaBC, somaBD, somaCD;
int multiAB, multiAC, multiAD, multiBC, multiBD, multiCD;

printf("Digite os valores de A, B, C, D para serem somados e multiplicados: ");
scanf("%d %d %d %d", &a, &b, &c, &d);

somaAB = a+b;
somaAC = a+c;
somaAD = a+d;
somaBC = b+c;
somaBD = b+d;
somaCD = c+d;
multiAB = a*b;
multiAC = a*c;
multiAD = a*d;
multiBC = b*c;
multiBD = b*d;
multiCD = c*d;
printf("Os valores respectivos das somas de AB, AC, AD, BC, BD, CD: \n %d %d %d %d %d %d", somaAB, somaAC, somaAD, somaBC, somaBD, somaCD);
printf("Os valores respectivos das multiplicações de AB, AC, AD, BC, BD, CD: \n %d %d %d %d %d %d", multiAB, multiAC, multiAD, multiBC, multiBD, multiCD);
*/
/*
H)
float volume;
float comprimento;
float largura;
float altura;

printf("Digite o valor da comprimento: ");
scanf("%f", &comprimento);
printf("Digite o valor da largura: ");
scanf("%f", &largura);
printf("Digite o valor da altura: ");
scanf("%f", &altura);

volume = comprimento*largura*altura;
  
printf("O volume da caixa rentagular é %f m³!:", volume);
*/
/*
I)
int a;
int b;

printf("Digite um valor inteiro que será representado ao quadrado: ");
scanf("%d", &a);
  
b = a*a;

printf("Resultado do número ao quadrado é %d: ", b);
*/
/*
J)
int a;
int b;
int c;
int quadrado;

printf("Digite o valor de a: ");
scanf("%d", &a);
printf("Digite o valor de b: ");
scanf("%d", &b);

c = a-b;
quadrado = c*c;

printf("O quadrado da diferença entre A e B %d: ", quadrado);
*/
/*
K)
float qtd_dolar;
float cot_dolar;
float total_reais;

printf("Qual a quantia em dolares?\n");
scanf("%f", &qtd_dolar);
printf("Qual cotação do dolar em reais?\n");
scanf("%f", &cot_dolar);

total_reais = qtd_dolar * cot_dolar;
printf("US$%.2f Dólares equivale a R$%.2f Reais", qtd_dolar, total_reais);
*/
/*
L)
float qtd_reais;
float cot_dolar;
float total_dolar;

printf("Qual a quantia em reais que você possui?\n");
scanf("%f", &qtd_reais);
printf("Qual a cotação do dolar em reais?\n");
scanf("%f", &cot_dolar);

total_dolar = qtd_reais * cot_dolar;
printf("US$%.2f Dólares é equivalente à R$%.2f Reais", qtd_reais, total_dolar);
*/
/*
M)
int a, b, c;
int soma_quadrados;
int A, B, C;
/
printf("Digite o valor de A: \n");
scanf("%d", &A);
printf("Digite o valor de B:\n ");
scanf("%d", &B);
printf("Digite o valor de C: \n");
scanf("%d", &C);

a = A*A;
b = B*B;
c = C*C;
soma_quadrados = a + b + c;
printf("Os valores somados dos quadrados de %d, %d e %d obteve um resultado final da soma de %d:", a, b, c, soma_quadrados);
 */
/*
N)
int A, B, C, total_soma, quadrado_soma;

printf("Digite o valor de A: ");
scanf("%d", &A);
printf("Digite o valor de B: ");
scanf("%d", &B);
printf("Digite o valor de C: ");
scanf("%d", &C);

total_soma = A + B + C;
quadrado_soma = total_soma*total_soma;
printf ("O soma total é %d e o quadrado da soma total é %d", total_soma, quadrado_soma);
 */
/*
O)
int a, b, c, d, P, S;

printf("Digite o valor de A: ");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);
printf("Digite o valor de C: ");
scanf("%d", &c);
printf("Digite o valor de D: ");
scanf("%d", &d);

P = a*c;
S = b+d;
printf("O produto de A e C é %d e a soma de B e D é %d", P, S);
*/
/*
P)
float salario_mensal;
float percentual_reajuste;
float reajuste;
float novo_salario;
  

printf("Digite o valor do salario mensal: ");
scanf("%f", &salario_mensal);
printf("Digite o valor do percetual do reajuste: ");
scanf("%f", &percentual_reajuste);

reajuste = (percentual_reajuste/100)*salario_mensal;
novo_salario = salario_mensal + reajuste;

printf("O salario com o ataul reajuste é de R$%.2f", novo_salario);
*/
/*
Q)
float A, R;

printf("Digite o valor do raio da circunferencia em centimetros: ");
scanf("%f", &R);

A = 3.14159265*(R*R);
printf("A área da circunferencia é %.2f cm de raio é %.2f cm²", A, R);
*/
/*
R)
float a, b, c;
float votos_nulos, votos_brancos, total_votos;
float PVV, PA, PB, PC, PVN, PVB;

printf("Digite a quantidade de votos do candidato A: \n");
scanf("%f", &a);
printf("Digite a quantidade de votos do candidato B: \n");
scanf("%f", &b);
printf("Digite a quantidade de votos do candidato C: \n");
scanf("%f", &c);
printf("Digite a quantidade de votos nulos: \n");
scanf("%f", &votos_nulos);
printf("Digite a quantidade de votos brancos: \n");
scanf("%f", &votos_brancos);

total_votos = a+b+c+votos_nulos+votos_brancos;
PVV = (a+b+c)*100/total_votos;
PA = a*100/total_votos;
PB = b*100/total_votos;
PC = c*100/total_votos;
PVN = votos_nulos*100/total_votos;
PVB = votos_brancos*100/total_votos;
printf("O resultado do total dos votos computados é %.2f: \n", total_votos);
printf("O resultado do percentual dos votos do candidato A é %.2f: \n", PA);
printf("O resultado do percentual dos votos do candidato B é %.2f: \n", PB);
printf("O resultado do percentual dos votos do candidato C é %.2f \n", PC);
printf("O resultado do percentual de votos nulos é de %.2f: \n", PVN);
printf("O resultado percentual de votos nulos é de %.2f: \n", PVB);
*/
/*
S)
int a, b, soma, sub, mult, div;

printf("Digite o valor de A: ");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);

soma = a+b;
sub = a-b;
mult = a*b;
div = a/b;
printf("\n O resultado da soma de A e B é %d ", soma);
printf("\n O resultado da subtração de A e B é %d ", sub);
printf("\n O resultado da multiplicação de A e B é %d ", mult);
printf("\n O resultado da divisão de A e B é %d ", div);
*/
/*
T)
float V, D, Te;

printf("Para obter a velocidade de um projétil digite os valores de D de distancia e Te de tempo");
printf("\nDigite o valor de D em quilometros: ");
scanf("%f", &D);
printf("Digite o valor de Te em minutos: ");
scanf("%f", &Te);

V = (D*1000)/(Te*60);
printf("A velocidade do projétil que percorreu %.1f Km no tempo de %.1f min, foi de %.2f m/s", D, Te, V);
*/
/*
V)
float B, P, exp;

printf("Digite o valor da base da potencia: ");
scanf("%f", &B);
printf("Digite o valor do expoente da potencia: ");
scanf("%f", &exp);

P = pow(B, exp);
printf("O resultado da potenciação é %.2f", P);
*/
/*
W)
float P, convert_mt;

printf("Digite o valor em Pés que será convertido para metros: ");
scanf("%f", &P);

convert_mt = P*0.3048;
printf("O valor de pés %.1f equivale a %.1f em metros", P, convert_mt);
*/
/*
X)
float b, i, raiz;

printf("Digite o valor da base da raiz: ");
scanf("%f", &b);
printf("Digite o valor do índicie da raiz: ");
scanf("%f", &i);

raiz = pow(b, 1/i);
printf("O valor da raiz é %.1f", raiz);
*/
/*
Y)
int n, suc, ant;

printf("Digite o valor de N: ");
scanf("%d", &n);

suc = n+1;
ant = n-1;

printf("O sucessor de %d é %d e o antecessor é %d", n, suc, ant);
*/
/*
Z)
int a, b, c;

printf("Digite o valor de A: ");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);

c = pow((a/b),2);
printf("O resultado do quadrado da divisão entre %d e %d é %d", a, b, c);
*/
return 0;  
}