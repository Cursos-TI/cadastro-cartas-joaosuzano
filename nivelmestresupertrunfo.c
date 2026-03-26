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
    long double pib1 ;
    long double pib2 ;
    int pontoturistico1 ;
    int pontoturistico2 ;
    float densidadepop1 ;
    float densidadepop2 ; 
    float pibpercapita1 ; 
    float pibpercapita2 ;
    long double super1 ;
    long double super2 ;

    
    int resultadopop ;
    int resultadoarea ;
    int resultadopib ;
    int resultadoturistico ;
    int resultadodensidade ;
    int resultadopibpercapita ; 
    int resultadosuper ;


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
    scanf ("%lf" , &pib1) ; 
    printf ("informe quantidade de pontos turisticos: \n" ) ;
    scanf ("%i" , &pontoturistico1) ; 
    printf (" \n") ; 

    densidadepop1 =(float) populacao1 / area1 ;
    pibpercapita1 = (float) pib1 / populacao1 ;
    super1 = (double)  populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 - densidadepop1 ;





    
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
    scanf ("%lf" , &pib2) ; 
    printf ("informe quantidade de pontos turisticos: \n" ) ;
    scanf ("%i" , &pontoturistico2) ; 
    printf (" \n") ; 


    densidadepop2 =(float) populacao2 / area2 ; 
    pibpercapita2 =(float) pib2 / populacao2 ; 
    super2 = (double)  populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 - densidadepop2 ;






    printf ("================================\n") ;
    printf ("CARTA 1                         \n") ; 
    printf ("Estado: %s                      \n" , estado1) ;
    printf ("Codigo: %s                      \n" , codigo1) ;
    printf ("Cidade: %s                      \n" , cidade1) ;
    printf ("Populaçao: %i                   \n" , populacao1) ;
    printf ("Área: %.2fkm²                     \n" , area1) ;
    printf ("PIB: %.2lf reais                   \n" , pib1) ;
    printf ("Número de Pontos Turisticos: %i \n" , pontoturistico1 ) ;
    printf ("Densidade populaciona: %.2f     \n" , densidadepop1) ;
    printf ("PIB percapita: %.2f                   \n" ,pibpercapita1 ) ;
    printf ("SUPER PODER: %ld                     \n" , super1 ) ;
    printf ("================================\n") ; 
    printf ("CARTA 2                         \n") ; 
    printf ("Estado: %s                      \n" , estado2) ;
    printf ("Codigo: %s                      \n" , codigo2) ;
    printf ("Cidade: %s                      \n" , cidade2) ;
    printf ("Populaçao: %i                   \n" , populacao2) ;
    printf ("Área: %.2fkm²                     \n" , area2) ;
    printf ("PIB: %.2lf reais                   \n" , pib2) ;
    printf ("Número de Pontos Turisticos: %i \n" , pontoturistico2) ;
    printf ("Densidade populaciona: %.2f     \n" , densidadepop2) ;
    printf ("PIB percapita: %.2f                   \n" ,pibpercapita2 ) ;
    printf ("SUPER PODER: %ld                     \n" , super2 ) ;
    printf ("================================\n") ;
    printf (" \n") ;
    printf (" \n") ;

    /*populaçao  , area , pib . ponto turistico , densidade , pib percapita , super         */
    resultadopop = populacao1 > populacao2 ;
    resultadoarea = area1 > area2 ;
    resultadopib = pib1 > pib2  ;
    resultadodensidade= densidadepop1 < densidadepop2 ;
    resultadopibpercapita = pibpercapita1 > pibpercapita2 ; 
    resultadosuper = super1 > super2 ;
    resultadoturistico = pontoturistico1 > pontoturistico2 ;




    printf ("===================================== \n") ;
    printf ("          COMPARANDO CARTAS           \n") ;
    printf ("===================================== \n") ;
    printf ("se o resultado for 1 = carta 1 venceu \n") ;
    printf ("se o resultado for 0 = carta 2 venceu \n") ;
    printf ("===================================== \n") ;
    printf ("População: %i \n", resultadopop) ;
    printf ("Área: %i \n", resultadoarea) ;
    printf ("PIB: %i \n", resultadopib) ;
    printf ("Ponto turistico: %i \n", resultadoturistico) ;
    printf ("Densidade populacional: %i \n", resultadodensidade) ;
    printf ("PIB Percapita: %i \n", resultadopibpercapita) ;
    printf ("SUPER PODER: %i \n", resultadosuper) ;
    printf ("===================================== \n") ;

    return 0 ;
}