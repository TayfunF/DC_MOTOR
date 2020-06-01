//ARKA TEKER
int IN4=1;
int IN3=2;
int EN2=3; //pwm 
//ÖN TEKER
int EN1=5; //pvm
int IN2=6;
int IN1=7;
//HIZ VE DÖNÜŞ
int hiz=200;
int donus=200;
//BUTONLAR
int left=13;
int right=12;
int foward=11;
int back=10;
//if İÇİN TANIMLAMA
int left_value;
int right_value;
int foward_value;
int back_value;

void setup() {
pinMode(left,INPUT);                //butonları Giriş yapma
pinMode(right,INPUT);
pinMode(foward,INPUT);
pinMode(back,INPUT);
}
void loop() {
left_value=digitalRead(left);       //LEFT butona basınca oku
right_value=digitalRead(right);     //RIGHT butona basınca oku
foward_value=digitalRead(foward);   //FOWARD butona basınca oku
back_value=digitalRead(back);       //BACK butona basınca oku

if(left_value==HIGH){
  analogWrite(IN1,donus);           //Sol butona basılırsa sola dön
  analogWrite(IN2,0);               //sağı iptal et
  delay(25);
  analogWrite(IN1,0);                //sistemi durdur
  analogWrite(IN2,0);                //sistemi durdur
  }
else if(right_value==HIGH){
  analogWrite(IN1,0);               //solu iptal et
  analogWrite(IN2,donus);           //Sağ butona basılırsa sağa dön
  delay(25);
  analogWrite(IN1,0);               //sistemi durdur
  analogWrite(IN2,0);               //sistemi durdur
  }
  else if(foward_value==HIGH){      
  analogWrite(IN3,hiz);             //İleri basılınca ileri git
  analogWrite(IN4,0);               //geriyi iptal et
  delay(25);
  analogWrite(IN3,0);               //sistemi durdur
  analogWrite(IN4,0);               //sistemi durdur
  }
  else if(back_value==HIGH){
    analogWrite(IN3,0);             //ileriyi iptal et
    analogWrite(IN4,hiz);           //Geriye basılınca geri git
    delay(25);
    analogWrite(IN3,0);             //sistemi durdur
    analogWrite(IN4,0);             //sistemi durdur    
  }
}
