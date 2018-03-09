# PID Control Project

[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

Overview
---


In this project we are going to use PID controller to automatically steer a car in a simulation environment. 


Pipeline
---



*The overall pipeline along with the results will be described here!*

<br>

I. The main code has already been provided. I just tweeked with the hyper-parameters in order to get the best result. The main hyper-paramter that I worked with include proportional(Kp), integral(Ki), and differential coefficients(Kd).


II. In order for the vehicle to stay on track, it should always stay aligned on the center. As a result, cross talk
error (cte) is the main factor that helps us to keep the vehicle on the center of the road.

III. Proportional, integral, and differential coefficients get multiplied by some other factors that depend on the cte.

IV. Proportional coeffient gets multiplied by cte, integral coefficient gets multiplied by the summation of all cross talk errors so far,and finally differential coefficient gets multiplied by the difference between current cte and previous cte. For more detail please refer to the PID.cpp code.


V. Once step IV is done, steering value gets updated so that the vehicle steers in such a way that keeps itself on the center of the road.

VI. My intitial guess for Kp, Ki, Kd was based on the course materials itself. I played with them until I got the most stable situation. Final best values include.</br>
</br>
Kp = 0.25, Ki = 0.0005, Kd = 4 </br>
Kp = 0.125, Ki = 0.0005 , Kd = 3 </br>
Kp = 0.112, Ki = 0.005, Kd = 2 </br>


VII. Final video of the result is provided below. Please click on the following image to view the full video on YouTube. 
</br>

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/Nupljp59Mds/0.jpg)](https://www.youtube.com/watch?v=Nupljp59Mds)

</br>
<br></br>