# rak-wisblock-helium
Connect RAK Wireless WisBlock to The People's Network

I recently purchased the WisBlock Starter Kit [(buy it here)](https://shop.parleylabs.com/collections/iot-developers-products/products/wisblock-starter-kit), but was dissapointed to find any good documentation to use it with the [Helium](https://www.helium.com/) network. Anyways, after a lot of stuff *not* working, I finally ended up with the code you see here. Enjoy!

Please see [RAK Wireless WisBlock Arduino Guide](https://docs.helium.com/use-the-network/devices/development/rakwireless/wisblock-4631/arduino/) for setup instructions. Note that in that guide they mention that you must use a version of Arduino from their website; I use V1.8.15 from the Microsoft App Store and it works fine. Just make sure you have the **RAKwireless nRF Boards** package installed [(url)](https://raw.githubusercontent.com/RAKwireless/RAKwireless-Arduino-BSP-Index/main/package_rakwireless_index.json
) as well as the **SX125x-Arduino** library. This software is based on the example **LoRaWAN_OTAA_ABP.ino** by rakwireless.com.
