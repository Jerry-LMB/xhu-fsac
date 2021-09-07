//
// File: Controller_PP_private.h
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
#ifndef RTW_HEADER_Controller_PP_private_h_
#define RTW_HEADER_Controller_PP_private_h_
#include "rtwtypes.h"
#include "Controller_PP.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void Controller_PP_LPF1_Init(DW_LPF1_Controller_PP_T *localDW,
  P_LPF1_Controller_PP_T *localP);
extern void Controller_PP_LPF1(real_T rtu_Input, real_T *rty_Out1,
  DW_LPF1_Controller_PP_T *localDW, P_LPF1_Controller_PP_T *localP);
extern void Controller_PP_LPF2_Init(DW_LPF2_Controller_PP_T *localDW,
  P_LPF2_Controller_PP_T *localP);
extern void Controller_PP_LPF2(real_T rtu_Input, real_T *rty_Out1,
  DW_LPF2_Controller_PP_T *localDW, P_LPF2_Controller_PP_T *localP);
extern void Controller_PP_LPF3_Init(DW_LPF3_Controller_PP_T *localDW,
  P_LPF3_Controller_PP_T *localP);
extern void Controller_PP_LPF3(real_T rtu_Input, real_T *rty_Vx,
  DW_LPF3_Controller_PP_T *localDW, P_LPF3_Controller_PP_T *localP);

#endif                                 // RTW_HEADER_Controller_PP_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
