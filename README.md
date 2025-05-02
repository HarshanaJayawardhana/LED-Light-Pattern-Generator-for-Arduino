# LED-Light-Pattern-Generator-for-Arduino
This Arduino-based LED light pattern generator project is designed to deliver a wide variety of visually engaging LED lighting effects, making it perfect for both beginners learning about microcontrollers and enthusiasts looking to create eye-catching LED displays. The program supports 33 dynamic LED patterns, ranging from simple blinking and running sequences to more complex effects such as night rider, snake trails, fill and unfill animations, random sparkles, and alternating light waves. One of the key features of this project is its customizability — users can easily define the number of LEDs (from 4 to your wish) by modifying a single array in the code to match their exact hardware setup. This makes the project highly adaptable to different use cases, whether it's for educational purposes, decoration, stage lighting, model projects, or interactive installations. The code is written to be modular and well-commented, allowing easy customization or expansion with new patterns. With its plug-and-play nature and straightforward logic, this project is a great starting point for anyone interested in learning about digital output control with Arduino, and serves as a practical showcase of how to combine creativity and programming to control real-world hardware components.



---

## 🔧 Configuration Parameters

### `int Maximum_Pins_In_Output = 8;`
This variable defines the **total number of output pins (LEDs)** you are currently using in your project.  
- Set this to match the number of LEDs you want to control.
- In this example, we are using **8 LEDs**.

---

### `int Pattern_Loop_Number = 3;`
This variable determines how many times **each LED pattern** should repeat before moving on to the next pattern.
- In this case, each pattern will be repeated **3 times**.

---

### `int Output_pin[] = 10, 11, 12, 13, 14, 15, 16, 17;`
This is an **array** that lists the **digital pins** on the Arduino where your LEDs are connected.
- The order of pins in the array will be used to generate the patterns.
- **Important Note:** Pins **0 and 1** are typically used for **serial communication** (USB and Serial Monitor). Using them for LEDs may cause conflicts with uploading code or using `Serial.print()`. Prefer avoiding these unless you're not using Serial features.

---

### `int Time = 75; // millisecond`
This variable sets the **delay time** (in milliseconds) between LED transitions in a pattern.
- A value of `75` means **each change occurs every 75 milliseconds**.
- **Adjust this to control pattern speed**:
  - Lower value = faster LED effects
  - Higher value = slower transitions
- Example: `Time = 1000` would mean a 1-second delay between steps.

---

## 🟢 How It Works

1. The program loops through a set of predefined LED lighting patterns.
2. Each pattern runs for a number of loops defined by `Pattern_Loop_Number`.
3. The delay between LED transitions is managed using the `Time` variable.
4. The selected digital pins from `Output_pin[]` are used to light up the LEDs in different sequences.

---

## 🧩 Customization Tips

- You can increase or decrease `Maximum_Pins_In_Output` based on your project.
- Make sure your `Output_pin[]` array size matches the value in `Maximum_Pins_In_Output`.
- If you want to add or remove patterns, adjust the loop or switch-case structure in the main code accordingly.

---

## ⚠️ Warnings

- **Avoid using pins 0 and 1** if you are using Serial Monitor for debugging.
- Be mindful of current limitations on the Arduino board—do not exceed the total current limit when powering many LEDs directly from the Arduino.

---

## 📁 Files Included

- `main.ino` – Arduino sketch containing all 33 LED patterns and main logic.
- `README.md` – This documentation file.

---

## 📞 Contact

For questions or suggestions, feel free to reach out. Happy tinkering with LEDs! 💡

