#include "mbed.h"
//implement q11 of final CA

//DigitalIn button(BUTTON1);    //works as a digital in, the interruptIn also works here
DigitalIn button(BUTTON1);
DigitalOut On(LED1);
DigitalOut Off(LED2);
volatile int myflag = 0;
// main() runs in its own thread in the OS


//void buttonFall(){
////    myflag = 1;
//}

int main ()
{
    //button.rise(&buttonFall);
    On.write(1);        //sets On LED to be turned on
    Off.write(0);       //sets Off LED to be off
	while (1){
		//if button is pressed...
		if(button == 1){        //checks if the button is pressed
            if ( myflag == 0){  //checks if the myflag = 0
                myflag = 1;
                On = !On; //toggles the state of the On LED
                Off = !Off; //toggles the state of the Off LED
            }
		} else {
            myflag = 0;  //sets myflag to 0

		}

}
}

//int main ()
//{
 //   //button.rise(&buttonFall);
//	while (1){
//		//if button is pressed...
//		if(button == 1 & myflag == 0){
  //          myflag = 1;
//			On = !On;
//			Off = !Off;
//		} else {
//            myflag = 0;
//
//		}

//}
//}