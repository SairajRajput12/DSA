import cv2 
import matplotlib.pyplot as plt 


# Read an image 
img_bgr = cv2.imread('scenary.jpg', 1) 
plt.imshow(img_bgr) 
plt.show() 

# Histogram plotting of the image 
color = ('b', 'g', 'r') 

for i, col in enumerate(color): 
	
	histr = cv2.calcHist([img_bgr], 
						[i], None, 
						[256], 
						[0, 256]) 
	
	plt.plot(histr, color = col) 
	
	# Limit X - axis to 256 
	plt.xlim([0, 256]) 
	
plt.show() 

# get height and width of the image 
height, width, _ = img_bgr.shape 

for i in range(0, height - 1): 
	for j in range(0, width - 1): 
		
		# Get the pixel value 
		pixel = img_bgr[i, j] 
		
		# Negate each channel by 
		# subtracting it from 255 
		
		# 1st index contains red pixel 
		pixel[0] = 255 - pixel[0] 
		
		# 2nd index contains green pixel 
		pixel[1] = 255 - pixel[1] 
		
		# 3rd index contains blue pixel 
		pixel[2] = 255 - pixel[2] 
		
		# Store new values in the pixel 
		img_bgr[i, j] = pixel 

# Display the negative transformed image 
plt.imshow(img_bgr) 
plt.show() 

# Histogram plotting of the 
# negative transformed image 
color = ('b', 'g', 'r') 

for i, col in enumerate(color): 
	
	histr = cv2.calcHist([img_bgr], 
						[i], None, 
						[256], 
						[0, 256]) 
	
	plt.plot(histr, color = col) 
	plt.xlim([0, 256]) 
	
plt.show() 
