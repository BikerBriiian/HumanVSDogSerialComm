# HumanVSDogSerialComm

## Intro
An Arduino Project that used a model trained using Teachable Machine to recognize and predict the difference between a human and a dog. Communicates with Arduino using Serial Comm in Python by sending green, red, or blank messages.

## Documentation
- [PySerial](https://pyserial.readthedocs.io/en/latest/pyserial.html)
- [Teachable Machine](https://teachablemachine.withgoogle.com/train/image)
- [TensorFlow Keras](https://www.tensorflow.org/api_docs/python/tf/keras)
- [Arduino Software](https://docs.arduino.cc/)
- Python Version and Packages to Install
  - **Python**:  3.12
  - **TensorFlow**: 2.18
  - **Keras**: Latest
  - **OpenCV**: Latest
  - **PySerial**: Latest
- Use `Python -m pip install ` in the terminal to install Python packages.
  
  
## Project Build

1. Train the AI Model
   - Access [Teachable Machine](https://teachablemachine.withgoogle.com/train/image)
   - Create image models with three classes.
   - The order of the classes does not matter:
     - First Class: Human, Record and capture images of yourself and any other person if possible
     - Second Class: Dog, Record and capture images of your dog or pet.
     - Third Class: Blank\Empty, Record and capture images that detect neither of the other classes (Show empty rooms and blocked camera).
   - Export the model in Tensorflow/Keras format and save it in the same directory as the rest of the project.

2. Upload Arduino Code and prepare Python code
   - Download the project folder and upload the Arduino code using the IDE.
       - **Note**: In the Arduino code LED Pins are assigned already but it can be any port as long as it matches the port to which you have the LEDs connected.
   -  Once the code in the Arduino has successfully uploaded you can open the Python code and attempt to connect the Arduino by finding the Com port and baud rate (It is not the same for everyone).
   ![image](https://github.com/user-attachments/assets/65efba80-168d-457e-9c87-5c6fae119fa5)

 
