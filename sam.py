import cv2 
import numpy as np 
import matplotlib.pyplot as plt 
import os


def read_file(filename): 
    img = cv2.imread(filename) 
    return img 


def edge_mask(img, line_size, blur_value): 
    """
    Takes Image and outputs edges
    """
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) 
    gray_blur = cv2.medianBlur(gray, blur_value)
    
    edges = cv2.adaptiveThreshold(gray_blur, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, line_size, blur_value) 
    return edges

def color_quantisation(img, k):
    # Transform the image 
    data = np.float32(img).reshape((-1,3))
    
    # determine criteria 
    criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER,20,0.001) 
    
    # implementing k means 
    ret , label , center = cv2.kmeans(data,k,None,criteria,10,cv2.KMEANS_RANDOM_CENTERS) 
    center = np.uint8(center) 
    result = center[label.flatten()] 
    result = result.reshape(img.shape) 
    
    return result

def cartoon(blurred, edges, output_path): 
    c = cv2.bitwise_and(blurred,blurred,mask=edges) 
    cv2.imwrite(output_path, c)
    print(output_path," saved successfully!")

    
output_direct = 'cartoon'
    

directory = 'frames'
cnt = 0
for filename in os.listdir(directory):
    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        img = read_file(filepath) 
        edges = edge_mask(img, 7, 7) 
        img1 = color_quantisation(img, k=4)  
        blurred = cv2.bilateralFilter(img1, d=7, sigmaColor=200, sigmaSpace=200)
        numbers = ''.join([c for c in filepath if c.isdigit()])

        output_path = os.path.join(output_direct, f"{numbers}.jpg")
        cartoon(blurred, edges, output_path)




# Path to the directory containing the frames
directory_path = "/home/dell/My/cartoon"
# Get a list of all image files in the directory
image_files = sorted([f for f in os.listdir(directory_path) if f.endswith(('.jpg', '.png', '.jpeg'))])

# Loop through each image file
for image_file in image_files:
    # Read the image
    frame = cv2.imread(os.path.join(directory_path, image_file))

    # Display the image
    cv2.imshow('Frame', frame)

    # Wait for a short delay to simulate video playback
    delay = 30  # Adjust delay as needed (30 milliseconds is roughly 30 frames per second)
    cv2.waitKey(delay)

# Close the window
cv2.destroyAllWindows()
