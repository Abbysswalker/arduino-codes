### Español
Este código de Arduino controla un servomotor conectado al pin digital 6 utilizando un sensor de luz conectado al pin analógico A1. En la función `setup()`, el servomotor se adjunta al pin especificado y se inicia la comunicación serial. En el bucle principal, el código lee el valor del sensor de luz, calcula una posición para el servomotor basada en esta lectura, y mueve el servomotor a esa posición. La posición del servomotor se ajusta para que varíe en función de la cantidad de luz detectada. Hay un pequeño retraso de 50 milisegundos (`dt`) entre lecturas para suavizar la salida.

### Inglés
This Arduino code controls a servo motor connected to digital pin 6 using a light sensor connected to analog pin A1. In the `setup()` function, the servo motor is attached to the specified pin and serial communication is initiated. In the main loop, the code reads the light sensor value, calculates a position for the servo motor based on this reading, and moves the servo motor to that position. The servo motor's position is adjusted to vary according to the amount of light detected. There is a small delay of 50 milliseconds (`dt`) between readings to smooth the output.


