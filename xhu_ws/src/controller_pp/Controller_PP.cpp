//
// File: Controller_PP.cpp
//
// Code generated for Simulink model 'Controller_PP'.
//
// Model version                  : 4.29
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Fri Aug 13 15:33:13 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Controller_PP.h"
#include "Controller_PP_private.h"

// Block signals (default storage)
B_Controller_PP_T Controller_PP_B;

// Block states (default storage)
DW_Controller_PP_T Controller_PP_DW;

// Real-time model
RT_MODEL_Controller_PP_T Controller_PP_M_ = RT_MODEL_Controller_PP_T();
RT_MODEL_Controller_PP_T *const Controller_PP_M = &Controller_PP_M_;

// Forward declaration for local functions
static void Controller_PP_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_Controller_PP_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real32_T varargout_2_Data[2004], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv);

// System initialize for atomic system: '<S9>/LPF1'
void Controller_PP_LPF1_Init(DW_LPF1_Controller_PP_T *localDW,
  P_LPF1_Controller_PP_T *localP)
{
  // InitializeConditions for UnitDelay: '<S14>/Unit Delay'
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

// Output and update for atomic system: '<S9>/LPF1'
void Controller_PP_LPF1(real_T rtu_Input, real_T *rty_Out1,
  DW_LPF1_Controller_PP_T *localDW, P_LPF1_Controller_PP_T *localP)
{
  // Sum: '<S14>/Add1' incorporates:
  //   Constant: '<S14>/Constant'
  //   Gain: '<S17>/Gain1'
  //   Product: '<S14>/Divide'
  //   Sum: '<S14>/Add'
  //   UnitDelay: '<S14>/Unit Delay'

  *rty_Out1 = (localP->Gain1_Gain * rtu_Input - localDW->UnitDelay_DSTATE) *
    Controller_PP_P.Fliter_ + localDW->UnitDelay_DSTATE;

  // Update for UnitDelay: '<S14>/Unit Delay'
  localDW->UnitDelay_DSTATE = *rty_Out1;
}

// System initialize for atomic system: '<S9>/LPF2'
void Controller_PP_LPF2_Init(DW_LPF2_Controller_PP_T *localDW,
  P_LPF2_Controller_PP_T *localP)
{
  // InitializeConditions for UnitDelay: '<S15>/Unit Delay'
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

// Output and update for atomic system: '<S9>/LPF2'
void Controller_PP_LPF2(real_T rtu_Input, real_T *rty_Out1,
  DW_LPF2_Controller_PP_T *localDW, P_LPF2_Controller_PP_T *localP)
{
  // Sum: '<S15>/Add1' incorporates:
  //   Constant: '<S15>/Constant'
  //   Product: '<S15>/Divide'
  //   Sum: '<S15>/Add'
  //   UnitDelay: '<S15>/Unit Delay'

  *rty_Out1 = (rtu_Input - localDW->UnitDelay_DSTATE) * localP->Constant_Value +
    localDW->UnitDelay_DSTATE;

  // Update for UnitDelay: '<S15>/Unit Delay'
  localDW->UnitDelay_DSTATE = *rty_Out1;
}

// System initialize for atomic system: '<S9>/LPF3'
void Controller_PP_LPF3_Init(DW_LPF3_Controller_PP_T *localDW,
  P_LPF3_Controller_PP_T *localP)
{
  // InitializeConditions for UnitDelay: '<S16>/Unit Delay'
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

// Output and update for atomic system: '<S9>/LPF3'
void Controller_PP_LPF3(real_T rtu_Input, real_T *rty_Vx,
  DW_LPF3_Controller_PP_T *localDW, P_LPF3_Controller_PP_T *localP)
{
  // Sum: '<S16>/Add1' incorporates:
  //   Constant: '<S16>/Constant'
  //   Product: '<S16>/Divide'
  //   Sum: '<S16>/Add'
  //   UnitDelay: '<S16>/Unit Delay'

  *rty_Vx = (rtu_Input - localDW->UnitDelay_DSTATE) * localP->Constant_Value +
    localDW->UnitDelay_DSTATE;

  // Update for UnitDelay: '<S16>/Unit Delay'
  localDW->UnitDelay_DSTATE = *rty_Vx;
}

static void Controller_PP_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_Controller_PP_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real32_T varargout_2_Data[2004], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv)
{
  *varargout_1 = Sub_Controller_PP_3052.getLatestMessage
    (&Controller_PP_B.b_varargout_2);
  memcpy(&varargout_2_Layout_Dim[0], &Controller_PP_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_Controller_PP_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    Controller_PP_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    Controller_PP_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    Controller_PP_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Data[0], &Controller_PP_B.b_varargout_2.Data[0], 2004U *
         sizeof(real32_T));
  *varargout_2_Data_SL_Info_Curren =
    Controller_PP_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    Controller_PP_B.b_varargout_2.Data_SL_Info.ReceivedLength;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Model step function
void Controller_PP_step(void)
{
  real_T d_err_idx_1;
  real_T ed_tmp;
  real_T ed_tmp_0;
  int32_T dmin;
  int32_T i;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_I_0;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  Controller_PP_SystemCore_step(&b_varargout_1,
    Controller_PP_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0, &b_varargout_2_Layout_DataOffset,
    Controller_PP_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    memcpy(&Controller_PP_B.In1.Layout.Dim[0],
           &Controller_PP_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_Controller_PP_std_msgs_MultiArrayDimension) << 4U);
    Controller_PP_B.In1.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    Controller_PP_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
    Controller_PP_B.In1.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&Controller_PP_B.In1.Data[0], &Controller_PP_B.b_varargout_2_Data[0],
           2004U * sizeof(real32_T));
    Controller_PP_B.In1.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    Controller_PP_B.In1.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // MATLAB Function: '<Root>/MATLAB Function'
  for (i = 0; i < 501; i++) {
    Controller_PP_B.xr[i] = Controller_PP_B.In1.Data[i];
    Controller_PP_B.yr[i] = Controller_PP_B.In1.Data[i + 501];
    Controller_PP_B.thetar[i] = Controller_PP_B.In1.Data[i + 1002];
    Controller_PP_B.kappar[i] = Controller_PP_B.In1.Data[i + 1503];
  }

  // End of MATLAB Function: '<Root>/MATLAB Function'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S11>/In1'

  b_varargout_1 = Sub_Controller_PP_2055.getLatestMessage
    (&Controller_PP_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S11>/Enable'

  if (b_varargout_1) {
    Controller_PP_B.In1_l = Controller_PP_B.b_varargout_2_c;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  b_varargout_1 = Sub_Controller_PP_2057.getLatestMessage
    (&Controller_PP_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (b_varargout_1) {
    Controller_PP_B.In1_h = Controller_PP_B.b_varargout_2_m;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<S9>/LPF3'
  Controller_PP_LPF3(Controller_PP_B.In1_h.Linear.X, &Controller_PP_B.rtb_Add1_b,
                     &Controller_PP_DW.LPF3, &Controller_PP_P.LPF3);

  // End of Outputs for SubSystem: '<S9>/LPF3'

  // Outputs for Atomic SubSystem: '<S9>/LPF2'
  Controller_PP_LPF2(Controller_PP_B.In1_h.Linear.Y,
                     &Controller_PP_B.rtb_Add1_o_c, &Controller_PP_DW.LPF2,
                     &Controller_PP_P.LPF2);

  // End of Outputs for SubSystem: '<S9>/LPF2'

  // Gain: '<S2>/Gain1'
  Controller_PP_B.Gain1 = Controller_PP_P.Gain1_Gain *
    Controller_PP_B.In1_l.Theta;

  // Outputs for Atomic SubSystem: '<S9>/LPF1'
  Controller_PP_LPF1(Controller_PP_B.In1_h.Linear.Z,
                     &Controller_PP_B.rtb_Add1_f_k, &Controller_PP_DW.LPF1,
                     &Controller_PP_P.LPF1);

  // End of Outputs for SubSystem: '<S9>/LPF1'

  // MATLAB Function: '<S18>/Pure Pursit Controller' incorporates:
  //   Constant: '<S18>/Constant5'

  dmin = 0;
  Controller_PP_B.d_min_last = 1.0;
  for (i = 0; i < 501; i++) {
    Controller_PP_B.d_min = Controller_PP_B.In1_l.X - Controller_PP_B.xr[i];
    d_err_idx_1 = Controller_PP_B.In1_l.Y - Controller_PP_B.yr[i];
    Controller_PP_B.d_min = Controller_PP_B.d_min * Controller_PP_B.d_min +
      d_err_idx_1 * d_err_idx_1;
    if (Controller_PP_B.d_min < Controller_PP_B.d_min_last) {
      dmin = i;
      Controller_PP_B.d_min_last = Controller_PP_B.d_min;
    }
  }

  Controller_PP_B.d_min = Controller_PP_B.In1_l.X - Controller_PP_B.xr[dmin];
  d_err_idx_1 = Controller_PP_B.In1_l.Y - Controller_PP_B.yr[dmin];
  ed_tmp = cos(Controller_PP_B.thetar[dmin]);
  ed_tmp_0 = sin(Controller_PP_B.thetar[dmin]);
  Controller_PP_B.d_min_last = -ed_tmp_0 * Controller_PP_B.d_min + ed_tmp *
    d_err_idx_1;
  d_err_idx_1 = Controller_PP_B.Gain1 - ((ed_tmp * Controller_PP_B.d_min +
    ed_tmp_0 * d_err_idx_1) * Controller_PP_B.kappar[dmin] +
    Controller_PP_B.thetar[dmin]);
  Controller_PP_B.d_min = cos(d_err_idx_1);
  d_err_idx_1 = sin(d_err_idx_1);
  Controller_PP_B.err[0] = Controller_PP_B.d_min_last;
  Controller_PP_B.err[1] = Controller_PP_B.rtb_Add1_o_c * Controller_PP_B.d_min
    + Controller_PP_B.rtb_Add1_b * d_err_idx_1;
  Controller_PP_B.err[2] = d_err_idx_1;
  Controller_PP_B.err[3] = Controller_PP_B.rtb_Add1_f_k -
    (Controller_PP_B.rtb_Add1_b * Controller_PP_B.d_min -
     Controller_PP_B.rtb_Add1_o_c * d_err_idx_1) / (1.0 -
    Controller_PP_B.kappar[dmin] * Controller_PP_B.d_min_last) *
    Controller_PP_B.kappar[dmin];
  Controller_PP_B.d_min = 0.0;
  Controller_PP_B.d_min_last = static_cast<real_T>(dmin) + 1.0;
  while ((Controller_PP_P.Constant5_Value > Controller_PP_B.d_min) &&
         (Controller_PP_B.d_min_last + 1.0 < 501.0)) {
    Controller_PP_B.d_min = Controller_PP_B.In1_l.X - Controller_PP_B.xr[
      static_cast<int32_T>(Controller_PP_B.d_min_last) - 1];
    d_err_idx_1 = Controller_PP_B.In1_l.Y - Controller_PP_B.yr
      [static_cast<int32_T>(Controller_PP_B.d_min_last) - 1];
    Controller_PP_B.d_min = sqrt(Controller_PP_B.d_min * Controller_PP_B.d_min +
      d_err_idx_1 * d_err_idx_1);
    Controller_PP_B.d_min_last++;
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S1>/Constant'

  Controller_PP_B.BusAssignment1 = Controller_PP_P.Constant_Value_f;
  Controller_PP_B.BusAssignment1.Data_SL_Info.ReceivedLength =
    Controller_PP_P.Constant1_Value;
  Controller_PP_B.BusAssignment1.Data_SL_Info.CurrentLength =
    Controller_PP_P.Constant1_Value;

  // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
  //   Constant: '<Root>/ID'

  Controller_PP_B.d_min = floor(Controller_PP_P.ID_Value);
  if (rtIsNaN(Controller_PP_B.d_min) || rtIsInf(Controller_PP_B.d_min)) {
    Controller_PP_B.d_min = 0.0;
  } else {
    Controller_PP_B.d_min = fmod(Controller_PP_B.d_min, 65536.0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  Controller_PP_B.BusAssignment1.Data[0] = static_cast<int16_T>
    (Controller_PP_B.d_min < 0.0 ? static_cast<int32_T>(static_cast<int16_T>(-
       static_cast<int16_T>(static_cast<uint16_T>(-Controller_PP_B.d_min)))) :
     static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
       (Controller_PP_B.d_min))));

  // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
  //   Constant: '<Root>/DataLen'

  Controller_PP_B.d_min = floor(Controller_PP_P.DataLen_Value);
  if (rtIsNaN(Controller_PP_B.d_min) || rtIsInf(Controller_PP_B.d_min)) {
    Controller_PP_B.d_min = 0.0;
  } else {
    Controller_PP_B.d_min = fmod(Controller_PP_B.d_min, 65536.0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  Controller_PP_B.BusAssignment1.Data[1] = static_cast<int16_T>
    (Controller_PP_B.d_min < 0.0 ? static_cast<int32_T>(static_cast<int16_T>(-
       static_cast<int16_T>(static_cast<uint16_T>(-Controller_PP_B.d_min)))) :
     static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
       (Controller_PP_B.d_min))));

  // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
  //   Constant: '<Root>/SPD'

  Controller_PP_B.d_min = floor(Controller_PP_P.SPD_Value);
  if (rtIsNaN(Controller_PP_B.d_min) || rtIsInf(Controller_PP_B.d_min)) {
    Controller_PP_B.d_min = 0.0;
  } else {
    Controller_PP_B.d_min = fmod(Controller_PP_B.d_min, 65536.0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  Controller_PP_B.BusAssignment1.Data[2] = static_cast<int16_T>
    (Controller_PP_B.d_min < 0.0 ? static_cast<int32_T>(static_cast<int16_T>(-
       static_cast<int16_T>(static_cast<uint16_T>(-Controller_PP_B.d_min)))) :
     static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
       (Controller_PP_B.d_min))));

  // Gain: '<Root>/Gain' incorporates:
  //   Constant: '<S18>/Constant5'
  //   Constant: '<S18>/Constant6'
  //   Constant: '<S18>/Constant7'
  //   Gain: '<S5>/Gain'
  //   MATLAB Function: '<S18>/Pure Pursit Controller'

  Controller_PP_B.Gain1 = atan(sin(rt_atan2d_snf(Controller_PP_B.yr
    [static_cast<int32_T>(Controller_PP_B.d_min_last) - 1] -
    Controller_PP_B.In1_l.Y, Controller_PP_B.xr[static_cast<int32_T>
    (Controller_PP_B.d_min_last) - 1] - Controller_PP_B.In1_l.X) -
    Controller_PP_B.Gain1) * (Controller_PP_P.Constant6_Value +
    Controller_PP_P.Constant7_Value) * 2.0 / Controller_PP_P.Constant5_Value) *
    Controller_PP_P.Gain_Gain * Controller_PP_P.Gain_Gain_o;

  // Saturate: '<Root>/Saturation1'
  if (Controller_PP_B.Gain1 > Controller_PP_P.Saturation1_UpperSat) {
    Controller_PP_B.Gain1 = Controller_PP_P.Saturation1_UpperSat;
  } else {
    if (Controller_PP_B.Gain1 < Controller_PP_P.Saturation1_LowerSat) {
      Controller_PP_B.Gain1 = Controller_PP_P.Saturation1_LowerSat;
    }
  }

  // End of Saturate: '<Root>/Saturation1'

  // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
  //   Constant: '<Root>/Offset'
  //   Sum: '<Root>/Add'

  Controller_PP_B.d_min = floor(Controller_PP_B.Gain1 +
    Controller_PP_P.Offset_Value);
  if (rtIsNaN(Controller_PP_B.d_min) || rtIsInf(Controller_PP_B.d_min)) {
    Controller_PP_B.d_min = 0.0;
  } else {
    Controller_PP_B.d_min = fmod(Controller_PP_B.d_min, 65536.0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  Controller_PP_B.BusAssignment1.Data[3] = static_cast<int16_T>
    (Controller_PP_B.d_min < 0.0 ? static_cast<int32_T>(static_cast<int16_T>(-
       static_cast<int16_T>(static_cast<uint16_T>(-Controller_PP_B.d_min)))) :
     static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
       (Controller_PP_B.d_min))));

  // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
  //   Constant: '<Root>/Brk'

  Controller_PP_B.d_min = floor(Controller_PP_P.Brk_Value);
  if (rtIsNaN(Controller_PP_B.d_min) || rtIsInf(Controller_PP_B.d_min)) {
    Controller_PP_B.d_min = 0.0;
  } else {
    Controller_PP_B.d_min = fmod(Controller_PP_B.d_min, 65536.0);
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  Controller_PP_B.BusAssignment1.Data[4] = static_cast<int16_T>
    (Controller_PP_B.d_min < 0.0 ? static_cast<int32_T>(static_cast<int16_T>(-
       static_cast<int16_T>(static_cast<uint16_T>(-Controller_PP_B.d_min)))) :
     static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
       (Controller_PP_B.d_min))));

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_Controller_PP_3150.publish(&Controller_PP_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'
}

// Model initialize function
void Controller_PP_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // block I/O
  (void) memset((static_cast<void *>(&Controller_PP_B)), 0,
                sizeof(B_Controller_PP_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&Controller_PP_DW), 0,
                sizeof(DW_Controller_PP_T));

  {
    static const char_T tmp_0[28] = { '/', 'c', 'a', 'n', 'a', 'l', 'y', 's',
      't', 'i', 'i', '_', 'r', 'o', 's', '/', 'v', 'e', 'h', 'i', 'c', 'l', 'e',
      '_', 'P', 'o', 's', 'e' };

    static const char_T tmp_1[27] = { '/', 'c', 'a', 'n', 'a', 'l', 'y', 's',
      't', 'i', 'i', '_', 'r', 'o', 's', '/', 'v', 'e', 'h', 'i', 'c', 'l', 'e',
      '_', 's', 'p', 'd' };

    static const char_T tmp[20] = { '/', 'P', 'l', 'a', 'n', 'n', 'i', 'n', 'g',
      '_', 'T', 'r', 'a', 'j', 'e', 'c', 't', 'o', 'r', 'y' };

    static const char_T tmp_2[20] = { '/', 's', 'e', 'n', 'd', '_', 'c', 'a',
      'n', '_', 'm', 's', 'g', 's', '_', 'p', 'o', 'r', 't', '1' };

    int32_T i;
    char_T b_zeroDelimTopic_0[28];
    char_T b_zeroDelimTopic[21];

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1' incorporates:
    //   Inport: '<S13>/In1'

    Controller_PP_B.In1 = Controller_PP_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    Controller_PP_DW.obj_o.matlabCodegenIsDeleted = false;
    Controller_PP_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[20] = '\x00';
    Sub_Controller_PP_3052.createSubscriber(&b_zeroDelimTopic[0], 1);
    Controller_PP_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1' incorporates:
    //   Inport: '<S11>/In1'

    Controller_PP_B.In1_l = Controller_PP_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    Controller_PP_DW.obj_p.matlabCodegenIsDeleted = false;
    Controller_PP_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      Controller_PP_B.b_zeroDelimTopic[i] = tmp_0[i];
    }

    Controller_PP_B.b_zeroDelimTopic[28] = '\x00';
    Sub_Controller_PP_2055.createSubscriber(&Controller_PP_B.b_zeroDelimTopic[0],
      1);
    Controller_PP_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1' incorporates:
    //   Inport: '<S12>/In1'

    Controller_PP_B.In1_h = Controller_PP_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    Controller_PP_DW.obj_h.matlabCodegenIsDeleted = false;
    Controller_PP_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      b_zeroDelimTopic_0[i] = tmp_1[i];
    }

    b_zeroDelimTopic_0[27] = '\x00';
    Sub_Controller_PP_2057.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    Controller_PP_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S9>/LPF3'
    Controller_PP_LPF3_Init(&Controller_PP_DW.LPF3, &Controller_PP_P.LPF3);

    // End of SystemInitialize for SubSystem: '<S9>/LPF3'

    // SystemInitialize for Atomic SubSystem: '<S9>/LPF2'
    Controller_PP_LPF2_Init(&Controller_PP_DW.LPF2, &Controller_PP_P.LPF2);

    // End of SystemInitialize for SubSystem: '<S9>/LPF2'

    // SystemInitialize for Atomic SubSystem: '<S9>/LPF1'
    Controller_PP_LPF1_Init(&Controller_PP_DW.LPF1, &Controller_PP_P.LPF1);

    // End of SystemInitialize for SubSystem: '<S9>/LPF1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    Controller_PP_DW.obj.matlabCodegenIsDeleted = false;
    Controller_PP_DW.obj.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      b_zeroDelimTopic[i] = tmp_2[i];
    }

    b_zeroDelimTopic[20] = '\x00';
    Pub_Controller_PP_3150.createPublisher(&b_zeroDelimTopic[0], 1);
    Controller_PP_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'
  }
}

// Model terminate function
void Controller_PP_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!Controller_PP_DW.obj_o.matlabCodegenIsDeleted) {
    Controller_PP_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!Controller_PP_DW.obj_p.matlabCodegenIsDeleted) {
    Controller_PP_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!Controller_PP_DW.obj_h.matlabCodegenIsDeleted) {
    Controller_PP_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!Controller_PP_DW.obj.matlabCodegenIsDeleted) {
    Controller_PP_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
