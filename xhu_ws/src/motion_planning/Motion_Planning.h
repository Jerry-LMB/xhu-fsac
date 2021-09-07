//
// File: Motion_Planning.h
//
// Code generated for Simulink model 'Motion_Planning'.
//
// Model version                  : 3.99
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Aug 11 23:59:04 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Motion_Planning_h_
#define RTW_HEADER_Motion_Planning_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "Motion_Planning_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  creal_T At_data[1600];
  creal_T b_A_data[1600];
  creal_T b_A_data_m[1600];
  real_T TrajGlobal[3006];
  real_T b_x_data[2574];
  real_T c_x_data[2574];
  real_T b_x_data_c[2574];
  real_T c_x_data_k[2574];
  real_T varargin_2_data[2475];
  real_T varargin_2_data_c[2475];
  real_T MatrixConcatenate[2004];      // '<S1>/Matrix Concatenate'
  real_T b_data[1600];
  real_T tmp_data[1600];
  real_T T_data[1600];
  real_T A_data[1600];
  real_T b_A_data_b[1600];
  real_T A_data_p[1600];
  real_T b_h_data[1600];
  SL_Bus_Motion_Planning_std_msgs_Float32MultiArray BusAssignment;// '<S1>/Bus Assignment' 
  int32_T counts_data[1600];
  real_T diff_sr[501];
  real_T zy_data[500];
  real_T z_data[500];
  real_T c_data[500];
  real_T u_data[400];
  real_T Jtri_data[300];
  real_T varargout_2_data[300];
  real_T Jtri_data_c[300];
  real_T Jtri_data_f[297];
  real_T varargout_2_data_g[297];
  real_T y_data[238];
  creal_T initialPosition_contents_data[100];
  creal_T hip_data[100];
  creal_T hip_data_g[100];
  creal_T hip_data_m[100];
  creal_T hip_data_n[100];
  creal_T x_data[100];
  boolean_T filled_data[1600];
  real_T waypoint[200];
  real_T waypoints[200];               // '<S1>/MATLAB Function1'
  creal_T initialPosition_contents_data_p[99];
  creal_T hip_data_l[99];
  creal_T z_data_j[99];
  creal_T f_data[99];
  creal_T df_da_data[99];
  creal_T b_data_d[99];
  creal_T e_data[99];
  creal_T a1_data[99];
  creal_T a2_data[99];
  creal_T fa1_data[99];
  creal_T fa2_data[99];
  creal_T s_data[99];
  creal_T r_data[99];
  creal_T da2_data[99];
  creal_T y_data_g[99];
  creal_T x_data_l[99];
  creal_T a1_data_d[99];
  creal_T z1_data[99];
  creal_T hip_data_d[99];
  creal_T e_data_l[99];
  creal_T A_data_o[99];
  creal_T m2C_data[99];
  creal_T dm2C_data[99];
  creal_T t_data[99];
  creal_T dt_data[99];
  creal_T nhik_data[99];
  creal_T dp_data[99];
  creal_T z_data_b[99];
  creal_T f_data_n[99];
  creal_T b_data_b[99];
  creal_T e_data_ln[99];
  creal_T z1_data_h[99];
  SL_Bus_Motion_Planning_geometry_msgs_PoseArray In1;// '<S12>/In1'
  SL_Bus_Motion_Planning_geometry_msgs_PoseArray b_varargout_2;
  real_T beta_data[118];
  real_T e_data_b[100];
  real_T e_data_d[100];
  real_T waypoints_data[100];
  real_T waypoints_data_e[100];
  real_T b_data_bj[100];
  real_T v_data[100];
  real_T dx_data[100];
  real_T xnew_data[100];
  real_T r_data_j[100];
  real_T epsx_data[100];
  real_T epsr_data[100];
  real_T varargout_1_data[100];
  real_T x_data_f[100];
  real_T e_data_a[100];
  real_T f_data_j[100];
  real_T alpha_data[100];
  real_T tmp_data_j[100];
  real_T oldq_data[100];
  real_T b_data_o[100];
  real_T q_data[100];
  real_T tmp_data_n[100];
  real_T Jtri_data_i[100];
  real_T Jtri_data_o[100];
  real_T Jtri_data_n[100];
  real_T u_data_m[100];
  real_T z_data_c[100];
  real_T b_data_m[100];
  real_T alpha_data_m[100];
  real_T z_data_ja[100];
  real_T c_data_h[100];
  real_T z_data_c0[100];
  real_T b_data_c[99];
  real_T c_data_p[99];
  real_T d_data[99];
  real_T e_data_p[99];
  real_T c_data_a[99];
  real_T v_data_e[99];
  real_T dx_data_a[99];
  real_T xnew_data_a[99];
  real_T r_data_i[99];
  real_T epsx_data_l[99];
  real_T epsr_data_o[99];
  real_T varargout_1_data_o[99];
  real_T unusedU0_data[99];
  real_T k0_data[99];
  real_T k1_data[99];
  real_T dk0_dc0_data[99];
  real_T dk0_dc1_data[99];
  real_T dk1_dc0_data[99];
  real_T dk1_dc1_data[99];
  real_T x_data_i[99];
  real_T x_data_fk[99];
  real_T phi_data[99];
  real_T phi0_data[99];
  real_T a_data[99];
  real_T da_dphi1_data[99];
  real_T d_data_i[99];
  real_T a_data_f[99];
  real_T c_data_g[99];
  real_T ratio_data[99];
  real_T l_tmp_data[99];
  real_T unusedU1_data[99];
  real_T k0_data_c[99];
  real_T k1_data_o[99];
  real_T dk0_dc0_data_l[99];
  real_T dk0_dc1_data_m[99];
  real_T dk1_dc0_data_m[99];
  real_T dk1_dc1_data_c[99];
  real_T x_data_fm[99];
  real_T k_data[99];
  real_T tmp_data_p[99];
  real_T z1_data_e[99];
  real_T b_gamma_data[99];
  real_T y_data_o[99];
  real_T b_y_data[99];
  real_T c_y_data[99];
  real_T d_y_data[99];
  real_T e_y_data[99];
  real_T f_y_data[99];
  real_T phi_data_h[99];
  real_T phi0_data_l[99];
  real_T a_data_h[99];
  real_T d_data_m[99];
  real_T a_data_m[99];
  real_T c_data_h3[99];
  real_T b_gamma_data_c[99];
  real_T u_data_k[99];
  real_T v_data_p[99];
  real_T dadr_data[99];
  real_T v_data_px[99];
  real_T x_data_p[99];
  real_T x_data_a[99];
  real_T delta_data[98];
  real_T delta_data_j[98];
  creal_T e_data_e[40];
  creal_T beta1_data[40];
  int32_T v_data_o[100];
  int32_T b_y_data_b[100];
  int32_T x_data_ao[100];
  int32_T x_data_g[100];
  int32_T b_y_data_e[100];
  int32_T x_data_fi[100];
  int32_T x_data_h[100];
  uint32_T y_data_e[99];
  int32_T y_data_c[99];
  int32_T ilarge_data[99];
  uint32_T y_data_a[99];
  int32_T izero_data[99];
  uint32_T b_y_data_d[99];
  uint32_T c_y_data_a[99];
  uint32_T d_y_data_p[99];
  uint32_T b_y_data_m[99];
  uint32_T c_y_data_o[99];
  uint32_T d_y_data_n[99];
  real_T alpha_data_l[40];
  real_T beta_data_p[40];
  real_T c_data_pt[40];
  real_T work_data[40];
  real_T y_data_f[40];
  real_T tau_data[39];
  real_T y_data_i[24];
  int32_T rscale_data[40];
  real_T A_data_ox[16];
  real_T tmp_data_k[16];
  real_T A_data_i[16];
  real_T y[16];
  real_T b_I[16];
  real_T b_A_data_o[16];
  boolean_T criteria_data[99];
  boolean_T criteria_data_m[99];
  int8_T c_y_data_c[99];
  int8_T d_y_data_f[99];
  int8_T e_y_data_h[99];
  int8_T f_y_data_m[99];
  int8_T g_y_data[99];
  boolean_T criteria_data_a[99];
  boolean_T criteria_data_k[99];
  real_T dv[9];
  real_T dv1[9];
  SL_Bus_Motion_Planning_geometry_msgs_Twist In1_d;// '<S11>/In1'
  SL_Bus_Motion_Planning_geometry_msgs_Twist b_varargout_2_p;
  real_T vehicle_pose_frenet_s[6];
  real_T vehicle_pose_frenet_e[6];
  real_T dv2[6];
  real_T assign_temp_Coefficients[6];
  real_T dv3[6];
  real_T refPathPoints[6];
  real_T interpolatedPts_data[6];
  real_T startPoint_data[6];
  real_T endPoint_data[6];
  cell_wrap_7_Motion_Planning_T Zout[11];
  real_T b_data_bp[5];
  real_T b_coeffVec[5];
  real_T c_data_c[4];
  real_T b_y[4];
  real_T b_B_data[4];
  real_T tau_data_n[4];
  real_T work_data_i[4];
  real_T vn1_data[4];
  real_T vn2_data[4];
  SL_Bus_Motion_Planning_geometry_msgs_Pose2D In1_n;// '<S10>/In1'
  SL_Bus_Motion_Planning_geometry_msgs_Pose2D b_varargout_2_e;
  real_T expl_temp[3];
  real_T expl_temp_m[3];
  real_T endCondition[3];
  real_T endCondition_j[3];
  emxArray_real_T_Motion_Planni_T dx_data_m;
  emxArray_real_T_Motion_Planni_T r_data_m;
  emxArray_real_T_Motion_Planni_T d_data_j;
  emxArray_real_T_Motion_Planni_T l_tmp_data_n;
  emxArray_real_T_Motion_Planni_T dx_data_c;
  emxArray_real_T_Motion_Planni_T r_data_f;
  emxArray_real_T_Motion_Planni_T k_data_p;
  emxArray_real_T_Motion_Planni_T Jtri_data_p;
  emxArray_real_T_Motion_Planni_T Jtri_data_nj;
  emxArray_real_T_Motion_Planni_T Jtri_data_k;
  emxArray_real_T_Motion_Planni_T d_data_n3;
  emxArray_real_T_Motion_Planni_T u_data_j;
  emxArray_real_T_Motion_Planni_T v_data_k;
  emxArray_real_T_Motion_Planni_T x_data_pr;
  emxArray_real_T_Motion_Planni_T v_data_d;
  emxArray_real_T_Motion_Planni_T x_data_g4;
  emxArray_real_T_Motion_Planni_T x_data_c;
  emxArray_creal_T_Motion_Plann_T z_data_m;
  emxArray_creal_T_Motion_Plann_T zorig_data;
  emxArray_boolean_T_Motion_Pla_T criteria_data_f;
  emxArray_boolean_T_Motion_Pla_T criteria_data_a5;
  emxArray_boolean_T_Motion_Pla_T criteria_data_g;
  emxArray_boolean_T_Motion_Pla_T d_data_n;
  emxArray_boolean_T_Motion_Pla_T d_data_d;
  emxArray_boolean_T_Motion_Pla_T criteria_data_o;
  emxArray_boolean_T_Motion_Pla_T criteria_data_gg;
  emxArray_boolean_T_Motion_Pla_T d_data_c;
  emxArray_boolean_T_Motion_Pla_T d_data_cj;
  emxArray_boolean_T_Motion_Pla_T criteria_data_m1;
  int8_T b_I_l[16];
  int32_T jpvt_data[4];
  creal_T a2_data_d;
  creal_T e_data_g;
  creal_T zleft;
  creal_T zright;
  creal_T V_data;
  creal_T z_data_f;
  creal_T alpha1_data;
  creal_T ctemp;
  creal_T ad22;
  creal_T shift;
  creal_T ascale;
  creal_T zleft_i;
  creal_T zright_h;
  real_T waypoints_data_c[2];
  real_T waypoints_data_i[2];
  real_T v[2];
  real_T n[2];
  real_T endCondition_d[2];
  real_T endCondition_jr[2];
  referencePathFrenet_Motion_Pl_T refPath;
  emxArray_s_PX123a95hDt4Ek5AF2_T newTrajFrenet_noCol;
  emxArray_s_PX123a95hDt4Ek5AF2_T newTrajGlobal_noCol;
  trajectoryGeneratorFrenet_Mot_T connector;
  real_T v_n;
  real_T leftEdge;
  real_T delta;
  real_T bGuess;
  real_T x_im;
  real_T x_re;
  real_T lambda;
  real_T lambdac;
  real_T S;
  real_T varargout_1;
  real_T varargout_1_data_o3;
  real_T ar;
  real_T ai;
  real_T br;
  real_T bi;
  real_T brm;
  real_T bim;
  real_T ar_c;
  real_T brm_b;
  real_T bim_e;
  real_T sgnbi;
  real_T d;
  real_T g_re;
  real_T g_im;
  real_T da2_data_re;
  real_T da2_data_im;
  real_T r_data_im;
  real_T ar_d;
  real_T ai_i;
  real_T d_g;
  real_T d1;
  real_T lambda_n;
  real_T lambdac_l;
  real_T S_c;
  real_T varargout_1_n;
  real_T varargout_1_data_p;
  real_T bi_d;
  real_T brm_o;
  real_T bim_j;
  real_T ar_c2;
  real_T ai_h;
  real_T br_d;
  real_T bkj;
  real_T bkj_c;
  real_T u_data_tmp;
  real_T u_data_tmp_p;
  real_T alpha_data_tmp;
  real_T b_gamma_data_tmp;
  real_T b_gamma_data_tmp_p;
  real_T R;
  real_T d2;
  real_T bet;
  real_T q;
  real_T b_gamma;
  real_T d3;
  real_T d4;
  real_T mu;
  real_T k1_data_a;
  real_T d5;
  real_T d6;
  real_T alpha_data_tmp_o;
  real_T b_gamma_data_tmp_j;
  real_T b_gamma_data_tmp_pi;
  real_T i;
  real_T j;
  real_T c;
  real_T re;
  real_T d2_re;
  real_T d2_im;
  real_T d_re;
  real_T d_re_o;
  real_T d_im;
  real_T br_l;
  real_T bi_k;
  real_T brm_j;
  real_T bim_f;
  real_T V_data_re;
  real_T alpha1;
  real_T xnorm;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T i_c;
  real_T j_f;
  real_T c_n;
  real_T s_idx_0;
  real_T s_idx_1;
  real_T c_re;
  real_T c_im;
  real_T br_i;
  real_T re_l;
  real_T im;
  real_T u_im;
  real_T tol;
  real_T y_i;
  real_T temp2;
  real_T smax;
  real_T c_k;
  real_T anrm;
  real_T absxk_f;
  real_T cfromc;
  real_T ctoc;
  real_T cto1;
  real_T mul;
  real_T b_mul;
  real_T anorm;
  real_T scale_a;
  real_T ssq;
  real_T colscale;
  real_T absxk_d;
  real_T t_e;
  real_T ar_e;
  real_T ai_b;
  real_T t1_im;
  real_T shift_im;
  real_T eshift_re;
  real_T eshift_im;
  real_T shift_tmp;
  real_T scale_a0;
  real_T g2;
  real_T f2s;
  real_T di;
  real_T x;
  real_T fs_re;
  real_T fs_im;
  real_T gs_re;
  real_T gs_im;
  real_T a_i;
  real_T kd;
  real_T ndbl;
  real_T apnd;
  real_T cdiff;
  real_T u0;
  real_T u1;
  real_T coeffVec_tmp;
  real_T coeffVec_tmp_f;
  real_T d7;
  real_T re_j;
  real_T y_re;
  real_T y_im;
  real_T work_data_idx_0_re;
  real_T work_data_idx_0_im;
  real_T tmp2_re;
  real_T tmp2_im;
  real_T bi_o;
  real_T brm_f;
  real_T j_re;
  real_T j_im;
  real_T z1_re;
  real_T z1_im;
  real_T e_re;
  real_T e_im;
  real_T z_im;
  real_T ar_o;
  real_T ai_l;
  real_T refTheta;
  real_T dx;
  real_T dy;
  real_T l;
  real_T scale_l;
  real_T absxk_g;
  real_T t_d;
  real_T frenetState_tmp;
  real_T v1x;
  real_T dotV;
  real_T startIdx;
  real_T endIdx;
  real_T x_tmp_data;
  real_T x_tmp_data_d;
  real_T arcLength_data;
  real_T weight_data;
  real_T x_data_j;
  real_T y_data_f1;
  real_T kappa_data;
  real_T b_x;
  real_T a0n_data;
  real_T weight_data_j;
  real_T b_x_tmp;
  int32_T waypoints_size[2];
  int32_T waypoints_size_h[2];
  int32_T Jtri_size[2];
  int32_T varargout_2_size[2];
  int32_T Jtri_size_c[2];
  int32_T varargout_2_size_n[2];
  int32_T A_size[2];
  int32_T b_size[2];
  int32_T y_size[2];
  int32_T A_size_k[2];
  int32_T zy_size[2];
  int32_T z_size[2];
  int32_T c_size[2];
  int32_T tmp_size[2];
  int32_T y_size_a[2];
  int32_T varargin_2_size[2];
  int32_T b_x_size[2];
  int32_T iv[2];
  int32_T T_size[2];
  int32_T A_size_f[2];
  int32_T varargin_2_size_j[2];
  int32_T b_x_size_k[2];
  int32_T SZ[2];
  int32_T b_A_size[2];
  int32_T b_A_size_b[2];
  int32_T At_size[2];
  int32_T interpolatedPts_size[2];
  int32_T x_tmp_size[2];
  int32_T x_tmp_size_h[2];
  int32_T arcLength_size[2];
  s_PX123a95hDt4Ek5AF2hq1G_Moti_T a;
  int32_T b;
  int32_T i_e;
  int32_T loop_ub;
  int32_T loop_ub_h;
  int32_T i_k;
  int32_T h;
  int32_T k;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  int32_T c_size_j;
  int32_T d_size;
  int32_T e_size;
  int32_T e_size_o;
  int32_T initialPosition_contents_size;
  int32_T e_size_c;
  int32_T i_h;
  int32_T waypoints_i;
  int32_T loop_ub_p;
  int32_T c_size_f;
  int32_T waypoints_size_e;
  int32_T maxiter;
  int32_T iter;
  int32_T loop_ub_n;
  int32_T v_size;
  int32_T dx_size;
  int32_T r_size;
  int32_T varargout_1_size;
  int32_T b_size_h;
  int32_T epsx_size_idx_0;
  int32_T d_h;
  int32_T e;
  int32_T loop_ub_f;
  int32_T i1;
  int32_T unusedU0_size;
  int32_T k0_size;
  int32_T k1_size;
  int32_T dk0_dc0_size;
  int32_T dk0_dc1_size;
  int32_T dk1_dc0_size;
  int32_T dk1_dc1_size;
  int32_T x_size;
  int32_T hip_size;
  int32_T x_size_i;
  int32_T y_size_idx_1;
  int32_T y_size_idx_0;
  int32_T i_f;
  int32_T loop_ub_c;
  int32_T z_size_n;
  int32_T phi_size;
  int32_T phi0_size;
  int32_T a_size;
  int32_T da_dphi1_size;
  int32_T loop_ub_he;
  int32_T i2;
  int32_T criteria_size;
  int32_T d_size_k;
  int32_T criteria_size_h;
  int32_T d_size_b;
  int32_T d_size_o;
  int32_T a_size_n;
  int32_T d_size_m;
  int32_T c_size_k;
  int32_T a_size_j;
  int32_T d_size_h;
  int32_T c_size_f2;
  int32_T k_d;
  int32_T loop_ub_l;
  int32_T a2_size;
  int32_T fa1_size;
  int32_T fa2_size;
  int32_T x_size_k;
  int32_T l_tmp_size;
  int32_T a1_size;
  int32_T a1_size_i;
  int32_T a1_size_idx_0;
  int32_T s_size_idx_0;
  int32_T loop_ub_h5;
  int32_T z1_size_idx_0;
  int32_T maxiter_m;
  int32_T iter_g;
  int32_T i3;
  int32_T loop_ub_lf;
  int32_T v_size_m;
  int32_T dx_size_n;
  int32_T r_size_g;
  int32_T epsx_size;
  int32_T epsr_size;
  int32_T d_d;
  int32_T e_m;
  int32_T f;
  int32_T g;
  int32_T loop_ub_ft;
  int32_T unusedU1_size;
  int32_T k0_size_g;
  int32_T k1_size_j;
  int32_T dk0_dc0_size_c;
  int32_T dk0_dc1_size_e;
  int32_T dk1_dc0_size_m;
  int32_T dk1_dc1_size_o;
  int32_T x_size_a;
  int32_T hip_size_j;
  int32_T x_size_g;
  int32_T n_j;
  int32_T loop_ub_e;
  int32_T i4;
  int32_T k_size;
  int32_T tmp_size_j;
  int32_T i5;
  int32_T e_size_idx_0;
  int32_T m2C_size_idx_0;
  int32_T t_size_idx_0;
  int32_T z_size_j;
  int32_T dz_size;
  int32_T loop_ub_g;
  int32_T z1_size_idx_0_o;
  int32_T m;
  int32_T coffset;
  int32_T boffset;
  int32_T Jtri_size_h;
  int32_T Jtri_size_c2;
  int32_T Jtri_size_a;
  int32_T Jtri_size_l;
  int32_T y_size_idx_1_j;
  int32_T d_y_size_idx_1;
  int32_T e_y_size_idx_1;
  int32_T f_y_size_idx_1;
  int32_T g_y_size_idx_1;
  int32_T coffset_i;
  int32_T boffset_m;
  int32_T j_ft;
  int32_T b_k;
  int32_T c_o;
  int32_T loop_ub_tmp;
  int32_T N;
  int32_T c_k_i;
  int32_T b_e;
  int32_T b_j;
  int32_T loop_ub_o;
  int32_T alpha_size;
  int32_T loop_ub_tmp_f;
  int32_T c_data_tmp;
  int32_T acoef;
  int32_T ia;
  int32_T k_m;
  int32_T b_acoef;
  int32_T bcoef;
  int32_T b_k_a;
  int32_T i6;
  int32_T loop_ub_hi;
  int32_T tmp_size_o;
  int32_T i_hn;
  int32_T idx;
  int32_T loop_ub_j;
  int32_T b_size_g;
  int32_T q_size;
  int32_T beta_size;
  int32_T alpha_size_idx_0;
  int32_T b_y_size_idx_1;
  int32_T c_y_size_idx_1;
  int32_T d_y_size_idx_1_j;
  int32_T e_y_size_idx_1_l;
  int32_T f_y_size_idx_1_k;
  int32_T loop_ub_d;
  int32_T i7;
  int32_T tmp_size_n;
  int32_T Jtri_size_j;
  int32_T Jtri_size_a3;
  int32_T i8;
  int32_T f_h;
  int32_T loop_ub_i;
  int32_T u_size;
  int32_T z_size_d;
  int32_T j_b;
  int32_T c_j;
  int32_T loop_ub_hj;
  int32_T i_p;
  int32_T loop_ub_nk;
  int32_T z_size_jz;
  int32_T phi_size_o;
  int32_T phi0_size_b;
  int32_T loop_ub_jk;
  int32_T i9;
  int32_T criteria_size_e;
  int32_T d_size_i;
  int32_T criteria_size_n;
  int32_T d_size_ie;
  int32_T a_size_p;
  int32_T d_size_og;
  int32_T c_size_m;
  int32_T a_size_o;
  int32_T d_size_g;
  int32_T c_size_e;
  int32_T d_size_iz;
  int32_T izero_size_idx_0;
  int32_T loop_ub_gb;
  int32_T z1_size_idx_0_g;
  int32_T N_g;
  int32_T acoef_g;
  int32_T bcoef_c;
  int32_T e_k;
  int32_T i10;
  int32_T loop_ub_k;
  int32_T b_y_size_idx_1_d;
  int32_T c_y_size_idx_1_k;
  int32_T d_y_size_idx_1_p;
  int32_T n_p;
  int32_T b_result;
  int32_T i11;
  int32_T loop_ub_m;
  int32_T u_size_k;
  int32_T v_size_a;
  int32_T result_idx_1;
  int32_T k_f;
  int32_T loop_ub_ci;
  int32_T newNumel;
  int32_T i_j;
  int32_T i12;
  int32_T loop_ub_kb;
  int32_T b_y_size_idx_1_h;
  int32_T c_y_size_idx_1_d;
  int32_T d_y_size_idx_1_j1;
  int32_T i13;
  int32_T loop_ub_np;
  int32_T x_size_j;
  int32_T loop_ub_lc;
  int32_T i14;
  int32_T c_p;
  int32_T f_p;
  int32_T h_l;
  int32_T k_l;
  int32_T m_h;
  int32_T n_c;
  int32_T p;
  int32_T q_g;
  int32_T s;
  int32_T t_el;
  int32_T u;
  int32_T loop_ub_n3;
  int32_T i15;
  int32_T d2_re_tmp;
  int32_T k_fn;
  int32_T loop_ub_nl;
  int32_T newNumel_e;
  int32_T i_b;
  int32_T j_a;
  int32_T i_i;
  int32_T beta1_size;
  int32_T loop_ub_nq;
  int32_T istart;
  int32_T jend;
  int32_T j_fx;
  int32_T i_i4;
  int32_T n_k;
  int32_T im1n;
  int32_T in;
  int32_T loop_ub_b;
  int32_T i_d;
  int32_T alpha1_tmp;
  int32_T knt;
  int32_T b_k_h;
  int32_T c_k_n;
  int32_T kend;
  int32_T k_fj;
  int32_T n_a;
  int32_T b_result_m;
  int32_T i16;
  int32_T loop_ub_gu;
  int32_T v_size_n;
  int32_T x_size_c;
  int32_T result_idx_1_d;
  int32_T i_ky;
  int32_T filled_size_idx_0;
  int32_T loop_ub_tmp_c;
  int32_T A_data_tmp;
  int32_T loop_ub_jd;
  int32_T counts_size_idx_0;
  int32_T counts_data_tmp;
  int32_T loop_ub_tmp_m;
  int32_T i17;
  int32_T loop_ub_ie;
  int32_T x_size_b;
  int32_T x_size_o;
  int32_T trueCount;
  int32_T i_g;
  int32_T loop_ub_ed;
  int32_T nx;
  int32_T idx_i;
  int32_T ii;
  int32_T newNumel_eb;
  int32_T i_is;
  int32_T rankR;
  int32_T maxmn;
  int32_T minmana;
  int32_T c_i;
  int32_T b_c;
  int32_T kAcol;
  int32_T ix;
  int32_T d_k;
  int32_T b_ix;
  int32_T c_ix;
  int32_T e_m5;
  int32_T ijA;
  int32_T ma;
  int32_T minmn;
  int32_T ii_d;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T b_j_j;
  int32_T ix_p;
  int32_T loop_ub_b4;
  int32_T loop_ub_pn;
  int32_T work_size;
  int32_T lastv;
  int32_T lastc;
  int32_T ix_n;
  int32_T ia_c;
  int32_T coltop;
  int32_T b_ia;
  int32_T jA;
  int32_T jy;
  int32_T b_ix_n;
  int32_T ijA_d;
  int32_T k_i;
  int32_T loop_ub_no;
  int32_T rscale_size;
  int32_T loop_ub_tmp_b;
  int32_T j_bt;
  int32_T ifirst;
  int32_T ilastm1;
  int32_T ilastm;
  int32_T iiter;
  int32_T jp1;
  int32_T jiter;
  int32_T nm1;
  int32_T col;
  int32_T b_A_size_idx_0;
  int32_T ctemp_tmp;
  int32_T ctemp_tmp_tmp;
  int32_T shift_tmp_j;
  int32_T count;
  int32_T rescaledir;
  int32_T nx_n;
  int32_T loop_ub_fa;
  int32_T loop_ub_eu;
  int32_T loop_ub_in;
  int32_T loop_ub_a;
  int32_T nm1d2;
  int32_T n_f;
  int32_T k_k;
  int32_T empty_non_axis_sizes;
  int32_T i18;
  int32_T c_c;
  int32_T g_j;
  int32_T j_l;
  int32_T k_a;
  int32_T l_i;
  int32_T m_o;
  int32_T o;
  int32_T p_b;
  int32_T q_a;
  int32_T loop_ub_aq;
  int32_T y_re_tmp;
  int32_T iyLead;
  int32_T m_i;
  int32_T ySize_idx_1;
  int32_T b_k_i;
  int32_T n_l;
  int32_T loop_ub_o5;
  int32_T i19;
  int32_T i_py;
  int32_T y_o;
  int32_T loop_ub_cm;
  int32_T i20;
  int32_T szc;
  int32_T acoef_o;
  int32_T b_k_o;
  int32_T csz_idx_0;
  int32_T k_h;
  int32_T nx_i;
  int32_T b_k_g;
  int32_T loop_ub_c1;
  int32_T loop_ub_ok;
  int32_T k_g;
  int32_T loop_ub_o2;
  int32_T loop_ub_gf;
  int32_T loop_ub_ad;
  int32_T startPoint_size_idx_0;
  int32_T endPoint_size_idx_0;
  int32_T a0n_size_idx_0;
  int32_T b_k_gy;
  int32_T loop_ub_bp;
  int32_T newNumel_k;
  int32_T i_ca;
  uint32_T varargin_1_idx_0;
  uint32_T b_idx_0;
  uint32_T b_idx_0_j;
  cell_wrap_8_Motion_Planning_T tunableEnvironment;
  int8_T csz_idx_0_a;
  int8_T csz_idx_1;
  int8_T csz_idx_0_d;
  int8_T b_idx_0_c;
  int8_T b_idx_0_d;
  int8_T b_idx_0_a;
  boolean_T b_varargout_1;
  boolean_T b_p;
  boolean_T ilascl;
  boolean_T notdone;
  boolean_T failed;
  boolean_T goto60;
  boolean_T goto70;
  boolean_T goto90;
  boolean_T empty_non_axis_sizes_b;
  boolean_T c_g;
  boolean_T d_f;
  boolean_T c_y;
  boolean_T b_y_c;
} B_Motion_Planning_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slroscpp_internal_block_P_T obj; // '<S6>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_i;// '<S9>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_c;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S7>/SourceBlock'
  real_T planning_flag;                // '<S1>/MATLAB Function'
  real_T last_frenet_trajectory[3006]; // '<S1>/MATLAB Function'
  int32_T SFunction_DIMS2[2];          // '<S1>/MATLAB Function1'
} DW_Motion_Planning_T;

// Parameters (default storage)
struct P_Motion_Planning_T_ {
  SL_Bus_Motion_Planning_std_msgs_Float32MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_Motion_Planning_geometry_msgs_PoseArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S12>/Out1'

  SL_Bus_Motion_Planning_geometry_msgs_PoseArray Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                     //  Referenced by: '<S9>/Constant'

  SL_Bus_Motion_Planning_geometry_msgs_Twist Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                          //  Referenced by: '<S11>/Out1'

  SL_Bus_Motion_Planning_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                 //  Referenced by: '<S8>/Constant'

  SL_Bus_Motion_Planning_geometry_msgs_Pose2D Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                           //  Referenced by: '<S10>/Out1'

  SL_Bus_Motion_Planning_geometry_msgs_Pose2D Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                  //  Referenced by: '<S7>/Constant'

  real_T Gain1_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S3>/Gain1'

  uint32_T Constant_Value_a;           // Computed Parameter: Constant_Value_a
                                          //  Referenced by: '<S1>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_Motion_Planning_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Motion_Planning_T Motion_Planning_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_Motion_Planning_T Motion_Planning_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_Motion_Planning_T Motion_Planning_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Motion_Planning_initialize(void);
  extern void Motion_Planning_step(void);
  extern void Motion_Planning_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Motion_Planning_T *const Motion_Planning_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Display' : Unused code path elimination


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
//  '<Root>' : 'Motion_Planning'
//  '<S1>'   : 'Motion_Planning/Planning'
//  '<S2>'   : 'Motion_Planning/Planning/Blank Message'
//  '<S3>'   : 'Motion_Planning/Planning/Degrees to Radians'
//  '<S4>'   : 'Motion_Planning/Planning/MATLAB Function'
//  '<S5>'   : 'Motion_Planning/Planning/MATLAB Function1'
//  '<S6>'   : 'Motion_Planning/Planning/Publish'
//  '<S7>'   : 'Motion_Planning/Planning/Subscribe'
//  '<S8>'   : 'Motion_Planning/Planning/Subscribe1'
//  '<S9>'   : 'Motion_Planning/Planning/Subscribe2'
//  '<S10>'  : 'Motion_Planning/Planning/Subscribe/Enabled Subsystem'
//  '<S11>'  : 'Motion_Planning/Planning/Subscribe1/Enabled Subsystem'
//  '<S12>'  : 'Motion_Planning/Planning/Subscribe2/Enabled Subsystem'

#endif                                 // RTW_HEADER_Motion_Planning_h_

//
// File trailer for generated code.
//
// [EOF]
//
