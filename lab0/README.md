# Lab0 Iteration Function System

## Tasks
Write a C++ class IFS that renders iterated function systems, including the interface (in a file ifs.h) and the implementation (ifs.C). Your code should run under Linux or Windows. The IFS class should include:
- a field to store n, the number of transformations
- an array of matrices representing the n transformations
- an array of the corresponding probabilities for choosing a transformation
- a constructor that creates an IFS
- an input method that reads the IFS description
- a render method that takes as input an image instance, a number of points and a number of iterations
- a destructor that frees the memory of the various arrays (using delete)
- Write the main program main.C that creates an Image instance, reads an IFS description from a file, renders the IFS to the image, and saves the image.

Use the linear algebra library for the point and transformation representations.

Perform proper memory management --- free memory when an object is destroyed.

Extra credit: create a new IFS, figure out the probabilities, determine the bounding box, change the color scheme, anti-aliasing, depth-first vs. breadth-first, etc. Include a short paragraph in your README.txt file describing your extensions.