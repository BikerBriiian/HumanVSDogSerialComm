# HumanVSDogSerialComm

## Intro
An Arduino Project that used a model trained using Teachable Machine to recognize and predict the difference between a human and a dog. Communicates with Arduino using Serial Comm in Python by sending green, red, or blank messages.

## Documentation
- [PySerial](https://pyserial.readthedocs.io/en/latest/pyserial.html)
- [Teachable Machine](https://teachablemachine.withgoogle.com/train/image)
- [TensorFlow Keras](https://www.tensorflow.org/api_docs/python/tf/keras)
- [Arduino Software](https://docs.arduino.cc/)
  
## Project Build

1. Train the AI Models
   - Access [Teachable Machine](https://teachablemachine.withgoogle.com/train/image)
   - Create image models with three classes.
   - The order of the classes does not matter:
     - First Class: Human, Record and capture images of yourself and any other person if possible
     - Second Class: Dog, Record and capture images of your dog or pet.
     - Third Class: Blank\Empty, Record and capture images that detect neither of the other classes (Show empty rooms and blocked camera).
