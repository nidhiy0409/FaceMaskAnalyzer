#include<iostream>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/objdetect.hpp>

using namespace cv;
using namespace std;

int main() // main function should return int, not void
{
    int i = 0;
    VideoCapture cap(0); // Initialize VideoCapture with the camera index
    CascadeClassifier faceCascade; // CascadeClassifier object for face detection
    faceCascade.load("location"); // Specify the path to the trained cascade file
    Mat img; // Matrix to store the image
    vector<Rect> ley; // Vector to store the detected faces

    while (true)
    {
        cap.read(img); // Read frame from the camera
        faceCascade.detectMultiScale(img, ley, 1.1, 3); // Detect faces in the image
        
        for (i = 0; i < ley.size(); i++)
        {
            rectangle(img, ley[i].tl(), ley[i].br(), Scalar(127, 252, 0), 3); // Draw a rectangle around each detected face

            if (i == 0)
            {
                putText(img, "You are not Safe!", Point(70, 62), FONT_HERSHEY_SIMPLEX, 2, Scalar(0, 0, 252), 3); // Display "You are not Safe!"
            }
            if (i == 0) // This condition is redundant and will have the same effect as the previous condition
            {
                putText(img, "You are Safe!", Point(137, 62), FONT_HERSHEY_SIMPLEX, 2, Scalar(127, 252, 0), 3); // Display "You are Safe!"
            }
        }

        imshow("Image", img); // Show the image with rectangles and text

        waitKey(1); // Wait for a key press (1ms delay)
    }

    return 0;
}
