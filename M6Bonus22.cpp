#include <iostream>
#include <fstream>
#include <string>

// Function to generate the PPM image file
void generate_checkerboard_image(const std::string& filename) {
    // Image dimensions
    const int WIDTH = 200;
    const int HEIGHT = 200;
    // Maximum color value
    const int MAX_COLOR = 255;
    // Size of each square in the checkerboard grid
    const int SQUARE_SIZE = 50;

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

    // 3. Generate pixel data using nested loops (row by row)
    for (int i = 0; i < HEIGHT; ++i) { // i is the row (y-coordinate)
        for (int j = 0; j < WIDTH; ++j) { // j is the column (x-coordinate)
            int r, g, b;

            // Determine the coordinates of the current square (block)
            // block_row is 0, 1, 2, or 3
            int block_row = i / SQUARE_SIZE;
            // block_col is 0, 1, 2, or 3
            int block_col = j / SQUARE_SIZE;

            // Use the parity (even/odd) of the block coordinates to determine the color.
            // This creates the checkerboard pattern.

            // The expression (block_row + block_col) gives:
            // - Even: if both are even OR both are odd (e.g., 0+0=0, 1+1=2)
            // - Odd: if one is even and one is odd (e.g., 0+1=1, 1+0=1)

            if ((block_row + block_col) % 2 == 0) {
                // Even blocks: Use White or Black
                if (block_row % 2 == 0) {
                    // Top-left block (0,0) is White
                    // Color 1: White (255, 255, 255)
                    r = 255; g = 255; b = 255;
                } else {
                    // Block (1,1) is Black
                    // Color 2: Black (0, 0, 0)
                    r = 0; g = 0; b = 0;
                }
            } else {
                // Odd blocks: Use Blue
                // Color 3: Blue (0, 0, 255)
                r = 0; g = 0; b = 255;
            }

            // Write the RGB values (separated by spaces)
            ofs << r << " " << g << " " << b << "\n";
        }
    }

    // 4. Close the file
    ofs.close();

    std::cout << "Successfully created " << filename << " (" << WIDTH << "x" << HEIGHT << " pixels)." << std::endl;
}

int main() {
    // Set the output file name
    const std::string filename = "checkerboard.ppm";

    // Call the function to generate the image
    generate_checkerboard_image(filename);

    return 0;
}