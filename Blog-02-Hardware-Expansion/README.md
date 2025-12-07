# Blog 2: Hardware Expansion - External LEDs

**"Lighting Up Your World: External LEDs and Digital Control"**

## What This Does

- Controls 4 external LEDs on GPIO pins
- Creates 4 different LED patterns:
  - Sequential chase effect
  - Synchronized flash
  - Alternating pairs
  - PWM breathing effect
- Demonstrates arrays and loops for LED control

## Hardware Required

- NodeMCU-32S ESP32 board
- 4x LEDs (Red, Yellow, Green, Blue recommended)
- 4x 220Ω resistors
- Breadboard
- Jumper wires

## Circuit Connections

| LED Color | GPIO Pin | Resistor | Connection           |
| --------- | -------- | -------- | -------------------- |
| Red       | GPIO 23  | 220Ω     | LED → Resistor → GND |
| Green     | GPIO 22  | 220Ω     | LED → Resistor → GND |
| Blue      | GPIO 21  | 220Ω     | LED → Resistor → GND |

### Wiring Instructions:

1. Insert LEDs into breadboard (long leg = anode/+)
2. Connect LED anodes to GPIO pins via jumper wires
3. Connect 220Ω resistor from LED cathode (short leg) to breadboard ground rail
4. Connect ESP32 GND to breadboard ground rail

## Quick Start

```bash
cd Blog-02-Hardware-Expansion
pio run --target upload
pio device monitor
```

## LED Patterns Explained

### Pattern 1: Sequential Chase

LEDs light up one by one in sequence, creating a "chase" effect.

### Pattern 2: All Flash

All LEDs turn on and off together 3 times.

### Pattern 3: Alternating Pairs

LEDs 1&3 alternate with LEDs 2&4.

### Pattern 4: Breathing Effect

Built-in LED fades in and out using PWM (Pulse Width Modulation).

## Learning Objectives

✅ External LED connections  
✅ Current limiting with resistors  
✅ Multiple GPIO control  
✅ Arrays and loops  
✅ PWM for brightness control  
✅ Creating visual patterns

## Resistor Calculation

**Why 220Ω?**

- ESP32 GPIO output: 3.3V
- LED forward voltage: ~2V
- LED current: ~10mA (safe for GPIO)
- R = (3.3V - 2V) / 0.01A = 130Ω
- 220Ω provides extra safety margin

## Troubleshooting

**LEDs not lighting?**

- Check polarity (long leg to GPIO, short leg to GND)
- Verify resistor connections
- Test with multimeter
- Try different GPIO pins

**Dim LEDs?**

- Check resistor value (should be 220Ω, not 2.2kΩ)
- Verify power supply
- Check breadboard connections

**Erratic behavior?**

- Ensure common ground between ESP32 and breadboard
- Check for loose wires
- Verify code uploaded successfully

---

**Previous:** Blog 1 - Foundation  
**Next:** Blog 3 - Sensor Integration
