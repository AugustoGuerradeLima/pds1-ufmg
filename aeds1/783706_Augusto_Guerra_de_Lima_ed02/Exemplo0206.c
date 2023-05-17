/*
    Exemplo0206 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    char x = '_'; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0206 - Programa -v0.0");

    //ler do teclado
    x = IO_readchar("Entrar com um caractere:");

    //testar valor
    if(('a'<= x && x<='z') || ('A'<= x && x<='Z'))
    {
        IO_printf("%s(%c)\n", "Letra", x);
    }
    else
    {
        IO_printf("%s(%c)\n", "Valor diferente de letra" , x);
    } //fim do se

    //finalizar
    IO_pause ( "Apertar ENTER para terminar" );

    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) a
b.) A
c.) 0
d.) #
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste com int
 0.3 01. ( OK ) teste com double
 0.4 01. ( OK ) teste com double 2
 0.5 01. ( OK ) teste com char
 0.6 01. ( OK ) teste com char 2
*/