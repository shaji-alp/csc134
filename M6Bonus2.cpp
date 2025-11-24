#include <iostream>
#include <fstream>
#include <string>

// Function to generate the PPM image file
void generate_ppm_image(const std::string& filename) {
    // Image dimensions
    const int WIDTH = 200;
    const int HEIGHT = 200;
    // Maximum color value
    const int MAX_COLOR = 255;

    // 1. Open the file for output
    std::ofstream ofs(filename, std::ios::out | std::ios::trunc);

    // Check if the file was opened successfully
    if (!ofs.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    // 2. Write the PPM header (P3 - plain text ASCII format)
    ofs << "P3\n";
    ofs << WIDTH << " " << HEIGHT << "\n";
    ofs << MAX_COLOR << "\n";

    // Define coordinates for the two inner squares (50x50 pixels each)
    // Red Square: starts at (50, 50) and ends at (99, 99)
    const int RED_START = 50;
    const int RED_END = 100;

    // Blue Square: starts at (100, 100) and ends at (149, 149)
    const int BLUE_START = 100;
    const int BLUE_END = 150;

    // 3. Generate pixel data using nested loops (row by row)
    for (int i = 0; i < HEIGHT; ++i) { // i is the row (y-coordinate)
        for (int j = 0; j < WIDTH; ++j) { // j is the column (x-coordinate)
            int r, g, b;

            // Default color: Green (0, 255, 0)
            r = 0;
            g = 255;
            b = 0;

            // Check if the current pixel is inside the Red Square area
            if (i >= RED_START && i < RED_END && j >= RED_START && j < RED_END) {
                // Set color to Red (255, 0, 0)
                r = 255;
                g = 0;
                b = 0;
            }
            // Check if the current pixel is inside the Blue Square area
            else if (i >= BLUE_START && i < BLUE_END && j >= BLUE_START && j < BLUE_END) {
                // Set color to Blue (0, 0, 255)
                r = 0;
                g = 0;
                b = 255;
            }

            // Write the RGB values (separated by spaces)
            ofs << r << " " << g << " " << b << "\n";
        }
    }

    // 4. Close the file
    ofs.close();

    std::cout << "Successfully created " << filename << " (" << WIDTH << "x" << HEIGHT << " pixels)." << std::endl;
    std::cout << "You can view this file with most image viewers (e.g., GIMP, ImageMagick, or online PPM viewers)." << std::endl;
}

int main() {
    // Set the output file name
    const std::string filename = "three_squares.ppm";

    // Call the function to generate the image
    generate_ppm_image(filename);

    return 0;
}