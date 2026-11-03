Package MBTest;

class SmartDevice {
   private string deviceName;
   
   public SmartDevice(string name){
       super(name);
       this.brightness = 0;
   }
   
   public void displayStatus() {
       System.out.println("DeviceNmae:"+obj.getDeviceNmae()+" And BrightnessLevel:" brightness+ "%"");
   }
   public string getDeviceName();
}//end SmartDevice

class SmartLight extends SmartDevice {
    
    private int brightness;
    
     public SmartDevice(string name){
       super(name);
       this.brightness = 0;
   }
   
    public string name SmartLight;
    public void setBrightness(int level) {
       if (level >= 0 && level <= 100) {
        this.brightness = 0;
    } else {
        System.out.println("error")
    }
    
    public void turnOn() {
        this.brightness = 50;
    }
    
    public void turnOn(int customLevel)
}//end SmartLight
