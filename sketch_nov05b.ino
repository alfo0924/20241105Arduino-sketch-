#define R 32
#define G 33
#define B 25

bool flag12 = LOW;


void setup() {
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(12, INPUT_PULLUP);
}

void loop() {
 
int p12 = digitalRead(12);
  // 檢查按鈕是否按下（且狀態為低）並改變 flag12 狀態
  if (p12 == LOW && flag12 == LOW) {
    flag12 = HIGH; // 標記按鈕已按下
    // 生成隨機顏色值
    int rv = random(255);
    int gv = random(255);
    int bv = random(255);

    // 設定 RGB 顏色
    analogWrite(R, rv);
    analogWrite(G, gv);
    analogWrite(B, bv);
    delay(100);
  }

  // 檢查按鈕是否放開並重設 flag12
  if (p12 == HIGH && flag12 == HIGH) {
    flag12 = LOW; // 標記按鈕已放開，等待下一次按下
  }
}
