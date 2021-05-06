/*
 * File: Six_Step_Arduino_Simulink.c
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

#include "Six_Step_Arduino_Simulink.h"
#include "Six_Step_Arduino_Simulink_private.h"

/* Block states (default storage) */
DW_Six_Step_Arduino_Simulink_T Six_Step_Arduino_Simulink_DW;

/* Real-time model */
static RT_MODEL_Six_Step_Arduino_Sim_T Six_Step_Arduino_Simulink_M_;
RT_MODEL_Six_Step_Arduino_Sim_T *const Six_Step_Arduino_Simulink_M =
  &Six_Step_Arduino_Simulink_M_;

/* Model step function */
void Six_Step_Arduino_Simulink_step(void)
{
  /* local block i/o variables */
  uint8_T rtb_CastToSingle7;
  codertarget_arduinobase_inter_T *obj;
  real_T rtb_PulseGenerator1;
  uint16_T rtb_AnalogInput3_0;

  /* MATLABSystem: '<Root>/Analog Input3' */
  if (Six_Step_Arduino_Simulink_DW.obj_g.SampleTime !=
      Six_Step_Arduino_Simulink_P.AnalogInput3_SampleTime) {
    Six_Step_Arduino_Simulink_DW.obj_g.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput3_SampleTime;
  }

  obj = &Six_Step_Arduino_Simulink_DW.obj_g;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(54UL);
  MW_AnalogInSingle_ReadResult
    (Six_Step_Arduino_Simulink_DW.obj_g.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &rtb_AnalogInput3_0, 3);

  /* Product: '<Root>/Divide6' incorporates:
   *  Constant: '<Root>/Constant6'
   *  MATLABSystem: '<Root>/Analog Input3'
   */
  rtb_PulseGenerator1 = (real_T)rtb_AnalogInput3_0 /
    Six_Step_Arduino_Simulink_P.Constant6_Value;

  /* Saturate: '<Root>/Saturation6' */
  if (rtb_PulseGenerator1 > Six_Step_Arduino_Simulink_P.Saturation6_UpperSat) {
    rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation6_UpperSat;
  } else {
    if (rtb_PulseGenerator1 < Six_Step_Arduino_Simulink_P.Saturation6_LowerSat)
    {
      rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation6_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation6' */

  /* DataTypeConversion: '<Root>/Cast To Single6' */
  rtb_PulseGenerator1 = floor(rtb_PulseGenerator1);
  if (rtIsNaN(rtb_PulseGenerator1) || rtIsInf(rtb_PulseGenerator1)) {
    rtb_PulseGenerator1 = 0.0;
  } else {
    rtb_PulseGenerator1 = fmod(rtb_PulseGenerator1, 256.0);
  }

  /* MATLABSystem: '<Root>/Digital Output12' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single6'
   */
  writeDigitalPin(2, (uint8_T)(rtb_PulseGenerator1 < 0.0 ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_PulseGenerator1 : (int16_T)(uint8_T)
    rtb_PulseGenerator1));

  /* MATLABSystem: '<Root>/Analog Input4' */
  if (Six_Step_Arduino_Simulink_DW.obj_n.SampleTime !=
      Six_Step_Arduino_Simulink_P.AnalogInput4_SampleTime) {
    Six_Step_Arduino_Simulink_DW.obj_n.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput4_SampleTime;
  }

  obj = &Six_Step_Arduino_Simulink_DW.obj_n;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(55UL);
  MW_AnalogInSingle_ReadResult
    (Six_Step_Arduino_Simulink_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &rtb_AnalogInput3_0, 3);

  /* Product: '<Root>/Divide5' incorporates:
   *  Constant: '<Root>/Constant5'
   *  MATLABSystem: '<Root>/Analog Input4'
   */
  rtb_PulseGenerator1 = (real_T)rtb_AnalogInput3_0 /
    Six_Step_Arduino_Simulink_P.Constant5_Value;

  /* Saturate: '<Root>/Saturation5' */
  if (rtb_PulseGenerator1 > Six_Step_Arduino_Simulink_P.Saturation5_UpperSat) {
    rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation5_UpperSat;
  } else {
    if (rtb_PulseGenerator1 < Six_Step_Arduino_Simulink_P.Saturation5_LowerSat)
    {
      rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation5_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation5' */

  /* DataTypeConversion: '<Root>/Cast To Single5' */
  rtb_PulseGenerator1 = floor(rtb_PulseGenerator1);
  if (rtIsNaN(rtb_PulseGenerator1) || rtIsInf(rtb_PulseGenerator1)) {
    rtb_PulseGenerator1 = 0.0;
  } else {
    rtb_PulseGenerator1 = fmod(rtb_PulseGenerator1, 256.0);
  }

  /* MATLABSystem: '<Root>/Digital Output11' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single5'
   */
  writeDigitalPin(1, (uint8_T)(rtb_PulseGenerator1 < 0.0 ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_PulseGenerator1 : (int16_T)(uint8_T)
    rtb_PulseGenerator1));

  /* MATLABSystem: '<Root>/Analog Input5' */
  if (Six_Step_Arduino_Simulink_DW.obj.SampleTime !=
      Six_Step_Arduino_Simulink_P.AnalogInput5_SampleTime) {
    Six_Step_Arduino_Simulink_DW.obj.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput5_SampleTime;
  }

  obj = &Six_Step_Arduino_Simulink_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(56UL);
  MW_AnalogInSingle_ReadResult
    (Six_Step_Arduino_Simulink_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &rtb_AnalogInput3_0, 3);

  /* Product: '<Root>/Divide4' incorporates:
   *  Constant: '<Root>/Constant4'
   *  MATLABSystem: '<Root>/Analog Input5'
   */
  rtb_PulseGenerator1 = (real_T)rtb_AnalogInput3_0 /
    Six_Step_Arduino_Simulink_P.Constant4_Value;

  /* Saturate: '<Root>/Saturation4' */
  if (rtb_PulseGenerator1 > Six_Step_Arduino_Simulink_P.Saturation4_UpperSat) {
    rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation4_UpperSat;
  } else {
    if (rtb_PulseGenerator1 < Six_Step_Arduino_Simulink_P.Saturation4_LowerSat)
    {
      rtb_PulseGenerator1 = Six_Step_Arduino_Simulink_P.Saturation4_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation4' */

  /* DataTypeConversion: '<Root>/Cast To Single4' */
  rtb_PulseGenerator1 = floor(rtb_PulseGenerator1);
  if (rtIsNaN(rtb_PulseGenerator1) || rtIsInf(rtb_PulseGenerator1)) {
    rtb_PulseGenerator1 = 0.0;
  } else {
    rtb_PulseGenerator1 = fmod(rtb_PulseGenerator1, 256.0);
  }

  /* MATLABSystem: '<Root>/Digital Output10' incorporates:
   *  DataTypeConversion: '<Root>/Cast To Single4'
   */
  writeDigitalPin(0, (uint8_T)(rtb_PulseGenerator1 < 0.0 ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_PulseGenerator1 : (int16_T)(uint8_T)
    rtb_PulseGenerator1));

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtb_PulseGenerator1 = (Six_Step_Arduino_Simulink_DW.clockTickCounter <
    Six_Step_Arduino_Simulink_P.PulseGenerator1_Duty) &&
    (Six_Step_Arduino_Simulink_DW.clockTickCounter >= 0L) ?
    Six_Step_Arduino_Simulink_P.PulseGenerator1_Amp : 0.0;
  if (Six_Step_Arduino_Simulink_DW.clockTickCounter >=
      Six_Step_Arduino_Simulink_P.PulseGenerator1_Period - 1.0) {
    Six_Step_Arduino_Simulink_DW.clockTickCounter = 0L;
  } else {
    Six_Step_Arduino_Simulink_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* DataTypeConversion: '<Root>/Cast To Single7' */
  rtb_PulseGenerator1 = floor(rtb_PulseGenerator1);
  if (rtIsNaN(rtb_PulseGenerator1) || rtIsInf(rtb_PulseGenerator1)) {
    rtb_PulseGenerator1 = 0.0;
  } else {
    rtb_PulseGenerator1 = fmod(rtb_PulseGenerator1, 256.0);
  }

  /* DataTypeConversion: '<Root>/Cast To Single7' */
  rtb_CastToSingle7 = (uint8_T)(rtb_PulseGenerator1 < 0.0 ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_PulseGenerator1 : (int16_T)(uint8_T)
    rtb_PulseGenerator1);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output13' */
  digitalWriteFast(((uint8_T)13U), rtb_CastToSingle7);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output14' */
  digitalWriteFast(((uint8_T)5U), rtb_CastToSingle7);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output15' */
  digitalWriteFast(((uint8_T)4U), rtb_CastToSingle7);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output16' */
  digitalWriteFast(((uint8_T)3U), rtb_CastToSingle7);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output17' */
  digitalWriteFast(((uint8_T)6U), rtb_CastToSingle7);

  /* S-Function (sfunar_digitalOutput): '<Root>/Digital Output18' */
  digitalWriteFast(((uint8_T)7U), rtb_CastToSingle7);
}

/* Model initialize function */
void Six_Step_Arduino_Simulink_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output13' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output13 */
    pinMode(((uint8_T)13U), OUTPUT);

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output14' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output14 */
    pinMode(((uint8_T)5U), OUTPUT);

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output15' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output15 */
    pinMode(((uint8_T)4U), OUTPUT);

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output16' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output16 */
    pinMode(((uint8_T)3U), OUTPUT);

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output17' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output17 */
    pinMode(((uint8_T)6U), OUTPUT);

    /* Start for S-Function (sfunar_digitalOutput): '<Root>/Digital Output18' */

    /* S-Function (sfunar_digitalOutput): <Root>/Digital Output18 */
    pinMode(((uint8_T)7U), OUTPUT);

    /* Start for MATLABSystem: '<Root>/Analog Input3' */
    Six_Step_Arduino_Simulink_DW.obj_g.matlabCodegenIsDeleted = true;
    Six_Step_Arduino_Simulink_DW.obj_g.isInitialized = 0L;
    Six_Step_Arduino_Simulink_DW.obj_g.SampleTime = -1.0;
    Six_Step_Arduino_Simulink_DW.obj_g.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj_g.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput3_SampleTime;
    obj = &Six_Step_Arduino_Simulink_DW.obj_g;
    Six_Step_Arduino_Simulink_DW.obj_g.isSetupComplete = false;
    Six_Step_Arduino_Simulink_DW.obj_g.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(54UL);
    Six_Step_Arduino_Simulink_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output12' */
    Six_Step_Arduino_Simulink_DW.obj_p.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj_p.isInitialized = 1L;
    digitalIOSetup(2, 1);
    Six_Step_Arduino_Simulink_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Analog Input4' */
    Six_Step_Arduino_Simulink_DW.obj_n.matlabCodegenIsDeleted = true;
    Six_Step_Arduino_Simulink_DW.obj_n.isInitialized = 0L;
    Six_Step_Arduino_Simulink_DW.obj_n.SampleTime = -1.0;
    Six_Step_Arduino_Simulink_DW.obj_n.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj_n.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput4_SampleTime;
    obj = &Six_Step_Arduino_Simulink_DW.obj_n;
    Six_Step_Arduino_Simulink_DW.obj_n.isSetupComplete = false;
    Six_Step_Arduino_Simulink_DW.obj_n.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(55UL);
    Six_Step_Arduino_Simulink_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output11' */
    Six_Step_Arduino_Simulink_DW.obj_e.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj_e.isInitialized = 1L;
    digitalIOSetup(1, 1);
    Six_Step_Arduino_Simulink_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Analog Input5' */
    Six_Step_Arduino_Simulink_DW.obj.matlabCodegenIsDeleted = true;
    Six_Step_Arduino_Simulink_DW.obj.isInitialized = 0L;
    Six_Step_Arduino_Simulink_DW.obj.SampleTime = -1.0;
    Six_Step_Arduino_Simulink_DW.obj.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj.SampleTime =
      Six_Step_Arduino_Simulink_P.AnalogInput5_SampleTime;
    obj = &Six_Step_Arduino_Simulink_DW.obj;
    Six_Step_Arduino_Simulink_DW.obj.isSetupComplete = false;
    Six_Step_Arduino_Simulink_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(56UL);
    Six_Step_Arduino_Simulink_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output10' */
    Six_Step_Arduino_Simulink_DW.obj_i.matlabCodegenIsDeleted = false;
    Six_Step_Arduino_Simulink_DW.obj_i.isInitialized = 1L;
    digitalIOSetup(0, 1);
    Six_Step_Arduino_Simulink_DW.obj_i.isSetupComplete = true;
  }
}

/* Model terminate function */
void Six_Step_Arduino_Simulink_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Analog Input3' */
  obj = &Six_Step_Arduino_Simulink_DW.obj_g;
  if (!Six_Step_Arduino_Simulink_DW.obj_g.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((Six_Step_Arduino_Simulink_DW.obj_g.isInitialized == 1L) &&
        Six_Step_Arduino_Simulink_DW.obj_g.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(54UL);
      MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input3' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output12' */
  if (!Six_Step_Arduino_Simulink_DW.obj_p.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output12' */

  /* Terminate for MATLABSystem: '<Root>/Analog Input4' */
  obj = &Six_Step_Arduino_Simulink_DW.obj_n;
  if (!Six_Step_Arduino_Simulink_DW.obj_n.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((Six_Step_Arduino_Simulink_DW.obj_n.isInitialized == 1L) &&
        Six_Step_Arduino_Simulink_DW.obj_n.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(55UL);
      MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input4' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output11' */
  if (!Six_Step_Arduino_Simulink_DW.obj_e.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output11' */

  /* Terminate for MATLABSystem: '<Root>/Analog Input5' */
  obj = &Six_Step_Arduino_Simulink_DW.obj;
  if (!Six_Step_Arduino_Simulink_DW.obj.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj.matlabCodegenIsDeleted = true;
    if ((Six_Step_Arduino_Simulink_DW.obj.isInitialized == 1L) &&
        Six_Step_Arduino_Simulink_DW.obj.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(56UL);
      MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input5' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output10' */
  if (!Six_Step_Arduino_Simulink_DW.obj_i.matlabCodegenIsDeleted) {
    Six_Step_Arduino_Simulink_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output10' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
