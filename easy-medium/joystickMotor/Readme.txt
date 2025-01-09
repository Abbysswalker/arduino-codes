### Resumen en Español
Este código controla un motor de corriente continua (DC) usando un joystick. Aquí tienes una descripción paso a paso:

1. **Definición de Pines**:
   - `speedPin`, `dirPin1`, y `dirPin2` controlan el motor.
   - `yPin` está conectado al eje Y del joystick.

2. **Configuración Inicial**:
   - Se establecen los pines de control del motor como salidas.
   - El pin del joystick se configura como entrada.

3. **Función `loop()`**:
   - Se lee el valor del joystick.
   - Según el valor leído (`yVal`), se decide la dirección y velocidad del motor:
     - Si `yVal` es menor a 400, el motor gira en una dirección.
     - Si `yVal` es mayor o igual a 400, el motor gira en la dirección opuesta.
   - Se mapean los valores del joystick a un rango de velocidad adecuado para el motor.

### Summary in English
This code controls a DC motor using a joystick. Here's a step-by-step overview:

1. **Pin Definition**:
   - `speedPin`, `dirPin1`, and `dirPin2` control the motor.
   - `yPin` is connected to the Y-axis of the joystick.

2. **Initial Setup**:
   - Motor control pins are set as outputs.
   - The joystick pin is set as input.

3. **`loop()` Function**:
   - The joystick value is read.
   - Based on the value read (`yVal`), the direction and speed of the motor are decided:
     - If `yVal` is less than 400, the motor rotates in one direction.
     - If `yVal` is greater than or equal to 400, the motor rotates in the opposite direction.
   - The joystick values are mapped to an appropriate speed range for the motor.

