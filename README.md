# sketch_nov05a.ino 

```cpp
#define R 32
#define G 33
#define B 25

void setup()
{
    pinMode(R, OUTPUT);
}

void loop()
{
    int rv = random(255);
    analogWrite(R, rv);
    delay(1000);
}
```


- 定義了三個LED腳位 R、G、B，分別對應到GPIO 32、33和25
- 在setup()中將R腳位設定為輸出模式
- 在loop()中:
  - 產生0-255之間的隨機數值
  - 使用PWM將該隨機值寫入R腳位，控制LED亮度
  - 延遲1秒後重複執行



# sketch_nov05c.ino 
```cpp
int TrigPin = 17;
int EchoPin = 16;

void setup() {
    pinMode(TrigPin, OUTPUT);
    pinMode(EchoPin, INPUT);
    Serial.begin(115200);
}

void loop() {
    unsigned long distance = ping()/58;
    Serial.print(distance);
    Serial.println("cm");
    delay(100);
}

unsigned long ping() {
    digitalWrite(TrigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(TrigPin, LOW);
    return pulseIn(EchoPin, HIGH);
}
```

這段程式碼是用於超音波測距感測器的Arduino程式:

**主要功能說明**:
- 使用Pin 17作為Trig腳位(觸發端)
- 使用Pin 16作為Echo腳位(接收端)
- 透過ping()函數發送超音波並接收回傳時間
- 將時間轉換為距離(除以58得到公分值)
- 每100毫秒更新一次距離值
- 透過Serial通訊以115200鮑率輸出距離值

