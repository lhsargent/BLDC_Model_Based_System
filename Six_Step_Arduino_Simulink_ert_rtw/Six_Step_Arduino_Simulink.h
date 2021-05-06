/*
 * File: Six_Step_Arduino_Simulink.h
 *
 * Code generated for Simulink model 'Six_Step_Arduino_Simulink'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed May  5 15:22:16 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Six_Step_Arduino_Simulink_h_
#define RTW_HEADER_Six_Step_Arduino_Simulink_h_
#include <math.h>
#include <stddef.h>
#ifndef Six_Step_Arduino_Simulink_COMMON_INCLUDES_
#define Six_Step_Arduino_Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Arduino.h"
#include "digitalWriteFast.h"
#include "io_wrappers.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#endif                          /* Six_Step_Arduino_Simulink_COMMON_INCLUDES_ */

#include "Six_Step_Arduino_Simulink_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input5' */
  codertarget_arduinobase_inter_T obj_n;/* '<Root>/Analog Input4' */
  codertarget_arduinobase_inter_T obj_g;/* '<Root>/Analog Input3' */
  codertarget_arduinobase_block_T obj_p;/* '<Root>/Digital Output12' */
  codertarget_arduinobase_block_T obj_e;/* '<Root>/Digital Output11' */
  codertarget_arduinobase_block_T obj_i;/* '<Root>/Digital Output10' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator1' */
} DW_Six_Step_Arduino_Simulink_T;

/* Parameters (default storage) */
struct P_Six_Step_Arduino_Simulink_T_ {
  real_T AnalogInput3_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input3'
                                        */
  real_T AnalogInput4_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input4'
                                        */
  real_T AnalogInput5_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input5'
                                        */
  real_T Constant6_Value;              /* Expression: 1000
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation6'
                                        */
  real_T Constant5_Value;              /* Expression: 1000
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation5'
                                        */
  real_T Constant4_Value;              /* Expression: 1000
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation4'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;       /* Expression: 2
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Duty;         /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Six_Step_Arduino_Simu_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Six_Step_Arduino_Simulink_T Six_Step_Arduino_Simulink_P;

/* Block states (default storage) */
extern DW_Six_Step_Arduino_Simulink_T Six_Step_Arduino_Simulink_DW;

/* Model entry point functions */
extern void Six_Step_Arduino_Simulink_initialize(void);
extern void Six_Step_Arduino_Simulink_step(void);
extern void Six_Step_Arduino_Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Six_Step_Arduino_Sim_T *const Six_Step_Arduino_Simulink_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope4' : Unused code path elimination
 * Block '<Root>/Scope5' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Six_Step_Arduino_Simulink'
 */
#endif                             /* RTW_HEADER_Six_Step_Arduino_Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
