import pygame
import sys
import random
import math

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 900, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Pygame Splitting Balls Simulation (Triplets)")

# --- Constants and Configuration ---
FPS = 60 
MIN_RADIUS = 10.0      # Minimum size a ball must be to split
SPLIT_FACTOR = 0.75    # New radius = old radius * SPLIT_FACTOR
# MAX_BALLS has been removed as per your request. The simulation will run until performance limits are hit.

# --- Helper Function ---
def get_random_color():
    """Generates a random, non-white RGB color tuple."""
    # Ensures the colors have enough contrast against the white background
    r = random.randint(50, 200)
    g = random.randint(50, 200)
    b = random.randint(50, 200)
    return (r, g, b)

# --- Ball Class ---
class Ball:
    """Represents a single moving circle with position, speed, and color."""
    def __init__(self, x, y, radius, movex, movey):
        self.x = x
        self.y = y
        self.radius = radius
        self.movex = movex
        self.movey = movey
        self.color = get_random_color()
        # Random speed multiplier to vary speed slightly
        self.speed_multiplier = random.uniform(0.9, 1.1)

    def draw(self, screen):
        """Draws the ball on the screen."""
        # Pygame requires integer coordinates for drawing
        pygame.draw.circle(screen, self.color, (int(self.x), int(self.y)), int(self.radius))

    def update(self, width, height):
        """
        Updates the ball's position and checks for boundary collisions.
        Returns: True if a bounce occurred, False otherwise.
        """
        # Apply speed and slight variance
        self.x += self.movex * self.speed_multiplier
        self.y += self.movey * self.speed_multiplier
        
        bounced = False

        # Check for X-axis collision (left/right walls)
        if self.x + self.radius >= width or self.x - self.radius <= 0:
            self.movex *= -1
            bounced = True
            # Clamp position to prevent sticking in the wall
            if self.x + self.radius > width:
                self.x = width - self.radius
            elif self.x - self.radius < 0:
                self.x = self.radius

        # Check for Y-axis collision (top/bottom walls)
        if self.y + self.radius >= height or self.y - self.radius <= 0:
            self.movey *= -1
            bounced = True
            # Clamp position to prevent sticking in the wall
            if self.y + self.radius > height:
                self.y = height - self.radius
            elif self.y - self.radius < 0:
                self.y = self.radius

        return bounced

# --- Initial Game Setup ---
# Start with one medium ball in the center
initial_radius = 40.0
initial_ball = Ball(
    x=width // 2, 
    y=height // 2, 
    radius=initial_radius, 
    movex=3.5, 
    movey=3.5
)

# List to hold all active balls
balls = [initial_ball]

# --- Frame Limiter Setup ---
clock = pygame.time.Clock()

# --- Main Game Loop ---
running = True
while running:
    # 1. EVENT HANDLING
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        # Allow user to add a new ball on click
        if event.type == pygame.MOUSEBUTTONDOWN:
            # We no longer check against MAX_BALLS
            new_ball = Ball(event.pos[0], event.pos[1], initial_radius, random.uniform(2, 4), random.uniform(2, 4))
            balls.append(new_ball)


    # 2. GAME LOGIC / STATE UPDATE (Moves and splits balls)
    
    # List to store any new balls created during the update
    new_balls = []
    
    # Iterate through balls and check for bounces
    for ball in balls:
        bounced = ball.update(width, height)
        
        # Check if a bounce occurred AND the ball is large enough to split
        if bounced and ball.radius >= MIN_RADIUS:
            # Calculate new radius
            new_radius = ball.radius * SPLIT_FACTOR
            
            # --- MODIFICATION: Create three children from the current ball's properties ---
            
            # Child 1: Slightly faster in X, slower in Y
            child1 = Ball(
                x=ball.x, 
                y=ball.y, 
                radius=new_radius, 
                movex=ball.movex * 1.15,  # Increased X speed
                movey=ball.movey * 0.85   # Decreased Y speed
            )
            
            # Child 2: Slightly slower in X, faster in Y
            child2 = Ball(
                x=ball.x, 
                y=ball.y, 
                radius=new_radius, 
                movex=ball.movex * 0.85,  # Decreased X speed
                movey=ball.movey * 1.15   # Increased Y speed
            )
            
            # Child 3: Balanced speed, but with one velocity axis inverted (for varied initial trajectory)
            child3 = Ball(
                x=ball.x, 
                y=ball.y, 
                radius=new_radius, 
                movex=ball.movex * -1.05, # Opposite X direction, slightly faster
                movey=ball.movey * 1.05   # Same Y direction, slightly faster
            )
            
            new_balls.extend([child1, child2, child3])
            
            # Mark the parent ball for removal by setting its radius to 0
            ball.radius = 0.0
            
    # Clean up the list: remove balls marked for deletion and add new children
    balls = [ball for ball in balls if ball.radius > 0]
    balls.extend(new_balls)
    
    # Note: The 'MAX_BALLS' limiting code was removed here.


    # 3. DRAWING
    
    # Fill the screen (White background)
    screen.fill((255, 255, 255))
    
    # Draw all the balls
    for ball in balls:
        ball.draw(screen)
    
    # 4. DISPLAY UPDATE
    pygame.display.flip()
    
    # 5. FRAMERATE LIMIT
    clock.tick(FPS) 

# Quit Pygame
pygame.quit()
sys.exit()