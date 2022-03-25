int valorDisp;

byte displaySeteSeg[32][14] = { 
 { 1,1,1,1,1,1,0 },  
 { 0,1,1,0,0,0,0 },  
 { 1,1,0,1,1,0,1 },  
 { 1,1,1,1,0,0,1 },  
 { 0,1,1,0,0,1,1 },  
 { 1,0,1,1,0,1,1 },  
 { 1,0,1,1,1,1,1 }, 
 { 1,1,1,0,0,0,0 },  
 { 1,1,1,1,1,1,1 },  
 { 1,1,1,1,0,1,1 },  
 { 1,1,1,1,1,1,1 },  
 { 1,1,1,0,0,0,0 },  
 { 1,0,1,1,1,1,1 },  
 { 1,0,1,1,0,1,1 },  
 { 0,1,1,0,0,1,1 },  
 { 1,1,1,1,0,0,1 },  
 { 1,1,0,1,1,0,1 },  
 { 0,1,1,0,0,0,0 },  
 { 1,1,1,1,1,1,0 },  
};
void setup(){
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 

  valorDisp = 0;
    ligaSegmentosDisplay(valorDisp);
}

void ligaPonto(byte dot){  
  digitalWrite(9, dot);
}

void ligaSegmentosDisplay(byte digito){

  byte pino = 2;
  
  for (byte contadorSegmentos = 0; contadorSegmentos < 10; ++contadorSegmentos){
    digitalWrite(pino, displaySeteSeg[digito][contadorSegmentos]);
    ++pino;
  }
}

void loop() {
  delay(1000);
  ligaSegmentosDisplay(valorDisp);
  valorDisp++;
}