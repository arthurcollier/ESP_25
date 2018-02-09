#include <stdio.h>
#define SYSTEM_CLOCK 84000000
#define TIMER_CLOCK 84000000

// PROGRAM ASSUMES THAT ARR AND PRE ARE 16 BIT INTEGERS 

// 100 Hz and 100 kHz

int main (void) {

    // Low Level Register Variables
    int PSC;
    int ARR;
    int pwm_period;

    // Software Defined Variables
    float duty_cycle;
    int pwm_freq;

    // FOR TESTING ONLY - COMMENT OUT IN APPLICATION OF PROGRAM
    printf("duty_cycle = ");
    scanf("%f", &duty_cycle);
    printf("\npwm_freq = ");
    scanf("%d", &pwm_freq);

    PSC = (SYSTEM_CLOCK/TIMER_CLOCK) - 1;
    printf("\nPSC = %d", PSC);
    
    // Auto Reload Resister Caclculation
    ARR = (TIMER_CLOCK/pwm_freq) - 1;
    printf("\nARR = %d", ARR);

}
