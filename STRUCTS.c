  

#include <stdio.h> 

//struct se declara fora da função 

struct notas { 

    float His; 

    float Mat; 

    float Geo; 

}; 

    float calcularMedia(struct notas n){ 

    return (n.His+n.Mat+n.Geo)/3;  

    } 

  

  

int main() 

{ 

    struct notas alu1; 

    printf("Informe a nota da materia de Historia:"); 

    scanf("%f",&alu1.His); //alu1 recebe um valor correspondente a nota de His  

    printf("Informe a nota da materia de Matematica:"); 

    scanf("%f",&alu1.Mat); 

    printf("Informe a nota da materia de Geografia:"); 

    scanf("%f",&alu1.Geo); 

    printf("A média das notas é informadas é: %2.f\n", calcularMedia(alu1));  

    /*dentro do print fizemos chamada da função calcularMedia como parametro a variavel  

    ret1 que é do tipo struct Retangulo */ 

     

    return 0; 

} 

 

 

 

  

#include <stdio.h> 

#include <math.h> 

//struct se declara fora da função 

struct Ponto { 

    float x; 

    float y; 

}; 

    float calcularDistancia(struct Ponto p1, struct Ponto p2){ 

   

    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));  

    /* dentro da raiz quadrada de D tem*/ 

     

    } 

  

   

#include <stdio.h> 

#include <math.h> 

//struct se declara fora da função 

struct Ponto { 

    float y; 

    float x; 

}; 

    float calcularDistancia(struct Ponto p1, struct Ponto p2){ 

   

    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));  

    /* dentro da raiz quadrada de D tem*/ 

     

    } 

  

int main() 

{ 

    struct Ponto ponto1 = {3,2}; 

    struct Ponto ponto2 = {7,3}; 

     

    float distancia = calcularDistancia(ponto1, ponto2); 

  

    printf("A distância entro os pontos é informadas é: %2.f\n", distancia); 

    return 0; 

} 