#include <iostream>
#include <cmath>
using namespace std;
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1a
float media(float a, float b, float c)
{
    float result = 0.0;
    result = (a + b + c) / 3.0;
    return (result);
}
// procedimento f1()
void f1(void)
{
    float a, b, c;
    cout << "escolha 3 numeros" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "media: " << media(a, b, c) << endl;
} // end f1()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1b
float mediaPonderada(float a, float b, float c)
{
    float result = 0.0;
    result = ((a * 3) + (b * 4) + (c * 5)) / 3.0;
    return (result);
}
// procedimento f2()
void f2(void)
{
    float a, b, c;
    cout << "sabendo que temos peso 3, 4 e 5 respectivamente escolha tres numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "media ponderada: " << mediaPonderada(a, b, c) << endl;
} // end f2()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1c
float perimetroCirculo(float r)
{
    float result = 2 * M_PI * r;
    return (result);
} // end perimetroCirculo()
// procedimento f3()
void f3(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "perimetro: " << perimetroCirculo(raio) << endl;
} // end f3()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1d
float areaCirculo(float r)
{
    float result = M_PI * pow(r, 2);
    return (result);
} // end areaCirculo()
// procedimento f4()
void f4(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "area: " << areaCirculo(raio) << endl;
} // end f4()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1e
float areaCaixa(float a, float b, float c)
{
    float result = 4 * (a * c) + 2 * (a * b);
    return (result);
}
// procedimento f5()
void f5(void)
{
    float a, b, c;
    cout << "comprimento: " << endl;
    cin >> a;
    cout << "largura: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "area da caixa: " << areaCaixa(a, b, c) << endl;
} // end f5()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1f
float volumeCaixa(float a, float b, float c)
{
    float result = a * b * c;
    return (result);
}
// procedimento f6()
void f6(void)
{
    float a, b, c;
    cout << "comprimento: " << endl;
    cin >> a;
    cout << "largura: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "volume da caixa: " << volumeCaixa(a, b, c) << endl;
} // end f6()
//--------------------------------------------------------------------------------------------------------------------------------------------------------main()
int main()
{
    char c = 'z';
    do
    {
        cout << "a) media" << endl;
        cout << "b) media ponderada" << endl;
        cout << "c)perimetro do circulo" << endl;
        cout << "d)area do circulo" << endl;
        cout << "e)area do triangulo" << endl;
        cout << "f) area da caixa" << endl;
        cout << "g) volume da caixa" << endl;
        cout << "h)area do cilindro" << endl;
        cout << "i)volume do cilindro" << endl;
        cout << "j)hipotenusa" << endl;
        cout << "k)raiz positiva" << endl;
        cin >> c;

        switch (c)
        {
        case 'a':
            f1();
            break;
        case 'b':
            f2();
            break;
        case 'c':
            f3();
            break;
        case 'd':
            f4();
            break;
        case 'e':
            f5();
            break;
        case 'f':
            f6();
            break;
        case 'g':
            f7();
            break;
        default:
            cout << "valor invalido" << endl;
            break;
        }
    } while (c != 'z');
    return (0);
} // end main()