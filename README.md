# rak-wisblock-helium
Connect RAK Wireless WisBlock to The People's Network

I recently purchased the WisBlock Starter Kit [(buy it here)](https://shop.parleylabs.com/collections/iot-developers-products/products/wisblock-starter-kit), but was dissapointed to find any good documentation to use it with the [Helium](https://www.helium.com/) network. Anyways, after a lot of stuff *not* working, I finally ended up with the code you see here. Enjoy!

## Setup

Please see [RAK Wireless WisBlock Arduino Guide](https://docs.helium.com/use-the-network/devices/development/rakwireless/wisblock-4631/arduino/) for setup instructions. Note that in that guide they mention that you must use a version of Arduino from their website; I use V1.8.15 from the Microsoft App Store and it works fine. Just make sure you have the **RAKwireless nRF Boards** package installed [(url)](https://raw.githubusercontent.com/RAKwireless/RAKwireless-Arduino-BSP-Index/main/package_rakwireless_index.json
) as well as the **SX125x-Arduino** library. This software is based on the example **LoRaWAN_OTAA_ABP.ino** by rakwireless.com.

### Create new device in Helium Console [(better instructions)](https://docs.helium.com/use-the-network/console/adding-devices/)
First navigate to https://console.helium.com/devices/new and enter a name for your device and hit save. I just named mine RAK 4631 but it doesn't really matter what you choose. Next, click on your new device and take note of the Device EUI, App EUI, and App Key. Click the eye next to app key and then all the little arrows to the left of the keys.
![image](https://user-images.githubusercontent.com/57055268/128755427-9124c939-47c1-4ed3-8f23-0837162e0b7e.png)

Copy each of these values into config and you're ready to upload the code to the board!

### Create a decoder function [(better instructions)](https://docs.helium.com/use-the-network/console/functions)
Now, navigate to https://console.helium.com/functions/new and enter a name. Choose 'Decoder' for function type and 'Custom Script' for Choose format.
Under 'STEP 2 - ENTER CUSTOM SCRIPT' copy and pase the contents of decoder.js and hit save function.
Just add the function to the device and create an integration and you're ready to go!

For better instructions for any of the above, please see https://docs.helium.com/use-the-network/console/quickstart/.

 -Isaac
