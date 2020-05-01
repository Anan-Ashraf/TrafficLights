#include"led.h"

void led_output(led_color color)
{
      switch (color)
     {
            case(green):  greenLed_dir=output;
            break;

            case(red):    redLed_dir=output;
            break;

            case(yellow): yellowLed_dir=output;
            break;
     }
}

void led_write(led_color color, char state)
{
     switch (color)
     {
            case(green):  greenLed_val=state;
            break;
            
            case(red):    redLed_val=state;
            break;
            
            case(yellow):  yellowLed_val=state;
            break;
     }
}