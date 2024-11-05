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

