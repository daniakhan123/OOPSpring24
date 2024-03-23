// Dania Khan
//23k -0072

#include <iostream>

class Image {
private:
    int width;
    int height;
    int* data;

public:
    // Constructor
    Image(int w, int h, int* imgData) : width(w), height(h) {
        data = new int[width * height];
        for (int i = 0; i < width * height; ++i) {
            data[i] = imgData[i];
        }
    }

    // Copy constructor
    Image(const Image& other) : width(other.width), height(other.height) {
        data = new int[width * height];
        for (int i = 0; i < width * height; ++i) {
            data[i] = other.data[i];
        }
    }

    // Destructor
    ~Image() {
        delete[] data;
    }

    // Display function
    void display() {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                std::cout << data[i * width + j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Update data function
    void updateData() {
        for (int i = 0; i < width * height; ++i) {
            if (data[i] <= 0) {
                data[i] = rand() % 255 + 1; // Random value between 1 and 255
            }
        }
    }
};

int main() {
    // Sample data for the original image
    int originalData[6] = {1, 2, -1, 4, 0, -5};

    // Create original image
    Image original(2, 3, originalData);

    // Create a copy of the original image
    Image copy(original);

    // Display original and copied images
    std::cout << "Original image:\n";
    original.display();
    std::cout << "\nCopied image:\n";
    copy.display();

    // Update data of original image
    original.updateData();

    // Display updated original image
    std::cout << "\nOriginal image after update:\n";
    original.display();

    return 0;
}
