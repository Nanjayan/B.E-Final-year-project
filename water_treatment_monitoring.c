int reading = analogRead(A0);
float voltage = reading * 5.0;
voltage /= 1024.0;
float Temperature = (voltage - 0.5) * 100;
Serial.println(Temperature);
lcd.setCursor(0,0);
lcd.print("Temp :");
lcd.setCursor(0,1);
lcd.print(Temperature);
  for(i=1;i<=100;i++)
  {
    Y=analogRead(A1);
    X=(7.0+(Y/59.16));
    delay(100);
  
if(i<=100)
  {
    Z=Z+X;
  }
    if(i==100)
  {T=Z/100;
Serial.println(T);
lcd.setCursor(0,0);
lcd.print("pH :");
lcd.setCursor(0,1);
lcd.print(T);
  // put your main code here, to run repeatedly:
  }
}
delay(5000);
    if(T>=6.5&&T<=8.5)
     {
lcd.setCursor(0,0);
lcd.print("safe to discharge");
 delay(5000);
lcd.setCursor(0,0);
lcd.print("conductivity: (voltage/27)*1.063");
lcd.setCursor(0,1);
lcd.print("TDS =(conductivity/2)ppm");
  }
else{
  lcd.setCursor(0,0);
lcd.print("error in process"); 
//message delivering//
int timetosend=1;
int count=0;
char phone_no[]="9840535901";
Serial.begin(9600);
delay(2000);
Serial.println("AT+CMGF=1");
delay(200);
  while(count<timetosend)
  {
    delay(1500);
    Serial.print("AT+CMGS=\"");
    Serial.print(phone_no);
    Serial.println("\"");
    while(Serial.read()!='>');
    {
      Serial.print("Error in process");
      delay(500);
      Serial.write(0X1A);
      Serial.write(0X0D);
      Serial.write(0X0A);
      delay(5000);
    }
    count++;
    }
void loop() {
}
