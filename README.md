# Hand Controlled Prosthetic_Hand: Guide

# Introduction:
Many people around the world have experienced an injury or illness in which the use of their hand(s) is no longer available to them. This is a major inconvenience as many of these people have trouble completing day-to-day activities. In many cases people still have slight control over their hand but not the strength to perform basic activities such as picking up items. To add on there are people who put their lives on the line putting themselves in dangerous situations like bomb defusal or other dangerous activities. Such events usually occur when protecting the country from threats, such as our military forces. These people can lose their lives or lose appendages such as hands. Those fortunate enough to survive can face a lot of struggles now not being able to complete various activities they once were. A controllable prosthetic hand could help those unfortunate enough to have lost a limb regain control to perform daily activities. Furthermore, it can serve as a preventive measure for the potential loss of their limbs in the future.

# Components: 
- 5 Flex sensors: Detect bendind of fingers
- 1 Arduino board: Read sensor values along with controlling the servo motors
- 5 rotational servos: close/open fingers based on analog pin reading
- Fishing line: attached to servo motor and fingers to allow joint movement
- Glove: Flex sensors mounted to detect finger motion
- Filament: 3D print material
- Jumper wires: Connecting sensors, servos and arduino
- Resistors: Voltage division
- Breadboard: Wire components together before using PCB
- PCB: Final stage, after testing with breadboard

# Procedure:
__3D Model Hand__
1. 3D Print Finger joints and Base Model  
2. Attach Finger joints together using a string  
3. Attach fingers to base, and connect them to the end of a servo motor using a fishing line  

__Flex Sensors__

4. Attach flex sensors onto gloves using glue/sew  
5. Create voltage divider rule using 10k ohms resistor and flex sensors  

__Arduino Setup__

6. Read analog pin reading from voltage in between the two resistors ranging from (0 to 1023)  
7. Map the servo motor to analog pin read (As flex sensors bend, analog reading starts decreasing)


# Test Cases:
Initialize VCC and the resistor being used 
float VCC = 5.00;		      //voltage
float R_DIV = 10000.0;    //resistance

Reads analog value based on the flex sensors ranging fromm (0 to 1023)

int flexADC = analogRead(flexpin1);
Serial.println("Analog 1 reading: " + flexADC);

Calculates the voltage across the flex sensor

float flexV = flexADC * VCC / 1023.0;

Calculate the resistance being omitted from the flex sensors (As it bends, resistance increases)

float flexR = R_DIV * (VCC / flexV - 1.0);    //Resistance of the flex sensor
Serial.println("Flex Sensor 1, Resistance: " + String(flexR) + " ohms");


