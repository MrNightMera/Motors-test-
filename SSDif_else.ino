const int topMid = A0;   
const int topRight = 11;
const int topLeft = A2;
const int midRight = 10;
const int midLeft = 2;
const int btmRight = 9;
const int btmLeft = 3;
const int btmMid = 5;

int counter = 0;

void setup(){

  pinMode(topMid, OUTPUT);
  pinMode(topRight, OUTPUT);
  pinMode(topLeft, OUTPUT); 
pinMode(midRight, OUTPUT);
pinMode(midLeft, OUTPUT);
pinMode(btmRight, OUTPUT);
pinMode(btmLeft, OUTPUT);
pinMode(btmMid, OUTPUT);
  }

void loop(){
if(counter == 0){
 digitalWrite(topRight, HIGH);
 digitalWrite(topMid, HIGH);
digitalWrite(topLeft, HIGH);
 digitalWrite(btmMid, HIGH);
 digitalWrite(btmRight, HIGH);
 digitalWrite(btmLeft, HIGH);
}
else if (counter == 1){
  digitalWrite(topRight, HIGH);
  digitalWrite(btmRight, HIGH);
}
else if (counter == 2){
  digitalWrite(topMid, HIGH);
  digitalWrite(topRight, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(btmLeft, HIGH);
  digitalWrite(btmMid, HIGH);
  digitalWrite(topMid, HIGH);
  }
else if (counter == 3){
  digitalWrite(topMid, HIGH);
  digitalWrite(topRight, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(btmRight, HIGH);
  digitalWrite(btmMid, HIGH);
  }
else if (counter == 4){
  digitalWrite(topLeft, HIGH);
  digitalWrite(topRight, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(btmRight, HIGH);
  }

else if (counter == 5){
  digitalWrite(topMid, HIGH);
  digitalWrite(topLeft, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(btmRight, HIGH);
  digitalWrite(btmMid, HIGH);
  }

else if (counter == 6){
  digitalWrite(topMid, HIGH);
  digitalWrite(topLeft, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(btmMid, HIGH);
  digitalWrite(btmLeft, HIGH);
  digitalWrite(btmRight, HIGH);
  }  
else if (counter == 7){
  digitalWrite(topMid, HIGH);
  digitalWrite(topRight, HIGH);
  digitalWrite(btmRight, HIGH);
  }
else if (counter == 8) {
   digitalWrite(topRight, HIGH);
  digitalWrite(topMid, HIGH);
  digitalWrite(topLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(btmRight, HIGH);
  digitalWrite(btmLeft, HIGH);
  digitalWrite(btmMid, HIGH);
  }

else if (counter == 9){
  digitalWrite(topRight, HIGH);
  digitalWrite(topLeft, HIGH);
  digitalWrite(topMid, HIGH);
  digitalWrite(midLeft, HIGH);
  digitalWrite(midRight, HIGH);
  digitalWrite(btmRight, HIGH);
  }
  
delay(800);


  digitalWrite(topRight, LOW);
  digitalWrite(topMid, LOW);
  digitalWrite(topLeft,LOW);
  digitalWrite(midRight,LOW);
  digitalWrite(midLeft, LOW);
  digitalWrite(btmRight, LOW);
  digitalWrite(btmLeft, LOW);
  digitalWrite(btmMid, LOW);
  
if (counter < 9){
  counter = counter +1;
}
else {
  counter = 0;
}
}

