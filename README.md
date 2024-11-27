# Hand Controlled Prosthetic_Hand

# Introduction:
Many people around the world have experienced an injury or illness in which the use of their hand(s) is no longer available to them. This is a major inconvenience as many of these people have trouble completing day-to-day activities. In many cases people still have slight control over their hand but not the strength to perform basic activities such as picking up items. To add on there are people who put their lives on the line putting themselves in dangerous situations like bomb defusal or other dangerous activities. Such events usually occur when protecting the country from threats, such as our military forces. These people can lose their lives or lose appendages such as hands. Those fortunate enough to survive can face a lot of struggles now not being able to complete various activities they once were. A controllable prosthetic hand could help those unfortunate enough to have lost a limb regain control to perform daily activities. Furthermore, it can serve as a preventive measure for the potential loss of their limbs in the future.

# Components: 
- 5 Flex sensors 
- 1 Arduino board 
- 5 rotational servos 
- Fishing line 
- Elastic bands
- Glove
- Filament
- Jumper wires
- Resistors
- Breadboard
- PCB

# Procedure:
1. 3D Print Finger and Base Models
2. Attach Finger joints together using a string
3. Attach fingers to base, and connect them to the end of a servo motor using a fishing line
4. Attach flex sensors onto gloves using glue/sew
5. Create voltage divider rule using 10k ohms resistor and flex sensors
6. Read analog pin reading from voltage in between the two resistors ranging from (0 to 1023)
7. Map the servo motor to analog pin read (As flex sensors bend, analog reading starts decreasing)
8. 
