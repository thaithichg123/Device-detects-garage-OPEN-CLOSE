#include <Process.h>

void runCurl() {
 
  // curl is command line program for transferring data using different internet protocols
  Process p;    // Create a process and call it "p"
  p.begin("curl");  // Process that launch the "curl" command
  p.addParameter("https://maker.ifttt.com/trigger/DOOR/with/key/cB_0zhBl4fJ3EOqJ1VQ9L7"); // Add the URL parameter to "curl"
  p.run();    // Run the process and wait for its termination


}
