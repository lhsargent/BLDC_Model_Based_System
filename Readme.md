# Brushless DC Motor Model Based System Design
## Purpose
The ultimate purpose of this repository is to demonstrate a model based system design of a BLDC motor controller using simulink. The motor will be a A2212 motor from AliExpress that is commonly used in RC drones. 
### Parameter Identification
The [NXP PMSM Electrical Parameters Measurement](https://www.nxp.com/docs/en/application-note/AN4680.pdf) document is a fantastic resouce for determining your motor parameters. A few caveats for our application are that oscilloscope current probes are quite expensive, and the resistance of our motor to be tested is too low to be measured accurately with a conventional 2 wire multimeter. 
![](images/setup.jpg)
#### An H4 Header
## Acknowledgements
[NXP PMSM Electrical Parameters Measurement](https://www.nxp.com/docs/en/application-note/AN4680.pdf)

[A2212 Datasheet](https://www.rhydolabz.com/documents/26/BLDC_A2212_13T.pdf)
