![](media/image1.png){width="1.7001476377952756in"
height="0.36419510061242344in"}![](media/image1.png){width="1.7001476377952756in"
height="0.36419510061242344in"}![](media/image1.png){width="1.7001476377952756in"
height="0.36419510061242344in"}![](media/image1.png){width="1.7001476377952756in"
height="0.36419510061242344in"}

<span id="_top" class="anchor"></span>

<span id="_Toc461746209" class="anchor"><span id="_Toc461746298"
class="anchor"></span></span>Change Record

  Date        Author        Version   Change Reference
  ----------- ------------- --------- ------------------
  9/15/2016   Steve Busby   1.0       Initial draft

<span id="_Toc461746299" class="anchor"></span>Table of Contents

Introduction
============

In this lab, we will create an instance of the Azure IoT Remote
Monitoring pre-configured solution (RM-PCS). We will use this solution
to

-   Pre-create some of the Azure infrastructure leveraged in the lab

-   Visualize the data from our devices

The Azure IoT RM-PCS is a sample, or reference, IoT implementation that
demonstrates how to build a starter solution that allows you to hook up
a device, store and display meta-data about that device, ingest device
data, apply some simple alerting rules, and visualize the device data.

In this series of labs you will:

1.  Create and navigate the Azure IoT Remote Monitoring Pre-configured
    Solution (RM-PCS)

2.  Create a device to read a temperature and humidity sensor (and
    optionally, a light sensor) and send that data to the RM-PCS for
    display

3.  Create a Stream Analytics job that looks for ‘high temperature’
    alerts and outputs that alert to a queue for further processing

4.  Create an Azure Function that takes that alert, and sends a command
    to the device to turn on or off an LED depending on the
    alert condition.

Step 1 – Create the RM-PCS
==========================

1.  Open a browser and navigate to <http://www.azureiotsuite.com>

2.  Log-in with the credentials that are associated with your Azure
    Subscription (most likely your corporate credentials)

3.  You should see the plus button shown below

![](media/image2.png){width="3.8020833333333335in"
height="5.291666666666667in"}

1.  Click on the “+” to create your new solution.

2.  Under the “Remote Monitoring” option, choose the “Select” button

3.  On the “Solution Details” screen

    a.  Note the Azure items that will be generated on your behalf

    b.  Type in a unique solution name. The name has to be globally
        unique, so typically some combination of your name or initials,
        company, etc will help with that. Once you enter an acceptable
        name, you will get a green checkbox indicating that name is free
        to use and valid

    c.  Choose our Azure Subscription from the drop down list box. The
        components of the solution will be generated in this
        subscription

    d.  Choose your nearest and desired data center (i.e. East US would
        be most appropriate for New Jersey)

> ![](media/image3.png){width="4.239583333333333in"
> height="3.4791666666666665in"}

1.  Click “Create Solution” to start the solution deployment process

2.  Deployment should take about 15 minutes

3.  Once done, you should be able to click on the solution (click on the
    picture), and see the pop-out on the left like this one

![](media/image4.png){width="6.5in" height="6.679166666666666in"}

1.  Congratulations – you have successfully deployed the Azure IoT
    RM-PCS

Step 2 – Review the solution portal
===================================

1.  Navigate to where solutionname = the name chosen for the solution in
    step 1.6.b

2.  Log in with the same credentials used in above in step 1.2 above

3.  Reviewing the solution:

    a.  The home page shows you a map that includes four “sample”
        devices that are deployed with the solution

    b.  Choosing a sample device from the drop down list box shows
        telemetry being ingested, real-time, from that sample device

    c.  On the “devices” tab, you can click on one of the devices and
        display the metadata stored for that device

    d.  Clicking “commands” shows a list of commands that the device
        supports

    e.  Feel free to click around the rest of the portal. In the next
        lab, we will explore adding a physical device to this portal and
        display it’s telemetry on the portal

Congratulations – you have completed Lab 1
