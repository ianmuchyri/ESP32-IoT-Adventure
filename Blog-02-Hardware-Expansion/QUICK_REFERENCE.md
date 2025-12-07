# Blog 2: Quick Reference Card

## 📌 Pin Connections

| Component  | GPIO | Notes                  |
| ---------- | ---- | ---------------------- |
| Red LED    | 23   | + 220Ω resistor to GND |
| Green LED  | 22   | + 220Ω resistor to GND |
| Blue LED   | 21   | + 220Ω resistor to GND |

## 🔧 Resistor Calculation

```
R = (Vsource - VLED) / ILED
R = (3.3V - 2V) / 0.01A = 130Ω
Use 220Ω for safety margin
```

## 💻 Key Code Snippets

### Digital Control

```cpp
digitalWrite(pin, HIGH);  // Turn ON
digitalWrite(pin, LOW);   // Turn OFF
```

### PWM Control

```cpp
analogWrite(pin, 0);      // 0% brightness
analogWrite(pin, 128);    // 50% brightness
analogWrite(pin, 255);    // 100% brightness
```

### Array Loop

```cpp
const int leds[] = {23, 22, 21};
for (int i = 0; i < 4; i++) {
  digitalWrite(leds[i], HIGH);
}
```

## 🎨 LED Patterns

1. **Sequential Chase** - One at a time
2. **Synchronized Flash** - All together
3. **Alternating Pairs** - 1&3, then 2&4
4. **PWM Breathing** - Smooth fade in/out

## 🐛 Troubleshooting

| Problem          | Solution                      |
| ---------------- | ----------------------------- |
| LED not lighting | Check polarity (long leg = +) |
| Dim LED          | Verify 220Ω (not 2.2kΩ)       |
| Erratic behavior | Check common ground           |
| Won't upload     | Hold BOOT button              |

## ⚡ Quick Commands

```bash
# Build
pio run

# Upload
pio run --target upload

# Monitor
pio device monitor

# All in one
pio run -t upload && pio device monitor
```

---

**Next:** Blog 3 - Sensor Integration 🌡️
