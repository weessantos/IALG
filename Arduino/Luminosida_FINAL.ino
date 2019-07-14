/*
  Trabalho de Introdução aos Algoritimos
  Sensor de Luminosidade 
  Copyright 2019 by Wesley de Jesus Santos
  Código fonte utlizado no usado no arduino
*/

#include <SdFat.h>

SdFat sdCard;
SdFile meuArquivo;
 
//PINO LIGADO AO CS DO MÓDULO
const int chipSelect = 4;     

//PINOS DOS LEDS
const int LedAzul = 2;
const int LedAmarelo = 3;
const int LedVermelho = 7;

//VETOR DOS VALORES
int luminosidades[40];

//CONTADOR DE VALORES E VARIAVEL DE MÉDIA
int cont = 0;
int media = 0;


//FUNCAO DE ORDENACAO
void insertionSort(int *vector, int size){
  int aux;
  for( int i = 1; i < size; i++ ) {
    for(int j = i; j > 0; j-- ) {
      if( vector[j] < vector[j-1] ){
        aux = vector[j];
        vector[j] = vector[j-1];
        vector[j-1] = aux;
      }
    }
  }
}

 
void setup()
{
  Serial.begin(9600);

  //DEFINE O PINO DO SENSOR DE LUMINOSIDADE
  pinMode(A5, INPUT);
  
  // INICIALIZA O MÓDULO SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo DADOS.TXT
  if (!meuArquivo.open("dados.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Erro na abertura do arquivo DADOS.TXT!");
  }
}
 
void loop()
{
      // ARMAZENA O VALOR DA DA LUMINOSIDADE NA VARIAVEL
      int valor = analogRead(A5);
      Serial.print("Leitura de Luminosidade: ");
      Serial.println(valor);

      //SALVA OS VALORES NO VETOR E INCREMENTA A POSICAO
      luminosidades[cont] = valor;
      cont++;
            

        //CONDICAO DO LED AZUL, LUZ ALTA
        if (valor >= 700)
        {
          digitalWrite(LedAzul, HIGH);
          digitalWrite(LedAmarelo, LOW);
          digitalWrite(LedVermelho, LOW);
          delay(2000);
        }

        //CONDICAO DO LED AMARELO, LUZ MÉDIA
        else if((valor < 700) and (valor > 200))
        {
           digitalWrite(LedAzul, LOW);
          digitalWrite(LedAmarelo, HIGH);
          digitalWrite(LedVermelho, LOW);
          delay(2000);    
        }

        //CONDICAO DO LED VERMELHO, LUZ FRACA
         else if (valor <= 200)
         {
          digitalWrite(LedAzul, LOW);
          digitalWrite(LedAmarelo, LOW);
          digitalWrite(LedVermelho, HIGH);
          delay(2000);
        }

        //CONDICAO DE PARADA SE JA FORAM ARMAZENADOS 40 VALORES
        if(cont >= 40){

        Serial.println("Medições interrompidas! Aguarde a finalização");
        delay(1500);
         
        //CHAMADA DA FUNCAO DE ORDENACAO
        insertionSort(luminosidades, cont);

        Serial.print("O número de elementos salvos é: ");
        Serial.println(cont);


          /*FOR AUXILIAR PARA IMPRESSAO DOS VALORES SENDO ORDENADOS
          for(int i = 0; i < cont; i++)
          {
            Serial.println(luminosidades[i]);
            delay(200);   
          }
          */

          //FOR PARA GRAVACAO DOS VALORES JA ORDENADOS NO ARQUIVO
           for(int j = 0; j < cont; j++)
          {
            meuArquivo.print("Luminosidade no momento: ");
            meuArquivo.println(luminosidades[j]);  
          }

          //FOR PARA CALCULAR A MÉDIA DOS VALORES
          for(int k = 0; k < cont; k++){
            media += luminosidades[k]; 
          }

          media = media/cont;
 
          //GRAVACAO DE MÉDIA NO ARQUIVO
          meuArquivo.print("O valor médio entre os valores é de: ");
          meuArquivo.println(media);


          //RELATÓRIO BASEADO NA MÉDIA DOS VALORES
           if(media >= 700)
          {
            meuArquivo.println("Na maioria do periodo analisado a intesidade da luz foi alta, ambiente com luz alta ou entrada direta de raios solares");
          }

          else if((media < 700) and (media > 200))
          {
            meuArquivo.println("Na maioria do periodo analisado a intesidade da luz foi média, ambiente com luz em nivel normal");
          }

          else if(media <= 200)
          {
            meuArquivo.println("Na maioria do periodo analisado a intesidade da luz foi baixa, ambiente muito escuro");
          }

          //RODAPÉ DO ARQUIVO PARA QUE HAJA DIVSAO ENTRE AS PRÓXIMAS EXECUCOES DO PROGRAMA
          meuArquivo.println("Fim das medições");
          meuArquivo.println(" ");

          //IMPRIME MAIOR VALOR MEDIDO E A MÉDIA ENTRE ELES
          Serial.print("O maior valor medido foi de: ");
          Serial.println(luminosidades[cont-1]);
          Serial.print("O valor médio entre os valores é de: ");
          Serial.println(media);

          //FECHA O ARQUIVO
          meuArquivo.close();
          Serial.println("O arquivo foi gravado. Retire o Micro SD!");
      
      //CONDICAO PARA QUE O PROGRAMA FIQUE PARADO  
      while (1) {}
      }
}
