# Blinking of Led:
It defines two functions: Led_Blinking_func and RGB_Blinking_func, each of which is responsible for controlling different sets of LEDs with delays in between. Let's break down the code:

### Led_Blinking_func:  

This function is named Led_Blinking_func and does not take any arguments (i.e., it's a void function).
It is designed to control three LEDs: a green LED, a red LED, and a yellow LED.
It turns on all three LEDs by calling the respective Write functions with a value of 1 (indicating "on").
After turning on the LEDs, it adds a delay of 500 milliseconds using CyDelay(500) to keep them on for half a second.
Following the delay, it turns off all three LEDs by calling the Write functions with a value of 0 (indicating "off").

### RGB_Blinking_func:  
 
This function is named RGB_Blinking_func and, like the previous function, doesn't take any arguments.
It is designed to control an RGB LED, which typically has three color components: red, green, and blue.
It turns on the green component of the RGB LED by setting RGB_Green to 1 and the red and blue components to 0.
After a 500ms delay, it turns off the green component and turns on the red component. After another 500ms delay, it turns off the red component and turns on the blue component. Finally, after one more 500ms delay, it turns off all components, effectively turning off the RGB LED.

### Summary
In summary, both functions control the state of LEDs. The Led_Blinking_func controls three separate LEDs (green, red, and yellow) and cycles through turning them on and off at half-second intervals. The RGB_Blinking_func controls an RGB LED and alternates the illumination of its red, green, and blue components in a sequence with half-second delays between transitions.

These functions are used for demonstrating LED control and can be extended or integrated into larger projects as needed.
