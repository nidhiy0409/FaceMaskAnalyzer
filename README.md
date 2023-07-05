# Real-time Face Detection using OpenCV

This C++ code demonstrates real-time face detection using the OpenCV library. It captures frames from the primary camera, detects faces in the frames using a pre-trained cascade classifier, and draws rectangles around the detected faces. It also displays text indicating whether the person is "Safe" or "Not Safe" based on the presence of the first detected face.

## Prerequisites

- C++ compiler
- OpenCV library

## Installation

1. Clone the repository or download the source code file.

2. Make sure you have OpenCV installed on your system. If not, you can follow the official OpenCV installation guide for your platform.

3. Compile the code using a C++ compiler. For example, using g++:


Make sure to replace `face_detection.cpp` with the actual filename if you have renamed it.

4. Run the compiled executable:

The program will access the primary camera and start detecting faces in real-time.

## Customization

- Cascade Classifier: The code uses a pre-trained cascade classifier for face detection. You need to specify the path to the cascade file in the line `faceCascade.load("location");`. Replace `"location"` with the actual path to the trained cascade file.

- Text and Rectangle Appearance: You can modify the text and rectangle appearance by changing the parameters in the code. For example, you can change the text position, font, size, and color. You can also adjust the rectangle color and thickness.

## License

This project is licensed under the [MIT License](LICENSE).

