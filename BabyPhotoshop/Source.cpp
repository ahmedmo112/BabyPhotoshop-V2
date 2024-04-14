#include "Image_Class.h"
#include <msclr\marshal_cppstd.h>

Image image;

void loadImage(System::String^ filename) {
	std::string stdFilename = msclr::interop::marshal_as<std::string>(filename);
	image.loadNewImage(stdFilename);
}

void saveImage(System::String^ filename) {
	std::string stdFilename = msclr::interop::marshal_as<std::string>(filename);
	image.saveImage(stdFilename);
}


void invert() {
    for (int i = 0; i < image.width; i++)
    {
        for (int j = 0; j < image.height; j++)
        {
            for (int k = 0; k < 3; k++) {

                image(i, j, k) = 255 - image(i, j, k);
            }
        }
    }

    image.saveImage("tmp.bmp");
}


void blackAndWihte()
{


    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            unsigned  int avg = 0; // Initialize average value

            for (int k = 0; k < 3; ++k) {
                avg += image(i, j, k); // Accumulate pixel values
            }

            avg /= 3; // Calculate average

            // Set all channels to the average value
            image(i, j, 0) = avg;
            image(i, j, 1) = avg;
            image(i, j, 2) = avg;
        }
    }

    image.saveImage("tmp.bmp");

}



void detectEdges()
{
    blackAndWihte();


    for (int i = 0; i < image.width - 1; i++)
    {
        for (int j = 0; j < image.height - 1; j++)
        {

            for (int k = 0; k < 3; k++) {
                int gx = abs(image(i, j, k) - image(i + 1, j, k));
                int gy = abs(image(i, j, k) - image(i, j + 1, k));
                if (gy >= 40 || gx >= 40) {
                    image(i, j, k) = 0;
                }
                else {
                    image(i, j, k) = 255;
                }
            }
        }
    }


    image.saveImage("tmp1.bmp");
}

