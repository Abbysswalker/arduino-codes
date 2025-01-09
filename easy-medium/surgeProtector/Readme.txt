### Español
Este código de Arduino utiliza un sensor conectado al pin analógico A2 para medir el voltaje y controlar tres LEDs conectados a los pines digitales 10 (rojo), 9 (amarillo) y 8 (verde). En la función `setup()`, se configuran los pines del sensor como entrada y los pines de los LEDs como salida, y se inicia la comunicación serial. En el bucle principal, el código lee el valor analógico del sensor, calcula el voltaje correspondiente y enciende los LEDs según el voltaje medido: 

- Si el voltaje es menor de 3.0, se enciende el LED verde.
- Si el voltaje está entre 3.1 y 4.0, se enciende el LED amarillo.
- Si el voltaje es mayor de 4.1, se enciende el LED rojo.

El valor del voltaje se imprime en la consola serial y hay un retraso de 300 milisegundos (`dt`) entre lecturas.

### Inglés
This Arduino code uses a sensor connected to analog pin A2 to measure voltage and control three LEDs connected to digital pins 10 (red), 9 (yellow), and 8 (green). In the `setup()` function, the sensor pin is set as an input and the LED pins as outputs, and serial communication is initiated. In the main loop, the code reads the sensor's analog value, calculates the corresponding voltage, and turns on the LEDs based on the measured voltage:

- If the voltage is less than 3.0, the green LED turns on.
- If the voltage is between 3.1 and 4.0, the yellow LED turns on.
- If the voltage is greater than 4.1, the red LED turns on.

The voltage value is printed to the serial console, and there is a delay of 300 milliseconds (`dt`) between readings.

