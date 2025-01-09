### English:
This code is for creating a simple calculator using an Arduino and an LCD. Here is a summary of the code:

- **Variables**:
  - `rs`, `e`, `d4`, `d5`, `d6`, `d7`: Pins connected to the LCD.
  - `num1` and `num2`: Variables to store the numbers input by the user.
  - `result`: Variable to store the result of the calculation.
  - `operacion`: String to store the arithmetic operation input by the user.

- **Setup**:
  - Initializes the serial communication at 9600 baud.
  - Sets up the LCD to display messages.

- **Loop**:
  - Displays "Calculadora" and prompts the user to input `num1`.
  - Waits for the user to input a number and reads it.
  - Prompts the user to input `num2` and reads it.
  - Prompts the user to input the desired operation (`+`, `-`, `*`, `/`) and reads it.
  - Performs the selected operation.
  - Displays the result on the LCD.

### Español:
Este código es para crear una calculadora simple usando un Arduino y una pantalla LCD. Aquí tienes un resumen del código:

- **Variables**:
  - `rs`, `e`, `d4`, `d5`, `d6`, `d7`: Pines conectados a la pantalla LCD.
  - `num1` y `num2`: Variables para almacenar los números ingresados por el usuario.
  - `result`: Variable para almacenar el resultado de la operación.
  - `operacion`: Cadena para almacenar la operación aritmética ingresada por el usuario.

- **Configuración**:
  - Inicializa la comunicación serial a 9600 baudios.
  - Configura la pantalla LCD para mostrar mensajes.

- **Bucle**:
  - Muestra "Calculadora" y pide al usuario que ingrese `num1`.
  - Espera a que el usuario ingrese un número y lo lee.
  - Pide al usuario que ingrese `num2` y lo lee.
  - Pide al usuario que ingrese la operación deseada (`+`, `-`, `*`, `/`) y la lee.
  - Realiza la operación seleccionada.
  - Muestra el resultado en la pantalla LCD.