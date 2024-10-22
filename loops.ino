void setup() {
  Serial.begin(9600);
  int a,b,i;
  a==5,b==7;
 for(i=0;i<6;i++){
  Serial.println(i);
 }
 Serial.println(" FOR loop ENDS");
  while(i<b)
  {
    Serial.println(i);
    i++;
  }
  Serial.println(" WHILE loop ENDS");
  do 
  {
    Serial.println(i);
    i++;
  }while(i<b);
  Serial.println("DO WHILE loop ENDS");
}

void loop() {
  // put your main code here, to run repeatedly:

}
