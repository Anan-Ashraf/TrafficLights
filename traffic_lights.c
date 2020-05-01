  #include        "traffic.h"

void light()
{        while(1){
         led_output(green);
         led_write (green,high);
         delay_ms(2000);
         led_write(green,low);

         led_output(red);
         led_write (red,high);
         delay_ms(2000);
         led_write(red,low);

         led_output(yellow);
         led_write (yellow,high);
         delay_ms(2000);
         led_write(red,yellow);
         }
}
void main() {
                light();
}