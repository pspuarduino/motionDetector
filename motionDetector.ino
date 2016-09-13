int pirPin = 7;               //контакт для подключения датчика к Arduino
int ledPin = 13;              //использование стандартного светодиода
int val = 0;                  //переменная для хранения состояния датчика

void setup() {
  Serial.begin(9600);           //открыть сеанс связи з компьютером
  pinMode(pirPin, INPUT);       //определить выходной контакт для датчика
  pinMode(ledPin, OUTPUT);      //определить контакт со светодиодом как выход
}

void loop() {
  val = digitalRead(pirPin);    //считываем состояние датчика
if (val == HIGH) {            //если есть движение
  digitalWrite(ledPin, HIGH);   //включить светодиод
  Serial.println("Motion!");    //передать на компьютер "Motion!"
}
else {
  digitalWrite(ledPin, LOW);    //иначе выключить светодиод
  Serial.println("No motion");  //и передать компьютеру "No motion"
}
  delay(1000);                  //подождать секунду
}
