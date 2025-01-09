### Español
Este código de Arduino lee el estado de un botón conectado al pin digital 8. En la primera versión, el pin del botón se configura como entrada con una resistencia de pull-up externa. En la versión comentada, se utiliza `digitalWrite(pinButton, HIGH)` para activar la resistencia de pull-up. En la versión activa, se utiliza `pinMode(pinButton, INPUT_PULLUP)` para configurar el pin con una resistencia de pull-up interna. El valor del botón se lee y se imprime en la consola serial.

### Inglés
This Arduino code reads the state of a button connected to digital pin 8. In the first version, the button pin is configured as an input with an external pull-up resistor. In the commented version, `digitalWrite(pinButton, HIGH)` is used to activate the pull-up resistor. In the active version, `pinMode(pinButton, INPUT_PULLUP)` is used to configure the pin with an internal pull-up resistor. The button value is read and printed to the serial console.

