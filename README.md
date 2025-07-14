# Power-Switch-Circuit
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
