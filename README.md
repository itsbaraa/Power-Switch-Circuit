# Power Switch Circuit
This Arduino project is a power control circuit that uses:

- A **push button** to toggle the circuit ON/OFF
- An **LDR (Light Dependent Resistor)** to automatically turn an LED ON or OFF based on ambient light **only when the circuit is enabled**
- A **status blink** on the built-in LED to indicate the toggle state

# How It Works

1. **Startup**: LED is OFF, circuit is disabled.
2. **Button Press**: Toggles circuit state.
3. **Circuit ON**: LDR checks ambient light and turns LED ON in the dark.
4. **Circuit OFF**: LED is always OFF regardless of light.
> **Note:**  
> Press the button to toggle the circuit:  
> - 2 LED blinks = Circuit turned **ON**  
> - 1 LED blink = Circuit turned **OFF**

# Circuit Diagram
<img width="684" height="755" alt="image" src="https://github.com/user-attachments/assets/7cc22669-575f-49eb-a336-70bc9cc301a9" />

# Showcase

https://github.com/user-attachments/assets/b5518b43-1e2b-4939-8949-3b103994dfa5

---

# Motion + Light Monitor Circuit

This Arduino project reads values from:

- A **motion sensor (PIR)** to detect movement
- An **LDR (Light Dependent Resistor)** to measure ambient light level

It prints the readings to the Serial Monitor for monitoring motion and lighting conditions in real time.

# How It Works

1. **Startup**: Serial monitor begins printing values.
2. **Motion Sensor**: Detects movement and prints either `Motion: YES` or `Motion: NO`.
3. **LDR Sensor**: Continuously reads light levels and prints a value between 0 (dark) and 1023 (bright).
> **Note:**  
> This circuit is useful for motion-activated lighting, smart surveillance, or light-aware automation.

# Circuit Diagram
<img width="848" height="784" alt="image" src="https://github.com/user-attachments/assets/ad8caba0-ab73-46cc-a7a2-e8e3a523e6d0" />


# Showcase
