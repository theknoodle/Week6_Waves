# Week6_Waves

I started with the code we developed in class with Robby, and riffed further off of it:


![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573328918081_Grabber_3D_2_640.gif)
![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573328905779_Grabber_3D_3_640.gif)


I took our mosaic code where we source the RGB values individually from each pixel and create a small cube at the x,y position. I then grabbed the Brightness value from each pixel’s colour and set that to the z depth value, from 0 to 255. That’s why the ‘pixels’ jitter and move in space. In the gifs above I used my phone light to demonstrate how the computer adjusts how it determines the values of colour in each frame. I think it’s neat!

I wanted to try it on some videos of water I’ve been recording, next:


![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329143858_Small+GIF+400x301.gif)
![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329130345_Small+GIF+400x301.gif)

![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329167757_Small+GIF+400x298.gif)
![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329158260_Small+GIF+400x298.gif)


I think it’s neat how the movement caused by the fluctuating brightness values recreates the waves in the 3D space. There’s something about the translation of light bouncing off the water, recorded through my phone’s lens, and then using the data of that light to recreate the water itself into this other, virtual land.

Besides that, I also took the webcam project a bit further: 


![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329912664_Still+JPG+1018x758.jpg)
![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329890142_Large+GIF+1018x758.gif)
![](https://paper-attachments.dropbox.com/s_C47814867AA90A8127874AB82FB4FA4C4DC7EE9B8C8EE8ED1064DA6BC05F06F0_1573329868063_Still+JPG+1018x758.jpg)


Here it takes the RGB values of each pixel’s colour and multiples each value and then adds it to an according dimension of the cube, the height, width, and depth. A completely white cube is the largest because it’s taking 255 and multiplying (by 0.2) the scale of the height, width, and depth. So the created cube will be 52 x 52 x 52. A fully black cube is only 1 x 1 x 1 (and also disappears against the black background). A completely red cube would be quite tall, but lack width and depth, etc.
