//Decoder 1
int d1_1 = 2;
int d1_2 = 3;
int d1_3 = 4;
int d1_4 = 5;

//Decoder 2
int d2_1 = 8;
int d2_2 = 9;
int d2_3 = 10;
int d2_4 = 11;

//Potentiometer value
int p_value = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A5, INPUT);
}

void loop(){
  int d1,d2;
  int p_value_new;
  p_value = analogRead(A5);
  p_value_new = map(p_value, 0, 1023, 0, 99);
  d1 = p_value_new%10;
  d2 = p_value_new/10;
  display1(d1);
  display2(d2);
}

//Every number display for decoder 1
void display1(int num){ 
  //0000
  if(num == 0){
    digitalWrite(d1_1, LOW); 
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, LOW);
  }
  
  //0001
  if(num == 1){ 
    digitalWrite(d1_1, HIGH);
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, LOW);
  }
  
  //0010
  if(num == 2){ 
    digitalWrite(d1_1, LOW);
    digitalWrite(d1_2, HIGH);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, LOW);
  }
  
  //0011
  if(num == 3){
    digitalWrite(d1_1, HIGH);
    digitalWrite(d1_2, HIGH);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, LOW);
  }
  
  //0100
  if(num == 4){
    digitalWrite(d1_1, LOW);
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, HIGH);
    digitalWrite(d1_4, LOW);
  }
  
  //0101
  if(num == 5){
    digitalWrite(d1_1, HIGH);
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, HIGH);
    digitalWrite(d1_4, LOW);
  }
  
  //0110
  if(num == 6){
    digitalWrite(d1_1, LOW);
    digitalWrite(d1_2, HIGH);
    digitalWrite(d1_3, HIGH);
    digitalWrite(d1_4, LOW);
  }
  
  //0111
  if(num == 7){
    digitalWrite(d1_1, HIGH);
    digitalWrite(d1_2, HIGH);
    digitalWrite(d1_3, HIGH);
    digitalWrite(d1_4, LOW);
  }
  
  //1000
  if(num == 8){
    digitalWrite(d1_1, LOW);
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, HIGH);
  }
  
  //1001
  if(num == 9){
    digitalWrite(d1_1, HIGH);
    digitalWrite(d1_2, LOW);
    digitalWrite(d1_3, LOW);
    digitalWrite(d1_4, HIGH);
  }
}

//Every number display for decoder 2
void display2(int num){ 
  
  //0000
  if(num == 0) {
    digitalWrite(d2_1, LOW); 
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, LOW);
  }
  
  //0001
  if(num == 1){ 
    digitalWrite(d2_1, HIGH);
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, LOW);
  }
  
  //0010
  if(num == 2){ 
    digitalWrite(d2_1, LOW);
    digitalWrite(d2_2, HIGH);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, LOW);
  }
  
  //0011
  if(num == 3){
    digitalWrite(d2_1, HIGH);
    digitalWrite(d2_2, HIGH);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, LOW);
  }
  
  //0100
  if(num == 4){
    digitalWrite(d2_1, LOW);
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, HIGH);
    digitalWrite(d2_4, LOW);
  }
  
  //0101
  if(num == 5){
    digitalWrite(d2_1, HIGH);
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, HIGH);
    digitalWrite(d2_4, LOW);
  }
  
  //0110
  if(num == 6){
    digitalWrite(d2_1, LOW);
    digitalWrite(d2_2, HIGH);
    digitalWrite(d2_3, HIGH);
    digitalWrite(d2_4, LOW);
  }
  
  //0111
  if(num == 7){
    digitalWrite(d2_1, HIGH);
    digitalWrite(d2_2, HIGH);
    digitalWrite(d2_3, HIGH);
    digitalWrite(d2_4, LOW);
  }
  
  //1000
  if(num == 8){
    digitalWrite(d2_1, LOW);
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, HIGH);
  }
  
  //1001
  if(num == 9){
    digitalWrite(d2_1, HIGH);
    digitalWrite(d2_2, LOW);
    digitalWrite(d2_3, LOW);
    digitalWrite(d2_4, HIGH);
  } 
}
