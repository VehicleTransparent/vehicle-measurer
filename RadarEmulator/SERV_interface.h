#ifndef SERV_INTERFACE_H
#define SERV_INTERFACE_H

// defines pins numbers
#if TARGET == 0
#define PIN_SERVO 9

#elif TARGET == 1
#define PIN_SERVO 18
#endif

#define VOICE_SPEED_FACTOR 0.034

#define ANGEL_MAX 180
#define ANGEL_MIN 0
#define ANGEL_STEP ANGEL_MAX / RESOLUTION

void SERV_vInit(void);
void SERV_vOrient(float angle);
void SERV_updateAngel(void);
void SERV_updateAngelCW(void);
void SERV_updateAngelCCW(void);
#endif