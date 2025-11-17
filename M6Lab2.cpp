#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    HALL = 0,
    MASSIVE_HALL = 1,
    INF_HALLWAY = 2,
    DINING = 3,
    BALCONY = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Massive hall",
        "A super massive hall",
        "Infinite hallway",
        "Dining hall",
        "Balcony"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A Massive hall with almost nothing in it.",
        "An even bigger carpet lined hall. has a lot of chairs",
        "A thin and infinitely long hallway. The walls have a lot of portaits.",
        "A normal sized room with a massive dining table in the center. There are many chairs here too.",
        "A massive open balcony where you have a great view of the mountains. "
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[HALL][NORTH] = MASSIVE_HALL;    // Entrance Hall -> North -> Library
    connections[HALL][EAST] = -1;     // Entrance Hall -> East -> Kitchen
    connections[HALL][SOUTH] = -1;         // No connection south
    connections[HALL][WEST] = -1;      // Entrance Hall -> West -> Garden
    
    // Library connections
    connections[MASSIVE_HALL][NORTH] = BALCONY;               // No connection north
    connections[MASSIVE_HALL][EAST] = INF_HALLWAY;                // No connection east
    connections[MASSIVE_HALL][SOUTH] = HALL;    // Library -> South -> Entrance Hall
    connections[MASSIVE_HALL][WEST] = DINING;                // No connection west
    
    // Kitchen connections
    connections[BALCONY][NORTH] = -1;               // No connection north
    connections[BALCONY][EAST] = -1;                // No connection east
    connections[BALCONY][SOUTH] = MASSIVE_HALL;         // Kitchen -> South -> Basement
    connections[BALCONY][WEST] = -1;     // Kitchen -> West -> Entrance Hall
    
    // Garden connections
    connections[DINING][NORTH] = -1;                // No connection north
    connections[DINING][EAST] = MASSIVE_HALL;      // Garden -> East -> Entrance Hall
    connections[DINING][SOUTH] = -1;                // No connection south
    connections[DINING][WEST] = -1;                 // No connection west
    
    // Basement connections
    connections[INF_HALLWAY][NORTH] = -1;         // Basement -> North -> Kitchen
    connections[INF_HALLWAY][EAST] = -1;               // No connection east
    connections[INF_HALLWAY][SOUTH] = -1;              // No connection south
    connections[INF_HALLWAY][WEST] = MASSIVE_HALL;               // No connection west
    
    // Game state
    int currentRoom = HALL; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}