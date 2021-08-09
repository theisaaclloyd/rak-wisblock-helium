function Decoder(bytes, port) {
  var t =   (bytes[1] << 8 | bytes[2]) / 100
  var h =   (bytes[3] << 8 | bytes[4]) / 100
  var hif = (bytes[5] << 8 | bytes[6]) / 100
  
  var s = bytes[0]; // get that first byte I talked about in the main file
  return {
    temperature: t,
    humidity: h,
    heatindex: hif,
    test: s
  }
}
