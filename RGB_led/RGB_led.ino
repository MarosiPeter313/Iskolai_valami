int r=9 ;
int b=10 ;
int v= 11 ;
void setup() {
  pinMode (r, OUTPUT) ;
  pinMode (b, OUTPUT) ;
  pinMode (v, OUTPUT) ;

  digitalWrite (r,1) ;
  delay (500);

  digitalWrite (r,1) ;
  digitalWrite (b,1) ;
  delay (500) ;
  
  digitalWrite (b,0) ;
  digitalWrite (v,1) ;
  delay (500) ;
  
  digitalWrite (r,1) ;
  digitalWrite (b,1) ;
  delay (500) ;
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
