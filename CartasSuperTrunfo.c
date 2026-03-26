#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese") ;
    char estado1[20] ; 
    char estado2[20] ; 
    char codigo1[20] ;
    char codigo2[20] ; 
    char cidade1[20] ;
    char cidade2[20] ;
    int populacao1;
    int populacao2 ;
    float area1 ;
    float area2 ;
    float pib1 ;
    float pib2 ;
    int pontoturistico1 ;
    int pontoturistico2 ;
    float densidadepop1 ;
    float densidadepop2 ; 
    float pibpercapita1 ; 
    float pibpercapita2 ;



    printf ("=============================== \n") ; 
    printf ("  criando cartas super trunfo   \n")  ; 
    printf ("=============================== \n") ;
    printf ("\n") ;

    printf ("INFORMACOES CARTA 1 \n") ; 
    printf ("informe o estado: \n") ; 
    scanf ("%s" , estado1) ; 
    printf ("informe o codigo: \n") ;
    scanf ("%s" , codigo1) ; 
    printf ("informe a cidade: \n") ; 
    scanf ("%s" , cidade1) ;
    printf ("informe a populaçao: \n") ;
    scanf ("%i" , &populacao1) ;
    printf ("informe a área da cidade: \n") ; 
    scanf ("%f" , &area1) ; 
    printf ("informe o pib: \n") ; 
    scanf ("%f" , &pib1) ; 
    printf ("informe quantidade de pontos turisticos: \n" ) ;
    scanf ("%i" , &pontoturistico1) ; 
    printf (" \n") ; 




    
    printf ("INFORMACOES CARTA 2 \n") ; 
    printf ("informe o estado: \n") ; 
    scanf ("%s" , estado2) ; 
    printf ("informe o codigo: \n") ;
    scanf ("%s" , codigo2) ; 
    printf ("informe a cidade: \n") ; 
    scanf ("%s" , cidade2) ;
    printf ("informe a populaçao: \n") ;
    scanf ("%i" , &populacao2) ;
    printf ("informe a área da cidade: \n") ; 
    scanf ("%f" , &area2) ; 
    printf ("informe o pib: \n") ; 
    scanf ("%f" , &pib2) ; 
    printf ("informe quantidade de pontos turisticos: \n" ) ;
    scanf ("%i" , &pontoturistico2) ; 
    printf (" \n") ; 





    printf ("================================\n") ;
    printf ("CARTA 1                         \n") ; 
    printf ("Estado: %s                      \n" , estado1) ;
    printf ("Codigo: %s                      \n" , codigo1) ;
    printf ("Cidade: %s                      \n" , cidade1) ;
    printf ("Populaçao: %i                   \n" , populacao1) ;
    printf ("Área: %.0fkm²                     \n" , area1) ;
    printf ("PIB: %.0f reais                   \n" , pib1) ;
    printf ("Número de Pontos Turisticos: %i \n" , pontoturistico1 ) ;
    printf ("Densidade populaciona: %.2f     \n" , densidadepop1) ;
    printf ("PIB percapita: %.2f                   \n" ,pibpercapita1 ) ;
    printf ("================================\n") ; 
    printf ("CARTA 2                         \n") ; 
    printf ("Estado: %s                      \n" , estado2) ;
    printf ("Codigo: %s                      \n" , codigo2) ;
    printf ("Cidade: %s                      \n" , cidade2) ;
    printf ("Populaçao: %i                   \n" , populacao2) ;
    printf ("Área: %.0fkm²                     \n" , area2) ;
    printf ("PIB: %.0f reais                   \n" , pib2) ;
    printf ("Número de Pontos Turisticos: %i \n" , pontoturistico2) ;
    printf ("Densidade populaciona: %.2f     \n" , densidadepop2) ;
    printf ("PIB percapita: %.2f                   \n" ,pibpercapita2 ) ;
    printf ("================================\n") ;

    return 0 ;
}