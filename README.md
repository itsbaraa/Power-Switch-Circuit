# Power Switch Circuit
This Arduino project is a power control circuit that uses:

- A **push button** to toggle the circuit ON/OFF
- An **LDR (Light Dependent Resistor)** to automatically turn an LED ON or OFF based on ambient light **only when the circuit is enabled**
- A **status blink** on the built-in LED to indicate the toggle state

# How It Works

1. **Startup**: LED is OFF, circuit is disabled.
2. **Button Press**: Toggles circuit state:
   - 2 LED blinks = Circuit turned **ON**  
   - 1 LED blink = Circuit turned **OFF**
4. **Circuit ON**: LDR checks ambient light and turns LED ON in the dark.
5. **Circuit OFF**: LED is always OFF regardless of light.

# Circuit Diagram
<img width="684" height="755" alt="image" src="https://github.com/user-attachments/assets/7cc22669-575f-49eb-a336-70bc9cc301a9" />

# Showcase

https://github.com/user-attachments/assets/b5518b43-1e2b-4939-8949-3b103994dfa5

---

# Proximity Light Trigger Circuit

This Arduino project is a proximity-based lighting circuit that uses:

- An ultrasonic sensor to detect how close an object is.
- An LDR (Light Dependent Resistor)** to determine ambient light brightness.
- An LED that only turns on when it is bright and an object is close to the sensor.

---

## How It Works

- **Startup:** Serial Monitor begins outputting distance in cm and LDR brightness values.
- **Ultrasonic Sensor:** Continuously checks distance. If an object is 15 cm or closer, it meets the proximity condition.
- **LDR:** Continuously reads ambient light. If light is bright enough (analog value < 500), it meets the light condition.

# Circuit Diagram
<img width="1215" height="1174" alt="image" src="https://github.com/user-attachments/assets/9333665a-25f9-42b6-aefb-b4d137b9ac03" />



# Showcase

https://github.com/user-attachments/assets/6e1c2d22-ecc8-4a7a-a823-7f8289378d6f
