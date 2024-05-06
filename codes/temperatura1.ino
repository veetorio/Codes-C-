#include <LiquidCrystal.h> // Biblioteca do lcd display 16x2

//define o sensor de tmp36 de temperatura
#define sensor A0

LiquidCrystal display(2,3,4,5,6,7);  // instancia do objeto nas portas digitais


//configuração 
void setup()
{
  pinMode(sensor,INPUT); // setando o sensor na porta analogica A0
  Serial.begin(9600); // setando a velocidade de leitura da saida
  display.begin(16,2); // setando o tamanho da tela do lcd


  /*
  	esta parte codigo esta iniciando o programa e escrevendo "termometro digital" no lcd
   	e esperando logo em seguida 1S para limpar a tela.
  */
  display.print("termometro"); 
  display.setCursor(0,1);
  display.print("digital");
  delay(1000);
  display.clear();
  
  
}

/*
	inicia o programa chamando a função initDisplay() que irá ler o valor no sensor e vai imprimilo no lcd
*/
void loop(){
 	initDisplay();
}



/*
	esse metodo ele inicia setando a posição do cursor e irá escrever a temperatura
*/
void initDisplay(){
  display.setCursor(3,0);
  display.print(tempC());
  display.setCursor(9,0);
  display.print("C");
}

/*
	essa função irá pegar o valor de tensão do sensor e irá covertelo em graus celsius
*/
float tempC(){
	float input = analogRead(sensor);
  	float voltage = 5*input/1023;
  	return (voltage - 0.5)*100 ;
}
