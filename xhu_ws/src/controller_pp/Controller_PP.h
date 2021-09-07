//
// File: Controller_PP.h
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
#ifndef RTW_HEADER_Controller_PP_h_
#define RTW_HEADER_Controller_PP_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "Controller_PP_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block states (default storage) for system '<S9>/LPF1'
typedef struct {
  real_T UnitDelay_DSTATE;             // '<S14>/Unit Delay'
} DW_LPF1_Controller_PP_T;

// Block states (default storage) for system '<S9>/LPF2'
typedef struct {
  real_T UnitDelay_DSTATE;             // '<S15>/Unit Delay'
} DW_LPF2_Controller_PP_T;

// Block states (default storage) for system '<S9>/LPF3'
typedef struct {
  real_T UnitDelay_DSTATE;             // '<S16>/Unit Delay'
} DW_LPF3_Controller_PP_T;

// Block signals (default storage)
typedef struct {
  SL_Bus_Controller_PP_std_msgs_Float32MultiArray In1;// '<S13>/In1'
  SL_Bus_Controller_PP_std_msgs_Float32MultiArray b_varargout_2;
  real32_T b_varargout_2_Data[2004];
  real_T yr[501];                      // '<Root>/MATLAB Function'
  real_T xr[501];                      // '<Root>/MATLAB Function'
  real_T kappar[501];                  // '<Root>/MATLAB Function'
  real_T thetar[501];                  // '<Root>/MATLAB Function'
  SL_Bus_Controller_PP_std_msgs_Int16MultiArray BusAssignment1;// '<Root>/Bus Assignment1' 
  SL_Bus_Controller_PP_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  SL_Bus_Controller_PP_geometry_msgs_Twist In1_h;// '<S12>/In1'
  SL_Bus_Controller_PP_geometry_msgs_Twist b_varargout_2_m;
  real_T err[4];                       // '<S18>/Pure Pursit Controller'
  char_T b_zeroDelimTopic[29];
  SL_Bus_Controller_PP_geometry_msgs_Pose2D In1_l;// '<S11>/In1'
  SL_Bus_Controller_PP_geometry_msgs_Pose2D b_varargout_2_c;
  real_T d_min_last;
  real_T d_min;
  real_T Gain1;                        // '<S2>/Gain1'
  real_T rtb_Add1_f_k;
  real_T rtb_Add1_o_c;
  real_T rtb_Add1_b;
} B_Controller_PP_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slroscpp_internal_block_P_T obj; // '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S6>/SourceBlock'
  DW_LPF3_Controller_PP_T LPF3;        // '<S9>/LPF3'
  DW_LPF2_Controller_PP_T LPF2;        // '<S9>/LPF2'
  DW_LPF1_Controller_PP_T LPF1;        // '<S9>/LPF1'
} DW_Controller_PP_T;

// Parameters for system: '<S9>/LPF1'
struct P_LPF1_Controller_PP_T_ {
  real_T Gain1_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S17>/Gain1'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                          //  Referenced by: '<S14>/Unit Delay'

};

// Parameters for system: '<S9>/LPF2'
struct P_LPF2_Controller_PP_T_ {
  real_T UnitDelay_InitialCondition;   // Expression: 0
                                          //  Referenced by: '<S15>/Unit Delay'

  real_T Constant_Value;               // Expression: 1
                                          //  Referenced by: '<S15>/Constant'

};

// Parameters for system: '<S9>/LPF3'
struct P_LPF3_Controller_PP_T_ {
  real_T UnitDelay_InitialCondition;   // Expression: 0
                                          //  Referenced by: '<S16>/Unit Delay'

  real_T Constant_Value;               // Expression: 1
                                          //  Referenced by: '<S16>/Constant'

};

// Parameters (default storage)
struct P_Controller_PP_T_ {
  real_T Fliter_;                      // Variable: Fliter_
                                          //  Referenced by: '<S14>/Constant'

  SL_Bus_Controller_PP_std_msgs_Float32MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S13>/Out1'

  SL_Bus_Controller_PP_std_msgs_Float32MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S8>/Constant'

  SL_Bus_Controller_PP_std_msgs_Int16MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                    //  Referenced by: '<S1>/Constant'

  SL_Bus_Controller_PP_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                        //  Referenced by: '<S12>/Out1'

  SL_Bus_Controller_PP_geometry_msgs_Twist Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                               //  Referenced by: '<S7>/Constant'

  SL_Bus_Controller_PP_geometry_msgs_Pose2D Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                         //  Referenced by: '<S11>/Out1'

  SL_Bus_Controller_PP_geometry_msgs_Pose2D Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                //  Referenced by: '<S6>/Constant'

  real_T ID_Value;                     // Expression: 256
                                          //  Referenced by: '<Root>/ID'

  real_T DataLen_Value;                // Expression: 3
                                          //  Referenced by: '<Root>/DataLen'

  real_T SPD_Value;                    // Expression: 15
                                          //  Referenced by: '<Root>/SPD'

  real_T Gain1_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S2>/Gain1'

  real_T Constant5_Value;              // Expression: 5
                                          //  Referenced by: '<S18>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S18>/Constant6'

  real_T Constant7_Value;              // Expression: 0.6
                                          //  Referenced by: '<S18>/Constant7'

  real_T Gain_Gain;                    // Expression: 180/pi
                                          //  Referenced by: '<S5>/Gain'

  real_T Gain_Gain_o;                  // Expression: 5
                                          //  Referenced by: '<Root>/Gain'

  real_T Saturation1_UpperSat;         // Expression: 120
                                          //  Referenced by: '<Root>/Saturation1'

  real_T Saturation1_LowerSat;         // Expression: -120
                                          //  Referenced by: '<Root>/Saturation1'

  real_T Offset_Value;                 // Expression: 120
                                          //  Referenced by: '<Root>/Offset'

  real_T Brk_Value;                    // Expression: 0
                                          //  Referenced by: '<Root>/Brk'

  uint32_T Constant1_Value;            // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<Root>/Constant1'

  P_LPF3_Controller_PP_T LPF3;         // '<S9>/LPF3'
  P_LPF2_Controller_PP_T LPF2;         // '<S9>/LPF2'
  P_LPF1_Controller_PP_T LPF1;         // '<S9>/LPF1'
};

// Real-time Model Data Structure
struct tag_RTM_Controller_PP_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Controller_PP_T Controller_PP_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_Controller_PP_T Controller_PP_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_Controller_PP_T Controller_PP_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Controller_PP_initialize(void);
  extern void Controller_PP_step(void);
  extern void Controller_PP_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Controller_PP_T *const Controller_PP_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Controller_PP'
//  '<S1>'   : 'Controller_PP/Blank Message1'
//  '<S2>'   : 'Controller_PP/Degrees to Radians'
//  '<S3>'   : 'Controller_PP/MATLAB Function'
//  '<S4>'   : 'Controller_PP/Publish1'
//  '<S5>'   : 'Controller_PP/Steer'
//  '<S6>'   : 'Controller_PP/Subscribe'
//  '<S7>'   : 'Controller_PP/Subscribe1'
//  '<S8>'   : 'Controller_PP/Subscribe2'
//  '<S9>'   : 'Controller_PP/V_Spd'
//  '<S10>'  : 'Controller_PP/Variant Subsystem'
//  '<S11>'  : 'Controller_PP/Subscribe/Enabled Subsystem'
//  '<S12>'  : 'Controller_PP/Subscribe1/Enabled Subsystem'
//  '<S13>'  : 'Controller_PP/Subscribe2/Enabled Subsystem'
//  '<S14>'  : 'Controller_PP/V_Spd/LPF1'
//  '<S15>'  : 'Controller_PP/V_Spd/LPF2'
//  '<S16>'  : 'Controller_PP/V_Spd/LPF3'
//  '<S17>'  : 'Controller_PP/V_Spd/LPF1/Degrees to Radians'
//  '<S18>'  : 'Controller_PP/Variant Subsystem/PP'
//  '<S19>'  : 'Controller_PP/Variant Subsystem/PP/Pure Pursit Controller'

#endif                                 // RTW_HEADER_Controller_PP_h_

//
// File trailer for generated code.
//
// [EOF]
//
