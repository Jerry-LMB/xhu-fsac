//
// File: Motion_Planning.cpp
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
#include "Motion_Planning.h"
#include "Motion_Planning_private.h"

// Block signals (default storage)
B_Motion_Planning_T Motion_Planning_B;

// Block states (default storage)
DW_Motion_Planning_T Motion_Planning_DW;

// Real-time model
RT_MODEL_Motion_Planning_T Motion_Planning_M_ = RT_MODEL_Motion_Planning_T();
RT_MODEL_Motion_Planning_T *const Motion_Planning_M = &Motion_Planning_M_;

// Forward declaration for local functions
static void Motion_Planning_emxInit_real_T(emxArray_real_T_Motion_Planni_T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_referencePathFren(referencePathFrenet_Motion_Pl_T
  *pStruct);
static void Motion_Planning_emxInit_creal_T(emxArray_creal_T_Motion_Plann_T
  **pEmxArray, int32_T numDimensions);
static void Motio_emxInitStruct_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  *pStruct);
static void Motio_emxInitMatrix_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  pMatrix[11]);
static void Motion_Planning_endpointpadding(const
  emxArray_creal_T_Motion_Plann_T *zcurrent, const
  emxArray_creal_T_Motion_Plann_T *zorig, creal_T *zleft, creal_T *zright);
static void Motio_emxEnsureCapacity_creal_T(emxArray_creal_T_Motion_Plann_T
  *emxArray, int32_T oldNumel);
static void Motion_Planning_diff(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_creal_T_Motion_Plann_T *y);
static void Motion_emxEnsureCapacity_real_T(emxArray_real_T_Motion_Planni_T
  *emxArray, int32_T oldNumel);
static real_T Motion_Planning_rt_hypotd_snf(real_T u0, real_T u1);
static void Motion_Planning_abs(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_real_T_Motion_Planni_T *y);
static void Motion_Planning_angle(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_real_T_Motion_Planni_T *y);
static void Motion_Planning_emxFree_creal_T(emxArray_creal_T_Motion_Plann_T
  **pEmxArray);
static void Motion_Planning_emxFree_real_T(emxArray_real_T_Motion_Planni_T
  **pEmxArray);
static void Motion_Planning_midcurve(const emxArray_creal_T_Motion_Plann_T *Pb,
  const emxArray_creal_T_Motion_Plann_T *Vbd, const
  emxArray_real_T_Motion_Planni_T *Lab, const emxArray_real_T_Motion_Planni_T
  *Lbd, const emxArray_real_T_Motion_Planni_T *Lde, const
  emxArray_real_T_Motion_Planni_T *alpha, const emxArray_real_T_Motion_Planni_T *
  beta, emxArray_creal_T_Motion_Plann_T *Pc);
static void Motion_Planning_insert(const emxArray_creal_T_Motion_Plann_T *zorig,
  emxArray_creal_T_Motion_Plann_T *Zout);
static void Motion_Planning_optimize(const emxArray_creal_T_Motion_Plann_T
  *zcurrent, const creal_T zorig_data[], const int32_T zorig_size[2],
  emxArray_creal_T_Motion_Plann_T *Zout);
static void Motio_emxFreeStruct_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  *pStruct);
static void Motio_emxFreeMatrix_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  pMatrix[11]);
static void Motion_Planning_cloth(const creal_T z_data[], const int32_T *z_size,
  emxArray_real_T_Motion_Planni_T *r, emxArray_real_T_Motion_Planni_T *s);
static void Motion_Planning_dclothoid(const real_T x_data[], const int32_T
  *x_size, const real_T y_data[], emxArray_real_T_Motion_Planni_T *u,
  emxArray_real_T_Motion_Planni_T *v);
static void Motio_emxInitStruct_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pStruct);
static void Motio_emxInitMatrix_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pMatrix);
static boolean_T Motion_Planning_isequal(const real_T varargin_1_data[], const
  int32_T varargin_1_size[2], const real_T varargin_2_data[], const int32_T
  varargin_2_size[2]);
static void Motion_Planning_angle_n(const creal_T x_data[], const int32_T
  *x_size, real_T y_data[], int32_T *y_size);
static void Motion_Planning_exp(emxArray_creal_T_Motion_Plann_T *x);
static void Motion_Planning_power(const emxArray_real_T_Motion_Planni_T *a,
  emxArray_real_T_Motion_Planni_T *y);
static void Motion_Planning_repmat(const real_T a_data[], const int32_T *a_size,
  real_T b_data[], int32_T b_size[2]);
static void Motion_Planning_useConstantDim(const real_T varargin_2_data[], const
  int32_T varargin_2_size[2], real_T varargout_1_data[], int32_T
  varargout_1_size[2]);
static void Motion_Planning_fetchAgrad(const real_T x_data[], const int32_T
  *x_size, const real_T y_data[], real_T a_data[], int32_T *a_size, real_T
  dadx_data[], int32_T *dadx_size, real_T dady_data[], int32_T *dady_size);
static void Motion_Planning_abs_d(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y);
static void Motion_Planning_emxInit_int32_T(emxArray_int32_T_Motion_Plann_T
  **pEmxArray, int32_T numDimensions);
static void Motio_emxEnsureCapacity_int32_T(emxArray_int32_T_Motion_Plann_T
  *emxArray, int32_T oldNumel);
static void Motion_Planning_eml_find(const emxArray_boolean_T_Motion_Pla_T *x,
  emxArray_int32_T_Motion_Plann_T *i);
static void Motion_Planni_emxInit_boolean_T(emxArray_boolean_T_Motion_Pla_T
  **pEmxArray, int32_T numDimensions);
static void Mot_emxEnsureCapacity_boolean_T(emxArray_boolean_T_Motion_Pla_T
  *emxArray, int32_T oldNumel);
static void Motion_Planni_emxFree_boolean_T(emxArray_boolean_T_Motion_Pla_T
  **pEmxArray);
static void Motion_Planning_emxFree_int32_T(emxArray_int32_T_Motion_Plann_T
  **pEmxArray);
static void Motion_Planning_fresnelr(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_creal_T_Motion_Plann_T *z);
static void Motion_Planning_fresnel(const creal_T x_data[], const int32_T
  *x_size, creal_T z_data[], int32_T *z_size);
static real_T Motion_Planning_rt_powd_snf(real_T u0, real_T u1);
static void Motion_Planning_power_l(const creal_T a_data[], const int32_T
  *a_size, creal_T y_data[], int32_T *y_size);
static void Motion_Planning_power_ls(const creal_T a_data[], const int32_T
  *a_size, creal_T y_data[], int32_T *y_size);
static void Motion_Planning_sqrt(creal_T *x);
static void Motion_Planning_fresnelgLargea1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T rsfa_data[], int32_T *rsfa_size, creal_T
  drsfa_data[], int32_T *drsfa_size);
static void Motion_Planning_power_ls3(const real_T a_data[], const int32_T
  *a_size, real_T y_data[], int32_T *y_size);
static void Motion_Planning_fresnelgSmalla1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T z_data[], int32_T *z_size, creal_T dz_data[],
  int32_T *dz_size);
static void Motion_Planning_fresnelg1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  creal_T z_data[], int32_T *z_size, creal_T dz_data[], int32_T *dz_size);
static void Motion_Planning_abs_dw(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size);
static void Motion_Planning_clothoidG1fit2(const creal_T z0_data[], const real_T
  theta0_data[], const int32_T *theta0_size, const creal_T z1_data[], const
  int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size, real_T dk0_dtheta0_data[], int32_T
  *dk0_dtheta0_size, real_T dk0_dtheta1_data[], int32_T *dk0_dtheta1_size,
  real_T dk1_dtheta0_data[], int32_T *dk1_dtheta0_size, real_T dk1_dtheta1_data[],
  int32_T *dk1_dtheta1_size);
static void Motion_Planning_anon_o(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T x_data[], real_T varargout_1_data[], int32_T
  *varargout_1_size, real_T varargout_2_data[], int32_T varargout_2_size[2]);
static void Motion_Planning_mulJt(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T x_data[], const int32_T *x_size, real_T y_data[],
  int32_T *y_size);
static void Motion_Planning_repmat_m(real_T varargin_1, real_T b_data[], int32_T
  *b_size);
static boolean_T Motion_Planning_any(const boolean_T x_data[], const int32_T
  *x_size);
static void Motion_Planning_bsxfun(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size
  [2]);
static void Motion_Plannin_sympentdisolve_l(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T b_size[2],
  real_T x_data[], int32_T x_size[2]);
static void Motion_Planning_mldivide_l5(const real_T A[16], real_T B[4]);
static void Motion_Planni_cycsympentdisolve(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size);
static void Motion_Planning_sympentdisolve(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size);
static void Motion_Plan_AccumArrayScalarVal(const real_T subs_data[], const
  int32_T subs_size[2], real_T val, const int32_T sz[2], real_T A_data[],
  int32_T A_size[2]);
static void Motion_Planning_accumarray(const real_T subs_data[], const int32_T
  subs_size[2], const real_T val_data[], const int32_T *val_size, const real_T
  sz[2], real_T A_data[], int32_T A_size[2]);
static void Motion_Planning_diag(const real_T v_data[], const int32_T v_size[2],
  real_T d_data[], int32_T *d_size);
static void Motion_Planning_diag_a(const real_T v_data[], const int32_T *v_size,
  real_T d_data[], int32_T d_size[2]);
static void Motion_Planning_xswap(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0);
static real_T Motion_Planning_xnrm2(int32_T n, const real_T x_data[], int32_T
  ix0);
static real_T Motion_Planning_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
  int32_T ix0);
static void Motion_Planning_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc, real_T
  work_data[], const int32_T *work_size);
static void Motion_Planning_qrpf(real_T A_data[], int32_T A_size[2], int32_T m,
  int32_T n, real_T tau_data[], int32_T jpvt_data[]);
static void Motion_Planning_mldivide(const real_T A_data[], const int32_T
  A_size[2], const real_T B_data[], const int32_T *B_size, real_T Y_data[],
  int32_T *Y_size);
static void Motion_Pla_solveDampenedHessian(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, const real_T v_data[], const int32_T
  *v_size, real_T dx_data[], int32_T *dx_size);
static void Motion_Planning_mulJtJ(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T x_data[], const int32_T *x_size, real_T y_data[],
  int32_T *y_size);
static real_T Motion_Planning_norm(const real_T x_data[], const int32_T *x_size);
static boolean_T Motion_Planning_anyNonFinite(const real_T x_data[], const
  int32_T x_size[2]);
static void Motion_Planning_xzggbal(creal_T A_data[], const int32_T A_size[2],
  int32_T *ilo, int32_T *ihi, int32_T rscale_data[], int32_T *rscale_size);
static void Motion_Planning_xzlartg(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn, creal_T *r);
static void Motion_Planning_xzgghrd(int32_T ilo, int32_T ihi, creal_T A_data[],
  const int32_T A_size[2]);
static void Motion_Planning_xzlartg_k(const creal_T f, const creal_T g, real_T
  *cs, creal_T *sn);
static void Motion_Planning_xzhgeqz(const creal_T A_data[], const int32_T
  A_size[2], int32_T ilo, int32_T ihi, int32_T *info, creal_T alpha1_data[],
  int32_T *alpha1_size, creal_T beta1_data[], int32_T *beta1_size);
static void Motion_Planning_xzgeev(const real_T A_data[], const int32_T A_size[2],
  int32_T *info, creal_T alpha1_data[], int32_T *alpha1_size, creal_T
  beta1_data[], int32_T *beta1_size);
static void Motion_Planning_xzlarf_a(int32_T m, int32_T n, int32_T iv0, real_T
  tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
static void Motion_Planning_xzlarf_ag(int32_T m, int32_T n, int32_T iv0, real_T
  tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
static void Motion_Planning_xgehrd(real_T a_data[], const int32_T a_size[2]);
static real_T Motion_Planning_xnrm2_pj(int32_T n, const real_T x[3]);
static real_T Motion_Planning_xzlarfg_f(int32_T n, real_T *alpha1, real_T x[3]);
static void Motion_Planning_xdlanv2(real_T *a, real_T *b, real_T *c, real_T *d,
  real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T *sn);
static void Motion_Planning_xrot(int32_T n, real_T x_data[], int32_T ix0,
  int32_T incx, int32_T iy0, int32_T incy, real_T c, real_T s);
static void Motion_Planning_xrot_p(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0, real_T c, real_T s);
static int32_T Motion_Planning_eml_dlahqr(real_T h_data[], const int32_T h_size
  [2]);
static int32_T Motion_Planning_xhseqr(real_T h_data[], int32_T h_size[2]);
static void Motion_Planning_schur(real_T A_data[], const int32_T A_size[2],
  real_T V_data[], int32_T V_size[2]);
static void Motion_Pla_eigHermitianStandard(const real_T A_data[], const int32_T
  A_size[2], real_T V_data[], int32_T *V_size);
static void Motion_Planning_eig(const real_T A_data[], const int32_T A_size[2],
  creal_T V_data[], int32_T *V_size);
static void Motion_Planning_tridisolve(const real_T a_data[], real_T b_data[],
  const real_T c_data[], const real_T d_data[], const int32_T *d_size, real_T
  x_data[], int32_T *x_size);
static void Motion_Planning_cyctridisolve(const real_T a_data[], real_T b_data[],
  const int32_T *b_size, const real_T c_data[], const real_T d_data[], const
  int32_T *d_size, real_T x_data[], int32_T *x_size);
static void Motion_Planning_solveHessian(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T v_data[], const int32_T *v_size, real_T dx_data[],
  int32_T *dx_size);
static real_T Motion_Planning_leastEigvJtJ(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T n);
static void Motion_Planning_fletcher(real_T S, real_T Snew, const real_T
  dx_data[], const int32_T *dx_size, const real_T v_data[], const real_T
  Jtri_data[], const int32_T Jtri_size[2], real_T *lambda, real_T *lambdac);
static void Motion_Planning_LMFsolve_c(const cell_wrap_8_Motion_Planning_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size);
static void Motion_Planning_anon(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T x_data[], real_T varargout_1_data[], int32_T
  *varargout_1_size, real_T varargout_2_data[], int32_T varargout_2_size[2]);
static void Motion_Planning_LMFsolve(const cell_wrap_8_Motion_Planning_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size);
static void Motio_emxFreeStruct_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pStruct);
static void Motio_emxFreeMatrix_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pMatrix);
static void Motion_Plan_clothoidG2fitCourse(const real_T waypoints_data[], const
  int32_T waypoints_size[2], real_T course_data[], int32_T *course_size);
static void Motion_Planning_fetchA(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], real_T a_data[], int32_T *a_size);
static void Motion_Planning_fresnelg1_p(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  creal_T z_data[], int32_T *z_size);
static void Motion_Plannin_clothoidG1fit2_k(const creal_T z0_data[], const
  real_T theta0_data[], const int32_T *theta0_size, const creal_T z1_data[],
  const int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size);
static void Motion_Planning_repmat_mm(const emxArray_creal_T_Motion_Plann_T *a,
  emxArray_creal_T_Motion_Plann_T *b);
static void Motion_Planning_bsxfun_g(const emxArray_creal_T_Motion_Plann_T *a,
  emxArray_creal_T_Motion_Plann_T *c);
static void Motion_Plannin_useConstantDim_j(emxArray_creal_T_Motion_Plann_T
  *varargin_2);
static void Motion_Planning_fresnelgzero(const emxArray_real_T_Motion_Planni_T
  *x, const emxArray_real_T_Motion_Planni_T *dk, const
  emxArray_real_T_Motion_Planni_T *k, const emxArray_real_T_Motion_Planni_T
  *theta, emxArray_creal_T_Motion_Plann_T *z);
static void Motion_Planning_fresnelg2(const emxArray_real_T_Motion_Planni_T *x,
  const emxArray_real_T_Motion_Planni_T *dk, const
  emxArray_real_T_Motion_Planni_T *k, const emxArray_real_T_Motion_Planni_T
  *theta, emxArray_creal_T_Motion_Plann_T *z);
static void Motion_Planning_atan2(const emxArray_real_T_Motion_Planni_T *y,
  const emxArray_real_T_Motion_Planni_T *x, emxArray_real_T_Motion_Planni_T *r);
static void Motion_Planning_gradient(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *varargout_1);
static void FrenetReferencePath_fitClothoid(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T waypoints_data[], const
  int32_T waypoints_size[2], emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y, emxArray_real_T_Motion_Planni_T *theta,
  emxArray_real_T_Motion_Planni_T *kappa, emxArray_real_T_Motion_Planni_T
  *dkappa, emxArray_real_T_Motion_Planni_T *s);
static referencePathFrenet_Motion_Pl_T *referencePathFrenet_referencePa
  (referencePathFrenet_Motion_Pl_T *obj, const real_T varargin_1_data[], const
   int32_T varargin_1_size[2]);
static void Motion_Planning_sum(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y);
static void Motion_Planning_repmat_mmh(const real_T a[6], real_T varargin_1,
  emxArray_real_T_Motion_Planni_T *b);
static real_T Motion_Planning_mod(real_T x);
static void Motion_Planning_wrapToPi(emxArray_real_T_Motion_Planni_T *theta);
static void FrenetReferencePath_getClosestP(const
  emxArray_real_T_Motion_Planni_T *pathPoints, const real_T startIdx_data[],
  const int32_T startIdx_size[2], const real_T endIdx_data[], const int32_T
  endIdx_size[2], const real_T s_data[], const int32_T s_size[2], real_T
  pathPoint_data[], int32_T pathPoint_size[2]);
static void referencePathFrenet_closestPoin(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T point[2], real_T pathPoint
  [6]);
static void Motion_Planning_wrapToPi_k(real_T *theta);
static void referencePathFrenet_global2fren(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T globalState[6], real_T
  frenetState[6]);
static void emxInit_s_PX123a95hDt4Ek5AF2hq1(emxArray_s_PX123a95hDt4Ek5AF2_T
  *pEmxArray);
static void emxInitStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *pStruct);
static void emxExpand_s_PX123a95hDt4Ek5AF2h(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, int32_T fromIndex, int32_T toIndex);
static void emxFreeStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *pStruct);
static void emxTrim_s_PX123a95hDt4Ek5AF2hq1(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, int32_T fromIndex, int32_T toIndex);
static void emxEnsureCapacity_s_PX123a95hDt(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, const int32_T *size, int32_T oldNumel);
static void Motion_Planning_emxCopy_real_T(emxArray_real_T_Motion_Planni_T **dst,
  emxArray_real_T_Motion_Planni_T * const *src);
static void emxCopyStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T *dst,
  const s_PX123a95hDt4Ek5AF2hq1G_Moti_T *src);
static void QuinticQuarticTrajectory_Quinti(const real_T startCondition[3],
  const real_T endCondition[3], real_T variable, real_T obj_Coefficients[6],
  real_T obj_StartCondition[3], real_T obj_EndCondition[3], real_T *obj_Variable);
static void QuinticQuarticTrajectory_evalua(const real_T obj_Coefficients[6],
  const emxArray_real_T_Motion_Planni_T *variable,
  emxArray_real_T_Motion_Planni_T *result);
static void trajectoryGeneratorFrenet_con_h(const real_T f0[6], const real_T f1
  [6], real_T dt, s_PX123a95hDt4Ek5AF2hq1G_Moti_T trajectories_data[], int32_T
  *trajectories_size);
static void FrenetReferencePath_getCloses_e(const
  emxArray_real_T_Motion_Planni_T *pathPoints, const
  emxArray_real_T_Motion_Planni_T *startIdx, const
  emxArray_real_T_Motion_Planni_T *endIdx, const emxArray_real_T_Motion_Planni_T
  *s, emxArray_real_T_Motion_Planni_T *pathPoint);
static void referencePathFrenet_interpolate(const
  referencePathFrenet_Motion_Pl_T *obj, const emxArray_real_T_Motion_Planni_T
  *arcLength, emxArray_real_T_Motion_Planni_T *pathPoint);
static void trajectoryGeneratorFrenet_conne(trajectoryGeneratorFrenet_Mot_T *obj,
  const real_T initialState[6], const real_T terminalState[6],
  s_PX123a95hDt4Ek5AF2hq1G_Moti_T frenetTrajectory_data[], int32_T
  *frenetTrajectory_size, s_PX123a95hDt4Ek5AF2hq1G_Moti_T globalTrajectory_data[],
  int32_T *globalTrajectory_size);
static void emxFree_s_PX123a95hDt4Ek5AF2hq1(emxArray_s_PX123a95hDt4Ek5AF2_T
  *pEmxArray);
static void emxFreeStruct_referencePathFren(referencePathFrenet_Motion_Pl_T
  *pStruct);
int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator)
{
  uint32_T absDenominator;
  uint32_T absNumerator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
    static_cast<uint32_T>(numerator);
  absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
    static_cast<uint32_T>(denominator);
  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  tempAbsQuotient = absNumerator / absDenominator;
  if (quotientNeedsNegation) {
    absNumerator %= absDenominator;
    if (absNumerator > 0U) {
      tempAbsQuotient++;
    }
  }

  return quotientNeedsNegation ? -static_cast<int32_T>(tempAbsQuotient) :
    static_cast<int32_T>(tempAbsQuotient);
}

int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  uint32_T tempAbsQuotient;
  tempAbsQuotient = (numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
                     static_cast<uint32_T>(numerator)) / (denominator < 0 ? ~
    static_cast<uint32_T>(denominator) + 1U : static_cast<uint32_T>(denominator));
  return (numerator < 0) != (denominator < 0) ? -static_cast<int32_T>
    (tempAbsQuotient) : static_cast<int32_T>(tempAbsQuotient);
}

static void Motion_Planning_emxInit_real_T(emxArray_real_T_Motion_Planni_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_Motion_Planni_T *emxArray;
  *pEmxArray = (emxArray_real_T_Motion_Planni_T *)malloc(sizeof
    (emxArray_real_T_Motion_Planni_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (Motion_Planning_B.i_ky = 0; Motion_Planning_B.i_ky < numDimensions;
       Motion_Planning_B.i_ky++) {
    emxArray->size[Motion_Planning_B.i_ky] = 0;
  }
}

static void emxInitStruct_referencePathFren(referencePathFrenet_Motion_Pl_T
  *pStruct)
{
  Motion_Planning_emxInit_real_T(&pStruct->PathPoints, 2);
}

static void Motion_Planning_emxInit_creal_T(emxArray_creal_T_Motion_Plann_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_creal_T_Motion_Plann_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_creal_T_Motion_Plann_T *)malloc(sizeof
    (emxArray_creal_T_Motion_Plann_T));
  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void Motio_emxInitStruct_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  *pStruct)
{
  Motion_Planning_emxInit_creal_T(&pStruct->f1, 2);
}

static void Motio_emxInitMatrix_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  pMatrix[11])
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    Motio_emxInitStruct_cell_wrap_7(&pMatrix[i]);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_endpointpadding(const
  emxArray_creal_T_Motion_Plann_T *zcurrent, const
  emxArray_creal_T_Motion_Plann_T *zorig, creal_T *zleft, creal_T *zright)
{
  real_T zcurrent_im;
  real_T zcurrent_re;
  boolean_T zorig_0;
  zorig_0 = ((zorig->data[zorig->size[1] - 1].re == zorig->data[0].re) &&
             (zorig->data[zorig->size[1] - 1].im == zorig->data[0].im));
  if (zorig_0 && (zorig->size[1] > 2)) {
    *zleft = zcurrent->data[zcurrent->size[1] - 2];
    *zright = zcurrent->data[1];
  } else {
    zcurrent_re = zcurrent->data[0].re - zcurrent->data[1].re;
    zcurrent_im = zcurrent->data[0].im - zcurrent->data[1].im;
    zleft->re = 100.0 * zcurrent_re + zcurrent->data[0].re;
    zleft->im = 100.0 * zcurrent_im + zcurrent->data[0].im;
    zcurrent_re = zcurrent->data[zcurrent->size[1] - 1].re - zcurrent->
      data[zcurrent->size[1] - 2].re;
    zcurrent_im = zcurrent->data[zcurrent->size[1] - 1].im - zcurrent->
      data[zcurrent->size[1] - 2].im;
    zright->re = zcurrent->data[zcurrent->size[1] - 1].re + 100.0 * zcurrent_re;
    zright->im = zcurrent->data[zcurrent->size[1] - 1].im + 100.0 * zcurrent_im;
  }
}

static void Motio_emxEnsureCapacity_creal_T(emxArray_creal_T_Motion_Plann_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  Motion_Planning_B.newNumel_e = 1;
  for (Motion_Planning_B.i_b = 0; Motion_Planning_B.i_b <
       emxArray->numDimensions; Motion_Planning_B.i_b++) {
    Motion_Planning_B.newNumel_e *= emxArray->size[Motion_Planning_B.i_b];
  }

  if (Motion_Planning_B.newNumel_e > emxArray->allocatedSize) {
    Motion_Planning_B.i_b = emxArray->allocatedSize;
    if (Motion_Planning_B.i_b < 16) {
      Motion_Planning_B.i_b = 16;
    }

    while (Motion_Planning_B.i_b < Motion_Planning_B.newNumel_e) {
      if (Motion_Planning_B.i_b > 1073741823) {
        Motion_Planning_B.i_b = MAX_int32_T;
      } else {
        Motion_Planning_B.i_b <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(Motion_Planning_B.i_b), sizeof
                     (creal_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(creal_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (creal_T *)newData;
    emxArray->allocatedSize = Motion_Planning_B.i_b;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_diff(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_creal_T_Motion_Plann_T *y)
{
  Motion_Planning_B.ySize_idx_1 = x->size[1] - 1;
  Motion_Planning_B.iyLead = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = Motion_Planning_B.ySize_idx_1;
  Motio_emxEnsureCapacity_creal_T(y, Motion_Planning_B.iyLead);
  Motion_Planning_B.ySize_idx_1 = 1;
  Motion_Planning_B.iyLead = 0;
  Motion_Planning_B.work_data_idx_0_re = x->data[0].re;
  Motion_Planning_B.work_data_idx_0_im = x->data[0].im;
  Motion_Planning_B.m_i = 2;
  while (Motion_Planning_B.m_i <= x->size[1]) {
    Motion_Planning_B.tmp2_re = Motion_Planning_B.work_data_idx_0_re;
    Motion_Planning_B.tmp2_im = Motion_Planning_B.work_data_idx_0_im;
    Motion_Planning_B.work_data_idx_0_re = x->data[Motion_Planning_B.ySize_idx_1]
      .re;
    Motion_Planning_B.work_data_idx_0_im = x->data[Motion_Planning_B.ySize_idx_1]
      .im;
    y->data[Motion_Planning_B.iyLead].re = x->data[Motion_Planning_B.ySize_idx_1]
      .re - Motion_Planning_B.tmp2_re;
    y->data[Motion_Planning_B.iyLead].im = x->data[Motion_Planning_B.ySize_idx_1]
      .im - Motion_Planning_B.tmp2_im;
    Motion_Planning_B.ySize_idx_1++;
    Motion_Planning_B.iyLead++;
    Motion_Planning_B.m_i++;
  }
}

static void Motion_emxEnsureCapacity_real_T(emxArray_real_T_Motion_Planni_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  Motion_Planning_B.newNumel = 1;
  for (Motion_Planning_B.i_j = 0; Motion_Planning_B.i_j <
       emxArray->numDimensions; Motion_Planning_B.i_j++) {
    Motion_Planning_B.newNumel *= emxArray->size[Motion_Planning_B.i_j];
  }

  if (Motion_Planning_B.newNumel > emxArray->allocatedSize) {
    Motion_Planning_B.i_j = emxArray->allocatedSize;
    if (Motion_Planning_B.i_j < 16) {
      Motion_Planning_B.i_j = 16;
    }

    while (Motion_Planning_B.i_j < Motion_Planning_B.newNumel) {
      if (Motion_Planning_B.i_j > 1073741823) {
        Motion_Planning_B.i_j = MAX_int32_T;
      } else {
        Motion_Planning_B.i_j <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(Motion_Planning_B.i_j), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = Motion_Planning_B.i_j;
    emxArray->canFreeData = true;
  }
}

static real_T Motion_Planning_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  Motion_Planning_B.a_i = fabs(u0);
  y = fabs(u1);
  if (Motion_Planning_B.a_i < y) {
    Motion_Planning_B.a_i /= y;
    y *= sqrt(Motion_Planning_B.a_i * Motion_Planning_B.a_i + 1.0);
  } else if (Motion_Planning_B.a_i > y) {
    y /= Motion_Planning_B.a_i;
    y = sqrt(y * y + 1.0) * Motion_Planning_B.a_i;
  } else {
    if (!rtIsNaN(y)) {
      y = Motion_Planning_B.a_i * 1.4142135623730951;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_abs(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_real_T_Motion_Planni_T *y)
{
  int32_T k;
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  Motion_emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = Motion_Planning_rt_hypotd_snf(x->data[k].re, x->data[k].im);
  }
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

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_angle(const emxArray_creal_T_Motion_Plann_T *x,
  emxArray_real_T_Motion_Planni_T *y)
{
  int32_T k;
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  Motion_emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = rt_atan2d_snf(x->data[k].im, x->data[k].re);
  }
}

static void Motion_Planning_emxFree_creal_T(emxArray_creal_T_Motion_Plann_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_creal_T_Motion_Plann_T *)NULL) {
    if (((*pEmxArray)->data != (creal_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_creal_T_Motion_Plann_T *)NULL;
  }
}

static void Motion_Planning_emxFree_real_T(emxArray_real_T_Motion_Planni_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_Motion_Planni_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_Motion_Planni_T *)NULL;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_midcurve(const emxArray_creal_T_Motion_Plann_T *Pb,
  const emxArray_creal_T_Motion_Plann_T *Vbd, const
  emxArray_real_T_Motion_Planni_T *Lab, const emxArray_real_T_Motion_Planni_T
  *Lbd, const emxArray_real_T_Motion_Planni_T *Lde, const
  emxArray_real_T_Motion_Planni_T *alpha, const emxArray_real_T_Motion_Planni_T *
  beta, emxArray_creal_T_Motion_Plann_T *Pc)
{
  emxArray_real_T_Motion_Planni_T *a;
  emxArray_real_T_Motion_Planni_T *b;
  emxArray_real_T_Motion_Planni_T *b_b;
  Motion_Planning_emxInit_real_T(&a, 2);
  Motion_Planning_B.k_fn = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = Lde->size[1];
  Motion_emxEnsureCapacity_real_T(a, Motion_Planning_B.k_fn);
  Motion_Planning_B.loop_ub_nl = Lde->size[0] * Lde->size[1] - 1;
  for (Motion_Planning_B.k_fn = 0; Motion_Planning_B.k_fn <=
       Motion_Planning_B.loop_ub_nl; Motion_Planning_B.k_fn++) {
    a->data[Motion_Planning_B.k_fn] = 2.0 * Lde->data[Motion_Planning_B.k_fn] +
      Lbd->data[Motion_Planning_B.k_fn];
  }

  Motion_Planning_emxInit_real_T(&b, 2);
  Motion_Planning_B.k_fn = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = Lab->size[1];
  Motion_emxEnsureCapacity_real_T(b, Motion_Planning_B.k_fn);
  Motion_Planning_B.loop_ub_nl = Lab->size[0] * Lab->size[1] - 1;
  for (Motion_Planning_B.k_fn = 0; Motion_Planning_B.k_fn <=
       Motion_Planning_B.loop_ub_nl; Motion_Planning_B.k_fn++) {
    b->data[Motion_Planning_B.k_fn] = 2.0 * Lab->data[Motion_Planning_B.k_fn] +
      Lbd->data[Motion_Planning_B.k_fn];
  }

  Motion_Planning_B.k_fn = Lbd->size[0] * Lbd->size[1];
  Motion_Planning_B.loop_ub_nl = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = Lbd->size[1];
  Motion_emxEnsureCapacity_real_T(b, Motion_Planning_B.loop_ub_nl);
  Motion_Planning_B.loop_ub_nl = Motion_Planning_B.k_fn - 1;
  for (Motion_Planning_B.k_fn = 0; Motion_Planning_B.k_fn <=
       Motion_Planning_B.loop_ub_nl; Motion_Planning_B.k_fn++) {
    b->data[Motion_Planning_B.k_fn] = (alpha->data[Motion_Planning_B.k_fn] *
      a->data[Motion_Planning_B.k_fn] + beta->data[Motion_Planning_B.k_fn] *
      b->data[Motion_Planning_B.k_fn]) * Lbd->data[Motion_Planning_B.k_fn] /
      (a->data[Motion_Planning_B.k_fn] * b->data[Motion_Planning_B.k_fn] * 2.0 +
       (a->data[Motion_Planning_B.k_fn] + b->data[Motion_Planning_B.k_fn]) *
       Lbd->data[Motion_Planning_B.k_fn]);
  }

  Motion_Planning_emxFree_real_T(&a);
  Motion_Planning_emxInit_real_T(&b_b, 2);
  Motion_Planning_B.k_fn = b_b->size[0] * b_b->size[1];
  b_b->size[0] = 1;
  b_b->size[1] = b->size[1];
  Motion_emxEnsureCapacity_real_T(b_b, Motion_Planning_B.k_fn);
  Motion_Planning_B.loop_ub_nl = b->size[0] * b->size[1] - 1;
  for (Motion_Planning_B.k_fn = 0; Motion_Planning_B.k_fn <=
       Motion_Planning_B.loop_ub_nl; Motion_Planning_B.k_fn++) {
    b_b->data[Motion_Planning_B.k_fn] = b->data[Motion_Planning_B.k_fn];
  }

  Motion_Planning_B.k_fn = 0;
  while (Motion_Planning_B.k_fn <= b->size[1] - 1) {
    b_b->data[Motion_Planning_B.k_fn] = tan(b_b->data[Motion_Planning_B.k_fn]);
    Motion_Planning_B.k_fn++;
  }

  Motion_Planning_emxFree_real_T(&b);
  Motion_Planning_B.k_fn = Pc->size[0] * Pc->size[1];
  Pc->size[0] = 1;
  Pc->size[1] = Pb->size[1];
  Motio_emxEnsureCapacity_creal_T(Pc, Motion_Planning_B.k_fn);
  Motion_Planning_B.loop_ub_nl = Pb->size[0] * Pb->size[1] - 1;
  for (Motion_Planning_B.k_fn = 0; Motion_Planning_B.k_fn <=
       Motion_Planning_B.loop_ub_nl; Motion_Planning_B.k_fn++) {
    Motion_Planning_B.d_re_o = 0.0 * b_b->data[Motion_Planning_B.k_fn] + 1.0;
    Motion_Planning_B.d_im = b_b->data[Motion_Planning_B.k_fn];
    Motion_Planning_B.d_re = Motion_Planning_B.d_re_o * Vbd->
      data[Motion_Planning_B.k_fn].re - Motion_Planning_B.d_im * Vbd->
      data[Motion_Planning_B.k_fn].im;
    Motion_Planning_B.d_im = Motion_Planning_B.d_re_o * Vbd->
      data[Motion_Planning_B.k_fn].im + Motion_Planning_B.d_im * Vbd->
      data[Motion_Planning_B.k_fn].re;
    if (Motion_Planning_B.d_im == 0.0) {
      Motion_Planning_B.d_re_o = Motion_Planning_B.d_re / 2.0;
      Motion_Planning_B.d_im = 0.0;
    } else if (Motion_Planning_B.d_re == 0.0) {
      Motion_Planning_B.d_re_o = 0.0;
      Motion_Planning_B.d_im /= 2.0;
    } else {
      Motion_Planning_B.d_re_o = Motion_Planning_B.d_re / 2.0;
      Motion_Planning_B.d_im /= 2.0;
    }

    Pc->data[Motion_Planning_B.k_fn].re = Pb->data[Motion_Planning_B.k_fn].re +
      Motion_Planning_B.d_re_o;
    Pc->data[Motion_Planning_B.k_fn].im = Pb->data[Motion_Planning_B.k_fn].im +
      Motion_Planning_B.d_im;
  }

  Motion_Planning_emxFree_real_T(&b_b);
  Motion_Planning_B.k_fn = 0;
  while (Motion_Planning_B.k_fn <= Lbd->size[1] - 1) {
    if (Lbd->data[Motion_Planning_B.k_fn] == 0.0) {
      Pc->data[Motion_Planning_B.k_fn] = Pb->data[Motion_Planning_B.k_fn];
    }

    Motion_Planning_B.k_fn++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_insert(const emxArray_creal_T_Motion_Plann_T *zorig,
  emxArray_creal_T_Motion_Plann_T *Zout)
{
  emxArray_creal_T_Motion_Plann_T *cb;
  emxArray_creal_T_Motion_Plann_T *y;
  emxArray_creal_T_Motion_Plann_T *y_0;
  emxArray_creal_T_Motion_Plann_T *y_1;
  emxArray_creal_T_Motion_Plann_T *z;
  emxArray_creal_T_Motion_Plann_T *z_0;
  emxArray_real_T_Motion_Planni_T *ab;
  emxArray_real_T_Motion_Planni_T *ab_0;
  emxArray_real_T_Motion_Planni_T *ab_1;
  emxArray_real_T_Motion_Planni_T *ab_2;
  emxArray_real_T_Motion_Planni_T *bb;
  emxArray_real_T_Motion_Planni_T *bb_0;
  emxArray_real_T_Motion_Planni_T *bb_1;
  Motion_Planning_emxInit_creal_T(&z, 2);
  Motion_Planning_endpointpadding(zorig, zorig, &Motion_Planning_B.zleft_i,
    &Motion_Planning_B.zright_h);
  Motion_Planning_B.q_a = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = zorig->size[1] + 2;
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.q_a);
  Motion_Planning_B.loop_ub_aq = zorig->size[0] * zorig->size[1] - 1;
  z->data[0] = Motion_Planning_B.zleft_i;
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <=
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    z->data[Motion_Planning_B.q_a + 1] = zorig->data[Motion_Planning_B.q_a];
  }

  Motion_Planning_emxInit_creal_T(&y, 2);
  Motion_Planning_emxInit_real_T(&ab, 2);
  z->data[Motion_Planning_B.loop_ub_aq + 2] = Motion_Planning_B.zright_h;
  Motion_Planning_diff(z, y);
  Motion_Planning_abs(y, ab);
  if (2 > y->size[1]) {
    Motion_Planning_B.c_c = 0;
    Motion_Planning_B.loop_ub_aq = 0;
  } else {
    Motion_Planning_B.c_c = 1;
    Motion_Planning_B.loop_ub_aq = y->size[1];
  }

  Motion_Planning_emxInit_creal_T(&y_0, 2);
  Motion_Planning_B.q_a = y_0->size[0] * y_0->size[1];
  y_0->size[0] = 1;
  Motion_Planning_B.loop_ub_aq -= Motion_Planning_B.c_c;
  y_0->size[1] = Motion_Planning_B.loop_ub_aq;
  Motio_emxEnsureCapacity_creal_T(y_0, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    Motion_Planning_B.y_re_tmp = Motion_Planning_B.c_c + Motion_Planning_B.q_a;
    Motion_Planning_B.y_re = y->data[Motion_Planning_B.y_re_tmp].re;
    Motion_Planning_B.y_im = -y->data[Motion_Planning_B.y_re_tmp].im;
    Motion_Planning_B.re_j = Motion_Planning_B.y_re * y->
      data[Motion_Planning_B.q_a].re - Motion_Planning_B.y_im * y->
      data[Motion_Planning_B.q_a].im;
    Motion_Planning_B.y_re = Motion_Planning_B.y_re * y->
      data[Motion_Planning_B.q_a].im + Motion_Planning_B.y_im * y->
      data[Motion_Planning_B.q_a].re;
    y_0->data[Motion_Planning_B.q_a].re = Motion_Planning_B.re_j;
    y_0->data[Motion_Planning_B.q_a].im = Motion_Planning_B.y_re;
  }

  Motion_Planning_emxInit_real_T(&bb, 2);
  Motion_Planning_angle(y_0, bb);
  Motion_Planning_emxFree_creal_T(&y_0);
  if (2 > z->size[1] - 2) {
    Motion_Planning_B.c_c = 0;
    Motion_Planning_B.loop_ub_aq = 0;
  } else {
    Motion_Planning_B.c_c = 1;
    Motion_Planning_B.loop_ub_aq = z->size[1] - 2;
  }

  if (2 > y->size[1] - 1) {
    Motion_Planning_B.y_re_tmp = 0;
    Motion_Planning_B.g_j = 0;
  } else {
    Motion_Planning_B.y_re_tmp = 1;
    Motion_Planning_B.g_j = y->size[1] - 1;
  }

  if (2 > ab->size[1] - 1) {
    Motion_Planning_B.k_a = 0;
    Motion_Planning_B.j_l = 0;
  } else {
    Motion_Planning_B.k_a = 1;
    Motion_Planning_B.j_l = ab->size[1] - 1;
  }

  if (3 > ab->size[1]) {
    Motion_Planning_B.m_o = 0;
    Motion_Planning_B.l_i = 0;
  } else {
    Motion_Planning_B.m_o = 2;
    Motion_Planning_B.l_i = ab->size[1];
  }

  if (2 > bb->size[1]) {
    Motion_Planning_B.p_b = 0;
    Motion_Planning_B.o = 0;
  } else {
    Motion_Planning_B.p_b = 1;
    Motion_Planning_B.o = bb->size[1];
  }

  Motion_Planning_emxInit_creal_T(&z_0, 2);
  Motion_Planning_B.q_a = z_0->size[0] * z_0->size[1];
  z_0->size[0] = 1;
  Motion_Planning_B.loop_ub_aq -= Motion_Planning_B.c_c;
  z_0->size[1] = Motion_Planning_B.loop_ub_aq;
  Motio_emxEnsureCapacity_creal_T(z_0, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    z_0->data[Motion_Planning_B.q_a] = z->data[Motion_Planning_B.c_c +
      Motion_Planning_B.q_a];
  }

  Motion_Planning_emxFree_creal_T(&z);
  Motion_Planning_emxInit_creal_T(&y_1, 2);
  Motion_Planning_B.q_a = y_1->size[0] * y_1->size[1];
  y_1->size[0] = 1;
  Motion_Planning_B.loop_ub_aq = Motion_Planning_B.g_j -
    Motion_Planning_B.y_re_tmp;
  y_1->size[1] = Motion_Planning_B.loop_ub_aq;
  Motio_emxEnsureCapacity_creal_T(y_1, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    y_1->data[Motion_Planning_B.q_a] = y->data[Motion_Planning_B.y_re_tmp +
      Motion_Planning_B.q_a];
  }

  Motion_Planning_emxFree_creal_T(&y);
  Motion_Planning_emxInit_real_T(&ab_0, 2);
  if (1 > ab->size[1] - 2) {
    Motion_Planning_B.loop_ub_aq = -1;
  } else {
    Motion_Planning_B.loop_ub_aq = ab->size[1] - 3;
  }

  Motion_Planning_B.q_a = ab_0->size[0] * ab_0->size[1];
  ab_0->size[0] = 1;
  ab_0->size[1] = Motion_Planning_B.loop_ub_aq + 1;
  Motion_emxEnsureCapacity_real_T(ab_0, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <=
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    ab_0->data[Motion_Planning_B.q_a] = ab->data[Motion_Planning_B.q_a];
  }

  Motion_Planning_emxInit_real_T(&ab_1, 2);
  Motion_Planning_B.q_a = ab_1->size[0] * ab_1->size[1];
  ab_1->size[0] = 1;
  Motion_Planning_B.loop_ub_aq = Motion_Planning_B.j_l - Motion_Planning_B.k_a;
  ab_1->size[1] = Motion_Planning_B.loop_ub_aq;
  Motion_emxEnsureCapacity_real_T(ab_1, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    ab_1->data[Motion_Planning_B.q_a] = ab->data[Motion_Planning_B.k_a +
      Motion_Planning_B.q_a];
  }

  Motion_Planning_emxInit_real_T(&ab_2, 2);
  Motion_Planning_B.q_a = ab_2->size[0] * ab_2->size[1];
  ab_2->size[0] = 1;
  Motion_Planning_B.loop_ub_aq = Motion_Planning_B.l_i - Motion_Planning_B.m_o;
  ab_2->size[1] = Motion_Planning_B.loop_ub_aq;
  Motion_emxEnsureCapacity_real_T(ab_2, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    ab_2->data[Motion_Planning_B.q_a] = ab->data[Motion_Planning_B.m_o +
      Motion_Planning_B.q_a];
  }

  Motion_Planning_emxFree_real_T(&ab);
  Motion_Planning_emxInit_real_T(&bb_0, 2);
  if (1 > bb->size[1] - 1) {
    Motion_Planning_B.loop_ub_aq = -1;
  } else {
    Motion_Planning_B.loop_ub_aq = bb->size[1] - 2;
  }

  Motion_Planning_B.q_a = bb_0->size[0] * bb_0->size[1];
  bb_0->size[0] = 1;
  bb_0->size[1] = Motion_Planning_B.loop_ub_aq + 1;
  Motion_emxEnsureCapacity_real_T(bb_0, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <=
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    bb_0->data[Motion_Planning_B.q_a] = bb->data[Motion_Planning_B.q_a];
  }

  Motion_Planning_emxInit_real_T(&bb_1, 2);
  Motion_Planning_B.q_a = bb_1->size[0] * bb_1->size[1];
  bb_1->size[0] = 1;
  Motion_Planning_B.loop_ub_aq = Motion_Planning_B.o - Motion_Planning_B.p_b;
  bb_1->size[1] = Motion_Planning_B.loop_ub_aq;
  Motion_emxEnsureCapacity_real_T(bb_1, Motion_Planning_B.q_a);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    bb_1->data[Motion_Planning_B.q_a] = bb->data[Motion_Planning_B.p_b +
      Motion_Planning_B.q_a];
  }

  Motion_Planning_emxFree_real_T(&bb);
  Motion_Planning_emxInit_creal_T(&cb, 2);
  Motion_Planning_midcurve(z_0, y_1, ab_0, ab_1, ab_2, bb_0, bb_1, cb);
  Motion_Planning_B.q_a = Zout->size[0] * Zout->size[1];
  Zout->size[0] = 1;
  Zout->size[1] = (zorig->size[1] << 1) - 1;
  Motio_emxEnsureCapacity_creal_T(Zout, Motion_Planning_B.q_a);
  Motion_Planning_B.loop_ub_aq = (zorig->size[1] << 1) - 2;
  Motion_Planning_emxFree_real_T(&bb_1);
  Motion_Planning_emxFree_real_T(&bb_0);
  Motion_Planning_emxFree_real_T(&ab_2);
  Motion_Planning_emxFree_real_T(&ab_1);
  Motion_Planning_emxFree_real_T(&ab_0);
  Motion_Planning_emxFree_creal_T(&y_1);
  Motion_Planning_emxFree_creal_T(&z_0);
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <=
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    Zout->data[Motion_Planning_B.q_a].re = 0.0;
    Zout->data[Motion_Planning_B.q_a].im = 0.0;
  }

  Motion_Planning_B.q_a = (zorig->size[1] << 1) - 2;
  if (1 > Motion_Planning_B.q_a + 1) {
    Motion_Planning_B.c_c = 1;
  } else {
    Motion_Planning_B.c_c = 2;
  }

  Motion_Planning_B.loop_ub_aq = zorig->size[1];
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    Zout->data[Motion_Planning_B.c_c * Motion_Planning_B.q_a] = zorig->
      data[Motion_Planning_B.q_a];
  }

  Motion_Planning_B.q_a = cb->size[1] << 1;
  if (2 > Motion_Planning_B.q_a + 1) {
    Motion_Planning_B.c_c = 0;
    Motion_Planning_B.y_re_tmp = 1;
  } else {
    Motion_Planning_B.c_c = 1;
    Motion_Planning_B.y_re_tmp = 2;
  }

  Motion_Planning_B.loop_ub_aq = cb->size[1];
  for (Motion_Planning_B.q_a = 0; Motion_Planning_B.q_a <
       Motion_Planning_B.loop_ub_aq; Motion_Planning_B.q_a++) {
    Zout->data[Motion_Planning_B.c_c + Motion_Planning_B.y_re_tmp *
      Motion_Planning_B.q_a] = cb->data[Motion_Planning_B.q_a];
  }

  Motion_Planning_emxFree_creal_T(&cb);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_optimize(const emxArray_creal_T_Motion_Plann_T
  *zcurrent, const creal_T zorig_data[], const int32_T zorig_size[2],
  emxArray_creal_T_Motion_Plann_T *Zout)
{
  emxArray_creal_T_Motion_Plann_T *d1;
  emxArray_creal_T_Motion_Plann_T *d1_0;
  emxArray_creal_T_Motion_Plann_T *d2;
  emxArray_creal_T_Motion_Plann_T *d2_0;
  emxArray_creal_T_Motion_Plann_T *d2_1;
  emxArray_creal_T_Motion_Plann_T *tmp_1;
  emxArray_creal_T_Motion_Plann_T *z;
  emxArray_creal_T_Motion_Plann_T *zcurrent_0;
  emxArray_real_T_Motion_Planni_T *l1;
  emxArray_real_T_Motion_Planni_T *l1_0;
  emxArray_real_T_Motion_Planni_T *l1_1;
  emxArray_real_T_Motion_Planni_T *l1_2;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *tmp_0;
  Motion_Planning_emxInit_creal_T(&z, 2);
  Motion_Planning_B.zorig_data.data = const_cast<creal_T *>(&zorig_data[0]);
  Motion_Planning_B.zorig_data.size = const_cast<int32_T *>(&zorig_size[0]);
  Motion_Planning_B.zorig_data.allocatedSize = -1;
  Motion_Planning_B.zorig_data.numDimensions = 2;
  Motion_Planning_B.zorig_data.canFreeData = false;
  Motion_Planning_endpointpadding(zcurrent, &Motion_Planning_B.zorig_data,
    &Motion_Planning_B.zleft, &Motion_Planning_B.zright);
  Motion_Planning_B.i15 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = zcurrent->size[1] + 2;
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i15);
  Motion_Planning_B.loop_ub_n3 = zcurrent->size[0] * zcurrent->size[1] - 1;
  z->data[0] = Motion_Planning_B.zleft;
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <=
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    z->data[Motion_Planning_B.i15 + 1] = zcurrent->data[Motion_Planning_B.i15];
  }

  Motion_Planning_emxInit_creal_T(&d1, 2);
  Motion_Planning_emxInit_real_T(&l1, 2);
  z->data[Motion_Planning_B.loop_ub_n3 + 2] = Motion_Planning_B.zright;
  Motion_Planning_diff(z, d1);
  Motion_Planning_abs(d1, l1);
  if (3 > z->size[1]) {
    Motion_Planning_B.c_p = 0;
    Motion_Planning_B.loop_ub_n3 = 0;
  } else {
    Motion_Planning_B.c_p = 2;
    Motion_Planning_B.loop_ub_n3 = z->size[1];
  }

  Motion_Planning_emxInit_creal_T(&d2, 2);
  Motion_Planning_B.i15 = d2->size[0] * d2->size[1];
  d2->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 -= Motion_Planning_B.c_p;
  d2->size[1] = Motion_Planning_B.loop_ub_n3;
  Motio_emxEnsureCapacity_creal_T(d2, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    Motion_Planning_B.k_l = Motion_Planning_B.c_p + Motion_Planning_B.i15;
    d2->data[Motion_Planning_B.i15].re = z->data[Motion_Planning_B.k_l].re -
      z->data[Motion_Planning_B.i15].re;
    d2->data[Motion_Planning_B.i15].im = z->data[Motion_Planning_B.k_l].im -
      z->data[Motion_Planning_B.i15].im;
  }

  Motion_Planning_emxFree_creal_T(&z);
  if (2 > d2->size[1] - 1) {
    Motion_Planning_B.f_p = 0;
    Motion_Planning_B.loop_ub_n3 = 0;
  } else {
    Motion_Planning_B.f_p = 1;
    Motion_Planning_B.loop_ub_n3 = d2->size[1] - 1;
  }

  if (4 > d1->size[1]) {
    Motion_Planning_B.c_p = 0;
    Motion_Planning_B.h_l = 0;
  } else {
    Motion_Planning_B.c_p = 3;
    Motion_Planning_B.h_l = d1->size[1];
  }

  if (2 > d2->size[1] - 1) {
    Motion_Planning_B.k_l = 0;
    Motion_Planning_B.n_c = 0;
    Motion_Planning_B.m_h = 0;
  } else {
    Motion_Planning_B.k_l = 1;
    Motion_Planning_B.n_c = 1;
    Motion_Planning_B.m_h = d2->size[1] - 1;
  }

  if (2 > l1->size[1] - 2) {
    Motion_Planning_B.q_g = 0;
    Motion_Planning_B.p = 0;
  } else {
    Motion_Planning_B.q_g = 1;
    Motion_Planning_B.p = l1->size[1] - 2;
  }

  if (3 > l1->size[1] - 1) {
    Motion_Planning_B.s = 0;
  } else {
    Motion_Planning_B.s = 2;
  }

  if (4 > l1->size[1]) {
    Motion_Planning_B.u = 0;
    Motion_Planning_B.t_el = 0;
  } else {
    Motion_Planning_B.u = 3;
    Motion_Planning_B.t_el = l1->size[1];
  }

  Motion_Planning_emxInit_creal_T(&d2_0, 2);
  Motion_Planning_B.i15 = d2_0->size[0] * d2_0->size[1];
  d2_0->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 -= Motion_Planning_B.f_p;
  d2_0->size[1] = Motion_Planning_B.loop_ub_n3;
  Motio_emxEnsureCapacity_creal_T(d2_0, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    Motion_Planning_B.d2_re_tmp = Motion_Planning_B.f_p + Motion_Planning_B.i15;
    Motion_Planning_B.d2_re = d2->data[Motion_Planning_B.d2_re_tmp].re;
    Motion_Planning_B.d2_im = -d2->data[Motion_Planning_B.d2_re_tmp].im;
    Motion_Planning_B.re = Motion_Planning_B.d2_re * d1->
      data[Motion_Planning_B.i15].re - Motion_Planning_B.d2_im * d1->
      data[Motion_Planning_B.i15].im;
    Motion_Planning_B.d2_re = Motion_Planning_B.d2_re * d1->
      data[Motion_Planning_B.i15].im + Motion_Planning_B.d2_im * d1->
      data[Motion_Planning_B.i15].re;
    d2_0->data[Motion_Planning_B.i15].re = Motion_Planning_B.re;
    d2_0->data[Motion_Planning_B.i15].im = Motion_Planning_B.d2_re;
  }

  Motion_Planning_emxInit_real_T(&tmp, 2);
  Motion_Planning_emxInit_creal_T(&d1_0, 2);
  Motion_Planning_angle(d2_0, tmp);
  Motion_Planning_B.i15 = d1_0->size[0] * d1_0->size[1];
  d1_0->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 = Motion_Planning_B.h_l - Motion_Planning_B.c_p;
  d1_0->size[1] = Motion_Planning_B.loop_ub_n3;
  Motio_emxEnsureCapacity_creal_T(d1_0, Motion_Planning_B.i15);
  Motion_Planning_emxFree_creal_T(&d2_0);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    Motion_Planning_B.f_p = Motion_Planning_B.c_p + Motion_Planning_B.i15;
    Motion_Planning_B.d2_re = d1->data[Motion_Planning_B.f_p].re;
    Motion_Planning_B.d2_im = -d1->data[Motion_Planning_B.f_p].im;
    Motion_Planning_B.f_p = Motion_Planning_B.k_l + Motion_Planning_B.i15;
    Motion_Planning_B.re = d2->data[Motion_Planning_B.f_p].re *
      Motion_Planning_B.d2_re - d2->data[Motion_Planning_B.f_p].im *
      Motion_Planning_B.d2_im;
    Motion_Planning_B.d2_re = d2->data[Motion_Planning_B.f_p].im *
      Motion_Planning_B.d2_re + d2->data[Motion_Planning_B.f_p].re *
      Motion_Planning_B.d2_im;
    d1_0->data[Motion_Planning_B.i15].re = Motion_Planning_B.re;
    d1_0->data[Motion_Planning_B.i15].im = Motion_Planning_B.d2_re;
  }

  Motion_Planning_emxFree_creal_T(&d1);
  Motion_Planning_emxInit_real_T(&tmp_0, 2);
  Motion_Planning_emxInit_creal_T(&zcurrent_0, 2);
  Motion_Planning_angle(d1_0, tmp_0);
  if (1 > zcurrent->size[1] - 2) {
    Motion_Planning_B.loop_ub_n3 = -1;
  } else {
    Motion_Planning_B.loop_ub_n3 = zcurrent->size[1] - 3;
  }

  Motion_Planning_B.i15 = zcurrent_0->size[0] * zcurrent_0->size[1];
  zcurrent_0->size[0] = 1;
  zcurrent_0->size[1] = Motion_Planning_B.loop_ub_n3 + 1;
  Motio_emxEnsureCapacity_creal_T(zcurrent_0, Motion_Planning_B.i15);
  Motion_Planning_emxFree_creal_T(&d1_0);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <=
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    zcurrent_0->data[Motion_Planning_B.i15] = zcurrent->
      data[Motion_Planning_B.i15];
  }

  Motion_Planning_emxInit_creal_T(&d2_1, 2);
  Motion_Planning_B.i15 = d2_1->size[0] * d2_1->size[1];
  d2_1->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 = Motion_Planning_B.m_h - Motion_Planning_B.n_c;
  d2_1->size[1] = Motion_Planning_B.loop_ub_n3;
  Motio_emxEnsureCapacity_creal_T(d2_1, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    d2_1->data[Motion_Planning_B.i15] = d2->data[Motion_Planning_B.n_c +
      Motion_Planning_B.i15];
  }

  Motion_Planning_emxFree_creal_T(&d2);
  Motion_Planning_emxInit_real_T(&l1_0, 2);
  if (1 > l1->size[1] - 3) {
    Motion_Planning_B.loop_ub_n3 = -1;
  } else {
    Motion_Planning_B.loop_ub_n3 = l1->size[1] - 4;
  }

  Motion_Planning_B.i15 = l1_0->size[0] * l1_0->size[1];
  l1_0->size[0] = 1;
  l1_0->size[1] = Motion_Planning_B.loop_ub_n3 + 1;
  Motion_emxEnsureCapacity_real_T(l1_0, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <=
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    l1_0->data[Motion_Planning_B.i15] = l1->data[Motion_Planning_B.i15];
  }

  Motion_Planning_emxInit_real_T(&l1_1, 2);
  Motion_Planning_B.i15 = l1_1->size[0] * l1_1->size[1];
  l1_1->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 = Motion_Planning_B.p - Motion_Planning_B.q_g;
  l1_1->size[1] = Motion_Planning_B.loop_ub_n3;
  Motion_emxEnsureCapacity_real_T(l1_1, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    l1_1->data[Motion_Planning_B.i15] = l1->data[Motion_Planning_B.q_g +
      Motion_Planning_B.i15] + l1->data[Motion_Planning_B.s +
      Motion_Planning_B.i15];
  }

  Motion_Planning_emxInit_real_T(&l1_2, 2);
  Motion_Planning_B.i15 = l1_2->size[0] * l1_2->size[1];
  l1_2->size[0] = 1;
  Motion_Planning_B.loop_ub_n3 = Motion_Planning_B.t_el - Motion_Planning_B.u;
  l1_2->size[1] = Motion_Planning_B.loop_ub_n3;
  Motion_emxEnsureCapacity_real_T(l1_2, Motion_Planning_B.i15);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    l1_2->data[Motion_Planning_B.i15] = l1->data[Motion_Planning_B.u +
      Motion_Planning_B.i15];
  }

  Motion_Planning_emxFree_real_T(&l1);
  Motion_Planning_emxInit_creal_T(&tmp_1, 2);
  Motion_Planning_midcurve(zcurrent_0, d2_1, l1_0, l1_1, l1_2, tmp, tmp_0, tmp_1);
  Motion_Planning_B.i15 = Zout->size[0] * Zout->size[1];
  Zout->size[0] = 1;
  Zout->size[1] = tmp_1->size[1] + 2;
  Motio_emxEnsureCapacity_creal_T(Zout, Motion_Planning_B.i15);
  Zout->data[0] = zorig_data[0];
  Motion_Planning_B.loop_ub_n3 = tmp_1->size[0] * tmp_1->size[1];
  Motion_Planning_emxFree_real_T(&l1_2);
  Motion_Planning_emxFree_real_T(&l1_1);
  Motion_Planning_emxFree_real_T(&l1_0);
  Motion_Planning_emxFree_creal_T(&d2_1);
  Motion_Planning_emxFree_creal_T(&zcurrent_0);
  Motion_Planning_emxFree_real_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    Zout->data[Motion_Planning_B.i15 + 1] = tmp_1->data[Motion_Planning_B.i15];
  }

  Zout->data[tmp_1->size[0] * tmp_1->size[1] + 1] = zorig_data[zorig_size[1] - 1];
  Motion_Planning_B.re = static_cast<real_T>(zcurrent->size[1] - zorig_size[1]) /
    (static_cast<real_T>(zorig_size[1]) - 1.0) + 1.0;
  Motion_Planning_emxFree_creal_T(&tmp_1);
  if ((Motion_Planning_B.re == 0.0) || (0.0 > Motion_Planning_B.re)) {
    Motion_Planning_B.c_p = 1;
  } else {
    Motion_Planning_B.c_p = static_cast<int32_T>(static_cast<real_T>
      (zcurrent->size[1] - zorig_size[1]) / (static_cast<real_T>(zorig_size[1])
      - 1.0) + 1.0);
  }

  Motion_Planning_B.loop_ub_n3 = zorig_size[1];
  for (Motion_Planning_B.i15 = 0; Motion_Planning_B.i15 <
       Motion_Planning_B.loop_ub_n3; Motion_Planning_B.i15++) {
    Zout->data[Motion_Planning_B.c_p * Motion_Planning_B.i15] =
      zorig_data[Motion_Planning_B.i15];
  }
}

static void Motio_emxFreeStruct_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  *pStruct)
{
  Motion_Planning_emxFree_creal_T(&pStruct->f1);
}

static void Motio_emxFreeMatrix_cell_wrap_7(cell_wrap_7_Motion_Planning_T
  pMatrix[11])
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    Motio_emxFreeStruct_cell_wrap_7(&pMatrix[i]);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_cloth(const creal_T z_data[], const int32_T *z_size,
  emxArray_real_T_Motion_Planni_T *r, emxArray_real_T_Motion_Planni_T *s)
{
  emxArray_creal_T_Motion_Plann_T *Zout;
  emxArray_creal_T_Motion_Plann_T *Zout_0;
  emxArray_creal_T_Motion_Plann_T *Zout_1;
  emxArray_creal_T_Motion_Plann_T *Zout_2;
  emxArray_creal_T_Motion_Plann_T *Zout_3;
  emxArray_creal_T_Motion_Plann_T *Zout_4;
  emxArray_creal_T_Motion_Plann_T *Zout_5;
  emxArray_creal_T_Motion_Plann_T *Zout_6;
  emxArray_creal_T_Motion_Plann_T *Zout_7;
  emxArray_creal_T_Motion_Plann_T *Zout_8;
  emxArray_creal_T_Motion_Plann_T *Zout_9;
  emxArray_creal_T_Motion_Plann_T *Zout_a;
  emxArray_creal_T_Motion_Plann_T *Zout_b;
  emxArray_creal_T_Motion_Plann_T *Zout_c;
  emxArray_creal_T_Motion_Plann_T *Zout_d;
  emxArray_creal_T_Motion_Plann_T *Zout_e;
  emxArray_creal_T_Motion_Plann_T *Zout_f;
  emxArray_creal_T_Motion_Plann_T *Zout_g;
  emxArray_creal_T_Motion_Plann_T *tmp;
  emxArray_creal_T_Motion_Plann_T *tmp_0;
  Motio_emxInitMatrix_cell_wrap_7(Motion_Planning_B.Zout);
  Motion_Planning_emxInit_creal_T(&tmp, 2);
  Motion_Planning_emxInit_creal_T(&tmp_0, 2);
  Motion_Planning_emxInit_creal_T(&Zout_g, 2);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.z_data_m.data = const_cast<creal_T *>(&z_data[0]);
  Motion_Planning_B.z_data_m.size = &Motion_Planning_B.iv[0];
  Motion_Planning_B.z_data_m.allocatedSize = -1;
  Motion_Planning_B.z_data_m.numDimensions = 2;
  Motion_Planning_B.z_data_m.canFreeData = false;
  Motion_Planning_insert(&Motion_Planning_B.z_data_m, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp_0, z_data, Motion_Planning_B.iv, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_insert(tmp_0, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp_0, z_data, Motion_Planning_B.iv, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_insert(tmp_0, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp_0, z_data, Motion_Planning_B.iv, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_insert(tmp_0, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp_0, z_data, Motion_Planning_B.iv, tmp);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_optimize(tmp, z_data, Motion_Planning_B.iv, tmp_0);
  Motion_Planning_insert(tmp_0, Motion_Planning_B.Zout[5].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_g->size[0] * Zout_g->size[1];
  Zout_g->size[0] = 1;
  Zout_g->size[1] = Motion_Planning_B.Zout[5].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_g, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[5].f1->size[0] *
    Motion_Planning_B.Zout[5].f1->size[1];
  Motion_Planning_emxFree_creal_T(&tmp_0);
  Motion_Planning_emxFree_creal_T(&tmp);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_g->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[5].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_f, 2);
  Motion_Planning_optimize(Zout_g, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[5].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_f->size[0] * Zout_f->size[1];
  Zout_f->size[0] = 1;
  Zout_f->size[1] = Motion_Planning_B.Zout[5].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_f, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[5].f1->size[0] *
    Motion_Planning_B.Zout[5].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_g);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_f->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[5].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_e, 2);
  Motion_Planning_optimize(Zout_f, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[5].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_e->size[0] * Zout_e->size[1];
  Zout_e->size[0] = 1;
  Zout_e->size[1] = Motion_Planning_B.Zout[5].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_e, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[5].f1->size[0] *
    Motion_Planning_B.Zout[5].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_f);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_e->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[5].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_d, 2);
  Motion_Planning_optimize(Zout_e, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[5].f1);
  Motion_Planning_insert(Motion_Planning_B.Zout[5].f1, Motion_Planning_B.Zout[6]
    .f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_d->size[0] * Zout_d->size[1];
  Zout_d->size[0] = 1;
  Zout_d->size[1] = Motion_Planning_B.Zout[6].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_d, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[6].f1->size[0] *
    Motion_Planning_B.Zout[6].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_e);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_d->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[6].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_c, 2);
  Motion_Planning_optimize(Zout_d, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[6].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_c->size[0] * Zout_c->size[1];
  Zout_c->size[0] = 1;
  Zout_c->size[1] = Motion_Planning_B.Zout[6].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_c, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[6].f1->size[0] *
    Motion_Planning_B.Zout[6].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_d);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_c->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[6].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_b, 2);
  Motion_Planning_optimize(Zout_c, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[6].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_b->size[0] * Zout_b->size[1];
  Zout_b->size[0] = 1;
  Zout_b->size[1] = Motion_Planning_B.Zout[6].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_b, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[6].f1->size[0] *
    Motion_Planning_B.Zout[6].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_c);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_b->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[6].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_a, 2);
  Motion_Planning_optimize(Zout_b, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[6].f1);
  Motion_Planning_insert(Motion_Planning_B.Zout[6].f1, Motion_Planning_B.Zout[7]
    .f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_a->size[0] * Zout_a->size[1];
  Zout_a->size[0] = 1;
  Zout_a->size[1] = Motion_Planning_B.Zout[7].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_a, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[7].f1->size[0] *
    Motion_Planning_B.Zout[7].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_b);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_a->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[7].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_9, 2);
  Motion_Planning_optimize(Zout_a, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[7].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_9->size[0] * Zout_9->size[1];
  Zout_9->size[0] = 1;
  Zout_9->size[1] = Motion_Planning_B.Zout[7].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_9, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[7].f1->size[0] *
    Motion_Planning_B.Zout[7].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_a);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_9->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[7].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_8, 2);
  Motion_Planning_optimize(Zout_9, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[7].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_8->size[0] * Zout_8->size[1];
  Zout_8->size[0] = 1;
  Zout_8->size[1] = Motion_Planning_B.Zout[7].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_8, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[7].f1->size[0] *
    Motion_Planning_B.Zout[7].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_9);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_8->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[7].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_7, 2);
  Motion_Planning_optimize(Zout_8, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[7].f1);
  Motion_Planning_insert(Motion_Planning_B.Zout[7].f1, Motion_Planning_B.Zout[8]
    .f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_7->size[0] * Zout_7->size[1];
  Zout_7->size[0] = 1;
  Zout_7->size[1] = Motion_Planning_B.Zout[8].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_7, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[8].f1->size[0] *
    Motion_Planning_B.Zout[8].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_8);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_7->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[8].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_6, 2);
  Motion_Planning_optimize(Zout_7, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[8].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_6->size[0] * Zout_6->size[1];
  Zout_6->size[0] = 1;
  Zout_6->size[1] = Motion_Planning_B.Zout[8].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_6, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[8].f1->size[0] *
    Motion_Planning_B.Zout[8].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_7);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_6->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[8].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_5, 2);
  Motion_Planning_optimize(Zout_6, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[8].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_5->size[0] * Zout_5->size[1];
  Zout_5->size[0] = 1;
  Zout_5->size[1] = Motion_Planning_B.Zout[8].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_5, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[8].f1->size[0] *
    Motion_Planning_B.Zout[8].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_6);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_5->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[8].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_4, 2);
  Motion_Planning_optimize(Zout_5, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[8].f1);
  Motion_Planning_insert(Motion_Planning_B.Zout[8].f1, Motion_Planning_B.Zout[9]
    .f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_4->size[0] * Zout_4->size[1];
  Zout_4->size[0] = 1;
  Zout_4->size[1] = Motion_Planning_B.Zout[9].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_4, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[9].f1->size[0] *
    Motion_Planning_B.Zout[9].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_5);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_4->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[9].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_3, 2);
  Motion_Planning_optimize(Zout_4, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[9].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_3->size[0] * Zout_3->size[1];
  Zout_3->size[0] = 1;
  Zout_3->size[1] = Motion_Planning_B.Zout[9].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_3, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[9].f1->size[0] *
    Motion_Planning_B.Zout[9].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_4);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_3->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[9].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_2, 2);
  Motion_Planning_optimize(Zout_3, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[9].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_2->size[0] * Zout_2->size[1];
  Zout_2->size[0] = 1;
  Zout_2->size[1] = Motion_Planning_B.Zout[9].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_2, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[9].f1->size[0] *
    Motion_Planning_B.Zout[9].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_3);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_2->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[9].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_1, 2);
  Motion_Planning_optimize(Zout_2, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[9].f1);
  Motion_Planning_insert(Motion_Planning_B.Zout[9].f1, Motion_Planning_B.Zout[10]
    .f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_1->size[0] * Zout_1->size[1];
  Zout_1->size[0] = 1;
  Zout_1->size[1] = Motion_Planning_B.Zout[10].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_1, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[10].f1->size[0] *
    Motion_Planning_B.Zout[10].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_2);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_1->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[10].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout_0, 2);
  Motion_Planning_optimize(Zout_1, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[10].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout_0->size[0] * Zout_0->size[1];
  Zout_0->size[0] = 1;
  Zout_0->size[1] = Motion_Planning_B.Zout[10].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout_0, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[10].f1->size[0] *
    Motion_Planning_B.Zout[10].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_1);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout_0->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[10].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_emxInit_creal_T(&Zout, 2);
  Motion_Planning_optimize(Zout_0, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[10].f1);
  Motion_Planning_B.iv[0] = 1;
  Motion_Planning_B.iv[1] = *z_size;
  Motion_Planning_B.i14 = Zout->size[0] * Zout->size[1];
  Zout->size[0] = 1;
  Zout->size[1] = Motion_Planning_B.Zout[10].f1->size[1];
  Motio_emxEnsureCapacity_creal_T(Zout, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[10].f1->size[0] *
    Motion_Planning_B.Zout[10].f1->size[1];
  Motion_Planning_emxFree_creal_T(&Zout_0);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    Zout->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[10].f1->
      data[Motion_Planning_B.i14];
  }

  Motion_Planning_optimize(Zout, z_data, Motion_Planning_B.iv,
    Motion_Planning_B.Zout[10].f1);
  Motion_Planning_B.i14 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = Motion_Planning_B.Zout[10].f1->size[1];
  Motion_emxEnsureCapacity_real_T(r, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[10].f1->size[0] *
    Motion_Planning_B.Zout[10].f1->size[1] - 1;
  Motion_Planning_emxFree_creal_T(&Zout);
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <=
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    r->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[10].f1->
      data[Motion_Planning_B.i14].re;
  }

  Motion_Planning_B.i14 = s->size[0] * s->size[1];
  s->size[0] = 1;
  s->size[1] = Motion_Planning_B.Zout[10].f1->size[1];
  Motion_emxEnsureCapacity_real_T(s, Motion_Planning_B.i14);
  Motion_Planning_B.loop_ub_lc = Motion_Planning_B.Zout[10].f1->size[0] *
    Motion_Planning_B.Zout[10].f1->size[1] - 1;
  for (Motion_Planning_B.i14 = 0; Motion_Planning_B.i14 <=
       Motion_Planning_B.loop_ub_lc; Motion_Planning_B.i14++) {
    s->data[Motion_Planning_B.i14] = Motion_Planning_B.Zout[10].f1->
      data[Motion_Planning_B.i14].im;
  }

  Motio_emxFreeMatrix_cell_wrap_7(Motion_Planning_B.Zout);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_dclothoid(const real_T x_data[], const int32_T
  *x_size, const real_T y_data[], emxArray_real_T_Motion_Planni_T *u,
  emxArray_real_T_Motion_Planni_T *v)
{
  emxArray_real_T_Motion_Planni_T *r;
  emxArray_real_T_Motion_Planni_T *s;
  Motion_Planning_B.x_size_j = *x_size;
  Motion_Planning_B.loop_ub_np = *x_size;
  for (Motion_Planning_B.i13 = 0; Motion_Planning_B.i13 <
       Motion_Planning_B.loop_ub_np; Motion_Planning_B.i13++) {
    Motion_Planning_B.x_data[Motion_Planning_B.i13].re =
      x_data[Motion_Planning_B.i13];
    Motion_Planning_B.x_data[Motion_Planning_B.i13].im =
      y_data[Motion_Planning_B.i13];
  }

  Motion_Planning_emxInit_real_T(&r, 2);
  Motion_Planning_emxInit_real_T(&s, 2);
  Motion_Planning_cloth(Motion_Planning_B.x_data, &Motion_Planning_B.x_size_j, r,
                        s);
  Motion_Planning_B.i13 = u->size[0];
  u->size[0] = r->size[1];
  Motion_emxEnsureCapacity_real_T(u, Motion_Planning_B.i13);
  Motion_Planning_B.loop_ub_np = r->size[1];
  for (Motion_Planning_B.i13 = 0; Motion_Planning_B.i13 <
       Motion_Planning_B.loop_ub_np; Motion_Planning_B.i13++) {
    u->data[Motion_Planning_B.i13] = r->data[Motion_Planning_B.i13];
  }

  Motion_Planning_emxFree_real_T(&r);
  Motion_Planning_B.i13 = v->size[0];
  v->size[0] = s->size[1];
  Motion_emxEnsureCapacity_real_T(v, Motion_Planning_B.i13);
  Motion_Planning_B.loop_ub_np = s->size[1];
  for (Motion_Planning_B.i13 = 0; Motion_Planning_B.i13 <
       Motion_Planning_B.loop_ub_np; Motion_Planning_B.i13++) {
    v->data[Motion_Planning_B.i13] = s->data[Motion_Planning_B.i13];
  }

  Motion_Planning_emxFree_real_T(&s);
}

static void Motio_emxInitStruct_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pStruct)
{
  Motion_Planning_emxInit_real_T(&pStruct->f1, 2);
}

static void Motio_emxInitMatrix_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pMatrix)
{
  Motio_emxInitStruct_cell_wrap_8(pMatrix);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static boolean_T Motion_Planning_isequal(const real_T varargin_1_data[], const
  int32_T varargin_1_size[2], const real_T varargin_2_data[], const int32_T
  varargin_2_size[2])
{
  int32_T k;
  boolean_T d_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  d_p = false;
  if (varargin_1_size[1] == varargin_2_size[1]) {
    d_p = true;
  }

  if (d_p && (varargin_1_size[1] != 0) && (varargin_2_size[1] != 0)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2_size[1] - 1)) {
      if (!(varargin_1_data[k] == varargin_2_data[k])) {
        d_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (d_p) {
    p = true;
  }

  return p;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_angle_n(const creal_T x_data[], const int32_T
  *x_size, real_T y_data[], int32_T *y_size)
{
  int32_T k;
  *y_size = *x_size;
  for (k = 0; k < *x_size; k++) {
    y_data[k] = rt_atan2d_snf(x_data[k].im, x_data[k].re);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_exp(emxArray_creal_T_Motion_Plann_T *x)
{
  real_T b_x_re;
  real_T r;
  int32_T b_k;
  int32_T nx;
  nx = x->size[0];
  for (b_k = 0; b_k < nx; b_k++) {
    if (x->data[b_k].im == 0.0) {
      b_x_re = exp(x->data[b_k].re);
      r = 0.0;
    } else if (rtIsInf(x->data[b_k].im) && rtIsInf(x->data[b_k].re) && (x->
                data[b_k].re < 0.0)) {
      b_x_re = 0.0;
      r = 0.0;
    } else {
      r = exp(x->data[b_k].re / 2.0);
      b_x_re = r * cos(x->data[b_k].im) * r;
      r *= r * sin(x->data[b_k].im);
    }

    x->data[b_k].re = b_x_re;
    x->data[b_k].im = r;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_power(const emxArray_real_T_Motion_Planni_T *a,
  emxArray_real_T_Motion_Planni_T *y)
{
  emxArray_real_T_Motion_Planni_T *z1;
  Motion_Planning_emxInit_real_T(&z1, 1);
  Motion_Planning_B.k_f = y->size[0];
  y->size[0] = a->size[0];
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.k_f);
  Motion_Planning_B.k_f = z1->size[0];
  z1->size[0] = y->size[0];
  Motion_emxEnsureCapacity_real_T(z1, Motion_Planning_B.k_f);
  Motion_Planning_B.loop_ub_ci = y->size[0];
  for (Motion_Planning_B.k_f = 0; Motion_Planning_B.k_f <
       Motion_Planning_B.loop_ub_ci; Motion_Planning_B.k_f++) {
    z1->data[Motion_Planning_B.k_f] = y->data[Motion_Planning_B.k_f];
  }

  Motion_Planning_B.k_f = 0;
  while (Motion_Planning_B.k_f <= y->size[0] - 1) {
    z1->data[Motion_Planning_B.k_f] = a->data[Motion_Planning_B.k_f] * a->
      data[Motion_Planning_B.k_f];
    Motion_Planning_B.k_f++;
  }

  Motion_Planning_B.k_f = y->size[0];
  y->size[0] = z1->size[0];
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.k_f);
  Motion_Planning_B.loop_ub_ci = z1->size[0];
  for (Motion_Planning_B.k_f = 0; Motion_Planning_B.k_f <
       Motion_Planning_B.loop_ub_ci; Motion_Planning_B.k_f++) {
    y->data[Motion_Planning_B.k_f] = z1->data[Motion_Planning_B.k_f];
  }

  Motion_Planning_emxFree_real_T(&z1);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_repmat(const real_T a_data[], const int32_T *a_size,
  real_T b_data[], int32_T b_size[2])
{
  int32_T ibtile;
  int32_T jtilecol;
  int32_T k;
  b_size[0] = static_cast<int8_T>(*a_size);
  b_size[1] = 25;
  for (jtilecol = 0; jtilecol < 25; jtilecol++) {
    ibtile = jtilecol * *a_size;
    for (k = 0; k < *a_size; k++) {
      b_data[ibtile + k] = a_data[k];
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_useConstantDim(const real_T varargin_2_data[], const
  int32_T varargin_2_size[2], real_T varargout_1_data[], int32_T
  varargout_1_size[2])
{
  int32_T b;
  int32_T b_k;
  int32_T loop_ub;
  int32_T varargout_1_data_tmp;
  varargout_1_size[0] = varargin_2_size[0];
  varargout_1_size[1] = varargin_2_size[1];
  loop_ub = varargin_2_size[0] * varargin_2_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&varargout_1_data[0], &varargin_2_data[0], (loop_ub + 1) * sizeof
           (real_T));
  }

  if ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0)) {
    for (loop_ub = 0; loop_ub <= varargin_2_size[1] - 2; loop_ub++) {
      b = varargout_1_size[0];
      for (b_k = 0; b_k < b; b_k++) {
        varargout_1_data_tmp = (static_cast<int8_T>(loop_ub + 1) *
          varargout_1_size[0] + static_cast<int8_T>(b_k + 1)) - 1;
        varargout_1_data[varargout_1_data_tmp] *=
          varargout_1_data[varargout_1_size[0] * loop_ub + b_k];
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fetchAgrad(const real_T x_data[], const int32_T
  *x_size, const real_T y_data[], real_T a_data[], int32_T *a_size, real_T
  dadx_data[], int32_T *dadx_size, real_T dady_data[], int32_T *dady_size)
{
  static const real_T c[351] = { -1.5361481088532109E-40,
    -5.1782003708968662E-38, 5.8080516979367073E-38, -6.2922109794702842E-36,
    1.7744129415359022E-35, -9.8266873453160865E-36, -3.0557011816989596E-34,
    1.9988681524430764E-33, -2.7007621230825949E-33, 9.6497076628562535E-34,
    -8.50146594503621E-33, 8.7613736854720049E-32, -2.8258679893784358E-31,
    2.3637604856716169E-31, -5.8556266604372106E-32, -1.2863962524996432E-31,
    2.229093841830142E-30, -1.1057059963507232E-29, 2.3139349101185755E-29,
    -1.2630223562649489E-29, 2.0068564650639364E-30, -1.1052377502159136E-30,
    3.0309726719642508E-29, -2.57153235020298E-28, 7.9357820762496212E-28,
    -1.1834423538462616E-27, 3.7518152500494656E-28, -9.5988758699827141E-30,
    -5.8444661902772888E-30, 2.2799302267031842E-28, -3.118708591261201E-27,
    1.6937953593997347E-26, -3.4234259338177584E-26, 3.675290577810477E-26,
    -1.6183294340108731E-27, -2.9209077909746285E-27, -2.0493494333051533E-29,
    1.0232091530758262E-27, -2.0119872415420161E-26, 1.8157191663212143E-25,
    -6.8278782273948665E-25, 7.9289707228553727E-25, -5.1713140278139824E-25,
    -3.5757401738269863E-25, 1.7191521549607673E-25, -5.001307006229815E-29,
    2.9234616420394369E-27, -7.3372627735809734E-26, 9.6978563886575261E-25,
    -6.3976458551757164E-24, 1.6073455072306433E-23, -7.37463587795066E-25,
    -7.0522343048774666E-24, 1.4805755563608624E-23, -5.1965352404273039E-24,
    -8.5391792173019132E-29, 5.4962692899068422E-27, -1.5546891778194411E-25,
    2.6049795261751296E-24, -2.6172058881327836E-23, 1.2985982037510549E-22,
    -1.423772303418446E-22, -5.8282903661876709E-22, 4.1133508360308628E-22,
    -1.742659308147939E-22, 8.07786256209318E-23, -9.7738126735700558E-29,
    6.6212355845436972E-27, -1.7707072436748613E-25, 2.8057133511879665E-24,
    -3.4869970759687543E-23, 3.0241871214865029E-22, -9.92012310209099E-22,
    -3.2149566866116185E-21, 1.8710249707031661E-20, -1.2453541845369618E-21,
    -7.5062472154050874E-21, 2.8499865852964518E-22, -6.9207112182904389E-29,
    4.4179830835754724E-27, -4.4762524882779791E-26, -2.450817653228083E-24,
    7.1914140604820392E-23, -7.2673875098954476E-22, 3.3571441047866719E-21,
    -1.5906878744538782E-20, 1.0715370660853569E-19, -2.1813900762258771E-19,
    -3.7882773476137619E-19, 4.4188357957185649E-19, -5.2046323054922296E-20,
    -2.8170935396816464E-29, 7.8914114794548443E-28, 1.528966070127476E-25,
    -1.1332880987718864E-23, 3.3104475572268851E-22, -4.9647512138578754E-21,
    3.9715384015216385E-20, -1.6290821269847189E-19, 3.36612516663913E-19,
    -3.36275918384194E-19, -2.8323208988729979E-18, 1.5348780107717589E-17,
    -1.2231243924447674E-17, 1.5460269152965008E-18, -1.0350259940425787E-29,
    -4.7414043171551787E-28, 1.9707672417753685E-25, -1.4495788889042659E-23,
    5.1378340796211685E-22, -1.0210774519786583E-20, 1.165542649503511E-19,
    -7.1421779330877591E-19, 1.6365283191176908E-18, 4.9170568130837211E-18,
    -4.4186234291063853E-17, 1.6247947613884891E-16, -3.4187835062780104E-16,
    2.2495563268135524E-16, -2.8304172442233909E-17, -9.54190907880087E-30,
    4.33416352213585E-28, 7.30606772876727E-26, -8.4789175470441986E-24,
    3.9746370968729408E-22, -1.0350198533651566E-20, 1.589371276512773E-19,
    -1.3721089740423357E-18, 4.7868869804965763E-18, 1.9699426816042335E-17,
    -2.7595647699194014E-16, 1.2612122765846683E-15, -3.3199758280144047E-15,
    5.1284109097493322E-15, -2.9773954125181772E-15, 3.6686222388116938E-16,
    -7.13761114432792E-30, 8.6070327678610011E-28, -2.5253411261423782E-26,
    -1.429985806399278E-24, 1.4200678258817658E-22, -5.2901273901739912E-21,
    1.0879148930261737E-19, -1.2468905412479112E-18, 5.651703115185149E-18,
    4.073824764700649E-17, -7.7193016891576893E-16, 5.1280294092344238E-15,
    -1.8830251965098877E-14, 4.2082102420983456E-14, -5.4816521831539046E-14,
    2.9056289127761095E-14, -3.5049036301087839E-15, -2.7032712394278119E-30,
    4.4439845217679321E-28, -2.8561533629781625E-26, 7.4263493149653183E-25,
    7.7648205291611823E-24, -1.1313407629960782E-21, 3.4992489982228452E-20,
    -5.11237062122324E-19, 1.9082838069139238E-18, 6.02161124473958E-17,
    -1.1855133738581856E-15, 1.0647602057665829E-14, -5.5915318620809614E-14,
    1.8096099090326831E-13, -3.6385985586845819E-13, 4.2410069501559273E-13,
    -2.106362282048389E-13, 2.4385529408308407E-14, -4.8547818044528891E-31,
    9.5570081279537094E-29, -7.8572054752482576E-27, 3.3174769183447452E-25,
    -6.2142341258768858E-24, -5.0991712996566211E-23, 5.1392990708290932E-21,
    -8.807706142947147E-20, -5.8182766640448854E-19, 5.1419279154935842E-17,
    -1.04407697522146E-15, 1.1898094238539857E-14, -8.5367937011271162E-14,
    3.9513126620957262E-13, -1.1748533341492665E-12, 2.1917257282808794E-12,
    -2.3566809884820566E-12, 1.0795020408261728E-12, -1.5837465906955864E-13,
    -2.7533507225420422E-32, 5.7619182837708977E-30, -4.6471657116787863E-28,
    1.4048422360791874E-26, 3.7650962241144584E-25, -4.9228435831327322E-23,
    1.9071729205179347E-21, -3.3490783882201909E-20, -7.018689437542322E-20,
    1.8324124104655822E-17, -4.7883976550407734E-16, 7.0487303907715931E-15,
    -6.735734123826801E-14, 4.3114382655453385E-13, -1.8436618496422663E-12,
    5.1655481921478335E-12, -9.1498502333527442E-12, 9.53768065186612E-12,
    -5.5096965823391316E-12, -1.9256688414961511E-12, 2.6993907913031997E-33,
    -8.3658508533748674E-31, 1.2360111759498158E-28, -1.1391057286564071E-26,
    7.1943116140837765E-25, -3.2278401611187206E-23, 1.0313736180462972E-21,
    -2.2595952680170383E-20, 2.9013328570466337E-19, -1.4189880636575127E-19,
    -8.2575877751974837E-17, 1.9535524420193836E-15, -2.60333162544509E-14,
    2.2905798368369833E-13, -1.3730942326110817E-12, 5.5797967300488639E-12,
    -1.5044456366394642E-11, 2.5612747661164289E-11, -1.9627816796196334E-11,
    -2.8036172295220303E-11, -1.9615478304946413E-10, 3.8934925377973957E-34,
    -1.2639609126235819E-31, 1.9287682878359229E-29, -1.8332237204928374E-27,
    1.2092531131064511E-25, -5.8236835135326278E-24, 2.0915581782354698E-22,
    -5.5964099612773872E-21, 1.0833579869797173E-19, -1.3736666335311385E-18,
    6.6209633655847283E-18, 1.4362053626673917E-16, -4.0159095765450877E-15,
    5.320276578988179E-14, -4.5399145021925304E-13, 2.6343951113716903E-12,
    -1.0426603808524378E-11, 2.7378813158203465E-11, -2.4213032965198892E-11,
    -6.43589148489966E-11, 8.7111108876109732E-11, -1.58880825805031E-8,
    1.2049379324305816E-35, -4.3610770108214582E-33, 7.4936434757448969E-31,
    -8.1105245364317889E-29, 6.1705088386370215E-27, -3.480752271664829E-25,
    1.4948191338667704E-23, -4.9368146563727049E-22, 1.2499110582545291E-20,
    -2.3793207120554828E-19, 3.2322327482741956E-18, -2.6498507726404211E-17,
    7.8731033015748051E-18, 3.2775331491296092E-15, -5.1807698267687295E-14,
    4.62732644627914E-13, -2.7239785524170987E-12, 1.0896716883650769E-11,
    -1.8645986337651637E-11, 2.5459617591435155E-12, -1.3347654837468073E-8,
    1.3161132276731047E-7, -1.3227534741608429E-6, -9.7984625010885519E-38,
    3.2900432333335651E-35, -4.4581754057254838E-33, 2.5824817729473294E-31,
    5.2049615357860253E-30, -2.1583876518311414E-27, 1.9476950757610683E-25,
    -1.0716316264212252E-23, 4.1440657240625748E-22, -1.1817624319451798E-20,
    2.5249339155046378E-19, -4.0233948389965105E-18, 4.64169135391771E-17,
    -3.5476759515651092E-16, 1.1999262837080123E-15, 8.516412269170767E-15,
    -1.527199343162684E-13, 1.1449867637138848E-12, -3.6599461401055181E-12,
    -4.6103940452468584E-11, -4.7424213964325014E-9, 1.4095535848735113E-8,
    1.1415162393763462E-5, -0.00011904761791914855, -7.7487127476207258E-39,
    3.1576790378728681E-36, -5.9250135047007422E-34, 6.7643789484475193E-32,
    -5.220570875188387E-30, 2.8506788574160792E-28, -1.1098370767710674E-26,
    2.9468645436878283E-25, -4.2328657438375513E-24, -3.3901276335768838E-23,
    3.8407990599986091E-21, -1.1933448342985106E-19, 2.3702576054378613E-18,
    -3.3709086299905129E-17, 3.5240422748635714E-16, -2.688297081936284E-15,
    1.4426938768292247E-14, -4.5785087028675909E-14, 1.6710103243486247E-14,
    -1.1024143067873009E-11, -3.3079062392811025E-10, 2.8376658214791753E-8,
    2.8265347449301076E-6, 3.9682541488440042E-5, -0.016666666666889381,
    -8.6841596356231729E-42, 3.1939131296905081E-39, -4.8490390875687847E-37,
    3.2729122440862841E-35, 5.3980586162289553E-34, -3.3686936226391223E-31,
    3.7197707807256541E-29, -2.5380412938111731E-27, 1.2494404817163045E-25,
    -4.6966036280739172E-24, 1.3852307187625331E-22, -3.2509821682467773E-21,
    6.1100085267801761E-20, -9.20594856358596E-19, 1.1081925404564449E-17,
    -1.0575868027372313E-16, 7.920139233623936E-16, -4.5514965597202215E-15,
    1.3296256931854534E-14, -3.345171633728989E-13, 1.7101904098836834E-11,
    2.4300392651460408E-9, 4.6155748216027864E-8, -1.5460729722609369E-5,
    -0.00238095238099261, 1.0000000000000047 };

  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *tmp_0;
  emxArray_real_T_Motion_Planni_T *tmp_1;
  Motion_Planning_B.u_size_k = *x_size;
  Motion_Planning_B.loop_ub_m = *x_size;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    Motion_Planning_B.u_data_k[Motion_Planning_B.i11] =
      x_data[Motion_Planning_B.i11] - y_data[Motion_Planning_B.i11];
  }

  Motion_Planning_B.v_size_a = *x_size;
  Motion_Planning_B.loop_ub_m = *x_size;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    Motion_Planning_B.v_data_p[Motion_Planning_B.i11] =
      x_data[Motion_Planning_B.i11] + y_data[Motion_Planning_B.i11];
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_emxInit_real_T(&tmp_0, 2);
  Motion_Planning_B.n_p = 350;
  Motion_Planning_B.b_idx_0_c = static_cast<int8_T>(*x_size);
  Motion_Planning_B.u_data_j.data = &Motion_Planning_B.u_data_k[0];
  Motion_Planning_B.u_data_j.size = &Motion_Planning_B.u_size_k;
  Motion_Planning_B.u_data_j.allocatedSize = 99;
  Motion_Planning_B.u_data_j.numDimensions = 1;
  Motion_Planning_B.u_data_j.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.u_data_j, tmp);
  Motion_Planning_repmat(tmp->data, tmp->size, Motion_Planning_B.varargin_2_data,
    Motion_Planning_B.varargin_2_size);
  if (static_cast<int8_T>(*x_size) != 0) {
    Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  } else if (Motion_Planning_B.varargin_2_size[0] != 0) {
    Motion_Planning_B.loop_ub_m = Motion_Planning_B.varargin_2_size[0];
  } else {
    Motion_Planning_B.loop_ub_m = 0;
  }

  if (Motion_Planning_B.loop_ub_m == 0) {
    Motion_Planning_B.b_result = 1;
    Motion_Planning_B.result_idx_1 = 25;
  } else {
    Motion_Planning_B.b_result = (static_cast<int8_T>(*x_size) != 0);
    if (Motion_Planning_B.varargin_2_size[0] != 0) {
      Motion_Planning_B.result_idx_1 = 25;
    } else {
      Motion_Planning_B.result_idx_1 = 0;
    }
  }

  Motion_Planning_B.i11 = tmp_0->size[0] * tmp_0->size[1];
  tmp_0->size[0] = Motion_Planning_B.loop_ub_m;
  tmp_0->size[1] = Motion_Planning_B.b_result + Motion_Planning_B.result_idx_1;
  Motion_emxEnsureCapacity_real_T(tmp_0, Motion_Planning_B.i11);
  Motion_Planning_B.b_result *= Motion_Planning_B.loop_ub_m;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.b_result; Motion_Planning_B.i11++) {
    tmp_0->data[Motion_Planning_B.i11] = 1.0;
  }

  Motion_Planning_B.loop_ub_m *= Motion_Planning_B.result_idx_1;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    tmp_0->data[Motion_Planning_B.i11 + Motion_Planning_B.b_result] =
      Motion_Planning_B.varargin_2_data[Motion_Planning_B.i11];
  }

  Motion_Planning_emxInit_real_T(&tmp_1, 2);
  Motion_Planning_useConstantDim(tmp_0->data, tmp_0->size,
    Motion_Planning_B.b_x_data, Motion_Planning_B.b_x_size);
  Motion_Planning_B.v_data_k.data = &Motion_Planning_B.v_data_p[0];
  Motion_Planning_B.v_data_k.size = &Motion_Planning_B.v_size_a;
  Motion_Planning_B.v_data_k.allocatedSize = 99;
  Motion_Planning_B.v_data_k.numDimensions = 1;
  Motion_Planning_B.v_data_k.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.v_data_k, tmp);
  Motion_Planning_repmat(tmp->data, tmp->size, Motion_Planning_B.varargin_2_data,
    Motion_Planning_B.varargin_2_size);
  if (static_cast<int8_T>(*x_size) != 0) {
    Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  } else if (Motion_Planning_B.varargin_2_size[0] != 0) {
    Motion_Planning_B.loop_ub_m = Motion_Planning_B.varargin_2_size[0];
  } else {
    Motion_Planning_B.loop_ub_m = 0;
  }

  if (Motion_Planning_B.loop_ub_m == 0) {
    Motion_Planning_B.b_result = 1;
    Motion_Planning_B.result_idx_1 = 25;
  } else {
    Motion_Planning_B.b_result = (static_cast<int8_T>(*x_size) != 0);
    if (Motion_Planning_B.varargin_2_size[0] != 0) {
      Motion_Planning_B.result_idx_1 = 25;
    } else {
      Motion_Planning_B.result_idx_1 = 0;
    }
  }

  Motion_Planning_B.i11 = tmp_1->size[0] * tmp_1->size[1];
  tmp_1->size[0] = Motion_Planning_B.loop_ub_m;
  tmp_1->size[1] = Motion_Planning_B.b_result + Motion_Planning_B.result_idx_1;
  Motion_emxEnsureCapacity_real_T(tmp_1, Motion_Planning_B.i11);
  Motion_Planning_B.b_result *= Motion_Planning_B.loop_ub_m;
  Motion_Planning_emxFree_real_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.b_result; Motion_Planning_B.i11++) {
    tmp_1->data[Motion_Planning_B.i11] = 1.0;
  }

  Motion_Planning_B.loop_ub_m *= Motion_Planning_B.result_idx_1;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    tmp_1->data[Motion_Planning_B.i11 + Motion_Planning_B.b_result] =
      Motion_Planning_B.varargin_2_data[Motion_Planning_B.i11];
  }

  Motion_Planning_useConstantDim(tmp_1->data, tmp_1->size,
    Motion_Planning_B.c_x_data, Motion_Planning_B.varargin_2_size);
  Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  Motion_Planning_emxFree_real_T(&tmp_1);
  if (0 <= Motion_Planning_B.loop_ub_m - 1) {
    memset(&a_data[0], 0, Motion_Planning_B.loop_ub_m * sizeof(real_T));
  }

  Motion_Planning_B.b_result = static_cast<int8_T>(*x_size);
  Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  if (0 <= Motion_Planning_B.loop_ub_m - 1) {
    memset(&Motion_Planning_B.dadr_data[0], 0, Motion_Planning_B.loop_ub_m *
           sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  if (0 <= Motion_Planning_B.loop_ub_m - 1) {
    memset(&dady_data[0], 0, Motion_Planning_B.loop_ub_m * sizeof(real_T));
  }

  Motion_Planning_B.i = 0.0;
  Motion_Planning_B.j = 0.0;
  while (Motion_Planning_B.n_p + 1 > 0) {
    Motion_Planning_B.c = c[Motion_Planning_B.n_p];
    Motion_Planning_B.loop_ub_m = Motion_Planning_B.b_idx_0_c;
    for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
         Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
      a_data[Motion_Planning_B.i11] += Motion_Planning_B.b_x_data
        [(static_cast<int32_T>(Motion_Planning_B.i + 1.0) - 1) *
        Motion_Planning_B.b_x_size[0] + Motion_Planning_B.i11] *
        Motion_Planning_B.c * Motion_Planning_B.c_x_data[(static_cast<int32_T>
        (Motion_Planning_B.j + 1.0) - 1) * Motion_Planning_B.varargin_2_size[0]
        + Motion_Planning_B.i11];
    }

    if (Motion_Planning_B.i > 0.0) {
      Motion_Planning_B.c = (Motion_Planning_B.i + 1.0) *
        c[Motion_Planning_B.n_p];
      for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
           Motion_Planning_B.b_result; Motion_Planning_B.i11++) {
        Motion_Planning_B.dadr_data[Motion_Planning_B.i11] +=
          Motion_Planning_B.b_x_data[(static_cast<int32_T>(Motion_Planning_B.i)
          - 1) * Motion_Planning_B.b_x_size[0] + Motion_Planning_B.i11] *
          Motion_Planning_B.c * Motion_Planning_B.c_x_data[(static_cast<int32_T>
          (Motion_Planning_B.j + 1.0) - 1) * Motion_Planning_B.varargin_2_size[0]
          + Motion_Planning_B.i11];
      }
    }

    if (Motion_Planning_B.j > 0.0) {
      Motion_Planning_B.c = (Motion_Planning_B.j + 1.0) *
        c[Motion_Planning_B.n_p];
      Motion_Planning_B.loop_ub_m = Motion_Planning_B.b_idx_0_c;
      for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
           Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
        dady_data[Motion_Planning_B.i11] += Motion_Planning_B.b_x_data[(
          static_cast<int32_T>(Motion_Planning_B.i + 1.0) - 1) *
          Motion_Planning_B.b_x_size[0] + Motion_Planning_B.i11] *
          Motion_Planning_B.c * Motion_Planning_B.c_x_data[(static_cast<int32_T>
          (Motion_Planning_B.j) - 1) * Motion_Planning_B.varargin_2_size[0] +
          Motion_Planning_B.i11];
      }
    }

    Motion_Planning_B.j++;
    if (Motion_Planning_B.i + Motion_Planning_B.j > 25.0) {
      Motion_Planning_B.i++;
      Motion_Planning_B.j = 0.0;
    }

    Motion_Planning_B.n_p--;
  }

  Motion_Planning_B.loop_ub_m = static_cast<int8_T>(*x_size);
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    Motion_Planning_B.i = dady_data[Motion_Planning_B.i11] *
      Motion_Planning_B.v_data_p[Motion_Planning_B.i11];
    dady_data[Motion_Planning_B.i11] = Motion_Planning_B.i;
  }

  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.b_result; Motion_Planning_B.i11++) {
    Motion_Planning_B.i = Motion_Planning_B.dadr_data[Motion_Planning_B.i11] *
      Motion_Planning_B.u_data_k[Motion_Planning_B.i11];
    Motion_Planning_B.dadr_data[Motion_Planning_B.i11] = Motion_Planning_B.i;
  }

  *dadx_size = Motion_Planning_B.v_size_a;
  Motion_Planning_B.loop_ub_m = Motion_Planning_B.v_size_a;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    dadx_data[Motion_Planning_B.i11] = (2.0 *
      Motion_Planning_B.v_data_p[Motion_Planning_B.i11] *
      (dady_data[Motion_Planning_B.i11] +
       Motion_Planning_B.dadr_data[Motion_Planning_B.i11]) +
      a_data[Motion_Planning_B.i11]) * 3.0;
  }

  *dady_size = Motion_Planning_B.v_size_a;
  Motion_Planning_B.loop_ub_m = Motion_Planning_B.v_size_a;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    Motion_Planning_B.i = (2.0 *
      Motion_Planning_B.v_data_p[Motion_Planning_B.i11] *
      (dady_data[Motion_Planning_B.i11] -
       Motion_Planning_B.dadr_data[Motion_Planning_B.i11]) +
      a_data[Motion_Planning_B.i11]) * 3.0;
    dady_data[Motion_Planning_B.i11] = Motion_Planning_B.i;
  }

  *a_size = Motion_Planning_B.v_size_a;
  Motion_Planning_B.loop_ub_m = Motion_Planning_B.v_size_a;
  for (Motion_Planning_B.i11 = 0; Motion_Planning_B.i11 <
       Motion_Planning_B.loop_ub_m; Motion_Planning_B.i11++) {
    Motion_Planning_B.i = 3.0 * Motion_Planning_B.v_data_p[Motion_Planning_B.i11]
      * a_data[Motion_Planning_B.i11];
    a_data[Motion_Planning_B.i11] = Motion_Planning_B.i;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_abs_d(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y)
{
  int32_T k;
  k = y->size[0];
  y->size[0] = x->size[0];
  Motion_emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

static void Motion_Planning_emxInit_int32_T(emxArray_int32_T_Motion_Plann_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_int32_T_Motion_Plann_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T_Motion_Plann_T *)malloc(sizeof
    (emxArray_int32_T_Motion_Plann_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void Motio_emxEnsureCapacity_int32_T(emxArray_int32_T_Motion_Plann_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  Motion_Planning_B.newNumel_eb = 1;
  for (Motion_Planning_B.i_is = 0; Motion_Planning_B.i_is <
       emxArray->numDimensions; Motion_Planning_B.i_is++) {
    Motion_Planning_B.newNumel_eb *= emxArray->size[Motion_Planning_B.i_is];
  }

  if (Motion_Planning_B.newNumel_eb > emxArray->allocatedSize) {
    Motion_Planning_B.i_is = emxArray->allocatedSize;
    if (Motion_Planning_B.i_is < 16) {
      Motion_Planning_B.i_is = 16;
    }

    while (Motion_Planning_B.i_is < Motion_Planning_B.newNumel_eb) {
      if (Motion_Planning_B.i_is > 1073741823) {
        Motion_Planning_B.i_is = MAX_int32_T;
      } else {
        Motion_Planning_B.i_is <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(Motion_Planning_B.i_is), sizeof
                     (int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = Motion_Planning_B.i_is;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_eml_find(const emxArray_boolean_T_Motion_Pla_T *x,
  emxArray_int32_T_Motion_Plann_T *i)
{
  boolean_T exitg1;
  Motion_Planning_B.nx = x->size[0];
  Motion_Planning_B.idx_i = 0;
  Motion_Planning_B.ii = i->size[0];
  i->size[0] = x->size[0];
  Motio_emxEnsureCapacity_int32_T(i, Motion_Planning_B.ii);
  Motion_Planning_B.ii = 0;
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.ii <= Motion_Planning_B.nx - 1)) {
    if (x->data[Motion_Planning_B.ii]) {
      Motion_Planning_B.idx_i++;
      i->data[Motion_Planning_B.idx_i - 1] = Motion_Planning_B.ii + 1;
      if (Motion_Planning_B.idx_i >= Motion_Planning_B.nx) {
        exitg1 = true;
      } else {
        Motion_Planning_B.ii++;
      }
    } else {
      Motion_Planning_B.ii++;
    }
  }

  if (x->size[0] == 1) {
    if (Motion_Planning_B.idx_i == 0) {
      i->size[0] = 0;
    }
  } else {
    Motion_Planning_B.ii = i->size[0];
    if (1 > Motion_Planning_B.idx_i) {
      i->size[0] = 0;
    } else {
      i->size[0] = Motion_Planning_B.idx_i;
    }

    Motio_emxEnsureCapacity_int32_T(i, Motion_Planning_B.ii);
  }
}

static void Motion_Planni_emxInit_boolean_T(emxArray_boolean_T_Motion_Pla_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_boolean_T_Motion_Pla_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T_Motion_Pla_T *)malloc(sizeof
    (emxArray_boolean_T_Motion_Pla_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void Mot_emxEnsureCapacity_boolean_T(emxArray_boolean_T_Motion_Pla_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  Motion_Planning_B.newNumel_k = 1;
  for (Motion_Planning_B.i_ca = 0; Motion_Planning_B.i_ca <
       emxArray->numDimensions; Motion_Planning_B.i_ca++) {
    Motion_Planning_B.newNumel_k *= emxArray->size[Motion_Planning_B.i_ca];
  }

  if (Motion_Planning_B.newNumel_k > emxArray->allocatedSize) {
    Motion_Planning_B.i_ca = emxArray->allocatedSize;
    if (Motion_Planning_B.i_ca < 16) {
      Motion_Planning_B.i_ca = 16;
    }

    while (Motion_Planning_B.i_ca < Motion_Planning_B.newNumel_k) {
      if (Motion_Planning_B.i_ca > 1073741823) {
        Motion_Planning_B.i_ca = MAX_int32_T;
      } else {
        Motion_Planning_B.i_ca <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(Motion_Planning_B.i_ca), sizeof
                     (boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = Motion_Planning_B.i_ca;
    emxArray->canFreeData = true;
  }
}

static void Motion_Planni_emxFree_boolean_T(emxArray_boolean_T_Motion_Pla_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T_Motion_Pla_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T_Motion_Pla_T *)NULL;
  }
}

static void Motion_Planning_emxFree_int32_T(emxArray_int32_T_Motion_Plann_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_Motion_Plann_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_Motion_Plann_T *)NULL;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelr(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_creal_T_Motion_Plann_T *z)
{
  emxArray_boolean_T_Motion_Pla_T *tmp;
  emxArray_boolean_T_Motion_Pla_T *u_0;
  emxArray_creal_T_Motion_Plann_T *l;
  emxArray_creal_T_Motion_Plann_T *z_0;
  emxArray_int32_T_Motion_Plann_T *c;
  emxArray_int32_T_Motion_Plann_T *d;
  emxArray_int32_T_Motion_Plann_T *k;
  emxArray_real_T_Motion_Planni_T *u;
  emxArray_real_T_Motion_Planni_T *x4;
  emxArray_real_T_Motion_Planni_T *xabs;
  Motion_Planning_B.b_idx_0 = static_cast<uint32_T>(x->size[0]);
  Motion_Planning_B.i_g = z->size[0];
  z->size[0] = static_cast<int32_T>(Motion_Planning_B.b_idx_0);
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = static_cast<int32_T>(Motion_Planning_B.b_idx_0);
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    z->data[Motion_Planning_B.i_g].re = (rtNaN);
    z->data[Motion_Planning_B.i_g].im = 0.0;
  }

  Motion_Planning_emxInit_real_T(&xabs, 1);
  Motion_Planning_emxInit_real_T(&u, 1);
  Motion_Planning_abs_d(x, xabs);
  Motion_Planning_B.i_g = u->size[0];
  u->size[0] = xabs->size[0];
  Motion_emxEnsureCapacity_real_T(u, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = xabs->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    u->data[Motion_Planning_B.i_g] = xabs->data[Motion_Planning_B.i_g] *
      xabs->data[Motion_Planning_B.i_g];
  }

  Motion_Planni_emxInit_boolean_T(&u_0, 1);
  Motion_Planning_B.i_g = u_0->size[0];
  u_0->size[0] = u->size[0];
  Mot_emxEnsureCapacity_boolean_T(u_0, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = u->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    u_0->data[Motion_Planning_B.i_g] = (u->data[Motion_Planning_B.i_g] < 2.5625);
  }

  Motion_Planning_emxInit_real_T(&x4, 1);
  Motion_Planning_emxInit_int32_T(&k, 1);
  Motion_Planning_eml_find(u_0, k);
  Motion_Planning_B.i_g = x4->size[0];
  x4->size[0] = k->size[0];
  Motion_emxEnsureCapacity_real_T(x4, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = k->size[0];
  Motion_Planni_emxFree_boolean_T(&u_0);
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    x4->data[Motion_Planning_B.i_g] = xabs->data[k->data[Motion_Planning_B.i_g]
      - 1] * xabs->data[k->data[Motion_Planning_B.i_g] - 1];
  }

  Motion_Planning_B.i_g = x4->size[0];
  Motion_emxEnsureCapacity_real_T(x4, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = x4->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    x4->data[Motion_Planning_B.i_g] *= x4->data[Motion_Planning_B.i_g];
  }

  Motion_Planning_B.loop_ub_ed = k->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    Motion_Planning_B.re_l = (((((-4.9884311457357354E-8 * x4->
      data[Motion_Planning_B.i_g] + 9.5042806282985963E-6) * x4->
      data[Motion_Planning_B.i_g] + -0.00064519143568396507) * x4->
      data[Motion_Planning_B.i_g] + 0.018884331939670384) * x4->
      data[Motion_Planning_B.i_g] + -0.20552590095501388) * x4->
      data[Motion_Planning_B.i_g] + 1.0) / ((((((3.99982968972496E-12 * x4->
      data[Motion_Planning_B.i_g] + 9.1543921577465745E-10) * x4->
      data[Motion_Planning_B.i_g] + 1.2500186247959882E-7) * x4->
      data[Motion_Planning_B.i_g] + 1.2226278902417902E-5) * x4->
      data[Motion_Planning_B.i_g] + 0.00086802954294178428) * x4->
      data[Motion_Planning_B.i_g] + 0.041214209072219982) * x4->
      data[Motion_Planning_B.i_g] + 1.0);
    Motion_Planning_B.im = (((((-2991.8191940101983 * x4->
      data[Motion_Planning_B.i_g] + 708840.04525773856) * x4->
      data[Motion_Planning_B.i_g] + -6.2974148620586254E+7) * x4->
      data[Motion_Planning_B.i_g] + 2.5489088057337637E+9) * x4->
      data[Motion_Planning_B.i_g] + -4.429795180596978E+10) * x4->
      data[Motion_Planning_B.i_g] + 3.1801629787656781E+11) * (xabs->data
      [k->data[Motion_Planning_B.i_g] - 1] * xabs->data[k->
      data[Motion_Planning_B.i_g] - 1]) / ((((((x4->data[Motion_Planning_B.i_g]
      + 281.37626888999432) * x4->data[Motion_Planning_B.i_g] +
      45584.781080653258) * x4->data[Motion_Planning_B.i_g] +
      5.1734388877009638E+6) * x4->data[Motion_Planning_B.i_g] +
      4.1932024589811122E+8) * x4->data[Motion_Planning_B.i_g] +
      2.2441179564534092E+10) * x4->data[Motion_Planning_B.i_g] +
      6.0736638949008459E+11);
    z->data[k->data[Motion_Planning_B.i_g] - 1].re = xabs->data[k->
      data[Motion_Planning_B.i_g] - 1] * Motion_Planning_B.re_l;
    z->data[k->data[Motion_Planning_B.i_g] - 1].im = xabs->data[k->
      data[Motion_Planning_B.i_g] - 1] * Motion_Planning_B.im;
  }

  Motion_Planni_emxInit_boolean_T(&tmp, 1);
  Motion_Planning_B.i_g = tmp->size[0];
  tmp->size[0] = u->size[0];
  Mot_emxEnsureCapacity_boolean_T(tmp, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = u->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    tmp->data[Motion_Planning_B.i_g] = ((2.5625 <= u->data[Motion_Planning_B.i_g])
      && (u->data[Motion_Planning_B.i_g] <= 1.367076676E+9));
  }

  Motion_Planning_eml_find(tmp, k);
  Motion_Planning_B.i_g = x4->size[0];
  x4->size[0] = k->size[0];
  Motion_emxEnsureCapacity_real_T(x4, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = k->size[0];
  Motion_Planni_emxFree_boolean_T(&tmp);
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    x4->data[Motion_Planning_B.i_g] = 1.0 / (xabs->data[k->
      data[Motion_Planning_B.i_g] - 1] * xabs->data[k->
      data[Motion_Planning_B.i_g] - 1] * 3.1415926535897931);
  }

  Motion_Planning_B.i_g = u->size[0];
  u->size[0] = x4->size[0];
  Motion_emxEnsureCapacity_real_T(u, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = x4->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    u->data[Motion_Planning_B.i_g] = x4->data[Motion_Planning_B.i_g] * x4->
      data[Motion_Planning_B.i_g];
  }

  Motion_Planning_emxInit_creal_T(&l, 1);
  Motion_Planning_B.i_g = l->size[0];
  l->size[0] = k->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = k->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    l->data[Motion_Planning_B.i_g].re = xabs->data[k->data[Motion_Planning_B.i_g]
      - 1] * xabs->data[k->data[Motion_Planning_B.i_g] - 1] * 0.0;
    l->data[Motion_Planning_B.i_g].im = xabs->data[k->data[Motion_Planning_B.i_g]
      - 1] * xabs->data[k->data[Motion_Planning_B.i_g] - 1] * 1.5707963267948966;
  }

  Motion_Planning_exp(l);
  Motion_Planning_B.loop_ub_ed = u->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    Motion_Planning_B.im = (((((((((0.42154355504367752 * u->
      data[Motion_Planning_B.i_g] + 0.1434079197807589) * u->
      data[Motion_Planning_B.i_g] + 0.011522095507358577) * u->
      data[Motion_Planning_B.i_g] + 0.000345017939782574) * u->
      data[Motion_Planning_B.i_g] + 4.6361374928786735E-6) * u->
      data[Motion_Planning_B.i_g] + 3.0556898379025758E-8) * u->
      data[Motion_Planning_B.i_g] + 1.0230451416490724E-10) * u->
      data[Motion_Planning_B.i_g] + 1.7201074326816183E-13) * u->
      data[Motion_Planning_B.i_g] + 1.3428327623306275E-16) * u->
      data[Motion_Planning_B.i_g] + 3.763297112699879E-20) * u->
      data[Motion_Planning_B.i_g] / ((((((((((u->data[Motion_Planning_B.i_g] +
      0.75158639835337893) * u->data[Motion_Planning_B.i_g] +
      0.11688892585919138) * u->data[Motion_Planning_B.i_g] +
      0.0064405152650885865) * u->data[Motion_Planning_B.i_g] +
      0.00015593440916415301) * u->data[Motion_Planning_B.i_g] +
      1.8462756734893055E-6) * u->data[Motion_Planning_B.i_g] +
      1.1269922476399903E-8) * u->data[Motion_Planning_B.i_g] +
      3.6014002958937136E-11) * u->data[Motion_Planning_B.i_g] +
      5.8875453362157839E-14) * u->data[Motion_Planning_B.i_g] +
      4.5200143407412973E-17) * u->data[Motion_Planning_B.i_g] +
      1.2544323709001127E-20) - 1.0;
    Motion_Planning_B.u_im = ((((((((((0.50444207364338323 * u->
      data[Motion_Planning_B.i_g] + 0.19710283352552341) * u->
      data[Motion_Planning_B.i_g] + 0.018764858409257526) * u->
      data[Motion_Planning_B.i_g] + 0.00068407938091539307) * u->
      data[Motion_Planning_B.i_g] + 1.1513882611188428E-5) * u->
      data[Motion_Planning_B.i_g] + 9.8285244368842225E-8) * u->
      data[Motion_Planning_B.i_g] + 4.4534441586175015E-10) * u->
      data[Motion_Planning_B.i_g] + 1.0826804113902088E-12) * u->
      data[Motion_Planning_B.i_g] + 1.375554606332618E-15) * u->
      data[Motion_Planning_B.i_g] + 8.3635443563067741E-19) * u->
      data[Motion_Planning_B.i_g] + 1.8695871016278324E-22) * x4->
      data[Motion_Planning_B.i_g] / (((((((((((u->data[Motion_Planning_B.i_g] +
      1.4749575992512833) * u->data[Motion_Planning_B.i_g] + 0.33774898912002) *
      u->data[Motion_Planning_B.i_g] + 0.025360374142033879) * u->
      data[Motion_Planning_B.i_g] + 0.00081467910718430615) * u->
      data[Motion_Planning_B.i_g] + 1.2754507566772912E-5) * u->
      data[Motion_Planning_B.i_g] + 1.0431458965757199E-7) * u->
      data[Motion_Planning_B.i_g] + 4.6068072814652043E-10) * u->
      data[Motion_Planning_B.i_g] + 1.1027321506624028E-12) * u->
      data[Motion_Planning_B.i_g] + 1.3879653125957886E-15) * u->
      data[Motion_Planning_B.i_g] + 8.3915881628311874E-19) * u->
      data[Motion_Planning_B.i_g] + 1.8695871016278324E-22);
    Motion_Planning_B.re_l = 0.0 * Motion_Planning_B.im - Motion_Planning_B.u_im;
    Motion_Planning_B.im += 0.0 * Motion_Planning_B.u_im;
    Motion_Planning_B.u_im = Motion_Planning_B.re_l * l->
      data[Motion_Planning_B.i_g].re - Motion_Planning_B.im * l->
      data[Motion_Planning_B.i_g].im;
    Motion_Planning_B.im = Motion_Planning_B.re_l * l->
      data[Motion_Planning_B.i_g].im + Motion_Planning_B.im * l->
      data[Motion_Planning_B.i_g].re;
    Motion_Planning_B.br_i = xabs->data[k->data[Motion_Planning_B.i_g] - 1] *
      3.1415926535897931;
    if (Motion_Planning_B.im == 0.0) {
      Motion_Planning_B.re_l = Motion_Planning_B.u_im / Motion_Planning_B.br_i;
      Motion_Planning_B.im = 0.0;
    } else if (Motion_Planning_B.u_im == 0.0) {
      Motion_Planning_B.re_l = 0.0;
      Motion_Planning_B.im /= Motion_Planning_B.br_i;
    } else {
      Motion_Planning_B.re_l = Motion_Planning_B.u_im / Motion_Planning_B.br_i;
      Motion_Planning_B.im /= Motion_Planning_B.br_i;
    }

    z->data[k->data[Motion_Planning_B.i_g] - 1].re = 0.5 +
      Motion_Planning_B.re_l;
    z->data[k->data[Motion_Planning_B.i_g] - 1].im = 0.5 + Motion_Planning_B.im;
  }

  Motion_Planning_emxFree_creal_T(&l);
  Motion_Planning_emxFree_int32_T(&k);
  Motion_Planning_emxFree_real_T(&u);
  Motion_Planning_emxFree_real_T(&x4);
  Motion_Planning_B.loop_ub_ed = xabs->size[0] - 1;
  Motion_Planning_B.trueCount = 0;
  Motion_Planning_B.i_g = 0;
  while (Motion_Planning_B.i_g <= Motion_Planning_B.loop_ub_ed) {
    if (xabs->data[Motion_Planning_B.i_g] * xabs->data[Motion_Planning_B.i_g] >
        1.367076676E+9) {
      Motion_Planning_B.trueCount++;
    }

    Motion_Planning_B.i_g++;
  }

  Motion_Planning_emxInit_int32_T(&c, 1);
  Motion_Planning_B.i_g = c->size[0];
  c->size[0] = Motion_Planning_B.trueCount;
  Motio_emxEnsureCapacity_int32_T(c, Motion_Planning_B.i_g);
  Motion_Planning_B.i_g = 0;
  Motion_Planning_B.trueCount = 0;
  while (Motion_Planning_B.trueCount <= Motion_Planning_B.loop_ub_ed) {
    if (xabs->data[Motion_Planning_B.trueCount] * xabs->
        data[Motion_Planning_B.trueCount] > 1.367076676E+9) {
      c->data[Motion_Planning_B.i_g] = Motion_Planning_B.trueCount + 1;
      Motion_Planning_B.i_g++;
    }

    Motion_Planning_B.trueCount++;
  }

  Motion_Planning_emxFree_real_T(&xabs);
  Motion_Planning_B.loop_ub_ed = c->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    z->data[c->data[Motion_Planning_B.i_g] - 1].re = 0.5;
    z->data[c->data[Motion_Planning_B.i_g] - 1].im = 0.5;
  }

  Motion_Planning_emxFree_int32_T(&c);
  Motion_Planning_B.loop_ub_ed = x->size[0] - 1;
  Motion_Planning_B.trueCount = 0;
  Motion_Planning_B.i_g = 0;
  while (Motion_Planning_B.i_g <= Motion_Planning_B.loop_ub_ed) {
    if (x->data[Motion_Planning_B.i_g] < 0.0) {
      Motion_Planning_B.trueCount++;
    }

    Motion_Planning_B.i_g++;
  }

  Motion_Planning_emxInit_int32_T(&d, 1);
  Motion_Planning_B.i_g = d->size[0];
  d->size[0] = Motion_Planning_B.trueCount;
  Motio_emxEnsureCapacity_int32_T(d, Motion_Planning_B.i_g);
  Motion_Planning_B.i_g = 0;
  Motion_Planning_B.trueCount = 0;
  while (Motion_Planning_B.trueCount <= Motion_Planning_B.loop_ub_ed) {
    if (x->data[Motion_Planning_B.trueCount] < 0.0) {
      d->data[Motion_Planning_B.i_g] = Motion_Planning_B.trueCount + 1;
      Motion_Planning_B.i_g++;
    }

    Motion_Planning_B.trueCount++;
  }

  Motion_Planning_emxInit_creal_T(&z_0, 1);
  Motion_Planning_B.i_g = z_0->size[0];
  z_0->size[0] = d->size[0];
  Motio_emxEnsureCapacity_creal_T(z_0, Motion_Planning_B.i_g);
  Motion_Planning_B.loop_ub_ed = d->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    z_0->data[Motion_Planning_B.i_g].re = -z->data[d->data[Motion_Planning_B.i_g]
      - 1].re;
    z_0->data[Motion_Planning_B.i_g].im = -z->data[d->data[Motion_Planning_B.i_g]
      - 1].im;
  }

  Motion_Planning_B.loop_ub_ed = z_0->size[0];
  for (Motion_Planning_B.i_g = 0; Motion_Planning_B.i_g <
       Motion_Planning_B.loop_ub_ed; Motion_Planning_B.i_g++) {
    z->data[d->data[Motion_Planning_B.i_g] - 1] = z_0->
      data[Motion_Planning_B.i_g];
  }

  Motion_Planning_emxFree_creal_T(&z_0);
  Motion_Planning_emxFree_int32_T(&d);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnel(const creal_T x_data[], const int32_T
  *x_size, creal_T z_data[], int32_T *z_size)
{
  emxArray_creal_T_Motion_Plann_T *b;
  Motion_Planning_B.x_size_b = *x_size;
  Motion_Planning_B.loop_ub_ie = *x_size;
  for (Motion_Planning_B.i17 = 0; Motion_Planning_B.i17 <
       Motion_Planning_B.loop_ub_ie; Motion_Planning_B.i17++) {
    Motion_Planning_B.x_data_a[Motion_Planning_B.i17] =
      x_data[Motion_Planning_B.i17].re;
  }

  Motion_Planning_emxInit_creal_T(&b, 1);
  Motion_Planning_B.x_data_g4.data = &Motion_Planning_B.x_data_a[0];
  Motion_Planning_B.x_data_g4.size = &Motion_Planning_B.x_size_b;
  Motion_Planning_B.x_data_g4.allocatedSize = 99;
  Motion_Planning_B.x_data_g4.numDimensions = 1;
  Motion_Planning_B.x_data_g4.canFreeData = false;
  Motion_Planning_fresnelr(&Motion_Planning_B.x_data_g4, b);
  *z_size = b->size[0];
  Motion_Planning_B.loop_ub_ie = b->size[0];
  for (Motion_Planning_B.i17 = 0; Motion_Planning_B.i17 <
       Motion_Planning_B.loop_ub_ie; Motion_Planning_B.i17++) {
    z_data[Motion_Planning_B.i17] = b->data[Motion_Planning_B.i17];
  }

  Motion_Planning_B.x_size_o = *x_size;
  Motion_Planning_B.loop_ub_ie = *x_size;
  for (Motion_Planning_B.i17 = 0; Motion_Planning_B.i17 <
       Motion_Planning_B.loop_ub_ie; Motion_Planning_B.i17++) {
    Motion_Planning_B.x_data_a[Motion_Planning_B.i17] =
      -x_data[Motion_Planning_B.i17].im;
  }

  Motion_Planning_B.x_data_c.data = &Motion_Planning_B.x_data_a[0];
  Motion_Planning_B.x_data_c.size = &Motion_Planning_B.x_size_o;
  Motion_Planning_B.x_data_c.allocatedSize = 99;
  Motion_Planning_B.x_data_c.numDimensions = 1;
  Motion_Planning_B.x_data_c.canFreeData = false;
  Motion_Planning_fresnelr(&Motion_Planning_B.x_data_c, b);
  Motion_Planning_B.i17 = b->size[0];
  Motio_emxEnsureCapacity_creal_T(b, Motion_Planning_B.i17);
  Motion_Planning_B.loop_ub_ie = b->size[0];
  for (Motion_Planning_B.i17 = 0; Motion_Planning_B.i17 <
       Motion_Planning_B.loop_ub_ie; Motion_Planning_B.i17++) {
    b->data[Motion_Planning_B.i17].im = -b->data[Motion_Planning_B.i17].im;
  }

  Motion_Planning_B.loop_ub_ie = *z_size;
  for (Motion_Planning_B.i17 = 0; Motion_Planning_B.i17 <
       Motion_Planning_B.loop_ub_ie; Motion_Planning_B.i17++) {
    Motion_Planning_B.z_data_f = z_data[Motion_Planning_B.i17];
    Motion_Planning_B.c_re = 0.0 * b->data[Motion_Planning_B.i17].re - b->
      data[Motion_Planning_B.i17].im;
    Motion_Planning_B.c_im = 0.0 * b->data[Motion_Planning_B.i17].im + b->
      data[Motion_Planning_B.i17].re;
    Motion_Planning_B.z_data_f.re += Motion_Planning_B.c_re;
    Motion_Planning_B.z_data_f.im += Motion_Planning_B.c_im;
    z_data[Motion_Planning_B.i17] = Motion_Planning_B.z_data_f;
  }

  Motion_Planning_emxFree_creal_T(&b);
}

static real_T Motion_Planning_rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    Motion_Planning_B.d_g = fabs(u0);
    Motion_Planning_B.d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (Motion_Planning_B.d_g == 1.0) {
        y = 1.0;
      } else if (Motion_Planning_B.d_g > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (Motion_Planning_B.d1 == 0.0) {
      y = 1.0;
    } else if (Motion_Planning_B.d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_power_l(const creal_T a_data[], const int32_T
  *a_size, creal_T y_data[], int32_T *y_size)
{
  *y_size = *a_size;
  Motion_Planning_B.z1_size_idx_0 = *a_size;
  Motion_Planning_B.loop_ub_h5 = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_h5 - 1) {
    memcpy(&Motion_Planning_B.z1_data[0], &y_data[0],
           Motion_Planning_B.loop_ub_h5 * sizeof(creal_T));
  }

  Motion_Planning_B.loop_ub_h5 = 0;
  while (Motion_Planning_B.loop_ub_h5 <= *y_size - 1) {
    Motion_Planning_B.ar_d = a_data[Motion_Planning_B.loop_ub_h5].re;
    Motion_Planning_B.ai_i = a_data[Motion_Planning_B.loop_ub_h5].im;
    if ((Motion_Planning_B.ai_i == 0.0) && (Motion_Planning_B.ar_d >= 0.0)) {
      Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].re =
        Motion_Planning_rt_powd_snf(Motion_Planning_B.ar_d, 3.0);
      Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].im = 0.0;
    } else if (Motion_Planning_B.ar_d == 0.0) {
      Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].re = 0.0;
      Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].im =
        -Motion_Planning_rt_powd_snf(Motion_Planning_B.ai_i, 3.0);
    } else {
      if (a_data[Motion_Planning_B.loop_ub_h5].im == 0.0) {
        if (a_data[Motion_Planning_B.loop_ub_h5].re < 0.0) {
          Motion_Planning_B.ai_i = log(fabs(a_data[Motion_Planning_B.loop_ub_h5]
            .re));
          Motion_Planning_B.ar_d = 3.1415926535897931;
        } else {
          Motion_Planning_B.ai_i = log(fabs(a_data[Motion_Planning_B.loop_ub_h5]
            .re));
          Motion_Planning_B.ar_d = 0.0;
        }
      } else if (fabs(a_data[Motion_Planning_B.loop_ub_h5].re) >
                 8.9884656743115785E+307) {
        Motion_Planning_B.ai_i = log(Motion_Planning_rt_hypotd_snf
          (a_data[Motion_Planning_B.loop_ub_h5].re / 2.0,
           a_data[Motion_Planning_B.loop_ub_h5].im / 2.0)) + 0.69314718055994529;
        Motion_Planning_B.ar_d = rt_atan2d_snf
          (a_data[Motion_Planning_B.loop_ub_h5].im,
           a_data[Motion_Planning_B.loop_ub_h5].re);
      } else if (fabs(a_data[Motion_Planning_B.loop_ub_h5].im) >
                 8.9884656743115785E+307) {
        Motion_Planning_B.ai_i = log(Motion_Planning_rt_hypotd_snf
          (a_data[Motion_Planning_B.loop_ub_h5].re / 2.0,
           a_data[Motion_Planning_B.loop_ub_h5].im / 2.0)) + 0.69314718055994529;
        Motion_Planning_B.ar_d = rt_atan2d_snf
          (a_data[Motion_Planning_B.loop_ub_h5].im,
           a_data[Motion_Planning_B.loop_ub_h5].re);
      } else {
        Motion_Planning_B.ai_i = log(Motion_Planning_rt_hypotd_snf
          (a_data[Motion_Planning_B.loop_ub_h5].re,
           a_data[Motion_Planning_B.loop_ub_h5].im));
        Motion_Planning_B.ar_d = rt_atan2d_snf
          (a_data[Motion_Planning_B.loop_ub_h5].im,
           a_data[Motion_Planning_B.loop_ub_h5].re);
      }

      Motion_Planning_B.ai_i *= 3.0;
      Motion_Planning_B.ar_d *= 3.0;
      if (Motion_Planning_B.ar_d == 0.0) {
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].re = exp
          (Motion_Planning_B.ai_i);
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].im = 0.0;
      } else if (rtIsInf(Motion_Planning_B.ar_d) && rtIsInf
                 (Motion_Planning_B.ai_i) && (Motion_Planning_B.ai_i < 0.0)) {
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].re = 0.0;
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].im = 0.0;
      } else {
        Motion_Planning_B.ai_i = exp(Motion_Planning_B.ai_i / 2.0);
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].re =
          Motion_Planning_B.ai_i * cos(Motion_Planning_B.ar_d) *
          Motion_Planning_B.ai_i;
        Motion_Planning_B.z1_data[Motion_Planning_B.loop_ub_h5].im =
          Motion_Planning_B.ai_i * sin(Motion_Planning_B.ar_d) *
          Motion_Planning_B.ai_i;
      }
    }

    Motion_Planning_B.loop_ub_h5++;
  }

  *y_size = *a_size;
  if (0 <= Motion_Planning_B.z1_size_idx_0 - 1) {
    memcpy(&y_data[0], &Motion_Planning_B.z1_data[0],
           Motion_Planning_B.z1_size_idx_0 * sizeof(creal_T));
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_power_ls(const creal_T a_data[], const int32_T
  *a_size, creal_T y_data[], int32_T *y_size)
{
  *y_size = *a_size;
  Motion_Planning_B.z1_size_idx_0_g = *a_size;
  Motion_Planning_B.loop_ub_gb = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_gb - 1) {
    memcpy(&Motion_Planning_B.z1_data_h[0], &y_data[0],
           Motion_Planning_B.loop_ub_gb * sizeof(creal_T));
  }

  Motion_Planning_B.loop_ub_gb = 0;
  while (Motion_Planning_B.loop_ub_gb <= *y_size - 1) {
    Motion_Planning_B.z1_data_h[Motion_Planning_B.loop_ub_gb].re =
      a_data[Motion_Planning_B.loop_ub_gb].re *
      a_data[Motion_Planning_B.loop_ub_gb].re -
      a_data[Motion_Planning_B.loop_ub_gb].im *
      a_data[Motion_Planning_B.loop_ub_gb].im;
    Motion_Planning_B.d6 = a_data[Motion_Planning_B.loop_ub_gb].re *
      a_data[Motion_Planning_B.loop_ub_gb].im;
    Motion_Planning_B.z1_data_h[Motion_Planning_B.loop_ub_gb].im =
      Motion_Planning_B.d6 + Motion_Planning_B.d6;
    Motion_Planning_B.loop_ub_gb++;
  }

  *y_size = *a_size;
  if (0 <= Motion_Planning_B.z1_size_idx_0_g - 1) {
    memcpy(&y_data[0], &Motion_Planning_B.z1_data_h[0],
           Motion_Planning_B.z1_size_idx_0_g * sizeof(creal_T));
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_sqrt(creal_T *x)
{
  real_T absxi;
  real_T absxr;
  if (x->im == 0.0) {
    if (x->re < 0.0) {
      absxr = 0.0;
      absxi = sqrt(-x->re);
    } else {
      absxr = sqrt(x->re);
      absxi = 0.0;
    }
  } else if (x->re == 0.0) {
    if (x->im < 0.0) {
      absxr = sqrt(-x->im / 2.0);
      absxi = -absxr;
    } else {
      absxr = sqrt(x->im / 2.0);
      absxi = absxr;
    }
  } else if (rtIsNaN(x->re)) {
    absxr = x->re;
    absxi = x->re;
  } else if (rtIsNaN(x->im)) {
    absxr = x->im;
    absxi = x->im;
  } else if (rtIsInf(x->im)) {
    absxr = fabs(x->im);
    absxi = x->im;
  } else if (rtIsInf(x->re)) {
    if (x->re < 0.0) {
      absxr = 0.0;
      absxi = x->im * -x->re;
    } else {
      absxr = x->re;
      absxi = 0.0;
    }
  } else {
    absxr = fabs(x->re);
    absxi = fabs(x->im);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = Motion_Planning_rt_hypotd_snf(absxr, absxi);
      if (absxi > absxr) {
        absxr = sqrt(absxr / absxi + 1.0) * sqrt(absxi);
      } else {
        absxr = sqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxr = sqrt((Motion_Planning_rt_hypotd_snf(absxr, absxi) + absxr) * 0.5);
    }

    if (x->re > 0.0) {
      absxi = x->im / absxr * 0.5;
    } else {
      if (x->im < 0.0) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }

      absxr = x->im / absxi * 0.5;
    }
  }

  x->re = absxr;
  x->im = absxi;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelgLargea1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T rsfa_data[], int32_T *rsfa_size, creal_T
  drsfa_data[], int32_T *drsfa_size)
{
  emxArray_creal_T_Motion_Plann_T *l;
  emxArray_creal_T_Motion_Plann_T *m;
  emxArray_real_T_Motion_Planni_T *tmp;
  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 2.0 *
      a_data[Motion_Planning_B.k_d] / 3.1415926535897931;
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.a1_size_idx_0 = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.a1_data[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.a1_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 6.2831853071795862 *
      a_data[Motion_Planning_B.k_d];
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.a2_data[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.a2_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.a2_size = *d_size;
  Motion_Planning_B.loop_ub_l = *d_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a2_data_d =
      Motion_Planning_B.a2_data[Motion_Planning_B.k_d];
    Motion_Planning_B.ar_c = d_data[Motion_Planning_B.k_d] -
      a_data[Motion_Planning_B.k_d];
    if (Motion_Planning_B.a2_data_d.im == 0.0) {
      Motion_Planning_B.a2_data_d.re = Motion_Planning_B.ar_c /
        Motion_Planning_B.a2_data_d.re;
      Motion_Planning_B.a2_data_d.im = 0.0;
    } else if (Motion_Planning_B.a2_data_d.re == 0.0) {
      if (Motion_Planning_B.ar_c == 0.0) {
        Motion_Planning_B.a2_data_d.re = 0.0 / Motion_Planning_B.a2_data_d.im;
        Motion_Planning_B.a2_data_d.im = 0.0;
      } else {
        Motion_Planning_B.a2_data_d.re = 0.0;
        Motion_Planning_B.a2_data_d.im = -(Motion_Planning_B.ar_c /
          Motion_Planning_B.a2_data_d.im);
      }
    } else {
      Motion_Planning_B.brm_b = fabs(Motion_Planning_B.a2_data_d.re);
      Motion_Planning_B.bim_e = fabs(Motion_Planning_B.a2_data_d.im);
      if (Motion_Planning_B.brm_b > Motion_Planning_B.bim_e) {
        Motion_Planning_B.brm_b = Motion_Planning_B.a2_data_d.im /
          Motion_Planning_B.a2_data_d.re;
        Motion_Planning_B.d = Motion_Planning_B.brm_b *
          Motion_Planning_B.a2_data_d.im + Motion_Planning_B.a2_data_d.re;
        Motion_Planning_B.a2_data_d.re = (Motion_Planning_B.brm_b * 0.0 +
          Motion_Planning_B.ar_c) / Motion_Planning_B.d;
        Motion_Planning_B.a2_data_d.im = (0.0 - Motion_Planning_B.brm_b *
          Motion_Planning_B.ar_c) / Motion_Planning_B.d;
      } else if (Motion_Planning_B.bim_e == Motion_Planning_B.brm_b) {
        Motion_Planning_B.d = Motion_Planning_B.a2_data_d.re > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.sgnbi = Motion_Planning_B.a2_data_d.im > 0.0 ? 0.5 :
          -0.5;
        Motion_Planning_B.a2_data_d.re = (Motion_Planning_B.ar_c *
          Motion_Planning_B.d + 0.0 * Motion_Planning_B.sgnbi) /
          Motion_Planning_B.brm_b;
        Motion_Planning_B.a2_data_d.im = (0.0 * Motion_Planning_B.d -
          Motion_Planning_B.ar_c * Motion_Planning_B.sgnbi) /
          Motion_Planning_B.brm_b;
      } else {
        Motion_Planning_B.brm_b = Motion_Planning_B.a2_data_d.re /
          Motion_Planning_B.a2_data_d.im;
        Motion_Planning_B.d = Motion_Planning_B.brm_b *
          Motion_Planning_B.a2_data_d.re + Motion_Planning_B.a2_data_d.im;
        Motion_Planning_B.a2_data_d.re = Motion_Planning_B.brm_b *
          Motion_Planning_B.ar_c / Motion_Planning_B.d;
        Motion_Planning_B.a2_data_d.im = (Motion_Planning_B.brm_b * 0.0 -
          Motion_Planning_B.ar_c) / Motion_Planning_B.d;
      }
    }

    Motion_Planning_B.a2_data[Motion_Planning_B.k_d] =
      Motion_Planning_B.a2_data_d;
  }

  Motion_Planning_B.a1_size = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.a1_size_idx_0; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a1_data_d[Motion_Planning_B.k_d].re =
      Motion_Planning_B.a1_data[Motion_Planning_B.k_d].re +
      Motion_Planning_B.a2_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.a1_data_d[Motion_Planning_B.k_d].im =
      Motion_Planning_B.a1_data[Motion_Planning_B.k_d].im +
      Motion_Planning_B.a2_data[Motion_Planning_B.k_d].im;
  }

  Motion_Planning_fresnel(Motion_Planning_B.a1_data_d,
    &Motion_Planning_B.a1_size, Motion_Planning_B.fa1_data,
    &Motion_Planning_B.fa1_size);
  Motion_Planning_fresnel(Motion_Planning_B.a2_data, &Motion_Planning_B.a2_size,
    Motion_Planning_B.fa2_data, &Motion_Planning_B.fa2_size);
  Motion_Planning_B.loop_ub_l = Motion_Planning_B.fa1_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a2_data_d =
      Motion_Planning_B.fa1_data[Motion_Planning_B.k_d];
    Motion_Planning_B.a2_data_d.re -=
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.a2_data_d.im -=
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im;
    Motion_Planning_B.fa1_data[Motion_Planning_B.k_d] =
      Motion_Planning_B.a2_data_d;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 3.1415926535897931 /
      (2.0 * a_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.s_size_idx_0 = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.s_data[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.s_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.l_tmp_size = *d_size;
  Motion_Planning_B.loop_ub_l = *d_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] =
      d_data[Motion_Planning_B.k_d] - a_data[Motion_Planning_B.k_d];
  }

  Motion_Planning_emxInit_creal_T(&l, 1);
  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_B.l_tmp_data_n.data = &Motion_Planning_B.l_tmp_data[0];
  Motion_Planning_B.l_tmp_data_n.size = &Motion_Planning_B.l_tmp_size;
  Motion_Planning_B.l_tmp_data_n.allocatedSize = 99;
  Motion_Planning_B.l_tmp_data_n.numDimensions = 1;
  Motion_Planning_B.l_tmp_data_n.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.l_tmp_data_n, tmp);
  Motion_Planning_B.k_d = l->size[0];
  l->size[0] = *c_size;
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.k_d);
  Motion_Planning_B.loop_ub_l = *c_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.g_re = tmp->data[Motion_Planning_B.k_d] / (4.0 *
      a_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.g_re = c_data[Motion_Planning_B.k_d] -
      Motion_Planning_B.g_re;
    l->data[Motion_Planning_B.k_d].re = Motion_Planning_B.g_re * 0.0;
    l->data[Motion_Planning_B.k_d].im = Motion_Planning_B.g_re;
  }

  Motion_Planning_emxFree_real_T(&tmp);
  Motion_Planning_exp(l);
  Motion_Planning_B.loop_ub_l = l->size[0];
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.r_data[Motion_Planning_B.k_d] = l->
      data[Motion_Planning_B.k_d];
  }

  *drsfa_size = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.s_size_idx_0; Motion_Planning_B.k_d++) {
    drsfa_data[Motion_Planning_B.k_d].re =
      Motion_Planning_B.s_data[Motion_Planning_B.k_d].re * l->
      data[Motion_Planning_B.k_d].re -
      Motion_Planning_B.s_data[Motion_Planning_B.k_d].im * l->
      data[Motion_Planning_B.k_d].im;
    drsfa_data[Motion_Planning_B.k_d].im =
      Motion_Planning_B.s_data[Motion_Planning_B.k_d].re * l->
      data[Motion_Planning_B.k_d].im +
      Motion_Planning_B.s_data[Motion_Planning_B.k_d].im * l->
      data[Motion_Planning_B.k_d].re;
  }

  *rsfa_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    rsfa_data[Motion_Planning_B.k_d].re = drsfa_data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].re -
      drsfa_data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].im;
    rsfa_data[Motion_Planning_B.k_d].im = drsfa_data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].im +
      drsfa_data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].re;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 6.2831853071795862 *
      a_data[Motion_Planning_B.k_d];
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.y_data_g[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.y_data_g[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 6.2831853071795862 *
      a_data[Motion_Planning_B.k_d];
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.x_size_k = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.x_data_l[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.x_data_l[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 6.2831853071795862 *
      a_data[Motion_Planning_B.k_d];
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.da2_data[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.da2_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_power_l(Motion_Planning_B.x_data_l,
    &Motion_Planning_B.x_size_k, Motion_Planning_B.fa2_data,
    &Motion_Planning_B.fa2_size);
  Motion_Planning_B.loop_ub_l = Motion_Planning_B.l_tmp_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a2_data_d =
      Motion_Planning_B.da2_data[Motion_Planning_B.k_d];
    Motion_Planning_B.d = Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.sgnbi = Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].
      im;
    if (Motion_Planning_B.sgnbi == 0.0) {
      Motion_Planning_B.g_re = -3.1415926535897931 / Motion_Planning_B.d;
      Motion_Planning_B.g_im = 0.0;
    } else if (Motion_Planning_B.d == 0.0) {
      Motion_Planning_B.g_re = 0.0;
      Motion_Planning_B.g_im = -(-3.1415926535897931 / Motion_Planning_B.sgnbi);
    } else {
      Motion_Planning_B.brm_b = fabs(Motion_Planning_B.d);
      Motion_Planning_B.bim_e = fabs(Motion_Planning_B.sgnbi);
      if (Motion_Planning_B.brm_b > Motion_Planning_B.bim_e) {
        Motion_Planning_B.brm_b = Motion_Planning_B.sgnbi / Motion_Planning_B.d;
        Motion_Planning_B.d += Motion_Planning_B.brm_b * Motion_Planning_B.sgnbi;
        Motion_Planning_B.g_re = (Motion_Planning_B.brm_b * 0.0 +
          -3.1415926535897931) / Motion_Planning_B.d;
        Motion_Planning_B.g_im = (0.0 - Motion_Planning_B.brm_b *
          -3.1415926535897931) / Motion_Planning_B.d;
      } else if (Motion_Planning_B.bim_e == Motion_Planning_B.brm_b) {
        Motion_Planning_B.d = Motion_Planning_B.d > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.sgnbi = Motion_Planning_B.sgnbi > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.g_re = (-3.1415926535897931 * Motion_Planning_B.d +
          0.0 * Motion_Planning_B.sgnbi) / Motion_Planning_B.brm_b;
        Motion_Planning_B.g_im = (0.0 * Motion_Planning_B.d -
          -3.1415926535897931 * Motion_Planning_B.sgnbi) /
          Motion_Planning_B.brm_b;
      } else {
        Motion_Planning_B.brm_b = Motion_Planning_B.d / Motion_Planning_B.sgnbi;
        Motion_Planning_B.d = Motion_Planning_B.brm_b * Motion_Planning_B.d +
          Motion_Planning_B.sgnbi;
        Motion_Planning_B.g_re = Motion_Planning_B.brm_b * -3.1415926535897931 /
          Motion_Planning_B.d;
        Motion_Planning_B.g_im = (Motion_Planning_B.brm_b * 0.0 -
          -3.1415926535897931) / Motion_Planning_B.d;
      }
    }

    if (Motion_Planning_B.a2_data_d.im == 0.0) {
      Motion_Planning_B.bim_e = 1.0 / Motion_Planning_B.a2_data_d.re;
      Motion_Planning_B.d = 0.0;
    } else if (Motion_Planning_B.a2_data_d.re == 0.0) {
      Motion_Planning_B.bim_e = 0.0;
      Motion_Planning_B.d = -(1.0 / Motion_Planning_B.a2_data_d.im);
    } else {
      Motion_Planning_B.brm_b = fabs(Motion_Planning_B.a2_data_d.re);
      Motion_Planning_B.bim_e = fabs(Motion_Planning_B.a2_data_d.im);
      if (Motion_Planning_B.brm_b > Motion_Planning_B.bim_e) {
        Motion_Planning_B.brm_b = Motion_Planning_B.a2_data_d.im /
          Motion_Planning_B.a2_data_d.re;
        Motion_Planning_B.d = Motion_Planning_B.brm_b *
          Motion_Planning_B.a2_data_d.im + Motion_Planning_B.a2_data_d.re;
        Motion_Planning_B.bim_e = (Motion_Planning_B.brm_b * 0.0 + 1.0) /
          Motion_Planning_B.d;
        Motion_Planning_B.d = (0.0 - Motion_Planning_B.brm_b) /
          Motion_Planning_B.d;
      } else if (Motion_Planning_B.bim_e == Motion_Planning_B.brm_b) {
        Motion_Planning_B.d = Motion_Planning_B.a2_data_d.re > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.sgnbi = Motion_Planning_B.a2_data_d.im > 0.0 ? 0.5 :
          -0.5;
        Motion_Planning_B.bim_e = (0.0 * Motion_Planning_B.sgnbi +
          Motion_Planning_B.d) / Motion_Planning_B.brm_b;
        Motion_Planning_B.d = (0.0 * Motion_Planning_B.d -
          Motion_Planning_B.sgnbi) / Motion_Planning_B.brm_b;
      } else {
        Motion_Planning_B.brm_b = Motion_Planning_B.a2_data_d.re /
          Motion_Planning_B.a2_data_d.im;
        Motion_Planning_B.d = Motion_Planning_B.brm_b *
          Motion_Planning_B.a2_data_d.re + Motion_Planning_B.a2_data_d.im;
        Motion_Planning_B.bim_e = Motion_Planning_B.brm_b / Motion_Planning_B.d;
        Motion_Planning_B.d = (Motion_Planning_B.brm_b * 0.0 - 1.0) /
          Motion_Planning_B.d;
      }
    }

    Motion_Planning_B.a2_data_d.re =
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] *
      Motion_Planning_B.g_re - Motion_Planning_B.bim_e;
    Motion_Planning_B.a2_data_d.im =
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] *
      Motion_Planning_B.g_im - Motion_Planning_B.d;
    Motion_Planning_B.da2_data[Motion_Planning_B.k_d] =
      Motion_Planning_B.a2_data_d;
  }

  Motion_Planning_B.l_tmp_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.l_tmp_data[0], &a_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(real_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= *a_size - 1) {
    Motion_Planning_B.g_re = Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d];
    if (Motion_Planning_B.g_re < 0.0) {
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] = -1.0;
    } else if (Motion_Planning_B.g_re > 0.0) {
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] = 1.0;
    } else if (Motion_Planning_B.g_re == 0.0) {
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] = 0.0;
    } else {
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d] = (rtNaN);
    }

    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.fa2_size = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re = 3.1415926535897931 /
      (2.0 * a_data[Motion_Planning_B.k_d]);
    Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im = 0.0;
  }

  Motion_Planning_B.x_size_k = *a_size;
  Motion_Planning_B.loop_ub_l = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_l - 1) {
    memcpy(&Motion_Planning_B.x_data_l[0], &Motion_Planning_B.fa2_data[0],
           Motion_Planning_B.loop_ub_l * sizeof(creal_T));
  }

  Motion_Planning_B.k_d = 0;
  while (Motion_Planning_B.k_d <= Motion_Planning_B.fa2_size - 1) {
    Motion_Planning_sqrt(&Motion_Planning_B.x_data_l[Motion_Planning_B.k_d]);
    Motion_Planning_B.k_d++;
  }

  Motion_Planning_B.loop_ub_l = *d_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.ratio_data[Motion_Planning_B.k_d] =
      (d_data[Motion_Planning_B.k_d] - a_data[Motion_Planning_B.k_d]) / (4.0 *
      a_data[Motion_Planning_B.k_d]);
  }

  Motion_Planning_B.a1_size_i = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.a1_size_idx_0; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a1_data_d[Motion_Planning_B.k_d].re =
      Motion_Planning_B.a1_data[Motion_Planning_B.k_d].re +
      Motion_Planning_B.a2_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.a1_data_d[Motion_Planning_B.k_d].im =
      Motion_Planning_B.a1_data[Motion_Planning_B.k_d].im +
      Motion_Planning_B.a2_data[Motion_Planning_B.k_d].im;
  }

  Motion_Planning_power_ls(Motion_Planning_B.a1_data_d,
    &Motion_Planning_B.a1_size_i, Motion_Planning_B.fa2_data,
    &Motion_Planning_B.fa2_size);
  Motion_Planning_B.k_d = l->size[0];
  l->size[0] = Motion_Planning_B.fa2_size;
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.k_d);
  Motion_Planning_B.loop_ub_l = Motion_Planning_B.fa2_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    l->data[Motion_Planning_B.k_d].re = 0.0 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re - 1.5707963267948966 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im;
    l->data[Motion_Planning_B.k_d].im = 0.0 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im + 1.5707963267948966 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re;
  }

  Motion_Planning_emxInit_creal_T(&m, 1);
  Motion_Planning_exp(l);
  Motion_Planning_power_ls(Motion_Planning_B.a2_data, &Motion_Planning_B.a2_size,
    Motion_Planning_B.fa2_data, &Motion_Planning_B.fa2_size);
  Motion_Planning_B.k_d = m->size[0];
  m->size[0] = Motion_Planning_B.fa2_size;
  Motio_emxEnsureCapacity_creal_T(m, Motion_Planning_B.k_d);
  Motion_Planning_B.loop_ub_l = Motion_Planning_B.fa2_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    m->data[Motion_Planning_B.k_d].re = 0.0 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re - 1.5707963267948966 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im;
    m->data[Motion_Planning_B.k_d].im = 0.0 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im + 1.5707963267948966 *
      Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].re;
  }

  Motion_Planning_exp(m);
  Motion_Planning_power_l(Motion_Planning_B.x_data_l,
    &Motion_Planning_B.x_size_k, Motion_Planning_B.fa2_data,
    &Motion_Planning_B.fa2_size);
  Motion_Planning_B.loop_ub_l = *a_size;
  for (Motion_Planning_B.k_d = 0; Motion_Planning_B.k_d <
       Motion_Planning_B.loop_ub_l; Motion_Planning_B.k_d++) {
    Motion_Planning_B.a2_data_d = drsfa_data[Motion_Planning_B.k_d];
    Motion_Planning_B.ar_c = Motion_Planning_B.ratio_data[Motion_Planning_B.k_d];
    Motion_Planning_B.g_im = Motion_Planning_B.r_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.r_data_im = Motion_Planning_B.r_data[Motion_Planning_B.k_d]
      .im;
    Motion_Planning_B.da2_data_re =
      Motion_Planning_B.da2_data[Motion_Planning_B.k_d].re;
    Motion_Planning_B.da2_data_im =
      Motion_Planning_B.da2_data[Motion_Planning_B.k_d].im;
    Motion_Planning_B.g_re = Motion_Planning_B.a2_data_d.re;
    Motion_Planning_B.d = Motion_Planning_B.y_data_g[Motion_Planning_B.k_d].re;
    Motion_Planning_B.sgnbi = Motion_Planning_B.y_data_g[Motion_Planning_B.k_d].
      im;
    if (Motion_Planning_B.sgnbi == 0.0) {
      Motion_Planning_B.bim_e = 1.0 / Motion_Planning_B.d;
      Motion_Planning_B.d = 0.0;
    } else if (Motion_Planning_B.d == 0.0) {
      Motion_Planning_B.bim_e = 0.0;
      Motion_Planning_B.d = -(1.0 / Motion_Planning_B.sgnbi);
    } else {
      Motion_Planning_B.brm_b = fabs(Motion_Planning_B.d);
      Motion_Planning_B.bim_e = fabs(Motion_Planning_B.sgnbi);
      if (Motion_Planning_B.brm_b > Motion_Planning_B.bim_e) {
        Motion_Planning_B.brm_b = Motion_Planning_B.sgnbi / Motion_Planning_B.d;
        Motion_Planning_B.d += Motion_Planning_B.brm_b * Motion_Planning_B.sgnbi;
        Motion_Planning_B.bim_e = (Motion_Planning_B.brm_b * 0.0 + 1.0) /
          Motion_Planning_B.d;
        Motion_Planning_B.d = (0.0 - Motion_Planning_B.brm_b) /
          Motion_Planning_B.d;
      } else if (Motion_Planning_B.bim_e == Motion_Planning_B.brm_b) {
        Motion_Planning_B.d = Motion_Planning_B.d > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.sgnbi = Motion_Planning_B.sgnbi > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.bim_e = (0.0 * Motion_Planning_B.sgnbi +
          Motion_Planning_B.d) / Motion_Planning_B.brm_b;
        Motion_Planning_B.d = (0.0 * Motion_Planning_B.d -
          Motion_Planning_B.sgnbi) / Motion_Planning_B.brm_b;
      } else {
        Motion_Planning_B.brm_b = Motion_Planning_B.d / Motion_Planning_B.sgnbi;
        Motion_Planning_B.d = Motion_Planning_B.brm_b * Motion_Planning_B.d +
          Motion_Planning_B.sgnbi;
        Motion_Planning_B.bim_e = Motion_Planning_B.brm_b / Motion_Planning_B.d;
        Motion_Planning_B.d = (Motion_Planning_B.brm_b * 0.0 - 1.0) /
          Motion_Planning_B.d;
      }
    }

    Motion_Planning_B.bim_e += Motion_Planning_B.da2_data_re;
    Motion_Planning_B.d += Motion_Planning_B.da2_data_im;
    Motion_Planning_B.brm_b = l->data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.bim_e - l->data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.d;
    Motion_Planning_B.bim_e = l->data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.d + l->data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.bim_e;
    Motion_Planning_B.d = m->data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.da2_data_re - m->data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.da2_data_im;
    Motion_Planning_B.da2_data_im = m->data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.da2_data_im + m->data[Motion_Planning_B.k_d].im *
      Motion_Planning_B.da2_data_re;
    Motion_Planning_B.da2_data_re = (Motion_Planning_B.brm_b -
      Motion_Planning_B.d) * Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d];
    Motion_Planning_B.da2_data_im = (Motion_Planning_B.bim_e -
      Motion_Planning_B.da2_data_im) *
      Motion_Planning_B.l_tmp_data[Motion_Planning_B.k_d];
    Motion_Planning_B.brm_b = 2.0 * Motion_Planning_B.ar_c + 1.0;
    Motion_Planning_B.bim_e = (Motion_Planning_B.g_im * 0.0 -
      Motion_Planning_B.r_data_im * 2.0) * Motion_Planning_B.ar_c *
      Motion_Planning_B.brm_b;
    Motion_Planning_B.brm_b *= (Motion_Planning_B.g_im * 2.0 +
      Motion_Planning_B.r_data_im * 0.0) * Motion_Planning_B.ar_c;
    Motion_Planning_B.ar_c = -Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].
      re;
    Motion_Planning_B.d = -Motion_Planning_B.fa2_data[Motion_Planning_B.k_d].im;
    if (Motion_Planning_B.d == 0.0) {
      Motion_Planning_B.ar_c /= 3.1415926535897931;
      Motion_Planning_B.sgnbi = 0.0;
    } else if (Motion_Planning_B.ar_c == 0.0) {
      Motion_Planning_B.ar_c = 0.0;
      Motion_Planning_B.sgnbi = Motion_Planning_B.d / 3.1415926535897931;
    } else {
      Motion_Planning_B.ar_c /= 3.1415926535897931;
      Motion_Planning_B.sgnbi = Motion_Planning_B.d / 3.1415926535897931;
    }

    Motion_Planning_B.d = (Motion_Planning_B.s_data[Motion_Planning_B.k_d].re *
      Motion_Planning_B.bim_e - Motion_Planning_B.s_data[Motion_Planning_B.k_d].
      im * Motion_Planning_B.brm_b) + (Motion_Planning_B.g_im *
      Motion_Planning_B.ar_c - Motion_Planning_B.r_data_im *
      Motion_Planning_B.sgnbi);
    Motion_Planning_B.g_im = (Motion_Planning_B.s_data[Motion_Planning_B.k_d].re
      * Motion_Planning_B.brm_b + Motion_Planning_B.s_data[Motion_Planning_B.k_d]
      .im * Motion_Planning_B.bim_e) + (Motion_Planning_B.g_im *
      Motion_Planning_B.sgnbi + Motion_Planning_B.r_data_im *
      Motion_Planning_B.ar_c);
    Motion_Planning_B.a2_data_d.re = (Motion_Planning_B.a2_data_d.re *
      Motion_Planning_B.da2_data_re - Motion_Planning_B.a2_data_d.im *
      Motion_Planning_B.da2_data_im) +
      (Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].re *
       Motion_Planning_B.d - Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].
       im * Motion_Planning_B.g_im);
    Motion_Planning_B.a2_data_d.im = (Motion_Planning_B.g_re *
      Motion_Planning_B.da2_data_im + Motion_Planning_B.a2_data_d.im *
      Motion_Planning_B.da2_data_re) +
      (Motion_Planning_B.fa1_data[Motion_Planning_B.k_d].re *
       Motion_Planning_B.g_im + Motion_Planning_B.fa1_data[Motion_Planning_B.k_d]
       .im * Motion_Planning_B.d);
    drsfa_data[Motion_Planning_B.k_d] = Motion_Planning_B.a2_data_d;
  }

  Motion_Planning_emxFree_creal_T(&m);
  Motion_Planning_emxFree_creal_T(&l);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_power_ls3(const real_T a_data[], const int32_T
  *a_size, real_T y_data[], int32_T *y_size)
{
  *y_size = *a_size;
  Motion_Planning_B.z1_size_idx_0_o = *a_size;
  Motion_Planning_B.loop_ub_g = *a_size;
  if (0 <= Motion_Planning_B.loop_ub_g - 1) {
    memcpy(&Motion_Planning_B.z1_data_e[0], &y_data[0],
           Motion_Planning_B.loop_ub_g * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_g = 0;
  while (Motion_Planning_B.loop_ub_g <= *y_size - 1) {
    Motion_Planning_B.z1_data_e[Motion_Planning_B.loop_ub_g] =
      Motion_Planning_rt_powd_snf(a_data[Motion_Planning_B.loop_ub_g], 3.0);
    Motion_Planning_B.loop_ub_g++;
  }

  *y_size = *a_size;
  if (0 <= Motion_Planning_B.z1_size_idx_0_o - 1) {
    memcpy(&y_data[0], &Motion_Planning_B.z1_data_e[0],
           Motion_Planning_B.z1_size_idx_0_o * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelgSmalla1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T z_data[], int32_T *z_size, creal_T dz_data[],
  int32_T *dz_size)
{
  emxArray_creal_T_Motion_Plann_T *c_y;
  emxArray_creal_T_Motion_Plann_T *e_y;
  emxArray_creal_T_Motion_Plann_T *l;
  emxArray_creal_T_Motion_Plann_T *x;
  emxArray_creal_T_Motion_Plann_T *x_tmp;
  emxArray_creal_T_Motion_Plann_T *y;
  emxArray_creal_T_Motion_Plann_T *y_tmp;
  emxArray_real_T_Motion_Planni_T *b_y_tmp;
  emxArray_real_T_Motion_Planni_T *dk_tmp;
  Motion_Planning_emxInit_real_T(&dk_tmp, 1);
  Motion_Planning_B.i5 = dk_tmp->size[0];
  dk_tmp->size[0] = *a_size;
  Motion_emxEnsureCapacity_real_T(dk_tmp, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = *a_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    dk_tmp->data[Motion_Planning_B.i5] = 2.0 * a_data[Motion_Planning_B.i5];
  }

  Motion_Planning_B.k_size = *d_size;
  Motion_Planning_B.loop_ub_e = *d_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.k_data[Motion_Planning_B.i5] = d_data[Motion_Planning_B.i5]
      - a_data[Motion_Planning_B.i5];
  }

  Motion_Planning_emxInit_creal_T(&y_tmp, 1);
  Motion_Planning_B.i5 = y_tmp->size[0];
  y_tmp->size[0] = dk_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(y_tmp, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = dk_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    y_tmp->data[Motion_Planning_B.i5].re = dk_tmp->data[Motion_Planning_B.i5] *
      0.0;
    y_tmp->data[Motion_Planning_B.i5].im = dk_tmp->data[Motion_Planning_B.i5] *
      0.5;
  }

  Motion_Planning_emxInit_creal_T(&c_y, 1);
  Motion_Planning_emxInit_real_T(&b_y_tmp, 1);
  Motion_Planning_B.k_data_p.data = &Motion_Planning_B.k_data[0];
  Motion_Planning_B.k_data_p.size = &Motion_Planning_B.k_size;
  Motion_Planning_B.k_data_p.allocatedSize = 99;
  Motion_Planning_B.k_data_p.numDimensions = 1;
  Motion_Planning_B.k_data_p.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.k_data_p, b_y_tmp);
  Motion_Planning_B.i5 = c_y->size[0];
  c_y->size[0] = Motion_Planning_B.k_size;
  Motio_emxEnsureCapacity_creal_T(c_y, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = Motion_Planning_B.k_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    c_y->data[Motion_Planning_B.i5].re =
      Motion_Planning_B.k_data[Motion_Planning_B.i5] * 0.0;
    c_y->data[Motion_Planning_B.i5].im =
      -Motion_Planning_B.k_data[Motion_Planning_B.i5];
  }

  Motion_Planning_emxInit_creal_T(&l, 1);
  Motion_Planning_B.i5 = l->size[0];
  l->size[0] = c_y->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = c_y->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    l->data[Motion_Planning_B.i5].re = -c_y->data[Motion_Planning_B.i5].re;
    l->data[Motion_Planning_B.i5].im = -c_y->data[Motion_Planning_B.i5].im;
  }

  Motion_Planning_exp(l);
  Motion_Planning_B.e_size_idx_0 = l->size[0];
  Motion_Planning_B.loop_ub_e = l->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.e_data_l[Motion_Planning_B.i5] = l->
      data[Motion_Planning_B.i5];
  }

  Motion_Planning_B.loop_ub_e = dk_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.A_data_o[Motion_Planning_B.i5].re = dk_tmp->
      data[Motion_Planning_B.i5] * 0.0;
    Motion_Planning_B.A_data_o[Motion_Planning_B.i5].im = dk_tmp->
      data[Motion_Planning_B.i5] * 0.5;
  }

  Motion_Planning_emxInit_creal_T(&e_y, 1);
  Motion_Planning_B.i5 = e_y->size[0];
  e_y->size[0] = y_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(e_y, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = y_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = y_tmp->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = y_tmp->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = b_y_tmp->data[Motion_Planning_B.i5];
    if (Motion_Planning_B.ai_h == 0.0) {
      Motion_Planning_B.ar_c2 /= Motion_Planning_B.br_d;
      Motion_Planning_B.ai_h = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      Motion_Planning_B.ar_c2 = 0.0;
      Motion_Planning_B.ai_h /= Motion_Planning_B.br_d;
    } else {
      Motion_Planning_B.ar_c2 /= Motion_Planning_B.br_d;
      Motion_Planning_B.ai_h /= Motion_Planning_B.br_d;
    }

    e_y->data[Motion_Planning_B.i5].re = -2.0 * Motion_Planning_B.ar_c2;
    e_y->data[Motion_Planning_B.i5].im = -2.0 * Motion_Planning_B.ai_h;
  }

  Motion_Planning_B.m2C_size_idx_0 = y_tmp->size[0];
  Motion_Planning_B.loop_ub_e = y_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = y_tmp->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = y_tmp->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = b_y_tmp->data[Motion_Planning_B.i5];
    if (Motion_Planning_B.ai_h == 0.0) {
      Motion_Planning_B.ar_c2 /= Motion_Planning_B.br_d;
      Motion_Planning_B.ai_h = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      Motion_Planning_B.ar_c2 = 0.0;
      Motion_Planning_B.ai_h /= Motion_Planning_B.br_d;
    } else {
      Motion_Planning_B.ar_c2 /= Motion_Planning_B.br_d;
      Motion_Planning_B.ai_h /= Motion_Planning_B.br_d;
    }

    Motion_Planning_B.m2C_data[Motion_Planning_B.i5].re = -2.0 *
      Motion_Planning_B.ar_c2;
    Motion_Planning_B.m2C_data[Motion_Planning_B.i5].im = -2.0 *
      Motion_Planning_B.ai_h;
  }

  Motion_Planning_power_ls3(Motion_Planning_B.k_data, &Motion_Planning_B.k_size,
    Motion_Planning_B.tmp_data_p, &Motion_Planning_B.tmp_size_j);
  Motion_Planning_B.loop_ub_e = dk_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = -(0.0 * dk_tmp->data[Motion_Planning_B.i5] + 0.0 *
      Motion_Planning_B.k_data[Motion_Planning_B.i5]);
    Motion_Planning_B.ai_h = -(2.0 * dk_tmp->data[Motion_Planning_B.i5] + 2.0 *
      Motion_Planning_B.k_data[Motion_Planning_B.i5]);
    Motion_Planning_B.br_d = Motion_Planning_B.tmp_data_p[Motion_Planning_B.i5];
    if (Motion_Planning_B.ai_h == 0.0) {
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].re =
        Motion_Planning_B.ar_c2 / Motion_Planning_B.br_d;
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].im = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].re = 0.0;
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
    } else {
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].re = (rtNaN);
      Motion_Planning_B.dm2C_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
    }
  }

  Motion_Planning_emxFree_real_T(&dk_tmp);
  Motion_Planning_emxInit_creal_T(&y, 1);
  Motion_Planning_B.i5 = y->size[0];
  y->size[0] = l->size[0];
  Motio_emxEnsureCapacity_creal_T(y, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = l->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    y->data[Motion_Planning_B.i5].re = 1.0 - l->data[Motion_Planning_B.i5].re;
    y->data[Motion_Planning_B.i5].im = 0.0 - l->data[Motion_Planning_B.i5].im;
  }

  Motion_Planning_B.t_size_idx_0 = y->size[0];
  Motion_Planning_B.loop_ub_e = y->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = y->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = y->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = c_y->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.bi_d = c_y->data[Motion_Planning_B.i5].im;
    if (Motion_Planning_B.bi_d == 0.0) {
      if (Motion_Planning_B.ai_h == 0.0) {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          Motion_Planning_B.ar_c2 / Motion_Planning_B.br_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im = 0.0;
      } else if (Motion_Planning_B.ar_c2 == 0.0) {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re = 0.0;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
      } else {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          Motion_Planning_B.ar_c2 / Motion_Planning_B.br_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
      }
    } else if (Motion_Planning_B.br_d == 0.0) {
      if (Motion_Planning_B.ar_c2 == 0.0) {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          Motion_Planning_B.ai_h / Motion_Planning_B.bi_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im = 0.0;
      } else if (Motion_Planning_B.ai_h == 0.0) {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re = 0.0;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          -(Motion_Planning_B.ar_c2 / Motion_Planning_B.bi_d);
      } else {
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          Motion_Planning_B.ai_h / Motion_Planning_B.bi_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          -(Motion_Planning_B.ar_c2 / Motion_Planning_B.bi_d);
      }
    } else {
      Motion_Planning_B.brm_o = fabs(Motion_Planning_B.br_d);
      Motion_Planning_B.bim_j = fabs(Motion_Planning_B.bi_d);
      if (Motion_Planning_B.brm_o > Motion_Planning_B.bim_j) {
        Motion_Planning_B.brm_o = Motion_Planning_B.bi_d /
          Motion_Planning_B.br_d;
        Motion_Planning_B.br_d += Motion_Planning_B.brm_o *
          Motion_Planning_B.bi_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          (Motion_Planning_B.brm_o * Motion_Planning_B.ai_h +
           Motion_Planning_B.ar_c2) / Motion_Planning_B.br_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          (Motion_Planning_B.ai_h - Motion_Planning_B.brm_o *
           Motion_Planning_B.ar_c2) / Motion_Planning_B.br_d;
      } else if (Motion_Planning_B.bim_j == Motion_Planning_B.brm_o) {
        Motion_Planning_B.br_d = Motion_Planning_B.br_d > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.bi_d = Motion_Planning_B.bi_d > 0.0 ? 0.5 : -0.5;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          (Motion_Planning_B.ar_c2 * Motion_Planning_B.br_d +
           Motion_Planning_B.ai_h * Motion_Planning_B.bi_d) /
          Motion_Planning_B.brm_o;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          (Motion_Planning_B.ai_h * Motion_Planning_B.br_d -
           Motion_Planning_B.ar_c2 * Motion_Planning_B.bi_d) /
          Motion_Planning_B.brm_o;
      } else {
        Motion_Planning_B.brm_o = Motion_Planning_B.br_d /
          Motion_Planning_B.bi_d;
        Motion_Planning_B.br_d = Motion_Planning_B.brm_o *
          Motion_Planning_B.br_d + Motion_Planning_B.bi_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re =
          (Motion_Planning_B.brm_o * Motion_Planning_B.ar_c2 +
           Motion_Planning_B.ai_h) / Motion_Planning_B.br_d;
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im =
          (Motion_Planning_B.brm_o * Motion_Planning_B.ai_h -
           Motion_Planning_B.ar_c2) / Motion_Planning_B.br_d;
      }
    }
  }

  Motion_Planning_emxInit_creal_T(&x_tmp, 1);
  Motion_Planning_B.i5 = x_tmp->size[0];
  x_tmp->size[0] = Motion_Planning_B.k_size;
  Motio_emxEnsureCapacity_creal_T(x_tmp, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = Motion_Planning_B.k_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    x_tmp->data[Motion_Planning_B.i5].re =
      Motion_Planning_B.k_data[Motion_Planning_B.i5] * 0.0;
    x_tmp->data[Motion_Planning_B.i5].im =
      Motion_Planning_B.k_data[Motion_Planning_B.i5];
  }

  Motion_Planning_emxInit_creal_T(&x, 1);
  Motion_Planning_B.i5 = x->size[0];
  x->size[0] = x_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(x, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = x_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    x->data[Motion_Planning_B.i5] = x_tmp->data[Motion_Planning_B.i5];
  }

  Motion_Planning_exp(x);
  Motion_Planning_B.i5 = l->size[0];
  l->size[0] = x_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = x_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    l->data[Motion_Planning_B.i5] = x_tmp->data[Motion_Planning_B.i5];
  }

  Motion_Planning_exp(l);
  Motion_Planning_B.i5 = x->size[0];
  x->size[0] = Motion_Planning_B.k_size;
  Motio_emxEnsureCapacity_creal_T(x, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = Motion_Planning_B.k_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ai_h = l->data[Motion_Planning_B.i5].re - 1.0;
    Motion_Planning_B.ar_c2 = l->data[Motion_Planning_B.i5].im;
    x->data[Motion_Planning_B.i5].re = -((0.0 * Motion_Planning_B.ai_h -
      Motion_Planning_B.ar_c2) + Motion_Planning_B.k_data[Motion_Planning_B.i5] *
      x->data[Motion_Planning_B.i5].re);
    x->data[Motion_Planning_B.i5].im = -((0.0 * Motion_Planning_B.ar_c2 +
      Motion_Planning_B.ai_h) + Motion_Planning_B.k_data[Motion_Planning_B.i5] *
      x->data[Motion_Planning_B.i5].im);
  }

  Motion_Planning_B.loop_ub_e = x->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = x->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = x->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = b_y_tmp->data[Motion_Planning_B.i5];
    if (Motion_Planning_B.ai_h == 0.0) {
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].re =
        Motion_Planning_B.ar_c2 / Motion_Planning_B.br_d;
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].im = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].re = 0.0;
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
    } else {
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].re =
        Motion_Planning_B.ar_c2 / Motion_Planning_B.br_d;
      Motion_Planning_B.dt_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / Motion_Planning_B.br_d;
    }
  }

  Motion_Planning_B.loop_ub_e = c_y->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = c_y->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = c_y->data[Motion_Planning_B.i5].im;
    if (Motion_Planning_B.ai_h == 0.0) {
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].re =
        Motion_Planning_B.ar_c2 / 2.0;
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].im = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].re = 0.0;
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / 2.0;
    } else {
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].re =
        Motion_Planning_B.ar_c2 / 2.0;
      Motion_Planning_B.nhik_data[Motion_Planning_B.i5].im =
        Motion_Planning_B.ai_h / 2.0;
    }
  }

  Motion_Planning_emxFree_creal_T(&c_y);
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.e_size_idx_0; Motion_Planning_B.i5++) {
    Motion_Planning_B.e_data_g = Motion_Planning_B.e_data_l[Motion_Planning_B.i5];
    Motion_Planning_B.e_data_g.re = -Motion_Planning_B.e_data_g.re;
    Motion_Planning_B.e_data_g.im = -Motion_Planning_B.e_data_g.im;
    Motion_Planning_B.e_data_l[Motion_Planning_B.i5] =
      Motion_Planning_B.e_data_g;
  }

  Motion_Planning_B.i5 = l->size[0];
  l->size[0] = x_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = x_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    l->data[Motion_Planning_B.i5] = x_tmp->data[Motion_Planning_B.i5];
  }

  Motion_Planning_emxFree_creal_T(&x_tmp);
  Motion_Planning_exp(l);
  Motion_Planning_B.loop_ub_e = l->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.dp_data[Motion_Planning_B.i5].re = 0.0 * l->
      data[Motion_Planning_B.i5].re - l->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.dp_data[Motion_Planning_B.i5].im = 0.0 * l->
      data[Motion_Planning_B.i5].im + l->data[Motion_Planning_B.i5].re;
  }

  *z_size = y->size[0];
  Motion_Planning_B.loop_ub_e = y->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = y->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = y->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = 0.0 * Motion_Planning_B.k_data[Motion_Planning_B.i5];
    Motion_Planning_B.bi_d = -Motion_Planning_B.k_data[Motion_Planning_B.i5];
    if (Motion_Planning_B.bi_d == 0.0) {
      if (Motion_Planning_B.ai_h == 0.0) {
        z_data[Motion_Planning_B.i5].re = Motion_Planning_B.ar_c2 /
          Motion_Planning_B.br_d;
        z_data[Motion_Planning_B.i5].im = 0.0;
      } else if (Motion_Planning_B.ar_c2 == 0.0) {
        z_data[Motion_Planning_B.i5].re = 0.0;
        z_data[Motion_Planning_B.i5].im = Motion_Planning_B.ai_h /
          Motion_Planning_B.br_d;
      } else {
        z_data[Motion_Planning_B.i5].re = Motion_Planning_B.ar_c2 /
          Motion_Planning_B.br_d;
        z_data[Motion_Planning_B.i5].im = Motion_Planning_B.ai_h /
          Motion_Planning_B.br_d;
      }
    } else if (Motion_Planning_B.br_d == 0.0) {
      if (Motion_Planning_B.ar_c2 == 0.0) {
        z_data[Motion_Planning_B.i5].re = Motion_Planning_B.ai_h /
          Motion_Planning_B.bi_d;
        z_data[Motion_Planning_B.i5].im = 0.0;
      } else if (Motion_Planning_B.ai_h == 0.0) {
        z_data[Motion_Planning_B.i5].re = 0.0;
        z_data[Motion_Planning_B.i5].im = -(Motion_Planning_B.ar_c2 /
          Motion_Planning_B.bi_d);
      } else {
        z_data[Motion_Planning_B.i5].re = Motion_Planning_B.ai_h /
          Motion_Planning_B.bi_d;
        z_data[Motion_Planning_B.i5].im = -(Motion_Planning_B.ar_c2 /
          Motion_Planning_B.bi_d);
      }
    } else {
      z_data[Motion_Planning_B.i5].re = (rtNaN);
      z_data[Motion_Planning_B.i5].im = (rtNaN);
    }
  }

  Motion_Planning_emxFree_creal_T(&y);
  *dz_size = x->size[0];
  Motion_Planning_B.loop_ub_e = x->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.ar_c2 = x->data[Motion_Planning_B.i5].re;
    Motion_Planning_B.ai_h = x->data[Motion_Planning_B.i5].im;
    Motion_Planning_B.br_d = b_y_tmp->data[Motion_Planning_B.i5];
    if (Motion_Planning_B.ai_h == 0.0) {
      dz_data[Motion_Planning_B.i5].re = Motion_Planning_B.ar_c2 /
        Motion_Planning_B.br_d;
      dz_data[Motion_Planning_B.i5].im = 0.0;
    } else if (Motion_Planning_B.ar_c2 == 0.0) {
      dz_data[Motion_Planning_B.i5].re = 0.0;
      dz_data[Motion_Planning_B.i5].im = Motion_Planning_B.ai_h /
        Motion_Planning_B.br_d;
    } else {
      dz_data[Motion_Planning_B.i5].re = Motion_Planning_B.ar_c2 /
        Motion_Planning_B.br_d;
      dz_data[Motion_Planning_B.i5].im = Motion_Planning_B.ai_h /
        Motion_Planning_B.br_d;
    }
  }

  Motion_Planning_emxFree_real_T(&b_y_tmp);
  Motion_Planning_emxFree_creal_T(&x);
  Motion_Planning_B.loop_ub_e = e_y->size[0];
  for (Motion_Planning_B.n_j = 0; Motion_Planning_B.n_j < 20;
       Motion_Planning_B.n_j++) {
    Motion_Planning_B.dz_size = *dz_size;
    Motion_Planning_B.z_size_j = *z_size;
    Motion_Planning_B.i5 = ((Motion_Planning_B.n_j + 1) << 1) - 1;
    for (Motion_Planning_B.i4 = 0; Motion_Planning_B.i4 <
         Motion_Planning_B.t_size_idx_0; Motion_Planning_B.i4++) {
      Motion_Planning_B.e_data_g = Motion_Planning_B.t_data[Motion_Planning_B.i4];
      Motion_Planning_B.ar_c2 = static_cast<real_T>(Motion_Planning_B.n_j + 1) +
        Motion_Planning_B.nhik_data[Motion_Planning_B.i4].re;
      Motion_Planning_B.br_d = Motion_Planning_B.nhik_data[Motion_Planning_B.i4]
        .im;
      Motion_Planning_B.e_data_g.re = (Motion_Planning_B.ar_c2 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].re -
        Motion_Planning_B.br_d * Motion_Planning_B.e_data_l[Motion_Planning_B.i4]
        .im) + static_cast<real_T>(Motion_Planning_B.i5) *
        Motion_Planning_B.e_data_g.re;
      Motion_Planning_B.e_data_g.im = (Motion_Planning_B.ar_c2 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].im +
        Motion_Planning_B.br_d * Motion_Planning_B.e_data_l[Motion_Planning_B.i4]
        .re) + static_cast<real_T>(Motion_Planning_B.i5) *
        Motion_Planning_B.e_data_g.im;
      Motion_Planning_B.t_data[Motion_Planning_B.i4] =
        Motion_Planning_B.e_data_g;
    }

    for (Motion_Planning_B.i4 = 0; Motion_Planning_B.i4 <
         Motion_Planning_B.m2C_size_idx_0; Motion_Planning_B.i4++) {
      Motion_Planning_B.e_data_g =
        Motion_Planning_B.dt_data[Motion_Planning_B.i4];
      Motion_Planning_B.ar_c2 = static_cast<real_T>(Motion_Planning_B.n_j + 1) +
        Motion_Planning_B.nhik_data[Motion_Planning_B.i4].re;
      Motion_Planning_B.br_d = Motion_Planning_B.nhik_data[Motion_Planning_B.i4]
        .im;
      Motion_Planning_B.ai_h = ((0.0 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].re - 0.5 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].im) +
        static_cast<real_T>(Motion_Planning_B.i5) *
        Motion_Planning_B.e_data_g.re) +
        (Motion_Planning_B.dp_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.ar_c2 -
         Motion_Planning_B.dp_data[Motion_Planning_B.i4].im *
         Motion_Planning_B.br_d);
      Motion_Planning_B.ar_c2 = ((0.0 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].im + 0.5 *
        Motion_Planning_B.e_data_l[Motion_Planning_B.i4].re) +
        static_cast<real_T>(Motion_Planning_B.i5) *
        Motion_Planning_B.e_data_g.im) +
        (Motion_Planning_B.dp_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.br_d + Motion_Planning_B.dp_data[Motion_Planning_B.i4]
         .im * Motion_Planning_B.ar_c2);
      Motion_Planning_B.e_data_g.re =
        (Motion_Planning_B.m2C_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.ai_h -
         Motion_Planning_B.m2C_data[Motion_Planning_B.i4].im *
         Motion_Planning_B.ar_c2) +
        (Motion_Planning_B.t_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.dm2C_data[Motion_Planning_B.i4].re -
         Motion_Planning_B.t_data[Motion_Planning_B.i4].im *
         Motion_Planning_B.dm2C_data[Motion_Planning_B.i4].im);
      Motion_Planning_B.e_data_g.im =
        (Motion_Planning_B.m2C_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.ar_c2 +
         Motion_Planning_B.m2C_data[Motion_Planning_B.i4].im *
         Motion_Planning_B.ai_h) +
        (Motion_Planning_B.t_data[Motion_Planning_B.i4].re *
         Motion_Planning_B.dm2C_data[Motion_Planning_B.i4].im +
         Motion_Planning_B.t_data[Motion_Planning_B.i4].im *
         Motion_Planning_B.dm2C_data[Motion_Planning_B.i4].re);
      Motion_Planning_B.dt_data[Motion_Planning_B.i4] =
        Motion_Planning_B.e_data_g;
    }

    Motion_Planning_B.t_size_idx_0 = e_y->size[0];
    for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
         Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
      Motion_Planning_B.e_data_g = Motion_Planning_B.t_data[Motion_Planning_B.i5];
      Motion_Planning_B.ai_h = Motion_Planning_B.e_data_g.re;
      Motion_Planning_B.e_data_g.re = e_y->data[Motion_Planning_B.i5].re *
        Motion_Planning_B.e_data_g.re - e_y->data[Motion_Planning_B.i5].im *
        Motion_Planning_B.e_data_g.im;
      Motion_Planning_B.e_data_g.im = e_y->data[Motion_Planning_B.i5].re *
        Motion_Planning_B.e_data_g.im + e_y->data[Motion_Planning_B.i5].im *
        Motion_Planning_B.ai_h;
      Motion_Planning_B.t_data[Motion_Planning_B.i5] =
        Motion_Planning_B.e_data_g;
    }

    for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
         Motion_Planning_B.dz_size; Motion_Planning_B.i5++) {
      Motion_Planning_B.e_data_g = dz_data[Motion_Planning_B.i5];
      Motion_Planning_B.e_data_g.re +=
        Motion_Planning_B.dt_data[Motion_Planning_B.i5].re;
      Motion_Planning_B.e_data_g.im +=
        Motion_Planning_B.dt_data[Motion_Planning_B.i5].im;
      dz_data[Motion_Planning_B.i5] = Motion_Planning_B.e_data_g;
    }

    for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
         Motion_Planning_B.z_size_j; Motion_Planning_B.i5++) {
      Motion_Planning_B.e_data_g = z_data[Motion_Planning_B.i5];
      Motion_Planning_B.e_data_g.re +=
        Motion_Planning_B.t_data[Motion_Planning_B.i5].re;
      Motion_Planning_B.e_data_g.im +=
        Motion_Planning_B.t_data[Motion_Planning_B.i5].im;
      z_data[Motion_Planning_B.i5] = Motion_Planning_B.e_data_g;
    }

    for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
         Motion_Planning_B.e_size_idx_0; Motion_Planning_B.i5++) {
      Motion_Planning_B.e_data_g =
        Motion_Planning_B.dp_data[Motion_Planning_B.i5];
      Motion_Planning_B.ar_c2 = (Motion_Planning_B.e_data_l[Motion_Planning_B.i5]
        .re * 0.0 - Motion_Planning_B.e_data_l[Motion_Planning_B.i5].im) +
        (Motion_Planning_B.A_data_o[Motion_Planning_B.i5].re *
         Motion_Planning_B.e_data_g.re -
         Motion_Planning_B.A_data_o[Motion_Planning_B.i5].im *
         Motion_Planning_B.e_data_g.im);
      Motion_Planning_B.ai_h = (Motion_Planning_B.e_data_l[Motion_Planning_B.i5]
        .im * 0.0 + Motion_Planning_B.e_data_l[Motion_Planning_B.i5].re) +
        (Motion_Planning_B.A_data_o[Motion_Planning_B.i5].re *
         Motion_Planning_B.e_data_g.im +
         Motion_Planning_B.A_data_o[Motion_Planning_B.i5].im *
         Motion_Planning_B.e_data_g.re);
      if (Motion_Planning_B.ai_h == 0.0) {
        Motion_Planning_B.e_data_g.re = Motion_Planning_B.ar_c2 /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
        Motion_Planning_B.e_data_g.im = 0.0;
      } else if (Motion_Planning_B.ar_c2 == 0.0) {
        Motion_Planning_B.e_data_g.re = 0.0;
        Motion_Planning_B.e_data_g.im = Motion_Planning_B.ai_h /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
      } else {
        Motion_Planning_B.e_data_g.re = Motion_Planning_B.ar_c2 /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
        Motion_Planning_B.e_data_g.im = Motion_Planning_B.ai_h /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
      }

      Motion_Planning_B.dp_data[Motion_Planning_B.i5] =
        Motion_Planning_B.e_data_g;
    }

    for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
         Motion_Planning_B.e_size_idx_0; Motion_Planning_B.i5++) {
      Motion_Planning_B.e_data_g =
        Motion_Planning_B.e_data_l[Motion_Planning_B.i5];
      Motion_Planning_B.ai_h = Motion_Planning_B.e_data_g.re * y_tmp->
        data[Motion_Planning_B.i5].re - Motion_Planning_B.e_data_g.im *
        y_tmp->data[Motion_Planning_B.i5].im;
      Motion_Planning_B.ar_c2 = Motion_Planning_B.e_data_g.re * y_tmp->
        data[Motion_Planning_B.i5].im + Motion_Planning_B.e_data_g.im *
        y_tmp->data[Motion_Planning_B.i5].re;
      if (Motion_Planning_B.ar_c2 == 0.0) {
        Motion_Planning_B.e_data_g.re = Motion_Planning_B.ai_h /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
        Motion_Planning_B.e_data_g.im = 0.0;
      } else if (Motion_Planning_B.ai_h == 0.0) {
        Motion_Planning_B.e_data_g.re = 0.0;
        Motion_Planning_B.e_data_g.im = Motion_Planning_B.ar_c2 /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
      } else {
        Motion_Planning_B.e_data_g.re = Motion_Planning_B.ai_h /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
        Motion_Planning_B.e_data_g.im = Motion_Planning_B.ar_c2 /
          static_cast<real_T>(Motion_Planning_B.n_j + 2);
      }

      Motion_Planning_B.e_data_l[Motion_Planning_B.i5] =
        Motion_Planning_B.e_data_g;
    }
  }

  Motion_Planning_emxFree_creal_T(&e_y);
  Motion_Planning_B.i5 = y_tmp->size[0];
  y_tmp->size[0] = *c_size;
  Motio_emxEnsureCapacity_creal_T(y_tmp, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = *c_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    y_tmp->data[Motion_Planning_B.i5].re = c_data[Motion_Planning_B.i5] * 0.0;
    y_tmp->data[Motion_Planning_B.i5].im = c_data[Motion_Planning_B.i5];
  }

  Motion_Planning_B.i5 = l->size[0];
  l->size[0] = y_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = y_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    l->data[Motion_Planning_B.i5] = y_tmp->data[Motion_Planning_B.i5];
  }

  Motion_Planning_exp(l);
  Motion_Planning_B.loop_ub_e = *z_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.e_data_g = z_data[Motion_Planning_B.i5];
    Motion_Planning_B.ai_h = Motion_Planning_B.e_data_g.re;
    Motion_Planning_B.e_data_g.re = Motion_Planning_B.e_data_g.re * l->
      data[Motion_Planning_B.i5].re - Motion_Planning_B.e_data_g.im * l->
      data[Motion_Planning_B.i5].im;
    Motion_Planning_B.e_data_g.im = Motion_Planning_B.ai_h * l->
      data[Motion_Planning_B.i5].im + Motion_Planning_B.e_data_g.im * l->
      data[Motion_Planning_B.i5].re;
    z_data[Motion_Planning_B.i5] = Motion_Planning_B.e_data_g;
  }

  Motion_Planning_B.i5 = l->size[0];
  l->size[0] = y_tmp->size[0];
  Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.i5);
  Motion_Planning_B.loop_ub_e = y_tmp->size[0];
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    l->data[Motion_Planning_B.i5] = y_tmp->data[Motion_Planning_B.i5];
  }

  Motion_Planning_emxFree_creal_T(&y_tmp);
  Motion_Planning_exp(l);
  Motion_Planning_B.loop_ub_e = *dz_size;
  for (Motion_Planning_B.i5 = 0; Motion_Planning_B.i5 <
       Motion_Planning_B.loop_ub_e; Motion_Planning_B.i5++) {
    Motion_Planning_B.e_data_g = dz_data[Motion_Planning_B.i5];
    Motion_Planning_B.ai_h = Motion_Planning_B.e_data_g.re;
    Motion_Planning_B.e_data_g.re = Motion_Planning_B.e_data_g.re * l->
      data[Motion_Planning_B.i5].re - Motion_Planning_B.e_data_g.im * l->
      data[Motion_Planning_B.i5].im;
    Motion_Planning_B.e_data_g.im = Motion_Planning_B.ai_h * l->
      data[Motion_Planning_B.i5].im + Motion_Planning_B.e_data_g.im * l->
      data[Motion_Planning_B.i5].re;
    dz_data[Motion_Planning_B.i5] = Motion_Planning_B.e_data_g;
  }

  Motion_Planning_emxFree_creal_T(&l);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelg1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  creal_T z_data[], int32_T *z_size, creal_T dz_data[], int32_T *dz_size)
{
  emxArray_creal_T_Motion_Plann_T *k;
  emxArray_int32_T_Motion_Plann_T *b_i_tmp;
  emxArray_int32_T_Motion_Plann_T *c_i;
  emxArray_int32_T_Motion_Plann_T *j;
  emxArray_real_T_Motion_Planni_T *i;
  emxArray_real_T_Motion_Planni_T *i_0;
  *z_size = static_cast<int8_T>(*a_size);
  Motion_Planning_B.loop_ub_he = static_cast<int8_T>(*a_size);
  if (0 <= Motion_Planning_B.loop_ub_he - 1) {
    memset(&z_data[0], 0, Motion_Planning_B.loop_ub_he * sizeof(creal_T));
  }

  *dz_size = static_cast<int8_T>(*a_size);
  Motion_Planning_B.loop_ub_he = static_cast<int8_T>(*a_size);
  if (0 <= Motion_Planning_B.loop_ub_he - 1) {
    memset(&dz_data[0], 0, Motion_Planning_B.loop_ub_he * sizeof(creal_T));
  }

  Motion_Planning_B.d_size_k = *d_size;
  Motion_Planning_B.loop_ub_he = *d_size;
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.d_data_i[Motion_Planning_B.i2] =
      d_data[Motion_Planning_B.i2] - a_data[Motion_Planning_B.i2];
  }

  Motion_Planning_emxInit_real_T(&i, 1);
  Motion_Planning_emxInit_real_T(&i_0, 1);
  Motion_Planning_B.d_data_j.data = &Motion_Planning_B.d_data_i[0];
  Motion_Planning_B.d_data_j.size = &Motion_Planning_B.d_size_k;
  Motion_Planning_B.d_data_j.allocatedSize = 99;
  Motion_Planning_B.d_data_j.numDimensions = 1;
  Motion_Planning_B.d_data_j.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.d_data_j, i);
  Motion_Planning_B.i2 = i_0->size[0];
  i_0->size[0] = i->size[0];
  Motion_emxEnsureCapacity_real_T(i_0, Motion_Planning_B.i2);
  Motion_Planning_B.loop_ub_he = i->size[0];
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    i_0->data[Motion_Planning_B.i2] = i->data[Motion_Planning_B.i2] / (4.0 *
      a_data[Motion_Planning_B.i2]);
  }

  Motion_Planning_abs_d(i_0, i);
  Motion_Planning_B.criteria_size = i->size[0];
  Motion_Planning_B.loop_ub_he = i->size[0];
  Motion_Planning_emxFree_real_T(&i_0);
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.criteria_data[Motion_Planning_B.i2] = (i->
      data[Motion_Planning_B.i2] < 628.31853071795865);
  }

  Motion_Planning_emxInit_int32_T(&b_i_tmp, 1);
  Motion_Planning_B.criteria_data_f.data = &Motion_Planning_B.criteria_data[0];
  Motion_Planning_B.criteria_data_f.size = &Motion_Planning_B.criteria_size;
  Motion_Planning_B.criteria_data_f.allocatedSize = 99;
  Motion_Planning_B.criteria_data_f.numDimensions = 1;
  Motion_Planning_B.criteria_data_f.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_f, b_i_tmp);
  Motion_Planning_B.i2 = i->size[0];
  i->size[0] = b_i_tmp->size[0];
  Motion_emxEnsureCapacity_real_T(i, Motion_Planning_B.i2);
  Motion_Planning_B.loop_ub_he = b_i_tmp->size[0];
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    i->data[Motion_Planning_B.i2] = b_i_tmp->data[Motion_Planning_B.i2];
  }

  Motion_Planning_B.criteria_data_a5.data = &Motion_Planning_B.criteria_data[0];
  Motion_Planning_B.criteria_data_a5.size = &Motion_Planning_B.criteria_size;
  Motion_Planning_B.criteria_data_a5.allocatedSize = 99;
  Motion_Planning_B.criteria_data_a5.numDimensions = 1;
  Motion_Planning_B.criteria_data_a5.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_a5, b_i_tmp);
  Motion_Planning_B.loop_ub_he = b_i_tmp->size[0];
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.ilarge_data[Motion_Planning_B.i2] = b_i_tmp->
      data[Motion_Planning_B.i2];
  }

  Motion_Planning_B.criteria_size_h = Motion_Planning_B.criteria_size;
  Motion_Planning_B.loop_ub_he = Motion_Planning_B.criteria_size;
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.criteria_data_m[Motion_Planning_B.i2] =
      !Motion_Planning_B.criteria_data[Motion_Planning_B.i2];
  }

  Motion_Planning_B.criteria_data_g.data = &Motion_Planning_B.criteria_data_m[0];
  Motion_Planning_B.criteria_data_g.size = &Motion_Planning_B.criteria_size_h;
  Motion_Planning_B.criteria_data_g.allocatedSize = 99;
  Motion_Planning_B.criteria_data_g.numDimensions = 1;
  Motion_Planning_B.criteria_data_g.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_g, b_i_tmp);
  Motion_Planning_B.d_size_b = *d_size;
  Motion_Planning_B.loop_ub_he = *d_size;
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.criteria_data[Motion_Planning_B.i2] =
      ((d_data[Motion_Planning_B.i2] == 0.0) && (a_data[Motion_Planning_B.i2] ==
        0.0));
  }

  Motion_Planning_emxInit_int32_T(&c_i, 1);
  Motion_Planning_B.d_data_n.data = &Motion_Planning_B.criteria_data[0];
  Motion_Planning_B.d_data_n.size = &Motion_Planning_B.d_size_b;
  Motion_Planning_B.d_data_n.allocatedSize = 99;
  Motion_Planning_B.d_data_n.numDimensions = 1;
  Motion_Planning_B.d_data_n.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.d_data_n, c_i);
  Motion_Planning_B.d_size_o = *d_size;
  Motion_Planning_B.loop_ub_he = *d_size;
  for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
       Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
    Motion_Planning_B.criteria_data[Motion_Planning_B.i2] =
      ((d_data[Motion_Planning_B.i2] == 0.0) && (a_data[Motion_Planning_B.i2] ==
        0.0));
  }

  Motion_Planning_emxInit_int32_T(&j, 1);
  Motion_Planning_B.d_data_d.data = &Motion_Planning_B.criteria_data[0];
  Motion_Planning_B.d_data_d.size = &Motion_Planning_B.d_size_o;
  Motion_Planning_B.d_data_d.allocatedSize = 99;
  Motion_Planning_B.d_data_d.numDimensions = 1;
  Motion_Planning_B.d_data_d.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.d_data_d, j);
  if (i->size[0] != 0) {
    Motion_Planning_B.a_size_n = i->size[0];
    Motion_Planning_B.loop_ub_he = i->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.a_data_f[Motion_Planning_B.i2] = a_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i2]) - 1];
    }

    Motion_Planning_B.d_size_m = i->size[0];
    Motion_Planning_B.loop_ub_he = i->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.d_data_i[Motion_Planning_B.i2] = d_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i2]) - 1];
    }

    Motion_Planning_B.c_size_k = i->size[0];
    Motion_Planning_B.loop_ub_he = i->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.c_data_g[Motion_Planning_B.i2] = c_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i2]) - 1];
    }

    Motion_Planning_fresnelgLargea1(Motion_Planning_B.a_data_f,
      &Motion_Planning_B.a_size_n, Motion_Planning_B.d_data_i,
      &Motion_Planning_B.d_size_m, Motion_Planning_B.c_data_g,
      &Motion_Planning_B.c_size_k, Motion_Planning_B.b_data_d,
      &Motion_Planning_B.d_size_k, Motion_Planning_B.e_data,
      &Motion_Planning_B.criteria_size);
    Motion_Planning_B.loop_ub_he = Motion_Planning_B.d_size_k;
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      z_data[Motion_Planning_B.ilarge_data[Motion_Planning_B.i2] - 1] =
        Motion_Planning_B.b_data_d[Motion_Planning_B.i2];
    }

    Motion_Planning_B.loop_ub_he = Motion_Planning_B.criteria_size;
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      dz_data[Motion_Planning_B.ilarge_data[Motion_Planning_B.i2] - 1] =
        Motion_Planning_B.e_data[Motion_Planning_B.i2];
    }
  }

  Motion_Planning_emxFree_real_T(&i);
  if (b_i_tmp->size[0] != 0) {
    Motion_Planning_B.a_size_j = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_he = b_i_tmp->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.a_data_f[Motion_Planning_B.i2] = a_data[b_i_tmp->
        data[Motion_Planning_B.i2] - 1];
    }

    Motion_Planning_B.d_size_h = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_he = b_i_tmp->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.d_data_i[Motion_Planning_B.i2] = d_data[b_i_tmp->
        data[Motion_Planning_B.i2] - 1];
    }

    Motion_Planning_B.c_size_f2 = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_he = b_i_tmp->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      Motion_Planning_B.c_data_g[Motion_Planning_B.i2] = c_data[b_i_tmp->
        data[Motion_Planning_B.i2] - 1];
    }

    Motion_Planning_fresnelgSmalla1(Motion_Planning_B.a_data_f,
      &Motion_Planning_B.a_size_j, Motion_Planning_B.d_data_i,
      &Motion_Planning_B.d_size_h, Motion_Planning_B.c_data_g,
      &Motion_Planning_B.c_size_f2, Motion_Planning_B.b_data_d,
      &Motion_Planning_B.d_size_k, Motion_Planning_B.e_data,
      &Motion_Planning_B.criteria_size);
    Motion_Planning_B.loop_ub_he = Motion_Planning_B.d_size_k;
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      z_data[b_i_tmp->data[Motion_Planning_B.i2] - 1] =
        Motion_Planning_B.b_data_d[Motion_Planning_B.i2];
    }

    Motion_Planning_B.loop_ub_he = Motion_Planning_B.criteria_size;
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      dz_data[b_i_tmp->data[Motion_Planning_B.i2] - 1] =
        Motion_Planning_B.e_data[Motion_Planning_B.i2];
    }
  }

  Motion_Planning_emxFree_int32_T(&b_i_tmp);
  if (c_i->size[0] != 0) {
    Motion_Planning_emxInit_creal_T(&k, 1);
    Motion_Planning_B.i2 = k->size[0];
    k->size[0] = j->size[0];
    Motio_emxEnsureCapacity_creal_T(k, Motion_Planning_B.i2);
    Motion_Planning_B.loop_ub_he = j->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      k->data[Motion_Planning_B.i2].re = c_data[j->data[Motion_Planning_B.i2] -
        1] * 0.0;
      k->data[Motion_Planning_B.i2].im = c_data[j->data[Motion_Planning_B.i2] -
        1];
    }

    Motion_Planning_exp(k);
    Motion_Planning_B.loop_ub_he = k->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      z_data[j->data[Motion_Planning_B.i2] - 1] = k->data[Motion_Planning_B.i2];
    }

    Motion_Planning_emxFree_creal_T(&k);
    Motion_Planning_B.loop_ub_he = c_i->size[0];
    for (Motion_Planning_B.i2 = 0; Motion_Planning_B.i2 <
         Motion_Planning_B.loop_ub_he; Motion_Planning_B.i2++) {
      dz_data[c_i->data[Motion_Planning_B.i2] - 1].re = 0.0;
      dz_data[c_i->data[Motion_Planning_B.i2] - 1].im = 0.0;
    }
  }

  Motion_Planning_emxFree_int32_T(&j);
  Motion_Planning_emxFree_int32_T(&c_i);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_abs_dw(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size)
{
  int32_T k;
  *y_size = *x_size;
  for (k = 0; k < *x_size; k++) {
    y_data[k] = Motion_Planning_rt_hypotd_snf(x_data[k].re, x_data[k].im);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_clothoidG1fit2(const creal_T z0_data[], const real_T
  theta0_data[], const int32_T *theta0_size, const creal_T z1_data[], const
  int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size, real_T dk0_dtheta0_data[], int32_T
  *dk0_dtheta0_size, real_T dk0_dtheta1_data[], int32_T *dk0_dtheta1_size,
  real_T dk1_dtheta0_data[], int32_T *dk1_dtheta0_size, real_T dk1_dtheta1_data[],
  int32_T *dk1_dtheta1_size)
{
  emxArray_creal_T_Motion_Plann_T *c;
  emxArray_real_T_Motion_Planni_T *b_z;
  emxArray_real_T_Motion_Planni_T *y;
  Motion_Planning_B.z_size_n = *z1_size;
  Motion_Planning_B.loop_ub_c = *z1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.z_data_j[Motion_Planning_B.i_f].re =
      z1_data[Motion_Planning_B.i_f].re - z0_data[Motion_Planning_B.i_f].re;
    Motion_Planning_B.z_data_j[Motion_Planning_B.i_f].im =
      z1_data[Motion_Planning_B.i_f].im - z0_data[Motion_Planning_B.i_f].im;
  }

  Motion_Planning_emxInit_creal_T(&c, 1);
  Motion_Planning_angle_n(Motion_Planning_B.z_data_j,
    &Motion_Planning_B.z_size_n, Motion_Planning_B.phi_data,
    &Motion_Planning_B.phi_size);
  Motion_Planning_B.i_f = c->size[0];
  c->size[0] = *theta0_size;
  Motio_emxEnsureCapacity_creal_T(c, Motion_Planning_B.i_f);
  Motion_Planning_B.loop_ub_c = *theta0_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = theta0_data[Motion_Planning_B.i_f] -
      Motion_Planning_B.phi_data[Motion_Planning_B.i_f];
    c->data[Motion_Planning_B.i_f].re = Motion_Planning_B.ar * 0.0;
    c->data[Motion_Planning_B.i_f].im = Motion_Planning_B.ar;
  }

  Motion_Planning_exp(c);
  Motion_Planning_angle_n(c->data, c->size, Motion_Planning_B.phi0_data,
    &Motion_Planning_B.phi0_size);
  Motion_Planning_B.i_f = c->size[0];
  c->size[0] = *theta1_size;
  Motio_emxEnsureCapacity_creal_T(c, Motion_Planning_B.i_f);
  Motion_Planning_B.loop_ub_c = *theta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = theta1_data[Motion_Planning_B.i_f] -
      Motion_Planning_B.phi_data[Motion_Planning_B.i_f];
    c->data[Motion_Planning_B.i_f].re = Motion_Planning_B.ar * 0.0;
    c->data[Motion_Planning_B.i_f].im = Motion_Planning_B.ar;
  }

  Motion_Planning_exp(c);
  Motion_Planning_angle_n(c->data, c->size, Motion_Planning_B.phi_data,
    &Motion_Planning_B.phi_size);
  *k1_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  Motion_Planning_emxFree_creal_T(&c);
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    k1_data[Motion_Planning_B.i_f] =
      Motion_Planning_B.phi_data[Motion_Planning_B.i_f] -
      Motion_Planning_B.phi0_data[Motion_Planning_B.i_f];
  }

  Motion_Planning_emxInit_real_T(&y, 1);
  Motion_Planning_fetchAgrad(Motion_Planning_B.phi0_data,
    &Motion_Planning_B.phi0_size, Motion_Planning_B.phi_data,
    Motion_Planning_B.a_data, &Motion_Planning_B.a_size, dk1_dtheta0_data,
    dk1_dtheta0_size, Motion_Planning_B.da_dphi1_data,
    &Motion_Planning_B.da_dphi1_size);
  Motion_Planning_fresnelg1(Motion_Planning_B.a_data, &Motion_Planning_B.a_size,
    k1_data, k1_size, Motion_Planning_B.phi0_data, Motion_Planning_B.f_data,
    &Motion_Planning_B.phi0_size, Motion_Planning_B.df_da_data,
    &Motion_Planning_B.da_dphi1_size);
  Motion_Planning_abs_dw(Motion_Planning_B.z_data_j, &Motion_Planning_B.z_size_n,
    dk1_dtheta1_data, dk1_dtheta1_size);
  Motion_Planning_B.i_f = y->size[0];
  y->size[0] = Motion_Planning_B.phi0_size;
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.i_f);
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi0_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    y->data[Motion_Planning_B.i_f] =
      Motion_Planning_B.f_data[Motion_Planning_B.i_f].re;
  }

  Motion_Planning_emxInit_real_T(&b_z, 1);
  Motion_Planning_B.i_f = b_z->size[0];
  b_z->size[0] = *dk1_dtheta1_size;
  Motion_emxEnsureCapacity_real_T(b_z, Motion_Planning_B.i_f);
  Motion_Planning_B.loop_ub_c = *dk1_dtheta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    b_z->data[Motion_Planning_B.i_f] = dk1_dtheta1_data[Motion_Planning_B.i_f] /
      y->data[Motion_Planning_B.i_f];
  }

  *l_size = *dk1_dtheta1_size;
  Motion_Planning_B.loop_ub_c = *dk1_dtheta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    l_data[Motion_Planning_B.i_f] = dk1_dtheta1_data[Motion_Planning_B.i_f] /
      y->data[Motion_Planning_B.i_f];
  }

  Motion_Planning_power_ls(Motion_Planning_B.f_data,
    &Motion_Planning_B.phi0_size, Motion_Planning_B.z_data_j,
    &Motion_Planning_B.z_size_n);
  Motion_Planning_B.loop_ub_c = *dk1_dtheta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = Motion_Planning_B.df_da_data[Motion_Planning_B.i_f].
      re;
    Motion_Planning_B.ai = Motion_Planning_B.df_da_data[Motion_Planning_B.i_f].
      im;
    Motion_Planning_B.br = Motion_Planning_B.z_data_j[Motion_Planning_B.i_f].re;
    Motion_Planning_B.bi = Motion_Planning_B.z_data_j[Motion_Planning_B.i_f].im;
    if (Motion_Planning_B.bi == 0.0) {
      if (Motion_Planning_B.ai == 0.0) {
        Motion_Planning_B.ar /= Motion_Planning_B.br;
      } else if (Motion_Planning_B.ar == 0.0) {
        Motion_Planning_B.ar = 0.0;
      } else {
        Motion_Planning_B.ar /= Motion_Planning_B.br;
      }
    } else if (Motion_Planning_B.br == 0.0) {
      if (Motion_Planning_B.ar == 0.0) {
        Motion_Planning_B.ar = Motion_Planning_B.ai / Motion_Planning_B.bi;
      } else if (Motion_Planning_B.ai == 0.0) {
        Motion_Planning_B.ar = 0.0;
      } else {
        Motion_Planning_B.ar = Motion_Planning_B.ai / Motion_Planning_B.bi;
      }
    } else {
      Motion_Planning_B.brm = fabs(Motion_Planning_B.br);
      Motion_Planning_B.bim = fabs(Motion_Planning_B.bi);
      if (Motion_Planning_B.brm > Motion_Planning_B.bim) {
        Motion_Planning_B.brm = Motion_Planning_B.bi / Motion_Planning_B.br;
        Motion_Planning_B.ar = (Motion_Planning_B.brm * Motion_Planning_B.ai +
          Motion_Planning_B.ar) / (Motion_Planning_B.brm * Motion_Planning_B.bi
          + Motion_Planning_B.br);
      } else if (Motion_Planning_B.bim == Motion_Planning_B.brm) {
        Motion_Planning_B.ar = ((Motion_Planning_B.br > 0.0 ? 0.5 : -0.5) *
          Motion_Planning_B.ar + (Motion_Planning_B.bi > 0.0 ? 0.5 : -0.5) *
          Motion_Planning_B.ai) / Motion_Planning_B.brm;
      } else {
        Motion_Planning_B.brm = Motion_Planning_B.br / Motion_Planning_B.bi;
        Motion_Planning_B.ar = (Motion_Planning_B.brm * Motion_Planning_B.ar +
          Motion_Planning_B.ai) / (Motion_Planning_B.brm * Motion_Planning_B.br
          + Motion_Planning_B.bi);
      }
    }

    dk1_dtheta1_data[Motion_Planning_B.i_f] =
      -dk1_dtheta1_data[Motion_Planning_B.i_f] * Motion_Planning_B.ar;
  }

  Motion_Planning_power(b_z, y);
  *k0_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    k0_data[Motion_Planning_B.i_f] = k1_data[Motion_Planning_B.i_f] -
      Motion_Planning_B.a_data[Motion_Planning_B.i_f];
  }

  Motion_Planning_B.loop_ub_c = *dk1_dtheta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.phi_data[Motion_Planning_B.i_f] =
      -dk1_dtheta1_data[Motion_Planning_B.i_f] *
      dk1_dtheta0_data[Motion_Planning_B.i_f] / y->data[Motion_Planning_B.i_f];
  }

  *dk0_dtheta0_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    dk0_dtheta0_data[Motion_Planning_B.i_f] = (-1.0 -
      dk1_dtheta0_data[Motion_Planning_B.i_f]) / l_data[Motion_Planning_B.i_f] +
      k0_data[Motion_Planning_B.i_f] *
      Motion_Planning_B.phi_data[Motion_Planning_B.i_f];
  }

  Motion_Planning_B.loop_ub_c = *dk1_dtheta1_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = -dk1_dtheta1_data[Motion_Planning_B.i_f] *
      Motion_Planning_B.da_dphi1_data[Motion_Planning_B.i_f] / y->
      data[Motion_Planning_B.i_f];
    dk1_dtheta1_data[Motion_Planning_B.i_f] = Motion_Planning_B.ar;
  }

  Motion_Planning_emxFree_real_T(&y);
  *dk0_dtheta1_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    dk0_dtheta1_data[Motion_Planning_B.i_f] = (1.0 -
      Motion_Planning_B.da_dphi1_data[Motion_Planning_B.i_f]) /
      l_data[Motion_Planning_B.i_f] + k0_data[Motion_Planning_B.i_f] *
      dk1_dtheta1_data[Motion_Planning_B.i_f];
  }

  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    k1_data[Motion_Planning_B.i_f] +=
      Motion_Planning_B.a_data[Motion_Planning_B.i_f];
  }

  *dk1_dtheta0_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    dk1_dtheta0_data[Motion_Planning_B.i_f] =
      (dk1_dtheta0_data[Motion_Planning_B.i_f] + -1.0) /
      l_data[Motion_Planning_B.i_f] + k1_data[Motion_Planning_B.i_f] *
      Motion_Planning_B.phi_data[Motion_Planning_B.i_f];
  }

  *dk1_dtheta1_size = Motion_Planning_B.phi_size;
  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    dk1_dtheta1_data[Motion_Planning_B.i_f] =
      (Motion_Planning_B.da_dphi1_data[Motion_Planning_B.i_f] + 1.0) /
      l_data[Motion_Planning_B.i_f] + k1_data[Motion_Planning_B.i_f] *
      dk1_dtheta1_data[Motion_Planning_B.i_f];
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      dk0_dtheta0_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      dk0_dtheta1_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      dk1_dtheta0_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      dk1_dtheta1_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = k0_data[Motion_Planning_B.i_f] / b_z->
      data[Motion_Planning_B.i_f];
    k0_data[Motion_Planning_B.i_f] = Motion_Planning_B.ar;
  }

  Motion_Planning_B.loop_ub_c = Motion_Planning_B.phi_size;
  for (Motion_Planning_B.i_f = 0; Motion_Planning_B.i_f <
       Motion_Planning_B.loop_ub_c; Motion_Planning_B.i_f++) {
    Motion_Planning_B.ar = k1_data[Motion_Planning_B.i_f] / b_z->
      data[Motion_Planning_B.i_f];
    k1_data[Motion_Planning_B.i_f] = Motion_Planning_B.ar;
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      k0_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_B.i_f = 0;
  while (Motion_Planning_B.i_f <= *l_size - 1) {
    if (b_z->data[Motion_Planning_B.i_f] == 0.0) {
      k1_data[Motion_Planning_B.i_f] = 0.0;
    }

    Motion_Planning_B.i_f++;
  }

  Motion_Planning_emxFree_real_T(&b_z);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_anon_o(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T x_data[], real_T varargout_1_data[], int32_T
  *varargout_1_size, real_T varargout_2_data[], int32_T varargout_2_size[2])
{
  Motion_Planning_B.loop_ub_ft = waypoints_size[0];
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    Motion_Planning_B.hip_data_m[Motion_Planning_B.d_d].re =
      waypoints_data[Motion_Planning_B.d_d];
    Motion_Planning_B.hip_data_m[Motion_Planning_B.d_d].im =
      waypoints_data[Motion_Planning_B.d_d + waypoints_size[0]];
  }

  if (2 > waypoints_size[0]) {
    Motion_Planning_B.e_m = 0;
    Motion_Planning_B.d_d = 0;
    Motion_Planning_B.g = 0;
    Motion_Planning_B.f = 0;
  } else {
    Motion_Planning_B.e_m = 1;
    Motion_Planning_B.d_d = waypoints_size[0];
    Motion_Planning_B.g = 1;
    Motion_Planning_B.f = waypoints_size[0];
  }

  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.loop_ub_ft = -1;
  } else {
    Motion_Planning_B.loop_ub_ft = waypoints_size[0] - 2;
  }

  if (0 <= Motion_Planning_B.loop_ub_ft) {
    memcpy(&Motion_Planning_B.hip_data_d[0], &Motion_Planning_B.hip_data_m[0],
           (Motion_Planning_B.loop_ub_ft + 1) * sizeof(creal_T));
  }

  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.loop_ub_ft = -1;
  } else {
    Motion_Planning_B.loop_ub_ft = waypoints_size[0] - 2;
  }

  Motion_Planning_B.x_size_a = Motion_Planning_B.loop_ub_ft + 1;
  if (0 <= Motion_Planning_B.loop_ub_ft) {
    memcpy(&Motion_Planning_B.x_data_fm[0], &x_data[0],
           (Motion_Planning_B.loop_ub_ft + 1) * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_ft = Motion_Planning_B.d_d - Motion_Planning_B.e_m;
  Motion_Planning_B.hip_size_j = Motion_Planning_B.loop_ub_ft;
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    Motion_Planning_B.hip_data_n[Motion_Planning_B.d_d] =
      Motion_Planning_B.hip_data_m[Motion_Planning_B.e_m + Motion_Planning_B.d_d];
  }

  Motion_Planning_B.loop_ub_ft = Motion_Planning_B.f - Motion_Planning_B.g;
  Motion_Planning_B.x_size_g = Motion_Planning_B.loop_ub_ft;
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    Motion_Planning_B.x_data_f[Motion_Planning_B.d_d] =
      x_data[Motion_Planning_B.g + Motion_Planning_B.d_d];
  }

  Motion_Planning_clothoidG1fit2(Motion_Planning_B.hip_data_d,
    Motion_Planning_B.x_data_fm, &Motion_Planning_B.x_size_a,
    Motion_Planning_B.hip_data_n, &Motion_Planning_B.hip_size_j,
    Motion_Planning_B.x_data_f, &Motion_Planning_B.x_size_g,
    Motion_Planning_B.k0_data_c, &Motion_Planning_B.k0_size_g,
    Motion_Planning_B.k1_data_o, &Motion_Planning_B.k1_size_j,
    Motion_Planning_B.unusedU1_data, &Motion_Planning_B.unusedU1_size,
    Motion_Planning_B.dk0_dc0_data_l, &Motion_Planning_B.dk0_dc0_size_c,
    Motion_Planning_B.dk0_dc1_data_m, &Motion_Planning_B.dk0_dc1_size_e,
    Motion_Planning_B.dk1_dc0_data_m, &Motion_Planning_B.dk1_dc0_size_m,
    Motion_Planning_B.dk1_dc1_data_c, &Motion_Planning_B.dk1_dc1_size_o);
  if (2 > Motion_Planning_B.k0_size_g) {
    Motion_Planning_B.e_m = 0;
  } else {
    Motion_Planning_B.e_m = 1;
  }

  if (2 > waypoints_size[0] - 1) {
    Motion_Planning_B.g = 0;
  } else {
    Motion_Planning_B.g = 1;
  }

  if (1 > Motion_Planning_B.k1_size_j - 1) {
    Motion_Planning_B.loop_ub_ft = -1;
  } else {
    Motion_Planning_B.loop_ub_ft = Motion_Planning_B.k1_size_j - 2;
  }

  *varargout_1_size = Motion_Planning_B.loop_ub_ft + 3;
  varargout_1_data[0] = 0.0 - Motion_Planning_B.k0_data_c[0];
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <=
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    varargout_1_data[Motion_Planning_B.d_d + 1] =
      Motion_Planning_B.k1_data_o[Motion_Planning_B.d_d] -
      Motion_Planning_B.k0_data_c[Motion_Planning_B.e_m + Motion_Planning_B.d_d];
  }

  varargout_1_data[Motion_Planning_B.loop_ub_ft + 2] =
    Motion_Planning_B.k1_data_o[Motion_Planning_B.k1_size_j - 1];
  if (1 > waypoints_size[0] - 2) {
    Motion_Planning_B.loop_ub_ft = -1;
  } else {
    Motion_Planning_B.loop_ub_ft = waypoints_size[0] - 3;
  }

  varargout_2_size[0] = Motion_Planning_B.dk1_dc0_size_m + 1;
  varargout_2_size[1] = 3;
  Motion_Planning_B.d_d = Motion_Planning_B.dk1_dc0_size_m;
  if (0 <= Motion_Planning_B.d_d - 1) {
    memcpy(&varargout_2_data[0], &Motion_Planning_B.dk1_dc0_data_m[0],
           Motion_Planning_B.d_d * sizeof(real_T));
  }

  varargout_2_data[Motion_Planning_B.dk1_dc0_size_m] = 0.0;
  varargout_2_data[Motion_Planning_B.dk1_dc0_size_m + 1] = 0.0 -
    Motion_Planning_B.dk0_dc0_data_l[0];
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <=
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    varargout_2_data[(Motion_Planning_B.d_d + varargout_2_size[0]) + 1] =
      Motion_Planning_B.dk1_dc1_data_c[Motion_Planning_B.d_d] -
      Motion_Planning_B.dk0_dc0_data_l[Motion_Planning_B.g +
      Motion_Planning_B.d_d];
  }

  varargout_2_data[(Motion_Planning_B.loop_ub_ft +
                    Motion_Planning_B.dk1_dc0_size_m) + 3] =
    Motion_Planning_B.dk1_dc1_data_c[waypoints_size[0] - 2];
  Motion_Planning_B.loop_ub_ft = Motion_Planning_B.dk0_dc1_size_e;
  for (Motion_Planning_B.d_d = 0; Motion_Planning_B.d_d <
       Motion_Planning_B.loop_ub_ft; Motion_Planning_B.d_d++) {
    varargout_2_data[Motion_Planning_B.d_d + (varargout_2_size[0] << 1)] =
      -Motion_Planning_B.dk0_dc1_data_m[Motion_Planning_B.d_d];
  }

  varargout_2_data[Motion_Planning_B.dk0_dc1_size_e +
    ((Motion_Planning_B.dk1_dc0_size_m + 1) << 1)] = 0.0;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_mulJt(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T x_data[], const int32_T *x_size, real_T y_data[],
  int32_T *y_size)
{
  if (*x_size < 2) {
    Motion_Planning_B.b_y_size_idx_1_h = 0;
  } else {
    Motion_Planning_B.b_y_size_idx_1_h = *x_size - 1;
    Motion_Planning_B.loop_ub_kb = *x_size - 2;
    for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <=
         Motion_Planning_B.loop_ub_kb; Motion_Planning_B.i12++) {
      Motion_Planning_B.b_y_data_m[Motion_Planning_B.i12] = static_cast<uint32_T>
        (Motion_Planning_B.i12 + 2);
    }
  }

  if (*x_size - 1 < 1) {
    Motion_Planning_B.c_y_size_idx_1_d = 0;
    Motion_Planning_B.d_y_size_idx_1_j1 = 0;
  } else {
    Motion_Planning_B.c_y_size_idx_1_d = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_kb = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <=
         Motion_Planning_B.loop_ub_kb; Motion_Planning_B.i12++) {
      Motion_Planning_B.c_y_data_o[Motion_Planning_B.i12] =
        Motion_Planning_B.i12 + 1U;
    }

    Motion_Planning_B.d_y_size_idx_1_j1 = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_kb = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <=
         Motion_Planning_B.loop_ub_kb; Motion_Planning_B.i12++) {
      Motion_Planning_B.d_y_data_n[Motion_Planning_B.i12] =
        Motion_Planning_B.i12 + 1U;
    }
  }

  for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <
       Motion_Planning_B.b_y_size_idx_1_h; Motion_Planning_B.i12++) {
    Motion_Planning_B.b_y_data_e[Motion_Planning_B.i12] = static_cast<int32_T>
      (Motion_Planning_B.b_y_data_m[Motion_Planning_B.i12]) - 1;
  }

  Motion_Planning_B.b_y_data_e[Motion_Planning_B.b_y_size_idx_1_h] = 0;
  Motion_Planning_B.x_data_fi[0] = *x_size - 1;
  for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <
       Motion_Planning_B.c_y_size_idx_1_d; Motion_Planning_B.i12++) {
    Motion_Planning_B.x_data_fi[Motion_Planning_B.i12 + 1] = static_cast<int32_T>
      (Motion_Planning_B.c_y_data_o[Motion_Planning_B.i12]) - 1;
  }

  Motion_Planning_B.x_data_h[0] = *x_size - 1;
  for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <
       Motion_Planning_B.d_y_size_idx_1_j1; Motion_Planning_B.i12++) {
    Motion_Planning_B.x_data_h[Motion_Planning_B.i12 + 1] = static_cast<int32_T>
      (Motion_Planning_B.d_y_data_n[Motion_Planning_B.i12]) - 1;
  }

  Motion_Planning_B.loop_ub_kb = Jtri_size[0];
  *y_size = Jtri_size[0];
  for (Motion_Planning_B.i12 = 0; Motion_Planning_B.i12 <
       Motion_Planning_B.loop_ub_kb; Motion_Planning_B.i12++) {
    y_data[Motion_Planning_B.i12] = (Jtri_data[Motion_Planning_B.i12 +
      Jtri_size[0]] * x_data[Motion_Planning_B.i12] +
      Jtri_data[Motion_Planning_B.i12] *
      x_data[Motion_Planning_B.b_y_data_e[Motion_Planning_B.i12]]) + Jtri_data
      [(Jtri_size[0] << 1) + Motion_Planning_B.x_data_fi[Motion_Planning_B.i12]]
      * x_data[Motion_Planning_B.x_data_h[Motion_Planning_B.i12]];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_repmat_m(real_T varargin_1, real_T b_data[], int32_T
  *b_size)
{
  int32_T i;
  int32_T loop_ub;
  *b_size = static_cast<int8_T>(static_cast<int32_T>(varargin_1));
  loop_ub = static_cast<int8_T>(static_cast<int32_T>(varargin_1));
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = 1.0E-7;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static boolean_T Motion_Planning_any(const boolean_T x_data[], const int32_T
  *x_size)
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= *x_size)) {
    if (!x_data[ix - 1]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_bsxfun(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size
  [2])
{
  if (*b_size == 1) {
    Motion_Planning_B.csz_idx_0_a = static_cast<int8_T>(a_size[0]);
  } else if (a_size[0] == 1) {
    Motion_Planning_B.csz_idx_0_a = static_cast<int8_T>(*b_size);
  } else if (a_size[0] == *b_size) {
    Motion_Planning_B.csz_idx_0_a = static_cast<int8_T>(a_size[0]);
  } else if (*b_size < a_size[0]) {
    Motion_Planning_B.csz_idx_0_a = static_cast<int8_T>(*b_size);
  } else {
    Motion_Planning_B.csz_idx_0_a = static_cast<int8_T>(a_size[0]);
  }

  Motion_Planning_B.csz_idx_1 = static_cast<int8_T>(a_size[1]);
  c_size[0] = Motion_Planning_B.csz_idx_0_a;
  c_size[1] = static_cast<int8_T>(a_size[1]);
  if (static_cast<int8_T>(a_size[1]) != 0) {
    Motion_Planning_B.acoef = (a_size[1] != 1);
    Motion_Planning_B.k_m = 0;
    while (Motion_Planning_B.k_m <= Motion_Planning_B.csz_idx_1 - 1) {
      Motion_Planning_B.ia = Motion_Planning_B.acoef * Motion_Planning_B.k_m;
      Motion_Planning_B.b_acoef = (a_size[0] != 1);
      Motion_Planning_B.bcoef = (*b_size != 1);
      Motion_Planning_B.b_k_a = 0;
      while (Motion_Planning_B.b_k_a <= Motion_Planning_B.csz_idx_0_a - 1) {
        c_data[Motion_Planning_B.b_k_a + Motion_Planning_B.csz_idx_0_a *
          Motion_Planning_B.k_m] = a_data[Motion_Planning_B.b_acoef *
          Motion_Planning_B.b_k_a + a_size[0] * Motion_Planning_B.ia] /
          b_data[Motion_Planning_B.bcoef * Motion_Planning_B.b_k_a];
        Motion_Planning_B.b_k_a++;
      }

      Motion_Planning_B.k_m++;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Plannin_sympentdisolve_l(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T b_size[2],
  real_T x_data[], int32_T x_size[2])
{
  Motion_Planning_B.N = b_size[0] - 4;
  x_size[0] = b_size[0];
  x_size[1] = b_size[1];
  Motion_Planning_B.loop_ub_tmp_f = b_size[0] * b_size[1] - 1;
  if (0 <= Motion_Planning_B.loop_ub_tmp_f) {
    memset(&x_data[0], 0, (Motion_Planning_B.loop_ub_tmp_f + 1) * sizeof(real_T));
  }

  Motion_Planning_B.alpha_size = b_size[0];
  Motion_Planning_B.loop_ub_o = b_size[0];
  if (0 <= Motion_Planning_B.loop_ub_o - 1) {
    memset(&Motion_Planning_B.alpha_data[0], 0, Motion_Planning_B.loop_ub_o *
           sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_o = b_size[0];
  if (0 <= Motion_Planning_B.loop_ub_o - 2) {
    memset(&Motion_Planning_B.b_gamma_data[0], 0, (Motion_Planning_B.loop_ub_o +
            -1) * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_o = b_size[0];
  if (0 <= Motion_Planning_B.loop_ub_o - 3) {
    memset(&Motion_Planning_B.delta_data[0], 0, (Motion_Planning_B.loop_ub_o +
            -2) * sizeof(real_T));
  }

  Motion_Planning_B.alpha_data[0] = d_data[0];
  Motion_Planning_B.b_gamma_data[0] = e_data[0] / d_data[0];
  Motion_Planning_B.delta_data[0] = f_data[0] / d_data[0];
  Motion_Planning_B.alpha_data[1] = d_data[1] - e_data[0] *
    Motion_Planning_B.b_gamma_data[0];
  Motion_Planning_B.b_gamma_data[1] = (e_data[1] - f_data[0] *
    Motion_Planning_B.b_gamma_data[0]) / Motion_Planning_B.alpha_data[1];
  Motion_Planning_B.delta_data[1] = f_data[1] / Motion_Planning_B.alpha_data[1];
  Motion_Planning_B.loop_ub_o = 2;
  while (Motion_Planning_B.loop_ub_o - 2 <= b_size[0] - 5) {
    Motion_Planning_B.alpha_data_tmp =
      Motion_Planning_B.b_gamma_data[Motion_Planning_B.loop_ub_o - 1];
    Motion_Planning_B.alpha_data[Motion_Planning_B.loop_ub_o] =
      (d_data[Motion_Planning_B.loop_ub_o] - f_data[Motion_Planning_B.loop_ub_o
       - 2] * Motion_Planning_B.delta_data[Motion_Planning_B.loop_ub_o - 2]) -
      Motion_Planning_B.alpha_data_tmp * Motion_Planning_B.alpha_data_tmp *
      Motion_Planning_B.alpha_data[Motion_Planning_B.loop_ub_o - 1];
    Motion_Planning_B.b_gamma_data[Motion_Planning_B.loop_ub_o] =
      (e_data[Motion_Planning_B.loop_ub_o] - f_data[Motion_Planning_B.loop_ub_o
       - 1] * Motion_Planning_B.alpha_data_tmp) /
      Motion_Planning_B.alpha_data[Motion_Planning_B.loop_ub_o];
    Motion_Planning_B.delta_data[Motion_Planning_B.loop_ub_o] =
      f_data[Motion_Planning_B.loop_ub_o] /
      Motion_Planning_B.alpha_data[Motion_Planning_B.loop_ub_o];
    Motion_Planning_B.loop_ub_o++;
  }

  Motion_Planning_B.alpha_data_tmp = Motion_Planning_B.b_gamma_data[b_size[0] -
    3];
  Motion_Planning_B.alpha_data[b_size[0] - 2] = (d_data[b_size[0] - 2] -
    f_data[b_size[0] - 4] * Motion_Planning_B.delta_data[b_size[0] - 4]) -
    Motion_Planning_B.alpha_data_tmp * Motion_Planning_B.alpha_data_tmp *
    Motion_Planning_B.alpha_data[b_size[0] - 3];
  Motion_Planning_B.b_gamma_data_tmp = f_data[b_size[0] - 3];
  Motion_Planning_B.b_gamma_data_tmp_p = Motion_Planning_B.alpha_data[b_size[0]
    - 2];
  Motion_Planning_B.b_gamma_data[b_size[0] - 2] = (e_data[b_size[0] - 2] -
    Motion_Planning_B.b_gamma_data_tmp * Motion_Planning_B.alpha_data_tmp) /
    Motion_Planning_B.b_gamma_data_tmp_p;
  Motion_Planning_B.alpha_data_tmp = Motion_Planning_B.b_gamma_data[b_size[0] -
    2];
  Motion_Planning_B.alpha_data[b_size[0] - 1] = (d_data[b_size[0] - 1] -
    Motion_Planning_B.b_gamma_data_tmp * Motion_Planning_B.delta_data[b_size[0]
    - 3]) - Motion_Planning_B.alpha_data_tmp * Motion_Planning_B.alpha_data_tmp *
    Motion_Planning_B.b_gamma_data_tmp_p;
  Motion_Planning_B.z_size[0] = b_size[0];
  Motion_Planning_B.z_size[1] = b_size[1];
  if (0 <= Motion_Planning_B.loop_ub_tmp_f) {
    memset(&Motion_Planning_B.z_data[0], 0, (Motion_Planning_B.loop_ub_tmp_f + 1)
           * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_o = b_size[1];
  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    Motion_Planning_B.z_data[Motion_Planning_B.z_size[0] *
      Motion_Planning_B.loop_ub_tmp_f] = b_data[b_size[0] *
      Motion_Planning_B.loop_ub_tmp_f];
  }

  Motion_Planning_B.b_gamma_data_tmp = Motion_Planning_B.b_gamma_data[0];
  Motion_Planning_B.loop_ub_o = b_size[1];
  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f] =
      b_data[b_size[0] * Motion_Planning_B.loop_ub_tmp_f + 1] -
      Motion_Planning_B.z_data[Motion_Planning_B.z_size[0] *
      Motion_Planning_B.loop_ub_tmp_f] * Motion_Planning_B.b_gamma_data_tmp;
  }

  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    Motion_Planning_B.z_data[Motion_Planning_B.z_size[0] *
      Motion_Planning_B.loop_ub_tmp_f + 1] =
      Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f];
  }

  Motion_Planning_B.c_k_i = 0;
  while (Motion_Planning_B.c_k_i <= Motion_Planning_B.N + 1) {
    Motion_Planning_B.b_gamma_data_tmp =
      Motion_Planning_B.b_gamma_data[Motion_Planning_B.c_k_i + 1];
    Motion_Planning_B.b_gamma_data_tmp_p =
      Motion_Planning_B.delta_data[Motion_Planning_B.c_k_i];
    Motion_Planning_B.loop_ub_o = b_size[1];
    for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
         Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
      Motion_Planning_B.b_e = Motion_Planning_B.z_size[0] *
        Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.c_k_i;
      Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f] = (b_data
        [(b_size[0] * Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.c_k_i)
        + 2] - Motion_Planning_B.z_data[Motion_Planning_B.b_e + 1] *
        Motion_Planning_B.b_gamma_data_tmp) -
        Motion_Planning_B.z_data[Motion_Planning_B.b_e] *
        Motion_Planning_B.b_gamma_data_tmp_p;
    }

    for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
         Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
      Motion_Planning_B.z_data[(Motion_Planning_B.c_k_i +
        Motion_Planning_B.z_size[0] * Motion_Planning_B.loop_ub_tmp_f) + 2] =
        Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f];
    }

    Motion_Planning_B.c_k_i++;
  }

  Motion_Planning_bsxfun(Motion_Planning_B.z_data, Motion_Planning_B.z_size,
    Motion_Planning_B.alpha_data, &Motion_Planning_B.alpha_size,
    Motion_Planning_B.c_data, Motion_Planning_B.c_size);
  Motion_Planning_B.c_k_i = b_size[0];
  Motion_Planning_B.b_e = b_size[0];
  Motion_Planning_B.loop_ub_o = Motion_Planning_B.c_size[1];
  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    x_data[(Motion_Planning_B.b_e + x_size[0] * Motion_Planning_B.loop_ub_tmp_f)
      - 1] = Motion_Planning_B.c_data[(Motion_Planning_B.c_size[0] *
      Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.c_k_i) - 1];
  }

  Motion_Planning_B.c_k_i = b_size[0];
  Motion_Planning_B.b_e = b_size[0];
  Motion_Planning_B.b_j = b_size[0];
  Motion_Planning_B.loop_ub_o = Motion_Planning_B.c_size[1];
  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f] =
      Motion_Planning_B.c_data[(Motion_Planning_B.c_size[0] *
      Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.c_k_i) - 2] - x_data
      [(x_size[0] * Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.b_e) - 1]
      * Motion_Planning_B.alpha_data_tmp;
  }

  for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
       Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
    x_data[(Motion_Planning_B.b_j + x_size[0] * Motion_Planning_B.loop_ub_tmp_f)
      - 2] = Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f];
  }

  Motion_Planning_B.c_k_i = static_cast<int32_T>(((-1.0 - (static_cast<real_T>
    (b_size[0]) - 2.0)) + 1.0) / -1.0);
  Motion_Planning_B.b_e = 0;
  while (Motion_Planning_B.b_e <= Motion_Planning_B.c_k_i - 1) {
    Motion_Planning_B.b_j = (Motion_Planning_B.N - Motion_Planning_B.b_e) + 1;
    Motion_Planning_B.b_gamma_data_tmp =
      Motion_Planning_B.b_gamma_data[Motion_Planning_B.b_j];
    Motion_Planning_B.b_gamma_data_tmp_p =
      Motion_Planning_B.delta_data[Motion_Planning_B.b_j];
    Motion_Planning_B.loop_ub_o = Motion_Planning_B.c_size[1];
    for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
         Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
      Motion_Planning_B.c_data_tmp = x_size[0] * Motion_Planning_B.loop_ub_tmp_f
        + Motion_Planning_B.b_j;
      Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f] =
        (Motion_Planning_B.c_data[Motion_Planning_B.c_size[0] *
         Motion_Planning_B.loop_ub_tmp_f + Motion_Planning_B.b_j] -
         x_data[Motion_Planning_B.c_data_tmp + 1] *
         Motion_Planning_B.b_gamma_data_tmp) -
        x_data[Motion_Planning_B.c_data_tmp + 2] *
        Motion_Planning_B.b_gamma_data_tmp_p;
    }

    for (Motion_Planning_B.loop_ub_tmp_f = 0; Motion_Planning_B.loop_ub_tmp_f <
         Motion_Planning_B.loop_ub_o; Motion_Planning_B.loop_ub_tmp_f++) {
      x_data[Motion_Planning_B.b_j + x_size[0] * Motion_Planning_B.loop_ub_tmp_f]
        = Motion_Planning_B.b_data_bp[Motion_Planning_B.loop_ub_tmp_f];
    }

    Motion_Planning_B.b_e++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_mldivide_l5(const real_T A[16], real_T B[4])
{
  real_T b_A[16];
  real_T smax;
  real_T y;
  int32_T c;
  int32_T c_ix;
  int32_T c_k;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T j;
  int32_T jA;
  int8_T ipiv[4];
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4U);
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    jA = 0;
    ix = c;
    smax = fabs(b_A[c]);
    for (c_k = 2; c_k <= 4 - j; c_k++) {
      ix++;
      y = fabs(b_A[ix]);
      if (y > smax) {
        jA = c_k - 1;
        smax = y;
      }
    }

    if (b_A[c + jA] != 0.0) {
      if (jA != 0) {
        jA += j;
        ipiv[j] = static_cast<int8_T>(jA + 1);
        smax = b_A[j];
        b_A[j] = b_A[jA];
        b_A[jA] = smax;
        smax = b_A[j + 4];
        b_A[j + 4] = b_A[jA + 4];
        b_A[jA + 4] = smax;
        smax = b_A[j + 8];
        b_A[j + 8] = b_A[jA + 8];
        b_A[jA + 8] = smax;
        smax = b_A[j + 12];
        b_A[j + 12] = b_A[jA + 12];
        b_A[jA + 12] = smax;
      }

      jA = (c - j) + 4;
      for (ix = c + 1; ix < jA; ix++) {
        b_A[ix] /= b_A[c];
      }
    }

    jA = c;
    ix = c + 4;
    for (c_k = 0; c_k <= 2 - j; c_k++) {
      smax = b_A[ix];
      if (b_A[ix] != 0.0) {
        c_ix = c + 1;
        d = (jA - j) + 8;
        for (ijA = jA + 5; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 4;
      jA += 4;
    }

    if (j + 1 != ipiv[j]) {
      smax = B[j];
      c = ipiv[j] - 1;
      B[j] = B[c];
      B[c] = smax;
    }
  }

  if (B[0] != 0.0) {
    for (j = 1; j + 1 < 5; j++) {
      B[j] -= B[0] * b_A[j];
    }
  }

  if (B[1] != 0.0) {
    for (j = 2; j + 1 < 5; j++) {
      B[j] -= b_A[j + 4] * B[1];
    }
  }

  if (B[2] != 0.0) {
    for (j = 3; j + 1 < 5; j++) {
      B[j] -= b_A[j + 8] * B[2];
    }
  }

  if (B[3] != 0.0) {
    B[3] /= b_A[15];
    for (j = 0; j < 3; j++) {
      B[j] -= b_A[j + 12] * B[3];
    }
  }

  if (B[2] != 0.0) {
    B[2] /= b_A[10];
    for (j = 0; j < 2; j++) {
      B[j] -= b_A[j + 8] * B[2];
    }
  }

  if (B[1] != 0.0) {
    B[1] /= b_A[5];
    B[0] -= B[1] * b_A[4];
  }

  if (B[0] != 0.0) {
    B[0] /= b_A[0];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planni_cycsympentdisolve(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size)
{
  emxArray_real_T_Motion_Planni_T *u;
  Motion_Planning_B.loop_ub_tmp = *b_size << 2;
  Motion_Planning_B.boffset_m = Motion_Planning_B.loop_ub_tmp - 1;
  if (0 <= Motion_Planning_B.boffset_m) {
    memset(&Motion_Planning_B.u_data[0], 0, (Motion_Planning_B.boffset_m + 1) *
           sizeof(real_T));
  }

  Motion_Planning_emxInit_real_T(&u, 2);
  Motion_Planning_B.u_data[0] = 1.0;
  Motion_Planning_B.u_data[*b_size + 1] = 1.0;
  Motion_Planning_B.coffset_i = *b_size << 1;
  Motion_Planning_B.u_data[(*b_size + Motion_Planning_B.coffset_i) - 2] = 1.0;
  Motion_Planning_B.u_data[(*b_size + *b_size * 3) - 1] = 1.0;
  if (*b_size == 0) {
    Motion_Planning_B.boffset_m = 1;
  } else {
    Motion_Planning_B.boffset_m = (*b_size != 0);
  }

  Motion_Planning_B.j_ft = u->size[0] * u->size[1];
  u->size[0] = *b_size;
  u->size[1] = Motion_Planning_B.boffset_m + 4;
  Motion_emxEnsureCapacity_real_T(u, Motion_Planning_B.j_ft);
  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft <
       Motion_Planning_B.loop_ub_tmp; Motion_Planning_B.j_ft++) {
    u->data[Motion_Planning_B.j_ft] =
      Motion_Planning_B.u_data[Motion_Planning_B.j_ft];
  }

  Motion_Planning_B.boffset_m *= *b_size;
  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft <
       Motion_Planning_B.boffset_m; Motion_Planning_B.j_ft++) {
    u->data[Motion_Planning_B.j_ft + Motion_Planning_B.loop_ub_tmp] =
      b_data[Motion_Planning_B.j_ft];
  }

  Motion_Plannin_sympentdisolve_l(d_data, e_data, f_data, u->data, u->size,
    Motion_Planning_B.zy_data, Motion_Planning_B.zy_size);
  Motion_Planning_B.loop_ub_tmp = *b_size;
  Motion_Planning_B.boffset_m = (*b_size << 2) - 1;
  Motion_Planning_emxFree_real_T(&u);
  if (0 <= Motion_Planning_B.boffset_m) {
    memset(&Motion_Planning_B.u_data[0], 0, (Motion_Planning_B.boffset_m + 1) *
           sizeof(real_T));
  }

  Motion_Planning_B.bkj_c = f_data[*b_size - 2];
  Motion_Planning_B.u_data[*b_size - 2] = Motion_Planning_B.bkj_c;
  Motion_Planning_B.u_data_tmp = e_data[*b_size - 1];
  Motion_Planning_B.u_data[*b_size - 1] = Motion_Planning_B.u_data_tmp;
  Motion_Planning_B.u_data_tmp_p = f_data[*b_size - 1];
  Motion_Planning_B.u_data[(*b_size + *b_size) - 1] =
    Motion_Planning_B.u_data_tmp_p;
  Motion_Planning_B.u_data[Motion_Planning_B.coffset_i] =
    Motion_Planning_B.bkj_c;
  Motion_Planning_B.u_data[*b_size * 3] = Motion_Planning_B.u_data_tmp;
  Motion_Planning_B.u_data[*b_size * 3 + 1] = Motion_Planning_B.u_data_tmp_p;
  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft < 4;
       Motion_Planning_B.j_ft++) {
    Motion_Planning_B.coffset_i = Motion_Planning_B.j_ft << 2;
    Motion_Planning_B.boffset_m = Motion_Planning_B.j_ft *
      Motion_Planning_B.zy_size[0];
    Motion_Planning_B.y[Motion_Planning_B.coffset_i] = 0.0;
    Motion_Planning_B.y[Motion_Planning_B.coffset_i + 1] = 0.0;
    Motion_Planning_B.y[Motion_Planning_B.coffset_i + 2] = 0.0;
    Motion_Planning_B.y[Motion_Planning_B.coffset_i + 3] = 0.0;
    Motion_Planning_B.b_k = 0;
    while (Motion_Planning_B.b_k <= Motion_Planning_B.loop_ub_tmp - 1) {
      Motion_Planning_B.c_o = Motion_Planning_B.boffset_m +
        Motion_Planning_B.b_k;
      Motion_Planning_B.bkj_c = Motion_Planning_B.zy_data[Motion_Planning_B.c_o %
        Motion_Planning_B.zy_size[0] + Motion_Planning_B.zy_size[0] *
        div_nzp_s32_floor(Motion_Planning_B.c_o, Motion_Planning_B.zy_size[0])];
      Motion_Planning_B.y[Motion_Planning_B.coffset_i] +=
        Motion_Planning_B.u_data[Motion_Planning_B.b_k] *
        Motion_Planning_B.bkj_c;
      Motion_Planning_B.y[Motion_Planning_B.coffset_i + 1] +=
        Motion_Planning_B.u_data[Motion_Planning_B.loop_ub_tmp +
        Motion_Planning_B.b_k] * Motion_Planning_B.bkj_c;
      Motion_Planning_B.y[Motion_Planning_B.coffset_i + 2] +=
        Motion_Planning_B.u_data[(Motion_Planning_B.loop_ub_tmp << 1) +
        Motion_Planning_B.b_k] * Motion_Planning_B.bkj_c;
      Motion_Planning_B.y[Motion_Planning_B.coffset_i + 3] +=
        Motion_Planning_B.u_data[3 * Motion_Planning_B.loop_ub_tmp +
        Motion_Planning_B.b_k] * Motion_Planning_B.bkj_c;
      Motion_Planning_B.b_k++;
    }

    Motion_Planning_B.b_y[Motion_Planning_B.j_ft] = 0.0;
  }

  Motion_Planning_B.j_ft = 0;
  while (Motion_Planning_B.j_ft <= Motion_Planning_B.loop_ub_tmp - 1) {
    Motion_Planning_B.bkj_c = Motion_Planning_B.zy_data
      [(Motion_Planning_B.zy_size[0] << 2) + Motion_Planning_B.j_ft];
    Motion_Planning_B.b_y[0] += Motion_Planning_B.bkj_c *
      Motion_Planning_B.u_data[Motion_Planning_B.j_ft];
    Motion_Planning_B.b_y[1] += Motion_Planning_B.bkj_c *
      Motion_Planning_B.u_data[Motion_Planning_B.loop_ub_tmp +
      Motion_Planning_B.j_ft];
    Motion_Planning_B.b_y[2] += Motion_Planning_B.u_data
      [(Motion_Planning_B.loop_ub_tmp << 1) + Motion_Planning_B.j_ft] *
      Motion_Planning_B.bkj_c;
    Motion_Planning_B.b_y[3] += Motion_Planning_B.u_data[3 *
      Motion_Planning_B.loop_ub_tmp + Motion_Planning_B.j_ft] *
      Motion_Planning_B.bkj_c;
    Motion_Planning_B.j_ft++;
  }

  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft < 16;
       Motion_Planning_B.j_ft++) {
    Motion_Planning_B.b_I_l[Motion_Planning_B.j_ft] = 0;
  }

  Motion_Planning_B.b_I_l[0] = 1;
  Motion_Planning_B.b_I_l[5] = 1;
  Motion_Planning_B.b_I_l[10] = 1;
  Motion_Planning_B.b_I_l[15] = 1;
  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft < 16;
       Motion_Planning_B.j_ft++) {
    Motion_Planning_B.b_I[Motion_Planning_B.j_ft] = static_cast<real_T>
      (Motion_Planning_B.b_I_l[Motion_Planning_B.j_ft]) +
      Motion_Planning_B.y[Motion_Planning_B.j_ft];
  }

  Motion_Planning_mldivide_l5(Motion_Planning_B.b_I, Motion_Planning_B.b_y);
  Motion_Planning_B.j_ft = 0;
  while (Motion_Planning_B.j_ft <= Motion_Planning_B.zy_size[0] - 1) {
    Motion_Planning_B.loop_ub_tmp = Motion_Planning_B.zy_size[0] +
      Motion_Planning_B.j_ft;
    Motion_Planning_B.bkj_c = Motion_Planning_B.zy_data[Motion_Planning_B.j_ft %
      Motion_Planning_B.zy_size[0] + Motion_Planning_B.zy_size[0] *
      div_nzp_s32_floor(Motion_Planning_B.j_ft, Motion_Planning_B.zy_size[0])] *
      Motion_Planning_B.b_y[0] +
      Motion_Planning_B.zy_data[Motion_Planning_B.loop_ub_tmp %
      Motion_Planning_B.zy_size[0] + Motion_Planning_B.zy_size[0] *
      div_nzp_s32_floor(Motion_Planning_B.loop_ub_tmp,
                        Motion_Planning_B.zy_size[0])] * Motion_Planning_B.b_y[1];
    Motion_Planning_B.loop_ub_tmp = (Motion_Planning_B.zy_size[0] << 1) +
      Motion_Planning_B.j_ft;
    Motion_Planning_B.bkj_c +=
      Motion_Planning_B.zy_data[Motion_Planning_B.loop_ub_tmp %
      Motion_Planning_B.zy_size[0] + Motion_Planning_B.zy_size[0] *
      div_nzp_s32_floor(Motion_Planning_B.loop_ub_tmp,
                        Motion_Planning_B.zy_size[0])] * Motion_Planning_B.b_y[2];
    Motion_Planning_B.loop_ub_tmp = 3 * Motion_Planning_B.zy_size[0] +
      Motion_Planning_B.j_ft;
    x_data[Motion_Planning_B.j_ft] =
      Motion_Planning_B.zy_data[Motion_Planning_B.loop_ub_tmp %
      Motion_Planning_B.zy_size[0] + Motion_Planning_B.zy_size[0] *
      div_nzp_s32_floor(Motion_Planning_B.loop_ub_tmp,
                        Motion_Planning_B.zy_size[0])] * Motion_Planning_B.b_y[3]
      + Motion_Planning_B.bkj_c;
    Motion_Planning_B.j_ft++;
  }

  Motion_Planning_B.boffset_m = Motion_Planning_B.zy_size[0];
  *x_size = Motion_Planning_B.zy_size[0];
  for (Motion_Planning_B.j_ft = 0; Motion_Planning_B.j_ft <
       Motion_Planning_B.boffset_m; Motion_Planning_B.j_ft++) {
    x_data[Motion_Planning_B.j_ft] = Motion_Planning_B.zy_data
      [(Motion_Planning_B.zy_size[0] << 2) + Motion_Planning_B.j_ft] -
      x_data[Motion_Planning_B.j_ft];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_sympentdisolve(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size)
{
  Motion_Planning_B.N_g = *b_size - 4;
  *x_size = *b_size;
  Motion_Planning_B.acoef_g = *b_size;
  if (0 <= Motion_Planning_B.acoef_g - 1) {
    memset(&x_data[0], 0, Motion_Planning_B.acoef_g * sizeof(real_T));
  }

  Motion_Planning_B.acoef_g = *b_size;
  if (0 <= Motion_Planning_B.acoef_g - 1) {
    memset(&Motion_Planning_B.alpha_data_m[0], 0, Motion_Planning_B.acoef_g *
           sizeof(real_T));
  }

  Motion_Planning_B.acoef_g = *b_size;
  if (0 <= Motion_Planning_B.acoef_g - 2) {
    memset(&Motion_Planning_B.b_gamma_data_c[0], 0, (Motion_Planning_B.acoef_g +
            -1) * sizeof(real_T));
  }

  Motion_Planning_B.acoef_g = *b_size;
  if (0 <= Motion_Planning_B.acoef_g - 3) {
    memset(&Motion_Planning_B.delta_data_j[0], 0, (Motion_Planning_B.acoef_g +
            -2) * sizeof(real_T));
  }

  Motion_Planning_B.alpha_data_m[0] = d_data[0];
  Motion_Planning_B.b_gamma_data_c[0] = e_data[0] / d_data[0];
  Motion_Planning_B.delta_data_j[0] = f_data[0] / d_data[0];
  Motion_Planning_B.alpha_data_m[1] = d_data[1] - e_data[0] *
    Motion_Planning_B.b_gamma_data_c[0];
  Motion_Planning_B.b_gamma_data_c[1] = (e_data[1] - f_data[0] *
    Motion_Planning_B.b_gamma_data_c[0]) / Motion_Planning_B.alpha_data_m[1];
  Motion_Planning_B.delta_data_j[1] = f_data[1] /
    Motion_Planning_B.alpha_data_m[1];
  Motion_Planning_B.acoef_g = 2;
  while (Motion_Planning_B.acoef_g - 2 <= *b_size - 5) {
    Motion_Planning_B.alpha_data_tmp_o =
      Motion_Planning_B.b_gamma_data_c[Motion_Planning_B.acoef_g - 1];
    Motion_Planning_B.alpha_data_m[Motion_Planning_B.acoef_g] =
      (d_data[Motion_Planning_B.acoef_g] - f_data[Motion_Planning_B.acoef_g - 2]
       * Motion_Planning_B.delta_data_j[Motion_Planning_B.acoef_g - 2]) -
      Motion_Planning_B.alpha_data_tmp_o * Motion_Planning_B.alpha_data_tmp_o *
      Motion_Planning_B.alpha_data_m[Motion_Planning_B.acoef_g - 1];
    Motion_Planning_B.b_gamma_data_c[Motion_Planning_B.acoef_g] =
      (e_data[Motion_Planning_B.acoef_g] - f_data[Motion_Planning_B.acoef_g - 1]
       * Motion_Planning_B.alpha_data_tmp_o) /
      Motion_Planning_B.alpha_data_m[Motion_Planning_B.acoef_g];
    Motion_Planning_B.delta_data_j[Motion_Planning_B.acoef_g] =
      f_data[Motion_Planning_B.acoef_g] /
      Motion_Planning_B.alpha_data_m[Motion_Planning_B.acoef_g];
    Motion_Planning_B.acoef_g++;
  }

  Motion_Planning_B.alpha_data_tmp_o = Motion_Planning_B.b_gamma_data_c[*b_size
    - 3];
  Motion_Planning_B.alpha_data_m[*b_size - 2] = (d_data[*b_size - 2] - f_data
    [*b_size - 4] * Motion_Planning_B.delta_data_j[*b_size - 4]) -
    Motion_Planning_B.alpha_data_tmp_o * Motion_Planning_B.alpha_data_tmp_o *
    Motion_Planning_B.alpha_data_m[*b_size - 3];
  Motion_Planning_B.b_gamma_data_tmp_j = f_data[*b_size - 3];
  Motion_Planning_B.b_gamma_data_tmp_pi = Motion_Planning_B.alpha_data_m[*b_size
    - 2];
  Motion_Planning_B.b_gamma_data_c[*b_size - 2] = (e_data[*b_size - 2] -
    Motion_Planning_B.b_gamma_data_tmp_j * Motion_Planning_B.alpha_data_tmp_o) /
    Motion_Planning_B.b_gamma_data_tmp_pi;
  Motion_Planning_B.alpha_data_tmp_o = Motion_Planning_B.b_gamma_data_c[*b_size
    - 2];
  Motion_Planning_B.alpha_data_m[*b_size - 1] = (d_data[*b_size - 1] -
    Motion_Planning_B.b_gamma_data_tmp_j * Motion_Planning_B.delta_data_j
    [*b_size - 3]) - Motion_Planning_B.alpha_data_tmp_o *
    Motion_Planning_B.alpha_data_tmp_o * Motion_Planning_B.b_gamma_data_tmp_pi;
  Motion_Planning_B.acoef_g = *b_size;
  if (0 <= Motion_Planning_B.acoef_g - 1) {
    memset(&Motion_Planning_B.z_data_ja[0], 0, Motion_Planning_B.acoef_g *
           sizeof(real_T));
  }

  Motion_Planning_B.z_data_ja[0] = b_data[0];
  Motion_Planning_B.z_data_ja[1] = b_data[1] - Motion_Planning_B.b_gamma_data_c
    [0] * b_data[0];
  Motion_Planning_B.acoef_g = 0;
  while (Motion_Planning_B.acoef_g <= Motion_Planning_B.N_g + 1) {
    Motion_Planning_B.z_data_ja[Motion_Planning_B.acoef_g + 2] =
      (b_data[Motion_Planning_B.acoef_g + 2] -
       Motion_Planning_B.b_gamma_data_c[Motion_Planning_B.acoef_g + 1] *
       Motion_Planning_B.z_data_ja[Motion_Planning_B.acoef_g + 1]) -
      Motion_Planning_B.delta_data_j[Motion_Planning_B.acoef_g] *
      Motion_Planning_B.z_data_ja[Motion_Planning_B.acoef_g];
    Motion_Planning_B.acoef_g++;
  }

  if (*b_size == 1) {
    Motion_Planning_B.csz_idx_0_d = static_cast<int8_T>(*b_size);
  } else {
    Motion_Planning_B.csz_idx_0_d = static_cast<int8_T>(*b_size);
  }

  Motion_Planning_B.acoef_g = (*b_size != 1);
  Motion_Planning_B.bcoef_c = (*b_size != 1);
  Motion_Planning_B.e_k = 0;
  while (Motion_Planning_B.e_k <= Motion_Planning_B.csz_idx_0_d - 1) {
    Motion_Planning_B.c_data_h[Motion_Planning_B.e_k] =
      Motion_Planning_B.z_data_ja[Motion_Planning_B.acoef_g *
      Motion_Planning_B.e_k] /
      Motion_Planning_B.alpha_data_m[Motion_Planning_B.bcoef_c *
      Motion_Planning_B.e_k];
    Motion_Planning_B.e_k++;
  }

  x_data[*b_size - 1] = Motion_Planning_B.c_data_h[*b_size - 1];
  x_data[*b_size - 2] = Motion_Planning_B.c_data_h[*b_size - 2] -
    Motion_Planning_B.alpha_data_tmp_o * x_data[*b_size - 1];
  Motion_Planning_B.acoef_g = static_cast<int32_T>(((-1.0 - (static_cast<real_T>
    (*b_size) - 2.0)) + 1.0) / -1.0);
  Motion_Planning_B.bcoef_c = 0;
  while (Motion_Planning_B.bcoef_c <= Motion_Planning_B.acoef_g - 1) {
    Motion_Planning_B.e_k = (Motion_Planning_B.N_g - Motion_Planning_B.bcoef_c)
      + 1;
    x_data[Motion_Planning_B.e_k] =
      (Motion_Planning_B.c_data_h[Motion_Planning_B.e_k] -
       x_data[Motion_Planning_B.e_k + 1] *
       Motion_Planning_B.b_gamma_data_c[Motion_Planning_B.e_k]) -
      x_data[Motion_Planning_B.e_k + 2] *
      Motion_Planning_B.delta_data_j[Motion_Planning_B.e_k];
    Motion_Planning_B.bcoef_c++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Plan_AccumArrayScalarVal(const real_T subs_data[], const
  int32_T subs_size[2], real_T val, const int32_T sz[2], real_T A_data[],
  int32_T A_size[2])
{
  Motion_Planning_B.counts_size_idx_0 = sz[0];
  Motion_Planning_B.loop_ub_tmp_m = sz[0] * sz[1];
  Motion_Planning_B.loop_ub_jd = Motion_Planning_B.loop_ub_tmp_m - 1;
  if (0 <= Motion_Planning_B.loop_ub_jd) {
    memset(&Motion_Planning_B.counts_data[0], 0, (Motion_Planning_B.loop_ub_jd +
            1) * sizeof(int32_T));
  }

  Motion_Planning_B.loop_ub_jd = 0;
  while (Motion_Planning_B.loop_ub_jd <= subs_size[0] - 1) {
    Motion_Planning_B.counts_data_tmp = ((static_cast<int32_T>
      (subs_data[Motion_Planning_B.loop_ub_jd + subs_size[0]]) - 1) *
      Motion_Planning_B.counts_size_idx_0 + static_cast<int32_T>
      (subs_data[Motion_Planning_B.loop_ub_jd])) - 1;
    Motion_Planning_B.counts_data[Motion_Planning_B.counts_data_tmp]++;
    Motion_Planning_B.loop_ub_jd++;
  }

  A_size[0] = sz[0];
  A_size[1] = sz[1];
  Motion_Planning_B.counts_size_idx_0 = 0;
  while (Motion_Planning_B.counts_size_idx_0 <= Motion_Planning_B.loop_ub_tmp_m
         - 1) {
    if (Motion_Planning_B.counts_data[Motion_Planning_B.counts_size_idx_0] == 0)
    {
      A_data[Motion_Planning_B.counts_size_idx_0] = 0.0;
    } else {
      A_data[Motion_Planning_B.counts_size_idx_0] = static_cast<real_T>
        (Motion_Planning_B.counts_data[Motion_Planning_B.counts_size_idx_0]) *
        val;
    }

    Motion_Planning_B.counts_size_idx_0++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_accumarray(const real_T subs_data[], const int32_T
  subs_size[2], const real_T val_data[], const int32_T *val_size, const real_T
  sz[2], real_T A_data[], int32_T A_size[2])
{
  Motion_Planning_B.SZ[0] = static_cast<int32_T>(sz[0]);
  Motion_Planning_B.SZ[1] = static_cast<int32_T>(sz[1]);
  if (*val_size == 1) {
    Motion_Plan_AccumArrayScalarVal(subs_data, subs_size, val_data[0],
      Motion_Planning_B.SZ, A_data, A_size);
  } else {
    Motion_Planning_B.filled_size_idx_0 = static_cast<int32_T>(sz[0]);
    Motion_Planning_B.loop_ub_tmp_c = static_cast<int32_T>(sz[0]) *
      static_cast<int32_T>(sz[1]) - 1;
    for (Motion_Planning_B.A_data_tmp = 0; Motion_Planning_B.A_data_tmp <=
         Motion_Planning_B.loop_ub_tmp_c; Motion_Planning_B.A_data_tmp++) {
      Motion_Planning_B.filled_data[Motion_Planning_B.A_data_tmp] = true;
    }

    A_size[0] = static_cast<int32_T>(sz[0]);
    A_size[1] = static_cast<int32_T>(sz[1]);
    if (0 <= Motion_Planning_B.loop_ub_tmp_c) {
      memset(&A_data[0], 0, (Motion_Planning_B.loop_ub_tmp_c + 1) * sizeof
             (real_T));
    }

    Motion_Planning_B.loop_ub_tmp_c = 0;
    while (Motion_Planning_B.loop_ub_tmp_c <= subs_size[0] - 1) {
      Motion_Planning_B.s_idx_0 = subs_data[Motion_Planning_B.loop_ub_tmp_c];
      Motion_Planning_B.s_idx_1 = subs_data[Motion_Planning_B.loop_ub_tmp_c +
        subs_size[0]];
      Motion_Planning_B.A_data_tmp = ((static_cast<int32_T>
        (Motion_Planning_B.s_idx_1) - 1) * Motion_Planning_B.filled_size_idx_0 +
        static_cast<int32_T>(Motion_Planning_B.s_idx_0)) - 1;
      if (Motion_Planning_B.filled_data[Motion_Planning_B.A_data_tmp]) {
        Motion_Planning_B.filled_data[Motion_Planning_B.A_data_tmp] = false;
        A_data[(static_cast<int32_T>(Motion_Planning_B.s_idx_0) + A_size[0] * (
                 static_cast<int32_T>(Motion_Planning_B.s_idx_1) - 1)) - 1] =
          val_data[Motion_Planning_B.loop_ub_tmp_c];
      } else {
        Motion_Planning_B.A_data_tmp = ((static_cast<int32_T>
          (Motion_Planning_B.s_idx_1) - 1) * A_size[0] + static_cast<int32_T>
          (Motion_Planning_B.s_idx_0)) - 1;
        A_data[Motion_Planning_B.A_data_tmp] +=
          val_data[Motion_Planning_B.loop_ub_tmp_c];
      }

      Motion_Planning_B.loop_ub_tmp_c++;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_diag(const real_T v_data[], const int32_T v_size[2],
  real_T d_data[], int32_T *d_size)
{
  int32_T dlen;
  int32_T k;
  if ((v_size[0] == 1) && (v_size[1] == 1)) {
    *d_size = 1;
    d_data[0] = v_data[0];
  } else {
    if (v_size[0] < v_size[1]) {
      dlen = v_size[0];
    } else {
      dlen = v_size[1];
    }

    *d_size = dlen;
    for (k = 0; k < dlen; k++) {
      d_data[k] = v_data[v_size[0] * k + k];
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_diag_a(const real_T v_data[], const int32_T *v_size,
  real_T d_data[], int32_T d_size[2])
{
  int32_T loop_ub;
  d_size[0] = static_cast<int8_T>(*v_size);
  d_size[1] = static_cast<int8_T>(*v_size);
  loop_ub = static_cast<int8_T>(*v_size) * static_cast<int8_T>(*v_size) - 1;
  if (0 <= loop_ub) {
    memset(&d_data[0], 0, (loop_ub + 1) * sizeof(real_T));
  }

  for (loop_ub = 0; loop_ub < *v_size; loop_ub++) {
    d_data[loop_ub + static_cast<int8_T>(*v_size) * loop_ub] = v_data[loop_ub];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xswap(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix++;
    iy++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_xnrm2(int32_T n, const real_T x_data[], int32_T
  ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      Motion_Planning_B.scale = 3.3121686421112381E-170;
      Motion_Planning_B.kend = (ix0 + n) - 1;
      Motion_Planning_B.k_fj = ix0;
      while (Motion_Planning_B.k_fj <= Motion_Planning_B.kend) {
        Motion_Planning_B.absxk = fabs(x_data[Motion_Planning_B.k_fj - 1]);
        if (Motion_Planning_B.absxk > Motion_Planning_B.scale) {
          Motion_Planning_B.t = Motion_Planning_B.scale /
            Motion_Planning_B.absxk;
          y = y * Motion_Planning_B.t * Motion_Planning_B.t + 1.0;
          Motion_Planning_B.scale = Motion_Planning_B.absxk;
        } else {
          Motion_Planning_B.t = Motion_Planning_B.absxk /
            Motion_Planning_B.scale;
          y += Motion_Planning_B.t * Motion_Planning_B.t;
        }

        Motion_Planning_B.k_fj++;
      }

      y = Motion_Planning_B.scale * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
  int32_T ix0)
{
  real_T tau;
  tau = 0.0;
  if (n > 0) {
    Motion_Planning_B.xnorm = Motion_Planning_xnrm2(n - 1, x_data, ix0);
    if (Motion_Planning_B.xnorm != 0.0) {
      Motion_Planning_B.xnorm = Motion_Planning_rt_hypotd_snf(*alpha1,
        Motion_Planning_B.xnorm);
      if (*alpha1 >= 0.0) {
        Motion_Planning_B.xnorm = -Motion_Planning_B.xnorm;
      }

      if (fabs(Motion_Planning_B.xnorm) < 1.0020841800044864E-292) {
        Motion_Planning_B.knt = -1;
        Motion_Planning_B.b_k_h = (ix0 + n) - 2;
        do {
          Motion_Planning_B.knt++;
          Motion_Planning_B.c_k_n = ix0;
          while (Motion_Planning_B.c_k_n <= Motion_Planning_B.b_k_h) {
            x_data[Motion_Planning_B.c_k_n - 1] *= 9.9792015476736E+291;
            Motion_Planning_B.c_k_n++;
          }

          Motion_Planning_B.xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(Motion_Planning_B.xnorm) >= 1.0020841800044864E-292));

        Motion_Planning_B.xnorm = Motion_Planning_rt_hypotd_snf(*alpha1,
          Motion_Planning_xnrm2(n - 1, x_data, ix0));
        if (*alpha1 >= 0.0) {
          Motion_Planning_B.xnorm = -Motion_Planning_B.xnorm;
        }

        tau = (Motion_Planning_B.xnorm - *alpha1) / Motion_Planning_B.xnorm;
        *alpha1 = 1.0 / (*alpha1 - Motion_Planning_B.xnorm);
        Motion_Planning_B.c_k_n = ix0;
        while (Motion_Planning_B.c_k_n <= Motion_Planning_B.b_k_h) {
          x_data[Motion_Planning_B.c_k_n - 1] *= *alpha1;
          Motion_Planning_B.c_k_n++;
        }

        Motion_Planning_B.b_k_h = 0;
        while (Motion_Planning_B.b_k_h <= Motion_Planning_B.knt) {
          Motion_Planning_B.xnorm *= 1.0020841800044864E-292;
          Motion_Planning_B.b_k_h++;
        }

        *alpha1 = Motion_Planning_B.xnorm;
      } else {
        tau = (Motion_Planning_B.xnorm - *alpha1) / Motion_Planning_B.xnorm;
        *alpha1 = 1.0 / (*alpha1 - Motion_Planning_B.xnorm);
        Motion_Planning_B.knt = (ix0 + n) - 2;
        Motion_Planning_B.b_k_h = ix0;
        while (Motion_Planning_B.b_k_h <= Motion_Planning_B.knt) {
          x_data[Motion_Planning_B.b_k_h - 1] *= *alpha1;
          Motion_Planning_B.b_k_h++;
        }

        *alpha1 = Motion_Planning_B.xnorm;
      }
    }
  }

  return tau;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc, real_T
  work_data[], const int32_T *work_size)
{
  int32_T exitg1;
  boolean_T exitg2;
  if (tau != 0.0) {
    Motion_Planning_B.lastv = m;
    Motion_Planning_B.lastc = iv0 + m;
    while ((Motion_Planning_B.lastv > 0) && (C_data[Motion_Planning_B.lastc - 2]
            == 0.0)) {
      Motion_Planning_B.lastv--;
      Motion_Planning_B.lastc--;
    }

    Motion_Planning_B.lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (Motion_Planning_B.lastc + 1 > 0)) {
      Motion_Planning_B.coltop = Motion_Planning_B.lastc * ldc + ic0;
      Motion_Planning_B.b_ia = Motion_Planning_B.coltop;
      do {
        exitg1 = 0;
        if (Motion_Planning_B.b_ia <= (Motion_Planning_B.coltop +
             Motion_Planning_B.lastv) - 1) {
          if (C_data[Motion_Planning_B.b_ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            Motion_Planning_B.b_ia++;
          }
        } else {
          Motion_Planning_B.lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    Motion_Planning_B.lastv = 0;
    Motion_Planning_B.lastc = -1;
  }

  if (Motion_Planning_B.lastv > 0) {
    Motion_Planning_B.coltop = *work_size;
    Motion_Planning_B.jA = *work_size;
    if (0 <= Motion_Planning_B.jA - 1) {
      memcpy(&Motion_Planning_B.y_data_f[0], &work_data[0], Motion_Planning_B.jA
             * sizeof(real_T));
    }

    if (Motion_Planning_B.lastc + 1 != 0) {
      Motion_Planning_B.b_ia = 0;
      while (Motion_Planning_B.b_ia <= Motion_Planning_B.lastc) {
        Motion_Planning_B.y_data_f[Motion_Planning_B.b_ia] = 0.0;
        Motion_Planning_B.b_ia++;
      }

      Motion_Planning_B.b_ia = 0;
      Motion_Planning_B.jA = ldc * Motion_Planning_B.lastc + ic0;
      Motion_Planning_B.jy = ic0;
      while (((ldc > 0) && (Motion_Planning_B.jy <= Motion_Planning_B.jA)) ||
             ((ldc < 0) && (Motion_Planning_B.jy >= Motion_Planning_B.jA))) {
        Motion_Planning_B.ix_n = iv0;
        Motion_Planning_B.c_k = 0.0;
        Motion_Planning_B.b_ix_n = (Motion_Planning_B.jy +
          Motion_Planning_B.lastv) - 1;
        Motion_Planning_B.ia_c = Motion_Planning_B.jy;
        while (Motion_Planning_B.ia_c <= Motion_Planning_B.b_ix_n) {
          Motion_Planning_B.c_k += C_data[Motion_Planning_B.ia_c - 1] *
            C_data[Motion_Planning_B.ix_n - 1];
          Motion_Planning_B.ix_n++;
          Motion_Planning_B.ia_c++;
        }

        Motion_Planning_B.y_data_f[Motion_Planning_B.b_ia] +=
          Motion_Planning_B.c_k;
        Motion_Planning_B.b_ia++;
        Motion_Planning_B.jy += ldc;
      }
    }

    if (0 <= Motion_Planning_B.coltop - 1) {
      memcpy(&work_data[0], &Motion_Planning_B.y_data_f[0],
             Motion_Planning_B.coltop * sizeof(real_T));
    }

    Motion_Planning_B.coltop = C_size[0];
    Motion_Planning_B.b_ia = C_size[1];
    Motion_Planning_B.jA = C_size[0] * C_size[1] - 1;
    if (0 <= Motion_Planning_B.jA) {
      memcpy(&Motion_Planning_B.A_data_p[0], &C_data[0], (Motion_Planning_B.jA +
              1) * sizeof(real_T));
    }

    if (!(-tau == 0.0)) {
      Motion_Planning_B.jA = ic0 - 1;
      Motion_Planning_B.jy = 0;
      Motion_Planning_B.ix_n = 0;
      while (Motion_Planning_B.ix_n <= Motion_Planning_B.lastc) {
        if (Motion_Planning_B.y_data_f[Motion_Planning_B.jy] != 0.0) {
          Motion_Planning_B.c_k =
            Motion_Planning_B.y_data_f[Motion_Planning_B.jy] * -tau;
          Motion_Planning_B.b_ix_n = iv0;
          Motion_Planning_B.ia_c = Motion_Planning_B.lastv +
            Motion_Planning_B.jA;
          Motion_Planning_B.ijA_d = Motion_Planning_B.jA;
          while (Motion_Planning_B.ijA_d + 1 <= Motion_Planning_B.ia_c) {
            Motion_Planning_B.A_data_p[Motion_Planning_B.ijA_d] +=
              Motion_Planning_B.A_data_p[Motion_Planning_B.b_ix_n - 1] *
              Motion_Planning_B.c_k;
            Motion_Planning_B.b_ix_n++;
            Motion_Planning_B.ijA_d++;
          }
        }

        Motion_Planning_B.jy++;
        Motion_Planning_B.jA += ldc;
        Motion_Planning_B.ix_n++;
      }
    }

    for (Motion_Planning_B.lastv = 0; Motion_Planning_B.lastv <
         Motion_Planning_B.b_ia; Motion_Planning_B.lastv++) {
      for (Motion_Planning_B.lastc = 0; Motion_Planning_B.lastc <
           Motion_Planning_B.coltop; Motion_Planning_B.lastc++) {
        C_data[Motion_Planning_B.lastc + C_size[0] * Motion_Planning_B.lastv] =
          Motion_Planning_B.A_data_p[Motion_Planning_B.coltop *
          Motion_Planning_B.lastv + Motion_Planning_B.lastc];
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_qrpf(real_T A_data[], int32_T A_size[2], int32_T m,
  int32_T n, real_T tau_data[], int32_T jpvt_data[])
{
  Motion_Planning_B.ma = A_size[0];
  if (m < n) {
    Motion_Planning_B.minmn = m;
  } else {
    Motion_Planning_B.minmn = n;
  }

  Motion_Planning_B.work_size = A_size[1];
  Motion_Planning_B.loop_ub_b4 = A_size[1];
  if (0 <= Motion_Planning_B.loop_ub_b4 - 1) {
    memset(&Motion_Planning_B.work_data_i[0], 0, Motion_Planning_B.loop_ub_b4 *
           sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_b4 = A_size[1];
  if (0 <= Motion_Planning_B.loop_ub_b4 - 1) {
    memset(&Motion_Planning_B.vn1_data[0], 0, Motion_Planning_B.loop_ub_b4 *
           sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_b4 = A_size[1];
  if (0 <= Motion_Planning_B.loop_ub_b4 - 1) {
    memset(&Motion_Planning_B.vn2_data[0], 0, Motion_Planning_B.loop_ub_b4 *
           sizeof(real_T));
  }

  Motion_Planning_B.b_j_j = 0;
  while (Motion_Planning_B.b_j_j <= n - 1) {
    Motion_Planning_B.vn1_data[Motion_Planning_B.b_j_j] = Motion_Planning_xnrm2
      (m, A_data, Motion_Planning_B.b_j_j * Motion_Planning_B.ma + 1);
    Motion_Planning_B.vn2_data[Motion_Planning_B.b_j_j] =
      Motion_Planning_B.vn1_data[Motion_Planning_B.b_j_j];
    Motion_Planning_B.b_j_j++;
  }

  Motion_Planning_B.b_j_j = 0;
  while (Motion_Planning_B.b_j_j <= Motion_Planning_B.minmn - 1) {
    Motion_Planning_B.ii_d = Motion_Planning_B.b_j_j * Motion_Planning_B.ma +
      Motion_Planning_B.b_j_j;
    Motion_Planning_B.nmi = n - Motion_Planning_B.b_j_j;
    Motion_Planning_B.mmi = m - Motion_Planning_B.b_j_j;
    if (Motion_Planning_B.nmi < 1) {
      Motion_Planning_B.pvt = -1;
    } else {
      Motion_Planning_B.pvt = 0;
      if (Motion_Planning_B.nmi > 1) {
        Motion_Planning_B.ix_p = Motion_Planning_B.b_j_j;
        Motion_Planning_B.smax = fabs
          (Motion_Planning_B.vn1_data[Motion_Planning_B.b_j_j]);
        Motion_Planning_B.loop_ub_b4 = 2;
        while (Motion_Planning_B.loop_ub_b4 <= Motion_Planning_B.nmi) {
          Motion_Planning_B.ix_p++;
          Motion_Planning_B.temp2 = fabs
            (Motion_Planning_B.vn1_data[Motion_Planning_B.ix_p]);
          if (Motion_Planning_B.temp2 > Motion_Planning_B.smax) {
            Motion_Planning_B.pvt = Motion_Planning_B.loop_ub_b4 - 1;
            Motion_Planning_B.smax = Motion_Planning_B.temp2;
          }

          Motion_Planning_B.loop_ub_b4++;
        }
      }
    }

    Motion_Planning_B.pvt += Motion_Planning_B.b_j_j;
    if (Motion_Planning_B.pvt + 1 != Motion_Planning_B.b_j_j + 1) {
      Motion_Planning_xswap(m, A_data, Motion_Planning_B.pvt *
                            Motion_Planning_B.ma + 1, Motion_Planning_B.b_j_j *
                            Motion_Planning_B.ma + 1);
      Motion_Planning_B.ix_p = jpvt_data[Motion_Planning_B.pvt];
      jpvt_data[Motion_Planning_B.pvt] = jpvt_data[Motion_Planning_B.b_j_j];
      jpvt_data[Motion_Planning_B.b_j_j] = Motion_Planning_B.ix_p;
      Motion_Planning_B.vn1_data[Motion_Planning_B.pvt] =
        Motion_Planning_B.vn1_data[Motion_Planning_B.b_j_j];
      Motion_Planning_B.vn2_data[Motion_Planning_B.pvt] =
        Motion_Planning_B.vn2_data[Motion_Planning_B.b_j_j];
    }

    if (Motion_Planning_B.b_j_j + 1 < m) {
      Motion_Planning_B.smax = A_data[Motion_Planning_B.ii_d];
      Motion_Planning_B.b_A_size_b[0] = A_size[0];
      Motion_Planning_B.b_A_size_b[1] = A_size[1];
      Motion_Planning_B.loop_ub_b4 = A_size[0] * A_size[1] - 1;
      if (0 <= Motion_Planning_B.loop_ub_b4) {
        memcpy(&Motion_Planning_B.b_A_data_b[0], &A_data[0],
               (Motion_Planning_B.loop_ub_b4 + 1) * sizeof(real_T));
      }

      tau_data[Motion_Planning_B.b_j_j] = Motion_Planning_xzlarfg
        (Motion_Planning_B.mmi, &Motion_Planning_B.smax,
         Motion_Planning_B.b_A_data_b, Motion_Planning_B.ii_d + 2);
      A_size[0] = Motion_Planning_B.b_A_size_b[0];
      A_size[1] = Motion_Planning_B.b_A_size_b[1];
      Motion_Planning_B.loop_ub_b4 = Motion_Planning_B.b_A_size_b[1];
      for (Motion_Planning_B.pvt = 0; Motion_Planning_B.pvt <
           Motion_Planning_B.loop_ub_b4; Motion_Planning_B.pvt++) {
        Motion_Planning_B.loop_ub_pn = Motion_Planning_B.b_A_size_b[0];
        for (Motion_Planning_B.ix_p = 0; Motion_Planning_B.ix_p <
             Motion_Planning_B.loop_ub_pn; Motion_Planning_B.ix_p++) {
          A_data[Motion_Planning_B.ix_p + A_size[0] * Motion_Planning_B.pvt] =
            Motion_Planning_B.b_A_data_b[Motion_Planning_B.b_A_size_b[0] *
            Motion_Planning_B.pvt + Motion_Planning_B.ix_p];
        }
      }

      A_data[Motion_Planning_B.ii_d] = Motion_Planning_B.smax;
    } else {
      tau_data[Motion_Planning_B.b_j_j] = 0.0;
    }

    if (Motion_Planning_B.b_j_j + 1 < n) {
      Motion_Planning_B.smax = A_data[Motion_Planning_B.ii_d];
      A_data[Motion_Planning_B.ii_d] = 1.0;
      Motion_Planning_xzlarf(Motion_Planning_B.mmi, Motion_Planning_B.nmi - 1,
        Motion_Planning_B.ii_d + 1, tau_data[Motion_Planning_B.b_j_j], A_data,
        A_size, (Motion_Planning_B.ii_d + Motion_Planning_B.ma) + 1,
        Motion_Planning_B.ma, Motion_Planning_B.work_data_i,
        &Motion_Planning_B.work_size);
      A_data[Motion_Planning_B.ii_d] = Motion_Planning_B.smax;
    }

    Motion_Planning_B.ii_d = Motion_Planning_B.b_j_j + 1;
    while (Motion_Planning_B.ii_d + 1 <= n) {
      Motion_Planning_B.nmi = Motion_Planning_B.ii_d * Motion_Planning_B.ma +
        Motion_Planning_B.b_j_j;
      if (Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d] != 0.0) {
        Motion_Planning_B.smax = fabs(A_data[Motion_Planning_B.nmi]) /
          Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d];
        Motion_Planning_B.smax = 1.0 - Motion_Planning_B.smax *
          Motion_Planning_B.smax;
        if (Motion_Planning_B.smax < 0.0) {
          Motion_Planning_B.smax = 0.0;
        }

        Motion_Planning_B.temp2 =
          Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d] /
          Motion_Planning_B.vn2_data[Motion_Planning_B.ii_d];
        Motion_Planning_B.temp2 = Motion_Planning_B.temp2 *
          Motion_Planning_B.temp2 * Motion_Planning_B.smax;
        if (Motion_Planning_B.temp2 <= 1.4901161193847656E-8) {
          if (Motion_Planning_B.b_j_j + 1 < m) {
            Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d] =
              Motion_Planning_xnrm2(Motion_Planning_B.mmi - 1, A_data,
              Motion_Planning_B.nmi + 2);
            Motion_Planning_B.vn2_data[Motion_Planning_B.ii_d] =
              Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d];
          } else {
            Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d] = 0.0;
            Motion_Planning_B.vn2_data[Motion_Planning_B.ii_d] = 0.0;
          }
        } else {
          Motion_Planning_B.vn1_data[Motion_Planning_B.ii_d] *= sqrt
            (Motion_Planning_B.smax);
        }
      }

      Motion_Planning_B.ii_d++;
    }

    Motion_Planning_B.b_j_j++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_mldivide(const real_T A_data[], const int32_T
  A_size[2], const real_T B_data[], const int32_T *B_size, real_T Y_data[],
  int32_T *Y_size)
{
  if (A_size[0] == A_size[1]) {
    if (A_size[0] < A_size[1]) {
      Motion_Planning_B.minmana = A_size[0];
    } else {
      Motion_Planning_B.minmana = A_size[1];
    }

    if (*B_size < Motion_Planning_B.minmana) {
      Motion_Planning_B.minmana = *B_size;
      Motion_Planning_B.kAcol = *B_size;
    } else {
      Motion_Planning_B.kAcol = Motion_Planning_B.minmana;
    }

    Motion_Planning_B.rankR = A_size[0];
    Motion_Planning_B.maxmn = A_size[0] * A_size[1] - 1;
    if (0 <= Motion_Planning_B.maxmn) {
      memcpy(&Motion_Planning_B.b_A_data_o[0], &A_data[0],
             (Motion_Planning_B.maxmn + 1) * sizeof(real_T));
    }

    Motion_Planning_B.jpvt_data[0] = 1;
    Motion_Planning_B.maxmn = 1;
    Motion_Planning_B.c_i = 2;
    while (Motion_Planning_B.c_i <= Motion_Planning_B.kAcol) {
      Motion_Planning_B.maxmn++;
      Motion_Planning_B.jpvt_data[Motion_Planning_B.c_i - 1] =
        Motion_Planning_B.maxmn;
      Motion_Planning_B.c_i++;
    }

    if (Motion_Planning_B.minmana - 1 < Motion_Planning_B.kAcol) {
      Motion_Planning_B.maxmn = Motion_Planning_B.minmana - 1;
    } else {
      Motion_Planning_B.maxmn = Motion_Planning_B.kAcol;
    }

    Motion_Planning_B.kAcol = 0;
    while (Motion_Planning_B.kAcol <= Motion_Planning_B.maxmn - 1) {
      Motion_Planning_B.c_i = Motion_Planning_B.minmana -
        Motion_Planning_B.kAcol;
      Motion_Planning_B.b_c = (Motion_Planning_B.rankR + 1) *
        Motion_Planning_B.kAcol;
      if (Motion_Planning_B.c_i < 1) {
        Motion_Planning_B.b_ix = -1;
      } else {
        Motion_Planning_B.b_ix = 0;
        if (Motion_Planning_B.c_i > 1) {
          Motion_Planning_B.ix = Motion_Planning_B.b_c;
          Motion_Planning_B.tol = fabs
            (Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_c]);
          Motion_Planning_B.d_k = 2;
          while (Motion_Planning_B.d_k <= Motion_Planning_B.c_i) {
            Motion_Planning_B.ix++;
            Motion_Planning_B.y_i = fabs
              (Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix]);
            if (Motion_Planning_B.y_i > Motion_Planning_B.tol) {
              Motion_Planning_B.b_ix = Motion_Planning_B.d_k - 1;
              Motion_Planning_B.tol = Motion_Planning_B.y_i;
            }

            Motion_Planning_B.d_k++;
          }
        }
      }

      if (Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_c +
          Motion_Planning_B.b_ix] != 0.0) {
        if (Motion_Planning_B.b_ix != 0) {
          Motion_Planning_B.ix = Motion_Planning_B.kAcol +
            Motion_Planning_B.b_ix;
          Motion_Planning_B.jpvt_data[Motion_Planning_B.kAcol] =
            Motion_Planning_B.ix + 1;
          Motion_Planning_B.b_ix = Motion_Planning_B.kAcol;
          Motion_Planning_B.d_k = 0;
          while (Motion_Planning_B.d_k <= Motion_Planning_B.minmana - 1) {
            Motion_Planning_B.tol =
              Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_ix];
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_ix] =
              Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix];
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix] =
              Motion_Planning_B.tol;
            Motion_Planning_B.b_ix += Motion_Planning_B.rankR;
            Motion_Planning_B.ix += Motion_Planning_B.rankR;
            Motion_Planning_B.d_k++;
          }
        }

        Motion_Planning_B.b_ix = Motion_Planning_B.b_c + Motion_Planning_B.c_i;
        Motion_Planning_B.ix = Motion_Planning_B.b_c + 1;
        while (Motion_Planning_B.ix + 1 <= Motion_Planning_B.b_ix) {
          Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix] /=
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_c];
          Motion_Planning_B.ix++;
        }
      }

      Motion_Planning_B.b_ix = Motion_Planning_B.b_c + Motion_Planning_B.rankR;
      Motion_Planning_B.ix = Motion_Planning_B.b_ix;
      Motion_Planning_B.d_k = 0;
      while (Motion_Planning_B.d_k <= Motion_Planning_B.c_i - 2) {
        Motion_Planning_B.tol =
          Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix];
        if (Motion_Planning_B.b_A_data_o[Motion_Planning_B.ix] != 0.0) {
          Motion_Planning_B.c_ix = Motion_Planning_B.b_c + 1;
          Motion_Planning_B.e_m5 = Motion_Planning_B.c_i +
            Motion_Planning_B.b_ix;
          Motion_Planning_B.ijA = Motion_Planning_B.b_ix + 1;
          while (Motion_Planning_B.ijA + 1 <= Motion_Planning_B.e_m5) {
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.ijA] +=
              Motion_Planning_B.b_A_data_o[Motion_Planning_B.c_ix] *
              -Motion_Planning_B.tol;
            Motion_Planning_B.c_ix++;
            Motion_Planning_B.ijA++;
          }
        }

        Motion_Planning_B.ix += Motion_Planning_B.rankR;
        Motion_Planning_B.b_ix += Motion_Planning_B.rankR;
        Motion_Planning_B.d_k++;
      }

      Motion_Planning_B.kAcol++;
    }

    *Y_size = *B_size;
    Motion_Planning_B.maxmn = *B_size;
    if (0 <= Motion_Planning_B.maxmn - 1) {
      memcpy(&Y_data[0], &B_data[0], Motion_Planning_B.maxmn * sizeof(real_T));
    }

    Motion_Planning_B.rankR = A_size[0];
    Motion_Planning_B.maxmn = 0;
    while (Motion_Planning_B.maxmn <= Motion_Planning_B.minmana - 2) {
      if (Motion_Planning_B.maxmn + 1 !=
          Motion_Planning_B.jpvt_data[Motion_Planning_B.maxmn]) {
        Motion_Planning_B.tol = Y_data[Motion_Planning_B.maxmn];
        Y_data[Motion_Planning_B.maxmn] =
          Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.maxmn] - 1];
        Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.maxmn] - 1] =
          Motion_Planning_B.tol;
      }

      Motion_Planning_B.maxmn++;
    }

    Motion_Planning_B.maxmn = 0;
    while (Motion_Planning_B.maxmn <= Motion_Planning_B.minmana - 1) {
      Motion_Planning_B.kAcol = Motion_Planning_B.rankR *
        Motion_Planning_B.maxmn;
      if (Y_data[Motion_Planning_B.maxmn] != 0.0) {
        Motion_Planning_B.c_i = Motion_Planning_B.maxmn + 1;
        while (Motion_Planning_B.c_i + 1 <= Motion_Planning_B.minmana) {
          Y_data[Motion_Planning_B.c_i] -=
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.c_i +
            Motion_Planning_B.kAcol] * Y_data[Motion_Planning_B.maxmn];
          Motion_Planning_B.c_i++;
        }
      }

      Motion_Planning_B.maxmn++;
    }

    Motion_Planning_B.minmana--;
    while (Motion_Planning_B.minmana + 1 > 0) {
      Motion_Planning_B.maxmn = Motion_Planning_B.rankR *
        Motion_Planning_B.minmana;
      if (Y_data[Motion_Planning_B.minmana] != 0.0) {
        Y_data[Motion_Planning_B.minmana] /=
          Motion_Planning_B.b_A_data_o[Motion_Planning_B.minmana +
          Motion_Planning_B.maxmn];
        Motion_Planning_B.kAcol = 0;
        while (Motion_Planning_B.kAcol <= Motion_Planning_B.minmana - 1) {
          Y_data[Motion_Planning_B.kAcol] -=
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.kAcol +
            Motion_Planning_B.maxmn] * Y_data[Motion_Planning_B.minmana];
          Motion_Planning_B.kAcol++;
        }
      }

      Motion_Planning_B.minmana--;
    }
  } else {
    if (A_size[0] < A_size[1]) {
      Motion_Planning_B.minmana = A_size[0];
    } else {
      Motion_Planning_B.minmana = A_size[1];
    }

    Motion_Planning_B.maxmn = A_size[1] - 1;
    if (0 <= Motion_Planning_B.maxmn) {
      memset(&Motion_Planning_B.jpvt_data[0], 0, (Motion_Planning_B.maxmn + 1) *
             sizeof(int32_T));
    }

    Motion_Planning_B.rankR = 0;
    while (Motion_Planning_B.rankR <= A_size[1] - 1) {
      Motion_Planning_B.jpvt_data[Motion_Planning_B.rankR] =
        Motion_Planning_B.rankR + 1;
      Motion_Planning_B.rankR++;
    }

    Motion_Planning_B.b_A_size[0] = A_size[0];
    Motion_Planning_B.b_A_size[1] = A_size[1];
    Motion_Planning_B.maxmn = A_size[0] * A_size[1] - 1;
    if (0 <= Motion_Planning_B.maxmn) {
      memcpy(&Motion_Planning_B.b_A_data_o[0], &A_data[0],
             (Motion_Planning_B.maxmn + 1) * sizeof(real_T));
    }

    if (0 <= Motion_Planning_B.minmana - 1) {
      memset(&Motion_Planning_B.tau_data_n[0], 0, Motion_Planning_B.minmana *
             sizeof(real_T));
    }

    Motion_Planning_qrpf(Motion_Planning_B.b_A_data_o,
                         Motion_Planning_B.b_A_size, A_size[0], A_size[1],
                         Motion_Planning_B.tau_data_n,
                         Motion_Planning_B.jpvt_data);
    Motion_Planning_B.rankR = 0;
    if (Motion_Planning_B.b_A_size[0] < Motion_Planning_B.b_A_size[1]) {
      Motion_Planning_B.minmana = Motion_Planning_B.b_A_size[0];
      Motion_Planning_B.maxmn = Motion_Planning_B.b_A_size[1];
    } else {
      Motion_Planning_B.minmana = Motion_Planning_B.b_A_size[1];
      Motion_Planning_B.maxmn = Motion_Planning_B.b_A_size[0];
    }

    Motion_Planning_B.tol = 2.2204460492503131E-15 * static_cast<real_T>
      (Motion_Planning_B.maxmn) * fabs(Motion_Planning_B.b_A_data_o[0]);
    while ((Motion_Planning_B.rankR < Motion_Planning_B.minmana) && (!(fabs
             (Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_A_size[0] *
              Motion_Planning_B.rankR + Motion_Planning_B.rankR]) <=
             Motion_Planning_B.tol))) {
      Motion_Planning_B.rankR++;
    }

    *Y_size = static_cast<int8_T>(Motion_Planning_B.b_A_size[1]);
    Motion_Planning_B.maxmn = static_cast<int8_T>(Motion_Planning_B.b_A_size[1]);
    if (0 <= Motion_Planning_B.maxmn - 1) {
      memset(&Y_data[0], 0, Motion_Planning_B.maxmn * sizeof(real_T));
    }

    Motion_Planning_B.maxmn = *B_size;
    if (0 <= Motion_Planning_B.maxmn - 1) {
      memcpy(&Motion_Planning_B.b_B_data[0], &B_data[0], Motion_Planning_B.maxmn
             * sizeof(real_T));
    }

    Motion_Planning_B.maxmn = Motion_Planning_B.b_A_size[0];
    if (Motion_Planning_B.b_A_size[0] < Motion_Planning_B.b_A_size[1]) {
      Motion_Planning_B.minmana = Motion_Planning_B.b_A_size[0];
    } else {
      Motion_Planning_B.minmana = Motion_Planning_B.b_A_size[1];
    }

    Motion_Planning_B.kAcol = 0;
    while (Motion_Planning_B.kAcol <= Motion_Planning_B.minmana - 1) {
      if (Motion_Planning_B.tau_data_n[Motion_Planning_B.kAcol] != 0.0) {
        Motion_Planning_B.tol =
          Motion_Planning_B.b_B_data[Motion_Planning_B.kAcol];
        Motion_Planning_B.c_i = Motion_Planning_B.kAcol + 1;
        while (Motion_Planning_B.c_i + 1 <= Motion_Planning_B.maxmn) {
          Motion_Planning_B.tol +=
            Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_A_size[0] *
            Motion_Planning_B.kAcol + Motion_Planning_B.c_i] *
            Motion_Planning_B.b_B_data[Motion_Planning_B.c_i];
          Motion_Planning_B.c_i++;
        }

        Motion_Planning_B.tol *=
          Motion_Planning_B.tau_data_n[Motion_Planning_B.kAcol];
        if (Motion_Planning_B.tol != 0.0) {
          Motion_Planning_B.b_B_data[Motion_Planning_B.kAcol] -=
            Motion_Planning_B.tol;
          Motion_Planning_B.c_i = Motion_Planning_B.kAcol + 1;
          while (Motion_Planning_B.c_i + 1 <= Motion_Planning_B.maxmn) {
            Motion_Planning_B.b_B_data[Motion_Planning_B.c_i] -=
              Motion_Planning_B.b_A_data_o[Motion_Planning_B.b_A_size[0] *
              Motion_Planning_B.kAcol + Motion_Planning_B.c_i] *
              Motion_Planning_B.tol;
            Motion_Planning_B.c_i++;
          }
        }
      }

      Motion_Planning_B.kAcol++;
    }

    Motion_Planning_B.minmana = 0;
    while (Motion_Planning_B.minmana <= Motion_Planning_B.rankR - 1) {
      Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.minmana] - 1] =
        Motion_Planning_B.b_B_data[Motion_Planning_B.minmana];
      Motion_Planning_B.minmana++;
    }

    Motion_Planning_B.minmana = Motion_Planning_B.rankR - 1;
    while (Motion_Planning_B.minmana + 1 > 0) {
      Motion_Planning_B.rankR = Motion_Planning_B.b_A_size[0] *
        Motion_Planning_B.minmana;
      Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.minmana] - 1] /=
        Motion_Planning_B.b_A_data_o[Motion_Planning_B.rankR +
        Motion_Planning_B.minmana];
      Motion_Planning_B.maxmn = 0;
      while (Motion_Planning_B.maxmn <= Motion_Planning_B.minmana - 1) {
        Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.maxmn] - 1] -=
          Motion_Planning_B.b_A_data_o[Motion_Planning_B.rankR +
          Motion_Planning_B.maxmn] *
          Y_data[Motion_Planning_B.jpvt_data[Motion_Planning_B.minmana] - 1];
        Motion_Planning_B.maxmn++;
      }

      Motion_Planning_B.minmana--;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Pla_solveDampenedHessian(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, const real_T v_data[], const int32_T
  *v_size, real_T dx_data[], int32_T *dx_size)
{
  emxArray_real_T_Motion_Planni_T *b_y;
  emxArray_real_T_Motion_Planni_T *lambda_0;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *tmp_0;
  if (*v_size - 1 < 1) {
    Motion_Planning_B.y_size_idx_1_j = 0;
  } else {
    Motion_Planning_B.y_size_idx_1_j = static_cast<int32_T>((static_cast<real_T>
      (*v_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.coffset = static_cast<int32_T>((static_cast<real_T>
      (*v_size) - 1.0) - 1.0);
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
         Motion_Planning_B.coffset; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_a[Motion_Planning_B.m] = Motion_Planning_B.m + 1U;
    }
  }

  Motion_Planning_B.coffset = Jtri_size[0];
  Motion_Planning_B.Jtri_size_h = Jtri_size[0];
  if (0 <= Motion_Planning_B.coffset - 1) {
    memcpy(&Motion_Planning_B.e_data_a[0], &Jtri_data[0],
           Motion_Planning_B.coffset * sizeof(real_T));
  }

  Motion_Planning_emxInit_real_T(&b_y, 1);
  Motion_Planning_B.Jtri_data_p.data = &Motion_Planning_B.e_data_a[0];
  Motion_Planning_B.Jtri_data_p.size = &Motion_Planning_B.Jtri_size_h;
  Motion_Planning_B.Jtri_data_p.allocatedSize = 100;
  Motion_Planning_B.Jtri_data_p.numDimensions = 1;
  Motion_Planning_B.Jtri_data_p.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.Jtri_data_p, b_y);
  Motion_Planning_B.coffset = Jtri_size[0];
  Motion_Planning_B.Jtri_size_c2 = Jtri_size[0];
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m < Motion_Planning_B.coffset;
       Motion_Planning_B.m++) {
    Motion_Planning_B.e_data_a[Motion_Planning_B.m] =
      Jtri_data[Motion_Planning_B.m + Jtri_size[0]];
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_B.Jtri_data_nj.data = &Motion_Planning_B.e_data_a[0];
  Motion_Planning_B.Jtri_data_nj.size = &Motion_Planning_B.Jtri_size_c2;
  Motion_Planning_B.Jtri_data_nj.allocatedSize = 100;
  Motion_Planning_B.Jtri_data_nj.numDimensions = 1;
  Motion_Planning_B.Jtri_data_nj.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.Jtri_data_nj, tmp);
  Motion_Planning_B.coffset = Motion_Planning_B.y_size_idx_1_j + 1;
  Motion_Planning_B.v_data_o[0] = *v_size - 1;
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
       Motion_Planning_B.y_size_idx_1_j; Motion_Planning_B.m++) {
    Motion_Planning_B.v_data_o[Motion_Planning_B.m + 1] = static_cast<int32_T>
      (Motion_Planning_B.y_data_a[Motion_Planning_B.m]) - 1;
  }

  Motion_Planning_B.Jtri_size_a = Motion_Planning_B.y_size_idx_1_j + 1;
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m < Motion_Planning_B.coffset;
       Motion_Planning_B.m++) {
    Motion_Planning_B.e_data_a[Motion_Planning_B.m] = Jtri_data[(Jtri_size[0] <<
      1) + Motion_Planning_B.v_data_o[Motion_Planning_B.m]];
  }

  Motion_Planning_emxInit_real_T(&tmp_0, 1);
  Motion_Planning_B.Jtri_data_k.data = &Motion_Planning_B.e_data_a[0];
  Motion_Planning_B.Jtri_data_k.size = &Motion_Planning_B.Jtri_size_a;
  Motion_Planning_B.Jtri_data_k.allocatedSize = 100;
  Motion_Planning_B.Jtri_data_k.numDimensions = 1;
  Motion_Planning_B.Jtri_data_k.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.Jtri_data_k, tmp_0);
  Motion_Planning_B.m = b_y->size[0];
  Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.m);
  Motion_Planning_B.coffset = b_y->size[0];
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m < Motion_Planning_B.coffset;
       Motion_Planning_B.m++) {
    b_y->data[Motion_Planning_B.m] = ((b_y->data[Motion_Planning_B.m] +
      tmp->data[Motion_Planning_B.m]) + tmp_0->data[Motion_Planning_B.m]) *
      (lambda + 1.0);
  }

  Motion_Planning_emxFree_real_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
  if (*v_size < 2) {
    Motion_Planning_B.y_size_idx_1_j = 0;
  } else {
    Motion_Planning_B.y_size_idx_1_j = *v_size - 1;
    Motion_Planning_B.coffset = *v_size - 2;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
         Motion_Planning_B.coffset; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_a[Motion_Planning_B.m] = static_cast<uint32_T>
        (Motion_Planning_B.m + 2);
    }
  }

  for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
       Motion_Planning_B.y_size_idx_1_j; Motion_Planning_B.m++) {
    Motion_Planning_B.v_data_o[Motion_Planning_B.m] = static_cast<int32_T>
      (Motion_Planning_B.y_data_a[Motion_Planning_B.m]) - 1;
  }

  Motion_Planning_B.v_data_o[Motion_Planning_B.y_size_idx_1_j] = 0;
  Motion_Planning_B.coffset = Jtri_size[0];
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m < Motion_Planning_B.coffset;
       Motion_Planning_B.m++) {
    Motion_Planning_B.e_data_a[Motion_Planning_B.m] = Jtri_data[(Jtri_size[0] <<
      1) + Motion_Planning_B.m] * Jtri_data[Motion_Planning_B.m + Jtri_size[0]]
      + Jtri_data[Motion_Planning_B.v_data_o[Motion_Planning_B.m] + Jtri_size[0]]
      * Jtri_data[Motion_Planning_B.m];
  }

  if (*v_size < 2) {
    Motion_Planning_B.y_size_idx_1_j = 0;
  } else {
    Motion_Planning_B.y_size_idx_1_j = *v_size - 1;
    Motion_Planning_B.coffset = *v_size - 2;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
         Motion_Planning_B.coffset; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_a[Motion_Planning_B.m] = static_cast<uint32_T>
        (Motion_Planning_B.m + 2);
    }
  }

  for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
       Motion_Planning_B.y_size_idx_1_j; Motion_Planning_B.m++) {
    Motion_Planning_B.v_data_o[Motion_Planning_B.m] = static_cast<int32_T>
      (Motion_Planning_B.y_data_a[Motion_Planning_B.m]) - 1;
  }

  Motion_Planning_B.v_data_o[Motion_Planning_B.y_size_idx_1_j] = 0;
  Motion_Planning_B.coffset = Jtri_size[0];
  for (Motion_Planning_B.m = 0; Motion_Planning_B.m < Motion_Planning_B.coffset;
       Motion_Planning_B.m++) {
    Motion_Planning_B.f_data_j[Motion_Planning_B.m] = Jtri_data[(Jtri_size[0] <<
      1) + Motion_Planning_B.v_data_o[Motion_Planning_B.m]] *
      Jtri_data[Motion_Planning_B.m];
  }

  if (*v_size < 5) {
    if (*v_size < 1) {
      Motion_Planning_B.y_size_idx_1_j = 0;
      Motion_Planning_B.boffset = 0;
    } else {
      Motion_Planning_B.y_size_idx_1_j = *v_size;
      Motion_Planning_B.coffset = *v_size - 1;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.y_data_a[Motion_Planning_B.m] = static_cast<uint32_T>
          (Motion_Planning_B.m + 1);
      }

      Motion_Planning_B.boffset = *v_size;
      Motion_Planning_B.coffset = *v_size - 1;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.c_y_data_c[Motion_Planning_B.m] = static_cast<int8_T>
          (Motion_Planning_B.m + 1);
      }
    }

    if (*v_size < 2) {
      Motion_Planning_B.d_y_size_idx_1 = 0;
      Motion_Planning_B.e_y_size_idx_1 = 0;
    } else {
      Motion_Planning_B.d_y_size_idx_1 = *v_size - 1;
      Motion_Planning_B.coffset = *v_size - 2;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.d_y_data_f[Motion_Planning_B.m] = static_cast<int8_T>
          (Motion_Planning_B.m + 2);
      }

      Motion_Planning_B.e_y_size_idx_1 = *v_size - 1;
      Motion_Planning_B.coffset = *v_size - 2;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.e_y_data_h[Motion_Planning_B.m] = static_cast<int8_T>
          (Motion_Planning_B.m + 2);
      }
    }

    if (*v_size < 1) {
      Motion_Planning_B.f_y_size_idx_1 = 0;
      Motion_Planning_B.g_y_size_idx_1 = 0;
    } else {
      Motion_Planning_B.f_y_size_idx_1 = *v_size;
      Motion_Planning_B.coffset = *v_size - 1;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.f_y_data_m[Motion_Planning_B.m] = static_cast<int8_T>
          (Motion_Planning_B.m + 1);
      }

      Motion_Planning_B.g_y_size_idx_1 = *v_size;
      Motion_Planning_B.coffset = *v_size - 1;
      for (Motion_Planning_B.m = 0; Motion_Planning_B.m <=
           Motion_Planning_B.coffset; Motion_Planning_B.m++) {
        Motion_Planning_B.g_y_data[Motion_Planning_B.m] = static_cast<int8_T>
          (Motion_Planning_B.m + 1);
      }
    }

    Motion_Planning_B.coffset = (Motion_Planning_B.y_size_idx_1_j +
      Motion_Planning_B.boffset) + Motion_Planning_B.d_y_size_idx_1;
    Motion_Planning_B.y_size[0] = Motion_Planning_B.coffset + 1;
    Motion_Planning_B.y_size[1] = 2;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.y_size_idx_1_j; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[Motion_Planning_B.m] =
        Motion_Planning_B.y_data_a[Motion_Planning_B.m];
    }

    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.boffset; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[Motion_Planning_B.m +
        Motion_Planning_B.y_size_idx_1_j] =
        Motion_Planning_B.c_y_data_c[Motion_Planning_B.m];
    }

    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.d_y_size_idx_1; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[(Motion_Planning_B.m +
        Motion_Planning_B.y_size_idx_1_j) + Motion_Planning_B.boffset] =
        Motion_Planning_B.d_y_data_f[Motion_Planning_B.m];
    }

    Motion_Planning_B.y_data_i[Motion_Planning_B.coffset] = 1.0;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.e_y_size_idx_1; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[(Motion_Planning_B.m +
        Motion_Planning_B.coffset) + 1] =
        Motion_Planning_B.e_y_data_h[Motion_Planning_B.m];
    }

    Motion_Planning_B.y_data_i[(Motion_Planning_B.e_y_size_idx_1 +
      Motion_Planning_B.coffset) + 1] = 1.0;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.f_y_size_idx_1; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[((Motion_Planning_B.m +
        Motion_Planning_B.e_y_size_idx_1) + Motion_Planning_B.coffset) + 2] =
        Motion_Planning_B.f_y_data_m[Motion_Planning_B.m];
    }

    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.g_y_size_idx_1; Motion_Planning_B.m++) {
      Motion_Planning_B.y_data_i[(((Motion_Planning_B.m +
        Motion_Planning_B.e_y_size_idx_1) + Motion_Planning_B.f_y_size_idx_1) +
        Motion_Planning_B.coffset) + 2] =
        Motion_Planning_B.g_y_data[Motion_Planning_B.m];
    }

    Motion_Planning_B.coffset = Jtri_size[0];
    Motion_Planning_B.y_size_idx_1_j = Jtri_size[0];
    Motion_Planning_B.boffset = Jtri_size[0];
    Motion_Planning_B.Jtri_size_l = (Jtri_size[0] + Jtri_size[0]) + Jtri_size[0];
    if (0 <= Motion_Planning_B.coffset - 1) {
      memcpy(&Motion_Planning_B.Jtri_data_c[0], &Jtri_data[0],
             Motion_Planning_B.coffset * sizeof(real_T));
    }

    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.y_size_idx_1_j; Motion_Planning_B.m++) {
      Motion_Planning_B.Jtri_data_c[Motion_Planning_B.m +
        Motion_Planning_B.coffset] = Jtri_data[Motion_Planning_B.m + Jtri_size[0]];
    }

    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.boffset; Motion_Planning_B.m++) {
      Motion_Planning_B.Jtri_data_c[(Motion_Planning_B.m +
        Motion_Planning_B.coffset) + Motion_Planning_B.y_size_idx_1_j] =
        Jtri_data[(Jtri_size[0] << 1) + Motion_Planning_B.m];
    }

    Motion_Planning_B.v[0] = static_cast<int8_T>(*v_size);
    Motion_Planning_B.v[1] = static_cast<int8_T>(*v_size);
    Motion_Planning_accumarray(Motion_Planning_B.y_data_i,
      Motion_Planning_B.y_size, Motion_Planning_B.Jtri_data_c,
      &Motion_Planning_B.Jtri_size_l, Motion_Planning_B.v,
      Motion_Planning_B.b_data, Motion_Planning_B.b_size);
    Motion_Planning_B.m = Motion_Planning_B.b_size[1];
    Motion_Planning_B.A_size[0] = Motion_Planning_B.b_size[1];
    Motion_Planning_B.A_size[1] = Motion_Planning_B.b_size[1];
    Motion_Planning_B.y_size_idx_1_j = 0;
    while (Motion_Planning_B.y_size_idx_1_j <= Motion_Planning_B.b_size[1] - 1)
    {
      Motion_Planning_B.coffset = Motion_Planning_B.y_size_idx_1_j *
        Motion_Planning_B.m;
      Motion_Planning_B.boffset = Motion_Planning_B.y_size_idx_1_j *
        Motion_Planning_B.b_size[0];
      Motion_Planning_B.d_y_size_idx_1 = 0;
      while (Motion_Planning_B.d_y_size_idx_1 <= Motion_Planning_B.m - 1) {
        Motion_Planning_B.A_data_ox[Motion_Planning_B.coffset +
          Motion_Planning_B.d_y_size_idx_1] = 0.0;
        Motion_Planning_B.d_y_size_idx_1++;
      }

      Motion_Planning_B.d_y_size_idx_1 = 0;
      while (Motion_Planning_B.d_y_size_idx_1 <= Motion_Planning_B.b_size[0] - 1)
      {
        Motion_Planning_B.bkj =
          Motion_Planning_B.b_data[Motion_Planning_B.boffset +
          Motion_Planning_B.d_y_size_idx_1];
        Motion_Planning_B.e_y_size_idx_1 = 0;
        while (Motion_Planning_B.e_y_size_idx_1 <= Motion_Planning_B.m - 1) {
          Motion_Planning_B.f_y_size_idx_1 = Motion_Planning_B.coffset +
            Motion_Planning_B.e_y_size_idx_1;
          Motion_Planning_B.A_data_ox[Motion_Planning_B.f_y_size_idx_1] +=
            Motion_Planning_B.b_data[Motion_Planning_B.e_y_size_idx_1 *
            Motion_Planning_B.b_size[0] + Motion_Planning_B.d_y_size_idx_1] *
            Motion_Planning_B.bkj;
          Motion_Planning_B.e_y_size_idx_1++;
        }

        Motion_Planning_B.d_y_size_idx_1++;
      }

      Motion_Planning_B.y_size_idx_1_j++;
    }

    Motion_Planning_emxInit_real_T(&lambda_0, 1);
    Motion_Planning_diag(Motion_Planning_B.A_data_ox, Motion_Planning_B.A_size,
                         Motion_Planning_B.c_data_c,
                         &Motion_Planning_B.Jtri_size_h);
    Motion_Planning_B.m = lambda_0->size[0];
    lambda_0->size[0] = Motion_Planning_B.Jtri_size_h;
    Motion_emxEnsureCapacity_real_T(lambda_0, Motion_Planning_B.m);
    Motion_Planning_B.coffset = Motion_Planning_B.Jtri_size_h;
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.coffset; Motion_Planning_B.m++) {
      lambda_0->data[Motion_Planning_B.m] = lambda *
        Motion_Planning_B.c_data_c[Motion_Planning_B.m];
    }

    Motion_Planning_diag_a(lambda_0->data, lambda_0->size,
      Motion_Planning_B.tmp_data_k, Motion_Planning_B.y_size);
    Motion_Planning_B.A_size_k[0] = Motion_Planning_B.b_size[1];
    Motion_Planning_B.A_size_k[1] = Motion_Planning_B.b_size[1];
    Motion_Planning_B.coffset = Motion_Planning_B.b_size[1] *
      Motion_Planning_B.b_size[1];
    Motion_Planning_emxFree_real_T(&lambda_0);
    for (Motion_Planning_B.m = 0; Motion_Planning_B.m <
         Motion_Planning_B.coffset; Motion_Planning_B.m++) {
      Motion_Planning_B.A_data_i[Motion_Planning_B.m] =
        Motion_Planning_B.A_data_ox[Motion_Planning_B.m] +
        Motion_Planning_B.tmp_data_k[Motion_Planning_B.m];
    }

    Motion_Planning_mldivide(Motion_Planning_B.A_data_i,
      Motion_Planning_B.A_size_k, v_data, v_size, Motion_Planning_B.c_data_c,
      &Motion_Planning_B.Jtri_size_h);
    *dx_size = Motion_Planning_B.Jtri_size_h;
    Motion_Planning_B.coffset = Motion_Planning_B.Jtri_size_h;
    if (0 <= Motion_Planning_B.coffset - 1) {
      memcpy(&dx_data[0], &Motion_Planning_B.c_data_c[0],
             Motion_Planning_B.coffset * sizeof(real_T));
    }
  } else if (Jtri_data[Jtri_size[0] - 1] == 0.0) {
    if (Jtri_data[((Jtri_size[0] << 1) + Jtri_size[0]) - 1] == 0.0) {
      Motion_Planning_sympentdisolve(b_y->data, Motion_Planning_B.e_data_a,
        Motion_Planning_B.f_data_j, v_data, v_size, dx_data, dx_size);
    } else {
      Motion_Planni_cycsympentdisolve(b_y->data, Motion_Planning_B.e_data_a,
        Motion_Planning_B.f_data_j, v_data, v_size, dx_data, dx_size);
    }
  } else {
    Motion_Planni_cycsympentdisolve(b_y->data, Motion_Planning_B.e_data_a,
      Motion_Planning_B.f_data_j, v_data, v_size, dx_data, dx_size);
  }

  Motion_Planning_emxFree_real_T(&b_y);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_mulJtJ(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T x_data[], const int32_T *x_size, real_T y_data[],
  int32_T *y_size)
{
  if (*x_size < 2) {
    Motion_Planning_B.b_y_size_idx_1_d = 0;
  } else {
    Motion_Planning_B.b_y_size_idx_1_d = *x_size - 1;
    Motion_Planning_B.loop_ub_k = *x_size - 2;
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.b_y_data_d[Motion_Planning_B.i10] = static_cast<uint32_T>
        (Motion_Planning_B.i10 + 2);
    }
  }

  if (*x_size - 1 < 1) {
    Motion_Planning_B.c_y_size_idx_1_k = 0;
    Motion_Planning_B.d_y_size_idx_1_p = 0;
  } else {
    Motion_Planning_B.c_y_size_idx_1_k = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_k = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.c_y_data_a[Motion_Planning_B.i10] =
        Motion_Planning_B.i10 + 1U;
    }

    Motion_Planning_B.d_y_size_idx_1_p = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_k = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.d_y_data_p[Motion_Planning_B.i10] =
        Motion_Planning_B.i10 + 1U;
    }
  }

  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.b_y_size_idx_1_d; Motion_Planning_B.i10++) {
    Motion_Planning_B.b_y_data_b[Motion_Planning_B.i10] = static_cast<int32_T>
      (Motion_Planning_B.b_y_data_d[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.b_y_data_b[Motion_Planning_B.b_y_size_idx_1_d] = 0;
  Motion_Planning_B.x_data_ao[0] = *x_size - 1;
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.c_y_size_idx_1_k; Motion_Planning_B.i10++) {
    Motion_Planning_B.x_data_ao[Motion_Planning_B.i10 + 1] = static_cast<int32_T>
      (Motion_Planning_B.c_y_data_a[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.x_data_g[0] = *x_size - 1;
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.d_y_size_idx_1_p; Motion_Planning_B.i10++) {
    Motion_Planning_B.x_data_g[Motion_Planning_B.i10 + 1] = static_cast<int32_T>
      (Motion_Planning_B.d_y_data_p[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.loop_ub_k = Jtri_size[0];
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
    Motion_Planning_B.z_data_c0[Motion_Planning_B.i10] = (Jtri_data[(Jtri_size[0]
      << 1) + Motion_Planning_B.i10] *
      x_data[Motion_Planning_B.b_y_data_b[Motion_Planning_B.i10]] +
      Jtri_data[Motion_Planning_B.i10 + Jtri_size[0]] *
      x_data[Motion_Planning_B.i10]) +
      Jtri_data[Motion_Planning_B.x_data_ao[Motion_Planning_B.i10]] *
      x_data[Motion_Planning_B.x_data_g[Motion_Planning_B.i10]];
  }

  if (*x_size < 2) {
    Motion_Planning_B.b_y_size_idx_1_d = 0;
  } else {
    Motion_Planning_B.b_y_size_idx_1_d = *x_size - 1;
    Motion_Planning_B.loop_ub_k = *x_size - 2;
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.b_y_data_d[Motion_Planning_B.i10] = static_cast<uint32_T>
        (Motion_Planning_B.i10 + 2);
    }
  }

  if (*x_size - 1 < 1) {
    Motion_Planning_B.c_y_size_idx_1_k = 0;
    Motion_Planning_B.d_y_size_idx_1_p = 0;
  } else {
    Motion_Planning_B.c_y_size_idx_1_k = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_k = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.c_y_data_a[Motion_Planning_B.i10] =
        Motion_Planning_B.i10 + 1U;
    }

    Motion_Planning_B.d_y_size_idx_1_p = static_cast<int32_T>
      ((static_cast<real_T>(*x_size) - 1.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_k = static_cast<int32_T>((static_cast<real_T>
      (*x_size) - 1.0) - 1.0);
    for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <=
         Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
      Motion_Planning_B.d_y_data_p[Motion_Planning_B.i10] =
        Motion_Planning_B.i10 + 1U;
    }
  }

  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.b_y_size_idx_1_d; Motion_Planning_B.i10++) {
    Motion_Planning_B.b_y_data_b[Motion_Planning_B.i10] = static_cast<int32_T>
      (Motion_Planning_B.b_y_data_d[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.b_y_data_b[Motion_Planning_B.b_y_size_idx_1_d] = 0;
  Motion_Planning_B.x_data_ao[0] = *x_size - 1;
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.c_y_size_idx_1_k; Motion_Planning_B.i10++) {
    Motion_Planning_B.x_data_ao[Motion_Planning_B.i10 + 1] = static_cast<int32_T>
      (Motion_Planning_B.c_y_data_a[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.x_data_g[0] = *x_size - 1;
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.d_y_size_idx_1_p; Motion_Planning_B.i10++) {
    Motion_Planning_B.x_data_g[Motion_Planning_B.i10 + 1] = static_cast<int32_T>
      (Motion_Planning_B.d_y_data_p[Motion_Planning_B.i10]) - 1;
  }

  Motion_Planning_B.loop_ub_k = Jtri_size[0];
  *y_size = Jtri_size[0];
  for (Motion_Planning_B.i10 = 0; Motion_Planning_B.i10 <
       Motion_Planning_B.loop_ub_k; Motion_Planning_B.i10++) {
    y_data[Motion_Planning_B.i10] = (Jtri_data[Motion_Planning_B.i10 +
      Jtri_size[0]] * Motion_Planning_B.z_data_c0[Motion_Planning_B.i10] +
      Jtri_data[Motion_Planning_B.i10] *
      Motion_Planning_B.z_data_c0[Motion_Planning_B.b_y_data_b[Motion_Planning_B.i10]])
      + Jtri_data[(Jtri_size[0] << 1) +
      Motion_Planning_B.x_data_ao[Motion_Planning_B.i10]] *
      Motion_Planning_B.z_data_c0[Motion_Planning_B.x_data_g[Motion_Planning_B.i10]];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_norm(const real_T x_data[], const int32_T *x_size)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  if (*x_size == 1) {
    y = fabs(x_data[0]);
  } else {
    scale = 3.3121686421112381E-170;
    for (k = 0; k < *x_size; k++) {
      absxk = fabs(x_data[k]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static boolean_T Motion_Planning_anyNonFinite(const real_T x_data[], const
  int32_T x_size[2])
{
  int32_T k;
  int32_T nx;
  boolean_T b_p;
  nx = x_size[0] * x_size[1];
  b_p = true;
  for (k = 0; k < nx; k++) {
    if (b_p && (rtIsInf(x_data[k]) || rtIsNaN(x_data[k]))) {
      b_p = false;
    }
  }

  return !b_p;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzggbal(creal_T A_data[], const int32_T A_size[2],
  int32_T *ilo, int32_T *ihi, int32_T rscale_data[], int32_T *rscale_size)
{
  real_T atmp_im;
  real_T atmp_re;
  int32_T atmp_im_tmp;
  int32_T b_A_data_tmp;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T ii;
  int32_T j;
  int32_T loop_ub;
  int32_T nzcount;
  boolean_T exitg3;
  boolean_T exitg4;
  boolean_T found;
  *rscale_size = A_size[0];
  loop_ub = A_size[0];
  for (b_A_data_tmp = 0; b_A_data_tmp < loop_ub; b_A_data_tmp++) {
    rscale_data[b_A_data_tmp] = 1;
  }

  *ilo = 1;
  *ihi = A_size[0];
  if (A_size[0] <= 1) {
    *ihi = 1;
  } else {
    do {
      exitg2 = 0;
      i = 0;
      j = 0;
      found = false;
      ii = *ihi;
      exitg3 = false;
      while ((!exitg3) && (ii > 0)) {
        nzcount = 0;
        i = ii;
        j = *ihi;
        loop_ub = 0;
        exitg4 = false;
        while ((!exitg4) && (loop_ub <= *ihi - 1)) {
          b_A_data_tmp = (A_size[0] * loop_ub + ii) - 1;
          if ((A_data[b_A_data_tmp].re != 0.0) || (A_data[b_A_data_tmp].im !=
               0.0) || (loop_ub + 1 == ii)) {
            if (nzcount == 0) {
              j = loop_ub + 1;
              nzcount = 1;
              loop_ub++;
            } else {
              nzcount = 2;
              exitg4 = true;
            }
          } else {
            loop_ub++;
          }
        }

        if (nzcount < 2) {
          found = true;
          exitg3 = true;
        } else {
          ii--;
        }
      }

      if (!found) {
        exitg2 = 2;
      } else {
        ii = A_size[0];
        nzcount = A_size[1];
        loop_ub = A_size[0] * A_size[1] - 1;
        if (0 <= loop_ub) {
          memcpy(&Motion_Planning_B.b_A_data_m[0], &A_data[0], (loop_ub + 1) *
                 sizeof(creal_T));
        }

        if (i != *ihi) {
          for (loop_ub = 0; loop_ub < A_size[0]; loop_ub++) {
            atmp_re = Motion_Planning_B.b_A_data_m[(ii * loop_ub + i) - 1].re;
            b_A_data_tmp = ii * loop_ub;
            atmp_im_tmp = (b_A_data_tmp + i) - 1;
            atmp_im = Motion_Planning_B.b_A_data_m[atmp_im_tmp].im;
            b_A_data_tmp = (b_A_data_tmp + *ihi) - 1;
            Motion_Planning_B.b_A_data_m[atmp_im_tmp] =
              Motion_Planning_B.b_A_data_m[b_A_data_tmp];
            Motion_Planning_B.b_A_data_m[b_A_data_tmp].re = atmp_re;
            Motion_Planning_B.b_A_data_m[b_A_data_tmp].im = atmp_im;
          }
        }

        if (j != *ihi) {
          for (i = 0; i < *ihi; i++) {
            loop_ub = (j - 1) * ii + i;
            atmp_re = Motion_Planning_B.b_A_data_m[loop_ub].re;
            atmp_im = Motion_Planning_B.b_A_data_m[loop_ub].im;
            b_A_data_tmp = (*ihi - 1) * ii + i;
            Motion_Planning_B.b_A_data_m[loop_ub] =
              Motion_Planning_B.b_A_data_m[b_A_data_tmp];
            Motion_Planning_B.b_A_data_m[b_A_data_tmp].re = atmp_re;
            Motion_Planning_B.b_A_data_m[b_A_data_tmp].im = atmp_im;
          }
        }

        for (b_A_data_tmp = 0; b_A_data_tmp < nzcount; b_A_data_tmp++) {
          for (i = 0; i < ii; i++) {
            A_data[i + A_size[0] * b_A_data_tmp] =
              Motion_Planning_B.b_A_data_m[ii * b_A_data_tmp + i];
          }
        }

        rscale_data[*ihi - 1] = j;
        (*ihi)--;
        if (*ihi == 1) {
          rscale_data[0] = 1;
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);

    if (exitg2 == 1) {
    } else {
      do {
        exitg1 = 0;
        i = 0;
        j = 0;
        found = false;
        ii = *ilo;
        exitg3 = false;
        while ((!exitg3) && (ii <= *ihi)) {
          nzcount = 0;
          i = *ihi;
          j = ii;
          loop_ub = *ilo;
          exitg4 = false;
          while ((!exitg4) && (loop_ub <= *ihi)) {
            b_A_data_tmp = ((ii - 1) * A_size[0] + loop_ub) - 1;
            if ((A_data[b_A_data_tmp].re != 0.0) || (A_data[b_A_data_tmp].im !=
                 0.0) || (loop_ub == ii)) {
              if (nzcount == 0) {
                i = loop_ub;
                nzcount = 1;
                loop_ub++;
              } else {
                nzcount = 2;
                exitg4 = true;
              }
            } else {
              loop_ub++;
            }
          }

          if (nzcount < 2) {
            found = true;
            exitg3 = true;
          } else {
            ii++;
          }
        }

        if (!found) {
          exitg1 = 1;
        } else {
          ii = A_size[0];
          nzcount = A_size[1];
          loop_ub = A_size[0] * A_size[1] - 1;
          if (0 <= loop_ub) {
            memcpy(&Motion_Planning_B.b_A_data_m[0], &A_data[0], (loop_ub + 1) *
                   sizeof(creal_T));
          }

          if (i != *ilo) {
            for (atmp_im_tmp = *ilo - 1; atmp_im_tmp < A_size[0]; atmp_im_tmp++)
            {
              b_A_data_tmp = ii * atmp_im_tmp;
              loop_ub = (b_A_data_tmp + i) - 1;
              atmp_re = Motion_Planning_B.b_A_data_m[loop_ub].re;
              atmp_im = Motion_Planning_B.b_A_data_m[loop_ub].im;
              b_A_data_tmp = (b_A_data_tmp + *ilo) - 1;
              Motion_Planning_B.b_A_data_m[loop_ub] =
                Motion_Planning_B.b_A_data_m[b_A_data_tmp];
              Motion_Planning_B.b_A_data_m[b_A_data_tmp].re = atmp_re;
              Motion_Planning_B.b_A_data_m[b_A_data_tmp].im = atmp_im;
            }
          }

          if (j != *ilo) {
            for (i = 0; i < *ihi; i++) {
              loop_ub = (j - 1) * ii + i;
              atmp_re = Motion_Planning_B.b_A_data_m[loop_ub].re;
              atmp_im = Motion_Planning_B.b_A_data_m[loop_ub].im;
              b_A_data_tmp = (*ilo - 1) * ii + i;
              Motion_Planning_B.b_A_data_m[loop_ub] =
                Motion_Planning_B.b_A_data_m[b_A_data_tmp];
              Motion_Planning_B.b_A_data_m[b_A_data_tmp].re = atmp_re;
              Motion_Planning_B.b_A_data_m[b_A_data_tmp].im = atmp_im;
            }
          }

          for (b_A_data_tmp = 0; b_A_data_tmp < nzcount; b_A_data_tmp++) {
            for (i = 0; i < ii; i++) {
              A_data[i + A_size[0] * b_A_data_tmp] =
                Motion_Planning_B.b_A_data_m[ii * b_A_data_tmp + i];
            }
          }

          rscale_data[*ilo - 1] = j;
          (*ilo)++;
          if (*ilo == *ihi) {
            rscale_data[*ilo - 1] = *ilo;
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzlartg(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn, creal_T *r)
{
  boolean_T guard1 = false;
  Motion_Planning_B.f2s = fabs(f.re);
  Motion_Planning_B.di = fabs(f.im);
  Motion_Planning_B.scale_a0 = Motion_Planning_B.f2s;
  if (Motion_Planning_B.di > Motion_Planning_B.f2s) {
    Motion_Planning_B.scale_a0 = Motion_Planning_B.di;
  }

  Motion_Planning_B.gs_re = fabs(g.re);
  Motion_Planning_B.gs_im = fabs(g.im);
  if (Motion_Planning_B.gs_im > Motion_Planning_B.gs_re) {
    Motion_Planning_B.gs_re = Motion_Planning_B.gs_im;
  }

  if (Motion_Planning_B.gs_re > Motion_Planning_B.scale_a0) {
    Motion_Planning_B.scale_a0 = Motion_Planning_B.gs_re;
  }

  Motion_Planning_B.fs_re = f.re;
  Motion_Planning_B.fs_im = f.im;
  Motion_Planning_B.gs_re = g.re;
  Motion_Planning_B.gs_im = g.im;
  Motion_Planning_B.count = -1;
  Motion_Planning_B.rescaledir = 0;
  guard1 = false;
  if (Motion_Planning_B.scale_a0 >= 7.4428285367870146E+137) {
    do {
      Motion_Planning_B.count++;
      Motion_Planning_B.fs_re *= 1.3435752215134178E-138;
      Motion_Planning_B.fs_im *= 1.3435752215134178E-138;
      Motion_Planning_B.gs_re *= 1.3435752215134178E-138;
      Motion_Planning_B.gs_im *= 1.3435752215134178E-138;
      Motion_Planning_B.scale_a0 *= 1.3435752215134178E-138;
    } while (!(Motion_Planning_B.scale_a0 < 7.4428285367870146E+137));

    Motion_Planning_B.rescaledir = 1;
    guard1 = true;
  } else if (Motion_Planning_B.scale_a0 <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
      *r = f;
    } else {
      do {
        Motion_Planning_B.count++;
        Motion_Planning_B.fs_re *= 7.4428285367870146E+137;
        Motion_Planning_B.fs_im *= 7.4428285367870146E+137;
        Motion_Planning_B.gs_re *= 7.4428285367870146E+137;
        Motion_Planning_B.gs_im *= 7.4428285367870146E+137;
        Motion_Planning_B.scale_a0 *= 7.4428285367870146E+137;
      } while (!(Motion_Planning_B.scale_a0 > 1.3435752215134178E-138));

      Motion_Planning_B.rescaledir = -1;
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    Motion_Planning_B.scale_a0 = Motion_Planning_B.fs_re *
      Motion_Planning_B.fs_re + Motion_Planning_B.fs_im *
      Motion_Planning_B.fs_im;
    Motion_Planning_B.g2 = Motion_Planning_B.gs_re * Motion_Planning_B.gs_re +
      Motion_Planning_B.gs_im * Motion_Planning_B.gs_im;
    Motion_Planning_B.x = Motion_Planning_B.g2;
    if (1.0 > Motion_Planning_B.g2) {
      Motion_Planning_B.x = 1.0;
    }

    if (Motion_Planning_B.scale_a0 <= Motion_Planning_B.x *
        2.0041683600089728E-292) {
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        r->re = Motion_Planning_rt_hypotd_snf(g.re, g.im);
        r->im = 0.0;
        Motion_Planning_B.f2s = Motion_Planning_rt_hypotd_snf
          (Motion_Planning_B.gs_re, Motion_Planning_B.gs_im);
        sn->re = Motion_Planning_B.gs_re / Motion_Planning_B.f2s;
        sn->im = -Motion_Planning_B.gs_im / Motion_Planning_B.f2s;
      } else {
        Motion_Planning_B.scale_a0 = sqrt(Motion_Planning_B.g2);
        *cs = Motion_Planning_rt_hypotd_snf(Motion_Planning_B.fs_re,
          Motion_Planning_B.fs_im) / Motion_Planning_B.scale_a0;
        if (Motion_Planning_B.di > Motion_Planning_B.f2s) {
          Motion_Planning_B.f2s = Motion_Planning_B.di;
        }

        if (Motion_Planning_B.f2s > 1.0) {
          Motion_Planning_B.f2s = Motion_Planning_rt_hypotd_snf(f.re, f.im);
          Motion_Planning_B.fs_re = f.re / Motion_Planning_B.f2s;
          Motion_Planning_B.fs_im = f.im / Motion_Planning_B.f2s;
        } else {
          Motion_Planning_B.fs_re = 7.4428285367870146E+137 * f.re;
          Motion_Planning_B.di = 7.4428285367870146E+137 * f.im;
          Motion_Planning_B.f2s = Motion_Planning_rt_hypotd_snf
            (Motion_Planning_B.fs_re, Motion_Planning_B.di);
          Motion_Planning_B.fs_re /= Motion_Planning_B.f2s;
          Motion_Planning_B.fs_im = Motion_Planning_B.di / Motion_Planning_B.f2s;
        }

        Motion_Planning_B.gs_re /= Motion_Planning_B.scale_a0;
        Motion_Planning_B.gs_im = -Motion_Planning_B.gs_im /
          Motion_Planning_B.scale_a0;
        sn->re = Motion_Planning_B.fs_re * Motion_Planning_B.gs_re -
          Motion_Planning_B.fs_im * Motion_Planning_B.gs_im;
        sn->im = Motion_Planning_B.fs_re * Motion_Planning_B.gs_im +
          Motion_Planning_B.fs_im * Motion_Planning_B.gs_re;
        r->re = (sn->re * g.re - sn->im * g.im) + *cs * f.re;
        r->im = (sn->re * g.im + sn->im * g.re) + *cs * f.im;
      }
    } else {
      Motion_Planning_B.f2s = sqrt(Motion_Planning_B.g2 /
        Motion_Planning_B.scale_a0 + 1.0);
      r->re = Motion_Planning_B.f2s * Motion_Planning_B.fs_re;
      r->im = Motion_Planning_B.f2s * Motion_Planning_B.fs_im;
      *cs = 1.0 / Motion_Planning_B.f2s;
      Motion_Planning_B.f2s = Motion_Planning_B.scale_a0 + Motion_Planning_B.g2;
      Motion_Planning_B.fs_re = r->re / Motion_Planning_B.f2s;
      Motion_Planning_B.f2s = r->im / Motion_Planning_B.f2s;
      sn->re = Motion_Planning_B.fs_re * Motion_Planning_B.gs_re -
        Motion_Planning_B.f2s * -Motion_Planning_B.gs_im;
      sn->im = Motion_Planning_B.fs_re * -Motion_Planning_B.gs_im +
        Motion_Planning_B.f2s * Motion_Planning_B.gs_re;
      if (Motion_Planning_B.rescaledir > 0) {
        Motion_Planning_B.rescaledir = 0;
        while (Motion_Planning_B.rescaledir <= Motion_Planning_B.count) {
          r->re *= 7.4428285367870146E+137;
          r->im *= 7.4428285367870146E+137;
          Motion_Planning_B.rescaledir++;
        }
      } else {
        if (Motion_Planning_B.rescaledir < 0) {
          Motion_Planning_B.rescaledir = 0;
          while (Motion_Planning_B.rescaledir <= Motion_Planning_B.count) {
            r->re *= 1.3435752215134178E-138;
            r->im *= 1.3435752215134178E-138;
            Motion_Planning_B.rescaledir++;
          }
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzgghrd(int32_T ilo, int32_T ihi, creal_T A_data[],
  const int32_T A_size[2])
{
  creal_T s;
  real_T c;
  real_T stemp_im;
  real_T stemp_re;
  real_T tmp;
  real_T tmp_0;
  int32_T j;
  int32_T jcol;
  int32_T jrow;
  int32_T n;
  int32_T stemp_re_tmp;
  int32_T stemp_re_tmp_0;
  n = A_size[0];
  if ((A_size[0] > 1) && (ihi >= ilo + 2)) {
    for (jcol = ilo - 1; jcol + 1 < ihi - 1; jcol++) {
      for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
        Motion_Planning_xzlartg(A_data[(jrow + A_size[0] * jcol) - 1],
          A_data[jrow + A_size[0] * jcol], &c, &s, &A_data[(jrow + A_size[0] *
          jcol) - 1]);
        stemp_re_tmp = jrow + A_size[0] * jcol;
        A_data[stemp_re_tmp].re = 0.0;
        A_data[stemp_re_tmp].im = 0.0;
        for (j = jcol + 1; j < n; j++) {
          stemp_re_tmp = A_size[0] * j + jrow;
          stemp_re = A_data[stemp_re_tmp - 1].re * c + (A_data[stemp_re_tmp].re *
            s.re - A_data[stemp_re_tmp].im * s.im);
          stemp_im = A_data[stemp_re_tmp - 1].im * c + (A_data[stemp_re_tmp].im *
            s.re + A_data[stemp_re_tmp].re * s.im);
          tmp = A_data[stemp_re_tmp - 1].im;
          tmp_0 = A_data[stemp_re_tmp - 1].re;
          A_data[stemp_re_tmp].re = A_data[stemp_re_tmp].re * c -
            (A_data[stemp_re_tmp - 1].re * s.re + A_data[stemp_re_tmp - 1].im *
             s.im);
          A_data[stemp_re_tmp].im = A_data[stemp_re_tmp].im * c - (s.re * tmp -
            s.im * tmp_0);
          A_data[stemp_re_tmp - 1].re = stemp_re;
          A_data[stemp_re_tmp - 1].im = stemp_im;
        }

        s.re = -s.re;
        s.im = -s.im;
        for (j = 0; j < ihi; j++) {
          stemp_re_tmp = (jrow - 1) * A_size[0] + j;
          stemp_re_tmp_0 = A_size[0] * jrow + j;
          stemp_re = (A_data[stemp_re_tmp].re * s.re - A_data[stemp_re_tmp].im *
                      s.im) + A_data[stemp_re_tmp_0].re * c;
          stemp_im = (A_data[stemp_re_tmp].im * s.re + A_data[stemp_re_tmp].re *
                      s.im) + A_data[stemp_re_tmp_0].im * c;
          tmp = A_data[stemp_re_tmp_0].im;
          tmp_0 = A_data[stemp_re_tmp_0].re;
          A_data[stemp_re_tmp].re = A_data[stemp_re_tmp].re * c -
            (A_data[stemp_re_tmp_0].re * s.re + A_data[stemp_re_tmp_0].im * s.im);
          A_data[stemp_re_tmp].im = A_data[stemp_re_tmp].im * c - (s.re * tmp -
            s.im * tmp_0);
          A_data[stemp_re_tmp_0].re = stemp_re;
          A_data[stemp_re_tmp_0].im = stemp_im;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzlartg_k(const creal_T f, const creal_T g, real_T
  *cs, creal_T *sn)
{
  real_T di;
  real_T f2s;
  real_T fs_im;
  real_T fs_re;
  real_T g2;
  real_T gs_im;
  real_T gs_re;
  real_T scale;
  real_T x;
  boolean_T guard1 = false;
  f2s = fabs(f.re);
  di = fabs(f.im);
  scale = f2s;
  if (di > f2s) {
    scale = di;
  }

  gs_re = fabs(g.re);
  gs_im = fabs(g.im);
  if (gs_im > gs_re) {
    gs_re = gs_im;
  }

  if (gs_re > scale) {
    scale = gs_re;
  }

  fs_re = f.re;
  fs_im = f.im;
  gs_re = g.re;
  gs_im = g.im;
  guard1 = false;
  if (scale >= 7.4428285367870146E+137) {
    do {
      fs_re *= 1.3435752215134178E-138;
      fs_im *= 1.3435752215134178E-138;
      gs_re *= 1.3435752215134178E-138;
      gs_im *= 1.3435752215134178E-138;
      scale *= 1.3435752215134178E-138;
    } while (!(scale < 7.4428285367870146E+137));

    guard1 = true;
  } else if (scale <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
    } else {
      do {
        fs_re *= 7.4428285367870146E+137;
        fs_im *= 7.4428285367870146E+137;
        gs_re *= 7.4428285367870146E+137;
        gs_im *= 7.4428285367870146E+137;
        scale *= 7.4428285367870146E+137;
      } while (!(scale > 1.3435752215134178E-138));

      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    scale = fs_re * fs_re + fs_im * fs_im;
    g2 = gs_re * gs_re + gs_im * gs_im;
    x = g2;
    if (1.0 > g2) {
      x = 1.0;
    }

    if (scale <= x * 2.0041683600089728E-292) {
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        f2s = Motion_Planning_rt_hypotd_snf(gs_re, gs_im);
        sn->re = gs_re / f2s;
        sn->im = -gs_im / f2s;
      } else {
        scale = sqrt(g2);
        *cs = Motion_Planning_rt_hypotd_snf(fs_re, fs_im) / scale;
        if (di > f2s) {
          f2s = di;
        }

        if (f2s > 1.0) {
          f2s = Motion_Planning_rt_hypotd_snf(f.re, f.im);
          fs_re = f.re / f2s;
          fs_im = f.im / f2s;
        } else {
          fs_re = 7.4428285367870146E+137 * f.re;
          di = 7.4428285367870146E+137 * f.im;
          f2s = Motion_Planning_rt_hypotd_snf(fs_re, di);
          fs_re /= f2s;
          fs_im = di / f2s;
        }

        gs_re /= scale;
        gs_im = -gs_im / scale;
        sn->re = fs_re * gs_re - fs_im * gs_im;
        sn->im = fs_re * gs_im + fs_im * gs_re;
      }
    } else {
      f2s = sqrt(g2 / scale + 1.0);
      fs_re *= f2s;
      fs_im *= f2s;
      *cs = 1.0 / f2s;
      f2s = scale + g2;
      fs_re /= f2s;
      fs_im /= f2s;
      sn->re = fs_re * gs_re - fs_im * -gs_im;
      sn->im = fs_re * -gs_im + fs_im * gs_re;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzhgeqz(const creal_T A_data[], const int32_T
  A_size[2], int32_T ilo, int32_T ihi, int32_T *info, creal_T alpha1_data[],
  int32_T *alpha1_size, creal_T beta1_data[], int32_T *beta1_size)
{
  int32_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  Motion_Planning_B.b_A_size_idx_0 = A_size[0];
  Motion_Planning_B.nm1 = A_size[0] * A_size[1] - 1;
  if (0 <= Motion_Planning_B.nm1) {
    memcpy(&Motion_Planning_B.b_A_data[0], &A_data[0], (Motion_Planning_B.nm1 +
            1) * sizeof(creal_T));
  }

  *info = 0;
  if ((A_size[0] == 1) && (A_size[1] == 1)) {
    ihi = 1;
  }

  *alpha1_size = A_size[0];
  Motion_Planning_B.nm1 = A_size[0];
  if (0 <= Motion_Planning_B.nm1 - 1) {
    memset(&alpha1_data[0], 0, Motion_Planning_B.nm1 * sizeof(creal_T));
  }

  *beta1_size = A_size[0];
  Motion_Planning_B.nm1 = A_size[0];
  for (Motion_Planning_B.jp1 = 0; Motion_Planning_B.jp1 < Motion_Planning_B.nm1;
       Motion_Planning_B.jp1++) {
    beta1_data[Motion_Planning_B.jp1].re = 1.0;
    beta1_data[Motion_Planning_B.jp1].im = 0.0;
  }

  Motion_Planning_B.eshift_re = 0.0;
  Motion_Planning_B.eshift_im = 0.0;
  Motion_Planning_B.ctemp.re = 0.0;
  Motion_Planning_B.ctemp.im = 0.0;
  Motion_Planning_B.anorm = 0.0;
  if (ilo <= ihi) {
    Motion_Planning_B.scale_a = 3.3121686421112381E-170;
    Motion_Planning_B.ssq = 0.0;
    Motion_Planning_B.nm1 = ihi - ilo;
    Motion_Planning_B.ifirst = -1;
    while (Motion_Planning_B.ifirst + 1 <= Motion_Planning_B.nm1) {
      Motion_Planning_B.colscale = 3.3121686421112381E-170;
      Motion_Planning_B.anorm = 0.0;
      Motion_Planning_B.col = ilo + Motion_Planning_B.ifirst;
      if (Motion_Planning_B.ifirst + 2 < Motion_Planning_B.nm1) {
        Motion_Planning_B.ilastm1 = Motion_Planning_B.ifirst + 2;
      } else {
        Motion_Planning_B.ilastm1 = Motion_Planning_B.nm1;
      }

      Motion_Planning_B.ilastm1 += ilo;
      Motion_Planning_B.ilastm = ilo;
      while (Motion_Planning_B.ilastm <= Motion_Planning_B.ilastm1) {
        Motion_Planning_B.iiter = (A_size[0] * Motion_Planning_B.col +
          Motion_Planning_B.ilastm) - 1;
        Motion_Planning_B.absxk_d = fabs(A_data[Motion_Planning_B.iiter].re);
        if (Motion_Planning_B.absxk_d > Motion_Planning_B.colscale) {
          Motion_Planning_B.t_e = Motion_Planning_B.colscale /
            Motion_Planning_B.absxk_d;
          Motion_Planning_B.anorm = Motion_Planning_B.anorm *
            Motion_Planning_B.t_e * Motion_Planning_B.t_e + 1.0;
          Motion_Planning_B.colscale = Motion_Planning_B.absxk_d;
        } else {
          Motion_Planning_B.t_e = Motion_Planning_B.absxk_d /
            Motion_Planning_B.colscale;
          Motion_Planning_B.anorm += Motion_Planning_B.t_e *
            Motion_Planning_B.t_e;
        }

        Motion_Planning_B.absxk_d = fabs(A_data[Motion_Planning_B.iiter].im);
        if (Motion_Planning_B.absxk_d > Motion_Planning_B.colscale) {
          Motion_Planning_B.t_e = Motion_Planning_B.colscale /
            Motion_Planning_B.absxk_d;
          Motion_Planning_B.anorm = Motion_Planning_B.anorm *
            Motion_Planning_B.t_e * Motion_Planning_B.t_e + 1.0;
          Motion_Planning_B.colscale = Motion_Planning_B.absxk_d;
        } else {
          Motion_Planning_B.t_e = Motion_Planning_B.absxk_d /
            Motion_Planning_B.colscale;
          Motion_Planning_B.anorm += Motion_Planning_B.t_e *
            Motion_Planning_B.t_e;
        }

        Motion_Planning_B.ilastm++;
      }

      if (Motion_Planning_B.scale_a >= Motion_Planning_B.colscale) {
        Motion_Planning_B.colscale /= Motion_Planning_B.scale_a;
        Motion_Planning_B.ssq += Motion_Planning_B.colscale *
          Motion_Planning_B.colscale * Motion_Planning_B.anorm;
      } else {
        Motion_Planning_B.scale_a /= Motion_Planning_B.colscale;
        Motion_Planning_B.ssq = Motion_Planning_B.scale_a *
          Motion_Planning_B.scale_a * Motion_Planning_B.ssq +
          Motion_Planning_B.anorm;
        Motion_Planning_B.scale_a = Motion_Planning_B.colscale;
      }

      Motion_Planning_B.ifirst++;
    }

    Motion_Planning_B.anorm = Motion_Planning_B.scale_a * sqrt
      (Motion_Planning_B.ssq);
  }

  Motion_Planning_B.scale_a = 2.2204460492503131E-16 * Motion_Planning_B.anorm;
  Motion_Planning_B.ssq = 2.2250738585072014E-308;
  if (Motion_Planning_B.scale_a > 2.2250738585072014E-308) {
    Motion_Planning_B.ssq = Motion_Planning_B.scale_a;
  }

  Motion_Planning_B.scale_a = 2.2250738585072014E-308;
  if (Motion_Planning_B.anorm > 2.2250738585072014E-308) {
    Motion_Planning_B.scale_a = Motion_Planning_B.anorm;
  }

  Motion_Planning_B.anorm = 1.0 / Motion_Planning_B.scale_a;
  Motion_Planning_B.scale_a = 1.0 / sqrt(static_cast<real_T>(A_size[0]));
  Motion_Planning_B.failed = true;
  Motion_Planning_B.nm1 = ihi;
  while (Motion_Planning_B.nm1 + 1 <= A_size[0]) {
    alpha1_data[Motion_Planning_B.nm1] = A_data[A_size[0] *
      Motion_Planning_B.nm1 + Motion_Planning_B.nm1];
    Motion_Planning_B.nm1++;
  }

  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    Motion_Planning_B.ifirst = ilo;
    Motion_Planning_B.col = ilo;
    Motion_Planning_B.nm1 = ihi - 1;
    Motion_Planning_B.ilastm1 = ihi - 2;
    Motion_Planning_B.ilastm = ihi;
    Motion_Planning_B.iiter = 0;
    Motion_Planning_B.goto60 = false;
    Motion_Planning_B.goto70 = false;
    Motion_Planning_B.goto90 = false;
    Motion_Planning_B.jiter = 0;
    do {
      exitg1 = 0;
      if (Motion_Planning_B.jiter <= ((ihi - ilo) + 1) * 30 - 1) {
        if (Motion_Planning_B.nm1 + 1 == ilo) {
          Motion_Planning_B.goto60 = true;
        } else {
          Motion_Planning_B.jp1 = Motion_Planning_B.b_A_size_idx_0 *
            Motion_Planning_B.ilastm1 + Motion_Planning_B.nm1;
          if (fabs(Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re) + fabs
              (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im) <=
              Motion_Planning_B.ssq) {
            Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re = 0.0;
            Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im = 0.0;
            Motion_Planning_B.goto60 = true;
          } else {
            Motion_Planning_B.j_bt = Motion_Planning_B.ilastm1;
            guard3 = false;
            exitg2 = false;
            while ((!exitg2) && (Motion_Planning_B.j_bt + 1 >= ilo)) {
              if (Motion_Planning_B.j_bt + 1 == ilo) {
                guard3 = true;
                exitg2 = true;
              } else {
                Motion_Planning_B.jp1 = (Motion_Planning_B.j_bt - 1) *
                  Motion_Planning_B.b_A_size_idx_0 + Motion_Planning_B.j_bt;
                if (fabs(Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re) +
                    fabs(Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im) <=
                    Motion_Planning_B.ssq) {
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re = 0.0;
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im = 0.0;
                  guard3 = true;
                  exitg2 = true;
                } else {
                  Motion_Planning_B.j_bt--;
                  guard3 = false;
                }
              }
            }

            if (guard3) {
              Motion_Planning_B.ifirst = Motion_Planning_B.j_bt + 1;
              Motion_Planning_B.goto70 = true;
            }
          }
        }

        if ((!Motion_Planning_B.goto60) && (!Motion_Planning_B.goto70)) {
          Motion_Planning_B.nm1 = *alpha1_size;
          for (Motion_Planning_B.jp1 = 0; Motion_Planning_B.jp1 <
               Motion_Planning_B.nm1; Motion_Planning_B.jp1++) {
            alpha1_data[Motion_Planning_B.jp1].re = (rtNaN);
            alpha1_data[Motion_Planning_B.jp1].im = 0.0;
          }

          Motion_Planning_B.nm1 = *beta1_size;
          for (Motion_Planning_B.jp1 = 0; Motion_Planning_B.jp1 <
               Motion_Planning_B.nm1; Motion_Planning_B.jp1++) {
            beta1_data[Motion_Planning_B.jp1].re = (rtNaN);
            beta1_data[Motion_Planning_B.jp1].im = 0.0;
          }

          *info = 1;
          exitg1 = 1;
        } else if (Motion_Planning_B.goto60) {
          Motion_Planning_B.goto60 = false;
          alpha1_data[Motion_Planning_B.nm1] =
            Motion_Planning_B.b_A_data[Motion_Planning_B.b_A_size_idx_0 *
            Motion_Planning_B.nm1 + Motion_Planning_B.nm1];
          Motion_Planning_B.nm1 = Motion_Planning_B.ilastm1;
          Motion_Planning_B.ilastm1--;
          if (Motion_Planning_B.nm1 + 1 < ilo) {
            Motion_Planning_B.failed = false;
            guard2 = true;
            exitg1 = 1;
          } else {
            Motion_Planning_B.iiter = 0;
            Motion_Planning_B.eshift_re = 0.0;
            Motion_Planning_B.eshift_im = 0.0;
            Motion_Planning_B.ilastm = Motion_Planning_B.nm1 + 1;
            Motion_Planning_B.jiter++;
          }
        } else {
          if (Motion_Planning_B.goto70) {
            Motion_Planning_B.goto70 = false;
            Motion_Planning_B.iiter++;
            if (Motion_Planning_B.iiter - div_nzp_s32(Motion_Planning_B.iiter,
                 10) * 10 != 0) {
              Motion_Planning_B.j_bt = Motion_Planning_B.b_A_size_idx_0 *
                Motion_Planning_B.ilastm1 + Motion_Planning_B.ilastm1;
              Motion_Planning_B.ar_e =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
                Motion_Planning_B.anorm;
              Motion_Planning_B.ai_b =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
                Motion_Planning_B.anorm;
              if (Motion_Planning_B.ai_b == 0.0) {
                Motion_Planning_B.shift.re = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.shift.im = 0.0;
              } else if (Motion_Planning_B.ar_e == 0.0) {
                Motion_Planning_B.shift.re = 0.0;
                Motion_Planning_B.shift.im = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              } else {
                Motion_Planning_B.shift.re = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.shift.im = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              }

              Motion_Planning_B.j_bt = Motion_Planning_B.b_A_size_idx_0 *
                Motion_Planning_B.nm1 + Motion_Planning_B.nm1;
              Motion_Planning_B.ar_e =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
                Motion_Planning_B.anorm;
              Motion_Planning_B.ai_b =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
                Motion_Planning_B.anorm;
              if (Motion_Planning_B.ai_b == 0.0) {
                Motion_Planning_B.ad22.re = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.ad22.im = 0.0;
              } else if (Motion_Planning_B.ar_e == 0.0) {
                Motion_Planning_B.ad22.re = 0.0;
                Motion_Planning_B.ad22.im = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              } else {
                Motion_Planning_B.ad22.re = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.ad22.im = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              }

              Motion_Planning_B.t_e = (Motion_Planning_B.shift.re +
                Motion_Planning_B.ad22.re) * 0.5;
              Motion_Planning_B.t1_im = (Motion_Planning_B.shift.im +
                Motion_Planning_B.ad22.im) * 0.5;
              Motion_Planning_B.j_bt = Motion_Planning_B.b_A_size_idx_0 *
                Motion_Planning_B.nm1 + Motion_Planning_B.ilastm1;
              Motion_Planning_B.ar_e =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
                Motion_Planning_B.anorm;
              Motion_Planning_B.ai_b =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
                Motion_Planning_B.anorm;
              if (Motion_Planning_B.ai_b == 0.0) {
                Motion_Planning_B.colscale = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.absxk_d = 0.0;
              } else if (Motion_Planning_B.ar_e == 0.0) {
                Motion_Planning_B.colscale = 0.0;
                Motion_Planning_B.absxk_d = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              } else {
                Motion_Planning_B.colscale = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.absxk_d = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              }

              Motion_Planning_B.j_bt = Motion_Planning_B.b_A_size_idx_0 *
                Motion_Planning_B.ilastm1 + Motion_Planning_B.nm1;
              Motion_Planning_B.ar_e =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
                Motion_Planning_B.anorm;
              Motion_Planning_B.ai_b =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
                Motion_Planning_B.anorm;
              if (Motion_Planning_B.ai_b == 0.0) {
                Motion_Planning_B.ar_e /= Motion_Planning_B.scale_a;
                Motion_Planning_B.ai_b = 0.0;
              } else if (Motion_Planning_B.ar_e == 0.0) {
                Motion_Planning_B.ar_e = 0.0;
                Motion_Planning_B.ai_b /= Motion_Planning_B.scale_a;
              } else {
                Motion_Planning_B.ar_e /= Motion_Planning_B.scale_a;
                Motion_Planning_B.ai_b /= Motion_Planning_B.scale_a;
              }

              Motion_Planning_B.shift_im = Motion_Planning_B.shift.re *
                Motion_Planning_B.ad22.im + Motion_Planning_B.shift.im *
                Motion_Planning_B.ad22.re;
              Motion_Planning_B.shift.re = ((Motion_Planning_B.t_e *
                Motion_Planning_B.t_e - Motion_Planning_B.t1_im *
                Motion_Planning_B.t1_im) + (Motion_Planning_B.colscale *
                Motion_Planning_B.ar_e - Motion_Planning_B.absxk_d *
                Motion_Planning_B.ai_b)) - (Motion_Planning_B.shift.re *
                Motion_Planning_B.ad22.re - Motion_Planning_B.shift.im *
                Motion_Planning_B.ad22.im);
              Motion_Planning_B.shift_tmp = Motion_Planning_B.t_e *
                Motion_Planning_B.t1_im;
              Motion_Planning_B.shift.im = ((Motion_Planning_B.shift_tmp +
                Motion_Planning_B.shift_tmp) + (Motion_Planning_B.colscale *
                Motion_Planning_B.ai_b + Motion_Planning_B.absxk_d *
                Motion_Planning_B.ar_e)) - Motion_Planning_B.shift_im;
              Motion_Planning_sqrt(&Motion_Planning_B.shift);
              if ((Motion_Planning_B.t_e - Motion_Planning_B.ad22.re) *
                  Motion_Planning_B.shift.re + (Motion_Planning_B.t1_im -
                   Motion_Planning_B.ad22.im) * Motion_Planning_B.shift.im <=
                  0.0) {
                Motion_Planning_B.shift.re += Motion_Planning_B.t_e;
                Motion_Planning_B.shift.im += Motion_Planning_B.t1_im;
              } else {
                Motion_Planning_B.shift.re = Motion_Planning_B.t_e -
                  Motion_Planning_B.shift.re;
                Motion_Planning_B.shift.im = Motion_Planning_B.t1_im -
                  Motion_Planning_B.shift.im;
              }
            } else {
              Motion_Planning_B.j_bt = Motion_Planning_B.b_A_size_idx_0 *
                Motion_Planning_B.ilastm1 + Motion_Planning_B.nm1;
              Motion_Planning_B.ar_e =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
                Motion_Planning_B.anorm;
              Motion_Planning_B.ai_b =
                Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
                Motion_Planning_B.anorm;
              if (Motion_Planning_B.ai_b == 0.0) {
                Motion_Planning_B.colscale = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.absxk_d = 0.0;
              } else if (Motion_Planning_B.ar_e == 0.0) {
                Motion_Planning_B.colscale = 0.0;
                Motion_Planning_B.absxk_d = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              } else {
                Motion_Planning_B.colscale = Motion_Planning_B.ar_e /
                  Motion_Planning_B.scale_a;
                Motion_Planning_B.absxk_d = Motion_Planning_B.ai_b /
                  Motion_Planning_B.scale_a;
              }

              Motion_Planning_B.eshift_re += Motion_Planning_B.colscale;
              Motion_Planning_B.eshift_im += Motion_Planning_B.absxk_d;
              Motion_Planning_B.shift.re = Motion_Planning_B.eshift_re;
              Motion_Planning_B.shift.im = Motion_Planning_B.eshift_im;
            }

            Motion_Planning_B.j_bt = Motion_Planning_B.ilastm1;
            Motion_Planning_B.jp1 = Motion_Planning_B.ilastm1 + 1;
            exitg2 = false;
            while ((!exitg2) && (Motion_Planning_B.j_bt + 1 >
                                 Motion_Planning_B.ifirst)) {
              Motion_Planning_B.col = Motion_Planning_B.j_bt + 1;
              Motion_Planning_B.ctemp_tmp_tmp = Motion_Planning_B.b_A_size_idx_0
                * Motion_Planning_B.j_bt;
              Motion_Planning_B.ctemp_tmp = Motion_Planning_B.ctemp_tmp_tmp +
                Motion_Planning_B.j_bt;
              Motion_Planning_B.ctemp.re =
                Motion_Planning_B.b_A_data[Motion_Planning_B.ctemp_tmp].re *
                Motion_Planning_B.anorm - Motion_Planning_B.shift.re *
                Motion_Planning_B.scale_a;
              Motion_Planning_B.ctemp.im =
                Motion_Planning_B.b_A_data[Motion_Planning_B.ctemp_tmp].im *
                Motion_Planning_B.anorm - Motion_Planning_B.shift.im *
                Motion_Planning_B.scale_a;
              Motion_Planning_B.colscale = fabs(Motion_Planning_B.ctemp.re) +
                fabs(Motion_Planning_B.ctemp.im);
              Motion_Planning_B.jp1 += Motion_Planning_B.ctemp_tmp_tmp;
              Motion_Planning_B.absxk_d = (fabs
                (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re) + fabs
                (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im)) *
                Motion_Planning_B.anorm;
              Motion_Planning_B.t_e = Motion_Planning_B.colscale;
              if (Motion_Planning_B.absxk_d > Motion_Planning_B.colscale) {
                Motion_Planning_B.t_e = Motion_Planning_B.absxk_d;
              }

              if ((Motion_Planning_B.t_e < 1.0) && (Motion_Planning_B.t_e != 0.0))
              {
                Motion_Planning_B.colscale /= Motion_Planning_B.t_e;
                Motion_Planning_B.absxk_d /= Motion_Planning_B.t_e;
              }

              Motion_Planning_B.jp1 = (Motion_Planning_B.j_bt - 1) *
                Motion_Planning_B.b_A_size_idx_0 + Motion_Planning_B.j_bt;
              if ((fabs(Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re) +
                   fabs(Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im)) *
                  Motion_Planning_B.absxk_d <= Motion_Planning_B.colscale *
                  Motion_Planning_B.ssq) {
                Motion_Planning_B.goto90 = true;
                exitg2 = true;
              } else {
                Motion_Planning_B.jp1 = Motion_Planning_B.j_bt;
                Motion_Planning_B.j_bt--;
              }
            }

            if (!Motion_Planning_B.goto90) {
              Motion_Planning_B.col = Motion_Planning_B.ifirst;
              Motion_Planning_B.ctemp_tmp = ((Motion_Planning_B.ifirst - 1) *
                Motion_Planning_B.b_A_size_idx_0 + Motion_Planning_B.ifirst) - 1;
              Motion_Planning_B.ctemp.re =
                Motion_Planning_B.b_A_data[Motion_Planning_B.ctemp_tmp].re *
                Motion_Planning_B.anorm - Motion_Planning_B.shift.re *
                Motion_Planning_B.scale_a;
              Motion_Planning_B.ctemp.im =
                Motion_Planning_B.b_A_data[Motion_Planning_B.ctemp_tmp].im *
                Motion_Planning_B.anorm - Motion_Planning_B.shift.im *
                Motion_Planning_B.scale_a;
            }

            Motion_Planning_B.goto90 = false;
            Motion_Planning_B.j_bt = (Motion_Planning_B.col - 1) *
              Motion_Planning_B.b_A_size_idx_0 + Motion_Planning_B.col;
            Motion_Planning_B.ascale.re =
              Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].re *
              Motion_Planning_B.anorm;
            Motion_Planning_B.ascale.im =
              Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt].im *
              Motion_Planning_B.anorm;
            Motion_Planning_xzlartg_k(Motion_Planning_B.ctemp,
              Motion_Planning_B.ascale, &Motion_Planning_B.colscale,
              &Motion_Planning_B.ad22);
            Motion_Planning_B.j_bt = Motion_Planning_B.col;
            Motion_Planning_B.jp1 = Motion_Planning_B.col - 2;
            while (Motion_Planning_B.j_bt < Motion_Planning_B.nm1 + 1) {
              if (Motion_Planning_B.j_bt > Motion_Planning_B.col) {
                Motion_Planning_xzlartg(Motion_Planning_B.b_A_data
                  [(Motion_Planning_B.j_bt + Motion_Planning_B.b_A_size_idx_0 *
                    Motion_Planning_B.jp1) - 1],
                  Motion_Planning_B.b_A_data[Motion_Planning_B.j_bt +
                  Motion_Planning_B.b_A_size_idx_0 * Motion_Planning_B.jp1],
                  &Motion_Planning_B.colscale, &Motion_Planning_B.ad22,
                  &Motion_Planning_B.b_A_data[(Motion_Planning_B.j_bt +
                  Motion_Planning_B.b_A_size_idx_0 * Motion_Planning_B.jp1) - 1]);
                Motion_Planning_B.jp1 = Motion_Planning_B.j_bt +
                  Motion_Planning_B.b_A_size_idx_0 * Motion_Planning_B.jp1;
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re = 0.0;
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im = 0.0;
              }

              Motion_Planning_B.ctemp_tmp_tmp = Motion_Planning_B.j_bt - 1;
              while (Motion_Planning_B.ctemp_tmp_tmp + 1 <=
                     Motion_Planning_B.ilastm) {
                Motion_Planning_B.jp1 = Motion_Planning_B.b_A_size_idx_0 *
                  Motion_Planning_B.ctemp_tmp_tmp + Motion_Planning_B.j_bt;
                Motion_Planning_B.shift.re =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].re *
                  Motion_Planning_B.colscale +
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                   Motion_Planning_B.ad22.re -
                   Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                   Motion_Planning_B.ad22.im);
                Motion_Planning_B.shift.im =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].im *
                  Motion_Planning_B.colscale +
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                   Motion_Planning_B.ad22.re +
                   Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                   Motion_Planning_B.ad22.im);
                Motion_Planning_B.absxk_d =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].re;
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                  Motion_Planning_B.colscale -
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].re *
                   Motion_Planning_B.ad22.re +
                   Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].im *
                   Motion_Planning_B.ad22.im);
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                  Motion_Planning_B.colscale -
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1].im *
                   Motion_Planning_B.ad22.re - Motion_Planning_B.ad22.im *
                   Motion_Planning_B.absxk_d);
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1 - 1] =
                  Motion_Planning_B.shift;
                Motion_Planning_B.ctemp_tmp_tmp++;
              }

              Motion_Planning_B.ad22.re = -Motion_Planning_B.ad22.re;
              Motion_Planning_B.ad22.im = -Motion_Planning_B.ad22.im;
              Motion_Planning_B.ctemp_tmp_tmp = Motion_Planning_B.j_bt;
              if (Motion_Planning_B.nm1 + 1 < Motion_Planning_B.j_bt + 2) {
                Motion_Planning_B.ctemp_tmp_tmp = Motion_Planning_B.nm1 - 1;
              }

              Motion_Planning_B.ctemp_tmp = Motion_Planning_B.ifirst - 1;
              while (Motion_Planning_B.ctemp_tmp + 1 <=
                     Motion_Planning_B.ctemp_tmp_tmp + 2) {
                Motion_Planning_B.jp1 = (Motion_Planning_B.j_bt - 1) *
                  Motion_Planning_B.b_A_size_idx_0 + Motion_Planning_B.ctemp_tmp;
                Motion_Planning_B.shift_tmp_j = Motion_Planning_B.b_A_size_idx_0
                  * Motion_Planning_B.j_bt + Motion_Planning_B.ctemp_tmp;
                Motion_Planning_B.shift.re =
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                   Motion_Planning_B.ad22.re -
                   Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                   Motion_Planning_B.ad22.im) +
                  Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].re *
                  Motion_Planning_B.colscale;
                Motion_Planning_B.shift.im =
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                   Motion_Planning_B.ad22.re +
                   Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                   Motion_Planning_B.ad22.im) +
                  Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].im *
                  Motion_Planning_B.colscale;
                Motion_Planning_B.absxk_d =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].re;
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].re *
                  Motion_Planning_B.colscale -
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].re *
                   Motion_Planning_B.ad22.re +
                   Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].im *
                   Motion_Planning_B.ad22.im);
                Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im =
                  Motion_Planning_B.b_A_data[Motion_Planning_B.jp1].im *
                  Motion_Planning_B.colscale -
                  (Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j].im *
                   Motion_Planning_B.ad22.re - Motion_Planning_B.ad22.im *
                   Motion_Planning_B.absxk_d);
                Motion_Planning_B.b_A_data[Motion_Planning_B.shift_tmp_j] =
                  Motion_Planning_B.shift;
                Motion_Planning_B.ctemp_tmp++;
              }

              Motion_Planning_B.jp1 = Motion_Planning_B.j_bt - 1;
              Motion_Planning_B.j_bt++;
            }
          }

          Motion_Planning_B.jiter++;
        }
      } else {
        guard2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    guard1 = true;
  }

  if (guard2) {
    if (Motion_Planning_B.failed) {
      *info = Motion_Planning_B.nm1 + 1;
      Motion_Planning_B.b_A_size_idx_0 = 0;
      while (Motion_Planning_B.b_A_size_idx_0 <= Motion_Planning_B.nm1) {
        alpha1_data[Motion_Planning_B.b_A_size_idx_0].re = (rtNaN);
        alpha1_data[Motion_Planning_B.b_A_size_idx_0].im = 0.0;
        beta1_data[Motion_Planning_B.b_A_size_idx_0].re = (rtNaN);
        beta1_data[Motion_Planning_B.b_A_size_idx_0].im = 0.0;
        Motion_Planning_B.b_A_size_idx_0++;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    Motion_Planning_B.nm1 = 0;
    while (Motion_Planning_B.nm1 <= ilo - 2) {
      alpha1_data[Motion_Planning_B.nm1] =
        Motion_Planning_B.b_A_data[Motion_Planning_B.b_A_size_idx_0 *
        Motion_Planning_B.nm1 + Motion_Planning_B.nm1];
      Motion_Planning_B.nm1++;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzgeev(const real_T A_data[], const int32_T A_size[2],
  int32_T *info, creal_T alpha1_data[], int32_T *alpha1_size, creal_T
  beta1_data[], int32_T *beta1_size)
{
  boolean_T exitg1;
  boolean_T guard1 = false;
  Motion_Planning_B.At_size[0] = A_size[0];
  Motion_Planning_B.At_size[1] = A_size[1];
  Motion_Planning_B.loop_ub_tmp_b = A_size[0] * A_size[1];
  Motion_Planning_B.loop_ub_no = Motion_Planning_B.loop_ub_tmp_b - 1;
  for (Motion_Planning_B.k_i = 0; Motion_Planning_B.k_i <=
       Motion_Planning_B.loop_ub_no; Motion_Planning_B.k_i++) {
    Motion_Planning_B.At_data[Motion_Planning_B.k_i].re =
      A_data[Motion_Planning_B.k_i];
    Motion_Planning_B.At_data[Motion_Planning_B.k_i].im = 0.0;
  }

  *info = 0;
  Motion_Planning_B.anrm = 0.0;
  Motion_Planning_B.k_i = 0;
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.k_i <= Motion_Planning_B.loop_ub_tmp_b
                       - 1)) {
    Motion_Planning_B.absxk_f = Motion_Planning_rt_hypotd_snf
      (Motion_Planning_B.At_data[Motion_Planning_B.k_i].re,
       Motion_Planning_B.At_data[Motion_Planning_B.k_i].im);
    if (rtIsNaN(Motion_Planning_B.absxk_f)) {
      Motion_Planning_B.anrm = (rtNaN);
      exitg1 = true;
    } else {
      if (Motion_Planning_B.absxk_f > Motion_Planning_B.anrm) {
        Motion_Planning_B.anrm = Motion_Planning_B.absxk_f;
      }

      Motion_Planning_B.k_i++;
    }
  }

  if (rtIsInf(Motion_Planning_B.anrm) || rtIsNaN(Motion_Planning_B.anrm)) {
    *alpha1_size = A_size[0];
    Motion_Planning_B.loop_ub_no = A_size[0];
    for (Motion_Planning_B.k_i = 0; Motion_Planning_B.k_i <
         Motion_Planning_B.loop_ub_no; Motion_Planning_B.k_i++) {
      alpha1_data[Motion_Planning_B.k_i].re = (rtNaN);
      alpha1_data[Motion_Planning_B.k_i].im = 0.0;
    }

    *beta1_size = A_size[0];
    Motion_Planning_B.loop_ub_no = A_size[0];
    for (Motion_Planning_B.k_i = 0; Motion_Planning_B.k_i <
         Motion_Planning_B.loop_ub_no; Motion_Planning_B.k_i++) {
      beta1_data[Motion_Planning_B.k_i].re = (rtNaN);
      beta1_data[Motion_Planning_B.k_i].im = 0.0;
    }
  } else {
    Motion_Planning_B.ilascl = false;
    Motion_Planning_B.absxk_f = Motion_Planning_B.anrm;
    guard1 = false;
    if ((Motion_Planning_B.anrm > 0.0) && (Motion_Planning_B.anrm <
         6.7178761075670888E-139)) {
      Motion_Planning_B.absxk_f = 6.7178761075670888E-139;
      Motion_Planning_B.ilascl = true;
      guard1 = true;
    } else {
      if (Motion_Planning_B.anrm > 1.4885657073574029E+138) {
        Motion_Planning_B.absxk_f = 1.4885657073574029E+138;
        Motion_Planning_B.ilascl = true;
        guard1 = true;
      }
    }

    if (guard1) {
      Motion_Planning_B.cfromc = Motion_Planning_B.anrm;
      Motion_Planning_B.ctoc = Motion_Planning_B.absxk_f;
      Motion_Planning_B.notdone = true;
      while (Motion_Planning_B.notdone) {
        Motion_Planning_B.b_mul = Motion_Planning_B.cfromc *
          2.0041683600089728E-292;
        Motion_Planning_B.cto1 = Motion_Planning_B.ctoc / 4.9896007738368E+291;
        if ((Motion_Planning_B.b_mul > Motion_Planning_B.ctoc) &&
            (Motion_Planning_B.ctoc != 0.0)) {
          Motion_Planning_B.mul = 2.0041683600089728E-292;
          Motion_Planning_B.cfromc = Motion_Planning_B.b_mul;
        } else if (Motion_Planning_B.cto1 > Motion_Planning_B.cfromc) {
          Motion_Planning_B.mul = 4.9896007738368E+291;
          Motion_Planning_B.ctoc = Motion_Planning_B.cto1;
        } else {
          Motion_Planning_B.mul = Motion_Planning_B.ctoc /
            Motion_Planning_B.cfromc;
          Motion_Planning_B.notdone = false;
        }

        Motion_Planning_B.loop_ub_no = Motion_Planning_B.At_size[0] *
          Motion_Planning_B.At_size[1] - 1;
        for (Motion_Planning_B.k_i = 0; Motion_Planning_B.k_i <=
             Motion_Planning_B.loop_ub_no; Motion_Planning_B.k_i++) {
          Motion_Planning_B.alpha1_data =
            Motion_Planning_B.At_data[Motion_Planning_B.k_i];
          Motion_Planning_B.alpha1_data.re *= Motion_Planning_B.mul;
          Motion_Planning_B.alpha1_data.im *= Motion_Planning_B.mul;
          Motion_Planning_B.At_data[Motion_Planning_B.k_i] =
            Motion_Planning_B.alpha1_data;
        }
      }
    }

    Motion_Planning_xzggbal(Motion_Planning_B.At_data, Motion_Planning_B.At_size,
      &Motion_Planning_B.loop_ub_tmp_b, &Motion_Planning_B.k_i,
      Motion_Planning_B.rscale_data, &Motion_Planning_B.rscale_size);
    Motion_Planning_xzgghrd(Motion_Planning_B.loop_ub_tmp_b,
      Motion_Planning_B.k_i, Motion_Planning_B.At_data,
      Motion_Planning_B.At_size);
    Motion_Planning_xzhgeqz(Motion_Planning_B.At_data, Motion_Planning_B.At_size,
      Motion_Planning_B.loop_ub_tmp_b, Motion_Planning_B.k_i, info, alpha1_data,
      alpha1_size, beta1_data, beta1_size);
    if ((*info == 0) && Motion_Planning_B.ilascl) {
      Motion_Planning_B.ilascl = true;
      while (Motion_Planning_B.ilascl) {
        Motion_Planning_B.cfromc = Motion_Planning_B.absxk_f *
          2.0041683600089728E-292;
        Motion_Planning_B.ctoc = Motion_Planning_B.anrm / 4.9896007738368E+291;
        if ((Motion_Planning_B.cfromc > Motion_Planning_B.anrm) &&
            (Motion_Planning_B.anrm != 0.0)) {
          Motion_Planning_B.b_mul = 2.0041683600089728E-292;
          Motion_Planning_B.absxk_f = Motion_Planning_B.cfromc;
        } else if (Motion_Planning_B.ctoc > Motion_Planning_B.absxk_f) {
          Motion_Planning_B.b_mul = 4.9896007738368E+291;
          Motion_Planning_B.anrm = Motion_Planning_B.ctoc;
        } else {
          Motion_Planning_B.b_mul = Motion_Planning_B.anrm /
            Motion_Planning_B.absxk_f;
          Motion_Planning_B.ilascl = false;
        }

        Motion_Planning_B.loop_ub_no = *alpha1_size;
        for (Motion_Planning_B.k_i = 0; Motion_Planning_B.k_i <
             Motion_Planning_B.loop_ub_no; Motion_Planning_B.k_i++) {
          Motion_Planning_B.alpha1_data = alpha1_data[Motion_Planning_B.k_i];
          Motion_Planning_B.alpha1_data.re *= Motion_Planning_B.b_mul;
          Motion_Planning_B.alpha1_data.im *= Motion_Planning_B.b_mul;
          alpha1_data[Motion_Planning_B.k_i] = Motion_Planning_B.alpha1_data;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzlarf_a(int32_T m, int32_T n, int32_T iv0, real_T
  tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[])
{
  real_T temp;
  int32_T b_ix;
  int32_T c;
  int32_T exitg1;
  int32_T ia;
  int32_T iac;
  int32_T lastc;
  int32_T lastv;
  int32_T rowleft;
  int32_T rowright;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = n;
    lastc = iv0 + n;
    while ((lastv > 0) && (C_data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = m;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      rowleft = (ic0 + lastc) - 1;
      rowright = (lastv - 1) * ldc + rowleft;
      do {
        exitg1 = 0;
        if (((ldc > 0) && (rowleft <= rowright)) || ((ldc < 0) && (rowleft >=
              rowright))) {
          if (C_data[rowleft - 1] != 0.0) {
            exitg1 = 1;
          } else {
            rowleft += ldc;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (rowleft = 0; rowleft < lastc; rowleft++) {
        work_data[rowleft] = 0.0;
      }

      rowleft = iv0;
      rowright = (lastv - 1) * ldc + ic0;
      iac = ic0;
      while (((ldc > 0) && (iac <= rowright)) || ((ldc < 0) && (iac >= rowright)))
      {
        b_ix = 0;
        c = (iac + lastc) - 1;
        for (ia = iac; ia <= c; ia++) {
          work_data[b_ix] += C_data[ia - 1] * C_data[rowleft - 1];
          b_ix++;
        }

        rowleft++;
        iac += ldc;
      }
    }

    if (!(-tau == 0.0)) {
      rowleft = ic0 - 1;
      rowright = iv0 - 1;
      for (iac = 0; iac < lastv; iac++) {
        if (C_data[rowright] != 0.0) {
          temp = C_data[rowright] * -tau;
          b_ix = 0;
          c = lastc + rowleft;
          for (ia = rowleft; ia < c; ia++) {
            C_data[ia] += work_data[b_ix] * temp;
            b_ix++;
          }
        }

        rowright++;
        rowleft += ldc;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xzlarf_ag(int32_T m, int32_T n, int32_T iv0, real_T
  tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[])
{
  real_T c;
  int32_T coltop;
  int32_T d;
  int32_T exitg1;
  int32_T ia;
  int32_T iac;
  int32_T ix;
  int32_T jy;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C_data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (lastc + 1 > 0)) {
      coltop = lastc * ldc + ic0;
      jy = coltop;
      do {
        exitg1 = 0;
        if (jy <= (coltop + lastv) - 1) {
          if (C_data[jy - 1] != 0.0) {
            exitg1 = 1;
          } else {
            jy++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = -1;
  }

  if (lastv > 0) {
    if (lastc + 1 != 0) {
      for (coltop = 0; coltop <= lastc; coltop++) {
        work_data[coltop] = 0.0;
      }

      coltop = 0;
      jy = ldc * lastc + ic0;
      iac = ic0;
      while (((ldc > 0) && (iac <= jy)) || ((ldc < 0) && (iac >= jy))) {
        ix = iv0;
        c = 0.0;
        d = (iac + lastv) - 1;
        for (ia = iac; ia <= d; ia++) {
          c += C_data[ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[coltop] += c;
        coltop++;
        iac += ldc;
      }
    }

    if (!(-tau == 0.0)) {
      coltop = ic0 - 1;
      jy = 0;
      for (iac = 0; iac <= lastc; iac++) {
        if (work_data[jy] != 0.0) {
          c = work_data[jy] * -tau;
          ix = iv0;
          d = lastv + coltop;
          for (ia = coltop; ia < d; ia++) {
            C_data[ia] += C_data[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        coltop += ldc;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xgehrd(real_T a_data[], const int32_T a_size[2])
{
  Motion_Planning_B.n_k = a_size[0];
  Motion_Planning_B.loop_ub_b = static_cast<int8_T>(a_size[0]);
  if (0 <= Motion_Planning_B.loop_ub_b - 1) {
    memset(&Motion_Planning_B.work_data[0], 0, Motion_Planning_B.loop_ub_b *
           sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_b = 1;
  while (Motion_Planning_B.loop_ub_b - 1 <= Motion_Planning_B.n_k - 2) {
    Motion_Planning_B.im1n = (Motion_Planning_B.loop_ub_b - 1) *
      Motion_Planning_B.n_k + 1;
    Motion_Planning_B.in = Motion_Planning_B.loop_ub_b * Motion_Planning_B.n_k +
      1;
    Motion_Planning_B.alpha1_tmp = (Motion_Planning_B.loop_ub_b - 1) * a_size[0]
      + Motion_Planning_B.loop_ub_b;
    Motion_Planning_B.alpha1 = a_data[Motion_Planning_B.alpha1_tmp];
    if (Motion_Planning_B.loop_ub_b + 2 < Motion_Planning_B.n_k) {
      Motion_Planning_B.i_d = Motion_Planning_B.loop_ub_b + 2;
    } else {
      Motion_Planning_B.i_d = Motion_Planning_B.n_k;
    }

    Motion_Planning_B.tau_data[Motion_Planning_B.loop_ub_b - 1] =
      Motion_Planning_xzlarfg(Motion_Planning_B.n_k -
      Motion_Planning_B.loop_ub_b, &Motion_Planning_B.alpha1, a_data,
      (Motion_Planning_B.loop_ub_b - 1) * Motion_Planning_B.n_k +
      Motion_Planning_B.i_d);
    a_data[Motion_Planning_B.alpha1_tmp] = 1.0;
    Motion_Planning_xzlarf_a(Motion_Planning_B.n_k, Motion_Planning_B.n_k -
      Motion_Planning_B.loop_ub_b, Motion_Planning_B.loop_ub_b +
      Motion_Planning_B.im1n,
      Motion_Planning_B.tau_data[Motion_Planning_B.loop_ub_b - 1], a_data,
      Motion_Planning_B.in, Motion_Planning_B.n_k, Motion_Planning_B.work_data);
    Motion_Planning_xzlarf_ag(Motion_Planning_B.n_k -
      Motion_Planning_B.loop_ub_b, Motion_Planning_B.n_k -
      Motion_Planning_B.loop_ub_b, Motion_Planning_B.loop_ub_b +
      Motion_Planning_B.im1n,
      Motion_Planning_B.tau_data[Motion_Planning_B.loop_ub_b - 1], a_data,
      Motion_Planning_B.loop_ub_b + Motion_Planning_B.in, Motion_Planning_B.n_k,
      Motion_Planning_B.work_data);
    a_data[Motion_Planning_B.alpha1_tmp] = Motion_Planning_B.alpha1;
    Motion_Planning_B.loop_ub_b++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_xnrm2_pj(int32_T n, const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[1]);
    } else {
      scale = 3.3121686421112381E-170;
      absxk = fabs(x[1]);
      if (absxk > 3.3121686421112381E-170) {
        y = 1.0;
        scale = absxk;
      } else {
        t = absxk / 3.3121686421112381E-170;
        y = t * t;
      }

      absxk = fabs(x[2]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_xzlarfg_f(int32_T n, real_T *alpha1, real_T x[3])
{
  real_T tau;
  real_T xnorm;
  int32_T c_k;
  int32_T knt;
  tau = 0.0;
  if (n > 0) {
    xnorm = Motion_Planning_xnrm2_pj(n - 1, x);
    if (xnorm != 0.0) {
      xnorm = Motion_Planning_rt_hypotd_snf(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }

      if (fabs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          for (c_k = 1; c_k < n; c_k++) {
            x[c_k] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

        xnorm = Motion_Planning_rt_hypotd_snf(*alpha1, Motion_Planning_xnrm2_pj
          (n - 1, x));
        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }

        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        for (c_k = 1; c_k < n; c_k++) {
          x[c_k] *= *alpha1;
        }

        for (c_k = 0; c_k <= knt; c_k++) {
          xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        for (knt = 1; knt < n; knt++) {
          x[knt] *= *alpha1;
        }

        *alpha1 = xnorm;
      }
    }
  }

  return tau;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xdlanv2(real_T *a, real_T *b, real_T *c, real_T *d,
  real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T *sn)
{
  real_T bcmax;
  real_T bcmis;
  real_T p;
  real_T scale;
  real_T tau;
  real_T z;
  int32_T b_0;
  int32_T c_0;
  boolean_T tmp;
  if (*c == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
  } else if (*b == 0.0) {
    *cs = 0.0;
    *sn = 1.0;
    bcmax = *d;
    *d = *a;
    *a = bcmax;
    *b = -*c;
    *c = 0.0;
  } else {
    tau = *a - *d;
    if ((tau == 0.0) && ((*b < 0.0) != (*c < 0.0))) {
      *cs = 1.0;
      *sn = 0.0;
    } else {
      p = 0.5 * tau;
      bcmis = fabs(*b);
      z = fabs(*c);
      tmp = rtIsNaN(z);
      if ((bcmis > z) || tmp) {
        bcmax = bcmis;
      } else {
        bcmax = z;
      }

      if ((bcmis < z) || tmp) {
        z = bcmis;
      }

      if (!(*b < 0.0)) {
        b_0 = 1;
      } else {
        b_0 = -1;
      }

      if (!(*c < 0.0)) {
        c_0 = 1;
      } else {
        c_0 = -1;
      }

      bcmis = z * static_cast<real_T>(b_0) * static_cast<real_T>(c_0);
      scale = fabs(p);
      if ((!(scale > bcmax)) && (!rtIsNaN(bcmax))) {
        scale = bcmax;
      }

      z = p / scale * p + bcmax / scale * bcmis;
      if (z >= 8.8817841970012523E-16) {
        if (!(p < 0.0)) {
          tau = sqrt(scale) * sqrt(z);
        } else {
          tau = -(sqrt(scale) * sqrt(z));
        }

        z = p + tau;
        *a = *d + z;
        *d -= bcmax / z * bcmis;
        tau = Motion_Planning_rt_hypotd_snf(*c, z);
        *cs = z / tau;
        *sn = *c / tau;
        *b -= *c;
        *c = 0.0;
      } else {
        bcmax = *b + *c;
        tau = Motion_Planning_rt_hypotd_snf(bcmax, tau);
        *cs = sqrt((fabs(bcmax) / tau + 1.0) * 0.5);
        if (!(bcmax < 0.0)) {
          b_0 = 1;
        } else {
          b_0 = -1;
        }

        *sn = -(p / (tau * *cs)) * static_cast<real_T>(b_0);
        p = *a * *cs + *b * *sn;
        tau = -*a * *sn + *b * *cs;
        bcmax = *c * *cs + *d * *sn;
        bcmis = -*c * *sn + *d * *cs;
        *b = tau * *cs + bcmis * *sn;
        *c = -p * *sn + bcmax * *cs;
        bcmax = ((p * *cs + bcmax * *sn) + (-tau * *sn + bcmis * *cs)) * 0.5;
        *a = bcmax;
        *d = bcmax;
        if (*c != 0.0) {
          if (*b != 0.0) {
            if ((*b < 0.0) == (*c < 0.0)) {
              z = sqrt(fabs(*b));
              bcmis = sqrt(fabs(*c));
              if (!(*c < 0.0)) {
                p = z * bcmis;
              } else {
                p = -(z * bcmis);
              }

              tau = 1.0 / sqrt(fabs(*b + *c));
              *a = bcmax + p;
              *d = bcmax - p;
              *b -= *c;
              *c = 0.0;
              p = z * tau;
              tau *= bcmis;
              bcmax = *cs * p - *sn * tau;
              *sn = *cs * tau + *sn * p;
              *cs = bcmax;
            }
          } else {
            *b = -*c;
            *c = 0.0;
            bcmax = *cs;
            *cs = -*sn;
            *sn = bcmax;
          }
        }
      }
    }
  }

  *rt1r = *a;
  *rt2r = *d;
  if (*c == 0.0) {
    *rt1i = 0.0;
    *rt2i = 0.0;
  } else {
    *rt1i = sqrt(fabs(*b)) * sqrt(fabs(*c));
    *rt2i = -*rt1i;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xrot(int32_T n, real_T x_data[], int32_T ix0,
  int32_T incx, int32_T iy0, int32_T incy, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      temp = c * x_data[ix] + s * x_data[iy];
      x_data[iy] = c * x_data[iy] - s * x_data[ix];
      x_data[ix] = temp;
      iy += incx;
      ix += incy;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_xrot_p(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      temp = c * x_data[ix] + s * x_data[iy];
      x_data[iy] = c * x_data[iy] - s * x_data[ix];
      x_data[ix] = temp;
      iy++;
      ix++;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static int32_T Motion_Planning_eml_dlahqr(real_T h_data[], const int32_T h_size
  [2])
{
  real_T b_v[3];
  real_T v[3];
  real_T SMLNUM;
  real_T aa;
  real_T ba;
  real_T cs;
  real_T h12;
  real_T h21s;
  real_T htmp1;
  real_T htmp2;
  real_T s_tmp_0;
  real_T sn;
  real_T tst;
  int32_T L;
  int32_T b_j;
  int32_T d_j;
  int32_T hoffset;
  int32_T i;
  int32_T info;
  int32_T itmax;
  int32_T its;
  int32_T k;
  int32_T ldh;
  int32_T m;
  int32_T n;
  int32_T nr;
  int32_T s_tmp;
  int32_T sum1_tmp;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  boolean_T goto150;
  n = h_size[0];
  ldh = h_size[0];
  info = 0;
  if (1 != h_size[0]) {
    v[0] = 0.0;
    v[1] = 0.0;
    v[2] = 0.0;
    for (itmax = 0; itmax <= n - 4; itmax++) {
      hoffset = itmax + h_size[0] * itmax;
      h_data[hoffset + 2] = 0.0;
      h_data[hoffset + 3] = 0.0;
    }

    if (1 <= h_size[0] - 2) {
      h_data[(h_size[0] + h_size[0] * (h_size[0] - 3)) - 1] = 0.0;
    }

    if (10.0 > h_size[0]) {
      htmp2 = 10.0;
    } else {
      htmp2 = h_size[0];
    }

    itmax = 30 * static_cast<int32_T>(htmp2);
    SMLNUM = static_cast<real_T>(h_size[0]) / 2.2204460492503131E-16 *
      2.2250738585072014E-308;
    i = h_size[0] - 1;
    exitg1 = false;
    while ((!exitg1) && (i + 1 >= 1)) {
      L = 1;
      goto150 = false;
      its = 0;
      exitg2 = false;
      while ((!exitg2) && (its <= itmax)) {
        k = i;
        exitg3 = false;
        while ((!exitg3) && (k + 1 > L)) {
          hoffset = (k - 1) * h_size[0] + k;
          htmp2 = fabs(h_data[hoffset]);
          if (htmp2 <= SMLNUM) {
            exitg3 = true;
          } else {
            m = h_size[0] * k + k;
            tst = fabs(h_data[hoffset - 1]) + fabs(h_data[m]);
            if (tst == 0.0) {
              if (k - 1 >= 1) {
                tst = fabs(h_data[((k - 2) * h_size[0] + k) - 1]);
              }

              if (k + 2 <= n) {
                tst += fabs(h_data[(h_size[0] * k + k) + 1]);
              }
            }

            if (htmp2 <= 2.2204460492503131E-16 * tst) {
              htmp1 = fabs(h_data[hoffset]);
              htmp2 = fabs(h_data[m - 1]);
              if (htmp1 > htmp2) {
                tst = htmp1;
                ba = htmp2;
              } else {
                tst = htmp2;
                ba = htmp1;
              }

              htmp2 = h_data[m];
              htmp1 = fabs(htmp2);
              htmp2 = fabs(h_data[hoffset - 1] - htmp2);
              if (htmp1 > htmp2) {
                aa = htmp1;
                htmp1 = htmp2;
              } else {
                aa = htmp2;
              }

              htmp2 = aa + tst;
              htmp1 = aa / htmp2 * htmp1 * 2.2204460492503131E-16;
              if ((SMLNUM > htmp1) || rtIsNaN(htmp1)) {
                htmp1 = SMLNUM;
              }

              if (tst / htmp2 * ba <= htmp1) {
                exitg3 = true;
              } else {
                k--;
              }
            } else {
              k--;
            }
          }
        }

        L = k + 1;
        if (k + 1 > 1) {
          h_data[k + h_size[0] * (k - 1)] = 0.0;
        }

        if (k + 1 >= i) {
          goto150 = true;
          exitg2 = true;
        } else {
          switch (its) {
           case 10:
            s_tmp = h_size[0] * k + k;
            htmp2 = fabs(h_data[((k + 1) * h_size[0] + k) + 2]) + fabs
              (h_data[s_tmp + 1]);
            tst = h_data[s_tmp] + 0.75 * htmp2;
            h12 = -0.4375 * htmp2;
            aa = htmp2;
            htmp1 = tst;
            break;

           case 20:
            htmp2 = fabs(h_data[((i - 2) * h_size[0] + i) - 1]) + fabs(h_data[(i
              - 1) * h_size[0] + i]);
            tst = h_data[h_size[0] * i + i] + 0.75 * htmp2;
            h12 = -0.4375 * htmp2;
            aa = htmp2;
            htmp1 = tst;
            break;

           default:
            tst = h_data[((i - 1) * h_size[0] + i) - 1];
            aa = h_data[(i - 1) * h_size[0] + i];
            h12 = h_data[(h_size[0] * i + i) - 1];
            htmp1 = h_data[h_size[0] * i + i];
            break;
          }

          htmp2 = ((fabs(tst) + fabs(h12)) + fabs(aa)) + fabs(htmp1);
          if (htmp2 == 0.0) {
            tst = 0.0;
            htmp1 = 0.0;
            ba = 0.0;
            aa = 0.0;
          } else {
            tst /= htmp2;
            aa /= htmp2;
            h12 /= htmp2;
            htmp1 /= htmp2;
            ba = (tst + htmp1) / 2.0;
            tst = (tst - ba) * (htmp1 - ba) - h12 * aa;
            aa = sqrt(fabs(tst));
            if (tst >= 0.0) {
              tst = ba * htmp2;
              ba = tst;
              htmp1 = aa * htmp2;
              aa = -htmp1;
            } else {
              tst = ba + aa;
              ba -= aa;
              if (fabs(tst - htmp1) <= fabs(ba - htmp1)) {
                tst *= htmp2;
                ba = tst;
              } else {
                ba *= htmp2;
                tst = ba;
              }

              htmp1 = 0.0;
              aa = 0.0;
            }
          }

          m = i - 1;
          exitg3 = false;
          while ((!exitg3) && (m >= k + 1)) {
            s_tmp = (m - 1) * h_size[0] + m;
            h21s = h_data[s_tmp];
            h12 = h_data[s_tmp - 1];
            s_tmp_0 = h12 - ba;
            htmp2 = (fabs(s_tmp_0) + fabs(aa)) + fabs(h21s);
            h21s /= htmp2;
            s_tmp = h_size[0] * m + m;
            v[0] = (s_tmp_0 / htmp2 * (h12 - tst) + h_data[s_tmp - 1] * h21s) -
              aa / htmp2 * htmp1;
            s_tmp_0 = h_data[s_tmp];
            v[1] = (((h12 + s_tmp_0) - tst) - ba) * h21s;
            v[2] = h_data[s_tmp + 1] * h21s;
            htmp2 = (fabs(v[0]) + fabs(v[1])) + fabs(v[2]);
            v[0] /= htmp2;
            v[1] /= htmp2;
            v[2] /= htmp2;
            if (k + 1 == m) {
              exitg3 = true;
            } else {
              hoffset = (m - 2) * h_size[0] + m;
              if (fabs(h_data[hoffset - 1]) * (fabs(v[1]) + fabs(v[2])) <=
                  ((fabs(h_data[hoffset - 2]) + fabs(h12)) + fabs(s_tmp_0)) *
                  (2.2204460492503131E-16 * fabs(v[0]))) {
                exitg3 = true;
              } else {
                m--;
              }
            }
          }

          for (s_tmp = m; s_tmp <= i; s_tmp++) {
            nr = (i - s_tmp) + 2;
            if (3 < nr) {
              nr = 3;
            }

            if (s_tmp > m) {
              hoffset = (s_tmp - 2) * ldh + s_tmp;
              for (b_j = 0; b_j < nr; b_j++) {
                v[b_j] = h_data[(b_j + hoffset) - 1];
              }
            }

            tst = v[0];
            b_v[0] = v[0];
            b_v[1] = v[1];
            b_v[2] = v[2];
            htmp2 = Motion_Planning_xzlarfg_f(nr, &tst, b_v);
            v[1] = b_v[1];
            v[2] = b_v[2];
            v[0] = tst;
            if (s_tmp > m) {
              hoffset = s_tmp + h_size[0] * (s_tmp - 2);
              h_data[hoffset - 1] = tst;
              h_data[hoffset] = 0.0;
              if (s_tmp < i) {
                h_data[hoffset + 1] = 0.0;
              }
            } else {
              if (m > k + 1) {
                hoffset = ((s_tmp - 2) * h_size[0] + s_tmp) - 1;
                h_data[hoffset] *= 1.0 - htmp2;
              }
            }

            tst = b_v[1];
            ba = htmp2 * b_v[1];
            switch (nr) {
             case 3:
              aa = b_v[2];
              h12 = htmp2 * b_v[2];
              for (nr = s_tmp - 1; nr < n; nr++) {
                hoffset = h_size[0] * nr + s_tmp;
                htmp1 = (h_data[hoffset - 1] + h_data[hoffset] * tst) +
                  h_data[hoffset + 1] * aa;
                h_data[hoffset - 1] -= htmp1 * htmp2;
                h_data[hoffset] -= htmp1 * ba;
                h_data[hoffset + 1] -= htmp1 * h12;
              }

              if (s_tmp + 3 < i + 1) {
                b_j = s_tmp + 3;
              } else {
                b_j = i + 1;
              }

              for (d_j = 0; d_j < b_j; d_j++) {
                hoffset = (s_tmp - 1) * h_size[0] + d_j;
                nr = h_size[0] * s_tmp + d_j;
                sum1_tmp = (s_tmp + 1) * h_size[0] + d_j;
                htmp1 = (h_data[hoffset] + h_data[nr] * tst) + h_data[sum1_tmp] *
                  aa;
                h_data[hoffset] -= htmp1 * htmp2;
                h_data[nr] -= htmp1 * ba;
                h_data[sum1_tmp] -= htmp1 * h12;
              }
              break;

             case 2:
              for (nr = s_tmp - 1; nr < n; nr++) {
                hoffset = h_size[0] * nr + s_tmp;
                aa = h_data[hoffset - 1];
                htmp1 = aa + h_data[hoffset] * tst;
                h_data[hoffset - 1] = aa - htmp1 * htmp2;
                h_data[hoffset] -= htmp1 * ba;
              }

              for (b_j = 0; b_j <= i; b_j++) {
                hoffset = (s_tmp - 1) * h_size[0] + b_j;
                nr = h_size[0] * s_tmp + b_j;
                htmp1 = h_data[hoffset] + h_data[nr] * tst;
                h_data[hoffset] -= htmp1 * htmp2;
                h_data[nr] -= htmp1 * ba;
              }
              break;
            }
          }

          its++;
        }
      }

      if (!goto150) {
        info = i + 1;
        exitg1 = true;
      } else {
        if ((i + 1 != L) && (L == i)) {
          its = (i - 1) * h_size[0] + i;
          htmp2 = h_data[its - 1];
          k = h_size[0] * i + i;
          tst = h_data[k - 1];
          ba = h_data[its];
          htmp1 = h_data[k];
          Motion_Planning_xdlanv2(&htmp2, &tst, &ba, &htmp1, &aa, &h12, &s_tmp_0,
            &h21s, &cs, &sn);
          h_data[its - 1] = htmp2;
          h_data[k - 1] = tst;
          h_data[its] = ba;
          h_data[k] = htmp1;
          if (n > i + 1) {
            Motion_Planning_xrot((n - i) - 1, h_data, i + (i + 1) * ldh, ldh, (i
              + (i + 1) * ldh) + 1, ldh, cs, sn);
          }

          Motion_Planning_xrot_p(i - 1, h_data, (i - 1) * ldh + 1, i * ldh + 1,
            cs, sn);
        }

        i = L - 2;
      }
    }
  }

  return info;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static int32_T Motion_Planning_xhseqr(real_T h_data[], int32_T h_size[2])
{
  int32_T b_h_size[2];
  int32_T info;
  int32_T istart;
  int32_T jend;
  int32_T loop_ub;
  int32_T loop_ub_0;
  b_h_size[0] = h_size[0];
  b_h_size[1] = h_size[1];
  loop_ub = h_size[0] * h_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&Motion_Planning_B.b_h_data[0], &h_data[0], (loop_ub + 1) * sizeof
           (real_T));
  }

  info = Motion_Planning_eml_dlahqr(Motion_Planning_B.b_h_data, b_h_size);
  h_size[0] = b_h_size[0];
  h_size[1] = b_h_size[1];
  loop_ub = b_h_size[1];
  for (istart = 0; istart < loop_ub; istart++) {
    loop_ub_0 = b_h_size[0];
    for (jend = 0; jend < loop_ub_0; jend++) {
      h_data[jend + h_size[0] * istart] = Motion_Planning_B.b_h_data[b_h_size[0]
        * istart + jend];
    }
  }

  if (3 < b_h_size[0]) {
    istart = 4;
    if (b_h_size[0] - 4 < b_h_size[1] - 1) {
      jend = b_h_size[0] - 4;
    } else {
      jend = b_h_size[1] - 1;
    }

    for (loop_ub = 0; loop_ub <= jend; loop_ub++) {
      for (loop_ub_0 = istart; loop_ub_0 <= b_h_size[0]; loop_ub_0++) {
        h_data[(loop_ub_0 + h_size[0] * loop_ub) - 1] = 0.0;
      }

      istart++;
    }
  }

  return info;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_schur(real_T A_data[], const int32_T A_size[2],
  real_T V_data[], int32_T V_size[2])
{
  if (Motion_Planning_anyNonFinite(A_data, A_size)) {
    Motion_Planning_B.b_idx_0_d = static_cast<int8_T>(A_size[0]);
    V_size[0] = static_cast<int8_T>(A_size[0]);
    V_size[1] = static_cast<int8_T>(A_size[1]);
    Motion_Planning_B.jend = static_cast<int8_T>(A_size[0]) * static_cast<int8_T>
      (A_size[1]) - 1;
    for (Motion_Planning_B.istart = 0; Motion_Planning_B.istart <=
         Motion_Planning_B.jend; Motion_Planning_B.istart++) {
      V_data[Motion_Planning_B.istart] = (rtNaN);
    }

    if (1 < static_cast<int8_T>(A_size[0])) {
      Motion_Planning_B.istart = 2;
      if (static_cast<int8_T>(A_size[0]) - 2 < static_cast<int8_T>(A_size[1]) -
          1) {
        Motion_Planning_B.jend = static_cast<int8_T>(A_size[0]) - 2;
      } else {
        Motion_Planning_B.jend = static_cast<int8_T>(A_size[1]) - 1;
      }

      Motion_Planning_B.j_fx = 0;
      while (Motion_Planning_B.j_fx <= Motion_Planning_B.jend) {
        Motion_Planning_B.i_i4 = Motion_Planning_B.istart;
        while (Motion_Planning_B.i_i4 <= Motion_Planning_B.b_idx_0_d) {
          V_data[(Motion_Planning_B.i_i4 + Motion_Planning_B.b_idx_0_d *
                  Motion_Planning_B.j_fx) - 1] = 0.0;
          Motion_Planning_B.i_i4++;
        }

        Motion_Planning_B.istart++;
        Motion_Planning_B.j_fx++;
      }
    }
  } else {
    Motion_Planning_xgehrd(A_data, A_size);
    V_size[0] = A_size[0];
    V_size[1] = A_size[1];
    Motion_Planning_B.jend = A_size[0] * A_size[1] - 1;
    if (0 <= Motion_Planning_B.jend) {
      memcpy(&V_data[0], &A_data[0], (Motion_Planning_B.jend + 1) * sizeof
             (real_T));
    }

    Motion_Planning_xhseqr(V_data, V_size);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Pla_eigHermitianStandard(const real_T A_data[], const int32_T
  A_size[2], real_T V_data[], int32_T *V_size)
{
  Motion_Planning_B.A_size_f[0] = A_size[0];
  Motion_Planning_B.A_size_f[1] = A_size[1];
  Motion_Planning_B.loop_ub_nq = A_size[0] * A_size[1];
  if (0 <= Motion_Planning_B.loop_ub_nq - 1) {
    memcpy(&Motion_Planning_B.A_data[0], &A_data[0],
           Motion_Planning_B.loop_ub_nq * sizeof(real_T));
  }

  Motion_Planning_schur(Motion_Planning_B.A_data, Motion_Planning_B.A_size_f,
                        Motion_Planning_B.T_data, Motion_Planning_B.T_size);
  *V_size = Motion_Planning_B.T_size[0];
  Motion_Planning_B.loop_ub_nq = 0;
  while (Motion_Planning_B.loop_ub_nq <= Motion_Planning_B.T_size[0] - 1) {
    V_data[Motion_Planning_B.loop_ub_nq] =
      Motion_Planning_B.T_data[Motion_Planning_B.T_size[0] *
      Motion_Planning_B.loop_ub_nq + Motion_Planning_B.loop_ub_nq];
    Motion_Planning_B.loop_ub_nq++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_eig(const real_T A_data[], const int32_T A_size[2],
  creal_T V_data[], int32_T *V_size)
{
  int32_T exitg1;
  boolean_T exitg2;
  if (Motion_Planning_anyNonFinite(A_data, A_size)) {
    Motion_Planning_B.i_i = A_size[0];
    *V_size = A_size[0];
    for (Motion_Planning_B.j_a = 0; Motion_Planning_B.j_a <
         Motion_Planning_B.i_i; Motion_Planning_B.j_a++) {
      V_data[Motion_Planning_B.j_a].re = (rtNaN);
      V_data[Motion_Planning_B.j_a].im = 0.0;
    }
  } else {
    Motion_Planning_B.b_p = (A_size[0] == A_size[1]);
    if (Motion_Planning_B.b_p) {
      Motion_Planning_B.j_a = 0;
      exitg2 = false;
      while ((!exitg2) && (Motion_Planning_B.j_a <= A_size[1] - 1)) {
        Motion_Planning_B.i_i = 0;
        do {
          exitg1 = 0;
          if (Motion_Planning_B.i_i <= Motion_Planning_B.j_a) {
            if (!(A_data[A_size[0] * Motion_Planning_B.j_a +
                  Motion_Planning_B.i_i] == A_data[A_size[0] *
                  Motion_Planning_B.i_i + Motion_Planning_B.j_a])) {
              Motion_Planning_B.b_p = false;
              exitg1 = 1;
            } else {
              Motion_Planning_B.i_i++;
            }
          } else {
            Motion_Planning_B.j_a++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }

    if (Motion_Planning_B.b_p) {
      Motion_Pla_eigHermitianStandard(A_data, A_size,
        Motion_Planning_B.c_data_pt, &Motion_Planning_B.beta1_size);
      *V_size = Motion_Planning_B.beta1_size;
      Motion_Planning_B.i_i = Motion_Planning_B.beta1_size;
      for (Motion_Planning_B.j_a = 0; Motion_Planning_B.j_a <
           Motion_Planning_B.i_i; Motion_Planning_B.j_a++) {
        V_data[Motion_Planning_B.j_a].re =
          Motion_Planning_B.c_data_pt[Motion_Planning_B.j_a];
        V_data[Motion_Planning_B.j_a].im = 0.0;
      }
    } else {
      Motion_Planning_xzgeev(A_data, A_size, &Motion_Planning_B.j_a, V_data,
        V_size, Motion_Planning_B.beta1_data, &Motion_Planning_B.beta1_size);
      Motion_Planning_B.i_i = *V_size;
      for (Motion_Planning_B.j_a = 0; Motion_Planning_B.j_a <
           Motion_Planning_B.i_i; Motion_Planning_B.j_a++) {
        Motion_Planning_B.V_data = V_data[Motion_Planning_B.j_a];
        Motion_Planning_B.V_data_re = Motion_Planning_B.V_data.re;
        Motion_Planning_B.br_l =
          Motion_Planning_B.beta1_data[Motion_Planning_B.j_a].re;
        Motion_Planning_B.bi_k =
          Motion_Planning_B.beta1_data[Motion_Planning_B.j_a].im;
        if (Motion_Planning_B.bi_k == 0.0) {
          if (Motion_Planning_B.V_data.im == 0.0) {
            Motion_Planning_B.V_data.re /= Motion_Planning_B.br_l;
            Motion_Planning_B.V_data.im = 0.0;
          } else if (Motion_Planning_B.V_data.re == 0.0) {
            Motion_Planning_B.V_data.re = 0.0;
            Motion_Planning_B.V_data.im /= Motion_Planning_B.br_l;
          } else {
            Motion_Planning_B.V_data.re /= Motion_Planning_B.br_l;
            Motion_Planning_B.V_data.im /= Motion_Planning_B.br_l;
          }
        } else if (Motion_Planning_B.br_l == 0.0) {
          if (Motion_Planning_B.V_data.re == 0.0) {
            Motion_Planning_B.V_data.re = Motion_Planning_B.V_data.im /
              Motion_Planning_B.bi_k;
            Motion_Planning_B.V_data.im = 0.0;
          } else if (Motion_Planning_B.V_data.im == 0.0) {
            Motion_Planning_B.V_data.re = 0.0;
            Motion_Planning_B.V_data.im = -(Motion_Planning_B.V_data_re /
              Motion_Planning_B.bi_k);
          } else {
            Motion_Planning_B.V_data.re = Motion_Planning_B.V_data.im /
              Motion_Planning_B.bi_k;
            Motion_Planning_B.V_data.im = -(Motion_Planning_B.V_data_re /
              Motion_Planning_B.bi_k);
          }
        } else {
          Motion_Planning_B.brm_j = fabs(Motion_Planning_B.br_l);
          Motion_Planning_B.bim_f = fabs(Motion_Planning_B.bi_k);
          if (Motion_Planning_B.brm_j > Motion_Planning_B.bim_f) {
            Motion_Planning_B.brm_j = Motion_Planning_B.bi_k /
              Motion_Planning_B.br_l;
            Motion_Planning_B.bi_k = Motion_Planning_B.brm_j *
              Motion_Planning_B.bi_k + Motion_Planning_B.br_l;
            Motion_Planning_B.V_data.re = (Motion_Planning_B.brm_j *
              Motion_Planning_B.V_data.im + Motion_Planning_B.V_data.re) /
              Motion_Planning_B.bi_k;
            Motion_Planning_B.V_data.im = (Motion_Planning_B.V_data.im -
              Motion_Planning_B.brm_j * Motion_Planning_B.V_data_re) /
              Motion_Planning_B.bi_k;
          } else if (Motion_Planning_B.bim_f == Motion_Planning_B.brm_j) {
            Motion_Planning_B.br_l = Motion_Planning_B.br_l > 0.0 ? 0.5 : -0.5;
            Motion_Planning_B.bi_k = Motion_Planning_B.bi_k > 0.0 ? 0.5 : -0.5;
            Motion_Planning_B.V_data.re = (Motion_Planning_B.V_data.re *
              Motion_Planning_B.br_l + Motion_Planning_B.V_data.im *
              Motion_Planning_B.bi_k) / Motion_Planning_B.brm_j;
            Motion_Planning_B.V_data.im = (Motion_Planning_B.V_data.im *
              Motion_Planning_B.br_l - Motion_Planning_B.V_data_re *
              Motion_Planning_B.bi_k) / Motion_Planning_B.brm_j;
          } else {
            Motion_Planning_B.brm_j = Motion_Planning_B.br_l /
              Motion_Planning_B.bi_k;
            Motion_Planning_B.bi_k += Motion_Planning_B.brm_j *
              Motion_Planning_B.br_l;
            Motion_Planning_B.V_data.re = (Motion_Planning_B.brm_j *
              Motion_Planning_B.V_data.re + Motion_Planning_B.V_data.im) /
              Motion_Planning_B.bi_k;
            Motion_Planning_B.V_data.im = (Motion_Planning_B.brm_j *
              Motion_Planning_B.V_data.im - Motion_Planning_B.V_data_re) /
              Motion_Planning_B.bi_k;
          }
        }

        V_data[Motion_Planning_B.j_a] = Motion_Planning_B.V_data;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_tridisolve(const real_T a_data[], real_T b_data[],
  const real_T c_data[], const real_T d_data[], const int32_T *d_size, real_T
  x_data[], int32_T *x_size)
{
  *x_size = *d_size;
  Motion_Planning_B.loop_ub_hj = *d_size;
  if (0 <= Motion_Planning_B.loop_ub_hj - 1) {
    memcpy(&x_data[0], &d_data[0], Motion_Planning_B.loop_ub_hj * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_hj = 0;
  while (Motion_Planning_B.loop_ub_hj <= *d_size - 2) {
    Motion_Planning_B.mu = a_data[Motion_Planning_B.loop_ub_hj] /
      b_data[Motion_Planning_B.loop_ub_hj];
    b_data[Motion_Planning_B.loop_ub_hj + 1] -= Motion_Planning_B.mu *
      c_data[Motion_Planning_B.loop_ub_hj];
    x_data[Motion_Planning_B.loop_ub_hj + 1] -= Motion_Planning_B.mu *
      x_data[Motion_Planning_B.loop_ub_hj];
    Motion_Planning_B.loop_ub_hj++;
  }

  x_data[*d_size - 1] /= b_data[*d_size - 1];
  Motion_Planning_B.loop_ub_hj = static_cast<int32_T>(((-1.0 -
    (static_cast<real_T>(*d_size) - 1.0)) + 1.0) / -1.0);
  Motion_Planning_B.c_j = 0;
  while (Motion_Planning_B.c_j <= Motion_Planning_B.loop_ub_hj - 1) {
    Motion_Planning_B.j_b = (*d_size - Motion_Planning_B.c_j) - 2;
    x_data[Motion_Planning_B.j_b] = (x_data[Motion_Planning_B.j_b] -
      x_data[Motion_Planning_B.j_b + 1] * c_data[Motion_Planning_B.j_b]) /
      b_data[Motion_Planning_B.j_b];
    Motion_Planning_B.c_j++;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_cyctridisolve(const real_T a_data[], real_T b_data[],
  const int32_T *b_size, const real_T c_data[], const real_T d_data[], const
  int32_T *d_size, real_T x_data[], int32_T *x_size)
{
  Motion_Planning_B.b_gamma = -b_data[0];
  b_data[0] -= -b_data[0];
  Motion_Planning_B.d3 = c_data[*d_size - 1];
  Motion_Planning_B.d4 = a_data[*d_size - 1];
  b_data[*d_size - 1] -= Motion_Planning_B.d4 * Motion_Planning_B.d3 /
    Motion_Planning_B.b_gamma;
  Motion_Planning_B.loop_ub_i = *b_size;
  if (0 <= Motion_Planning_B.loop_ub_i - 1) {
    memcpy(&Motion_Planning_B.b_data_m[0], &b_data[0],
           Motion_Planning_B.loop_ub_i * sizeof(real_T));
  }

  Motion_Planning_tridisolve(a_data, Motion_Planning_B.b_data_m, c_data, d_data,
    d_size, x_data, x_size);
  Motion_Planning_B.u_size = *d_size;
  Motion_Planning_B.loop_ub_i = *d_size;
  if (0 <= Motion_Planning_B.loop_ub_i - 1) {
    memset(&Motion_Planning_B.u_data_m[0], 0, Motion_Planning_B.loop_ub_i *
           sizeof(real_T));
  }

  Motion_Planning_B.u_data_m[0] = Motion_Planning_B.b_gamma;
  Motion_Planning_B.u_data_m[*d_size - 1] = Motion_Planning_B.d3;
  if (2 > *d_size - 1) {
    Motion_Planning_B.f_h = -1;
    Motion_Planning_B.loop_ub_i = 1;
  } else {
    Motion_Planning_B.f_h = 0;
    Motion_Planning_B.loop_ub_i = *d_size;
  }

  Motion_Planning_B.loop_ub_i = (Motion_Planning_B.loop_ub_i -
    Motion_Planning_B.f_h) - 2;
  if (0 <= Motion_Planning_B.loop_ub_i - 1) {
    memset(&Motion_Planning_B.u_data_m[Motion_Planning_B.f_h + 1], 0,
           ((Motion_Planning_B.loop_ub_i + Motion_Planning_B.f_h) -
            Motion_Planning_B.f_h) * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_i = *b_size;
  if (0 <= Motion_Planning_B.loop_ub_i - 1) {
    memcpy(&Motion_Planning_B.b_data_m[0], &b_data[0],
           Motion_Planning_B.loop_ub_i * sizeof(real_T));
  }

  Motion_Planning_tridisolve(a_data, Motion_Planning_B.b_data_m, c_data,
    Motion_Planning_B.u_data_m, &Motion_Planning_B.u_size,
    Motion_Planning_B.z_data_c, &Motion_Planning_B.z_size_d);
  Motion_Planning_B.b_gamma = (Motion_Planning_B.d4 * x_data[*d_size - 1] /
    Motion_Planning_B.b_gamma + x_data[0]) / (Motion_Planning_B.d4 *
    Motion_Planning_B.z_data_c[*d_size - 1] / Motion_Planning_B.b_gamma +
    (Motion_Planning_B.z_data_c[0] + 1.0));
  Motion_Planning_B.loop_ub_i = *x_size;
  for (Motion_Planning_B.f_h = 0; Motion_Planning_B.f_h <
       Motion_Planning_B.loop_ub_i; Motion_Planning_B.f_h++) {
    x_data[Motion_Planning_B.f_h] -= Motion_Planning_B.b_gamma *
      Motion_Planning_B.z_data_c[Motion_Planning_B.f_h];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_solveHessian(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T v_data[], const int32_T *v_size, real_T dx_data[],
  int32_T *dx_size)
{
  boolean_T guard1 = false;
  guard1 = false;
  if (Jtri_data[Jtri_size[0] - 1] == 0.0) {
    Motion_Planning_B.i8 = Jtri_size[0] << 1;
    if (Jtri_data[(Motion_Planning_B.i8 + Jtri_size[0]) - 1] == 0.0) {
      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      for (Motion_Planning_B.i7 = 0; Motion_Planning_B.i7 <
           Motion_Planning_B.loop_ub_d; Motion_Planning_B.i7++) {
        Motion_Planning_B.Jtri_data_i[Motion_Planning_B.i7] =
          Jtri_data[Motion_Planning_B.i8 + Motion_Planning_B.i7];
      }

      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      for (Motion_Planning_B.i7 = 0; Motion_Planning_B.i7 <
           Motion_Planning_B.loop_ub_d; Motion_Planning_B.i7++) {
        Motion_Planning_B.Jtri_data_o[Motion_Planning_B.i7] =
          Jtri_data[Motion_Planning_B.i7 + Jtri_size[0]];
      }

      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      if (0 <= Motion_Planning_B.loop_ub_d - 1) {
        memcpy(&Motion_Planning_B.Jtri_data_n[0], &Jtri_data[0],
               Motion_Planning_B.loop_ub_d * sizeof(real_T));
      }

      Motion_Planning_tridisolve(Motion_Planning_B.Jtri_data_i,
        Motion_Planning_B.Jtri_data_o, Motion_Planning_B.Jtri_data_n, v_data,
        v_size, Motion_Planning_B.tmp_data_n, &Motion_Planning_B.tmp_size_n);
      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      if (0 <= Motion_Planning_B.loop_ub_d - 1) {
        memcpy(&Motion_Planning_B.Jtri_data_i[0], &Jtri_data[0],
               Motion_Planning_B.loop_ub_d * sizeof(real_T));
      }

      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      for (Motion_Planning_B.i7 = 0; Motion_Planning_B.i7 <
           Motion_Planning_B.loop_ub_d; Motion_Planning_B.i7++) {
        Motion_Planning_B.Jtri_data_o[Motion_Planning_B.i7] =
          Jtri_data[Motion_Planning_B.i7 + Jtri_size[0]];
      }

      Motion_Planning_B.loop_ub_d = Jtri_size[0];
      for (Motion_Planning_B.i7 = 0; Motion_Planning_B.i7 <
           Motion_Planning_B.loop_ub_d; Motion_Planning_B.i7++) {
        Motion_Planning_B.Jtri_data_n[Motion_Planning_B.i7] =
          Jtri_data[Motion_Planning_B.i8 + Motion_Planning_B.i7];
      }

      Motion_Planning_tridisolve(Motion_Planning_B.Jtri_data_i,
        Motion_Planning_B.Jtri_data_o, Motion_Planning_B.Jtri_data_n,
        Motion_Planning_B.tmp_data_n, &Motion_Planning_B.tmp_size_n, dx_data,
        dx_size);
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    for (Motion_Planning_B.i8 = 0; Motion_Planning_B.i8 <
         Motion_Planning_B.loop_ub_d; Motion_Planning_B.i8++) {
      Motion_Planning_B.Jtri_data_i[Motion_Planning_B.i8] = Jtri_data
        [(Jtri_size[0] << 1) + Motion_Planning_B.i8];
    }

    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    Motion_Planning_B.Jtri_size_j = Jtri_size[0];
    for (Motion_Planning_B.i8 = 0; Motion_Planning_B.i8 <
         Motion_Planning_B.loop_ub_d; Motion_Planning_B.i8++) {
      Motion_Planning_B.Jtri_data_o[Motion_Planning_B.i8] =
        Jtri_data[Motion_Planning_B.i8 + Jtri_size[0]];
    }

    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    if (0 <= Motion_Planning_B.loop_ub_d - 1) {
      memcpy(&Motion_Planning_B.Jtri_data_n[0], &Jtri_data[0],
             Motion_Planning_B.loop_ub_d * sizeof(real_T));
    }

    Motion_Planning_cyctridisolve(Motion_Planning_B.Jtri_data_i,
      Motion_Planning_B.Jtri_data_o, &Motion_Planning_B.Jtri_size_j,
      Motion_Planning_B.Jtri_data_n, v_data, v_size,
      Motion_Planning_B.tmp_data_n, &Motion_Planning_B.tmp_size_n);
    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    if (0 <= Motion_Planning_B.loop_ub_d - 1) {
      memcpy(&Motion_Planning_B.Jtri_data_i[0], &Jtri_data[0],
             Motion_Planning_B.loop_ub_d * sizeof(real_T));
    }

    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    Motion_Planning_B.Jtri_size_a3 = Jtri_size[0];
    for (Motion_Planning_B.i8 = 0; Motion_Planning_B.i8 <
         Motion_Planning_B.loop_ub_d; Motion_Planning_B.i8++) {
      Motion_Planning_B.Jtri_data_o[Motion_Planning_B.i8] =
        Jtri_data[Motion_Planning_B.i8 + Jtri_size[0]];
    }

    Motion_Planning_B.loop_ub_d = Jtri_size[0];
    for (Motion_Planning_B.i8 = 0; Motion_Planning_B.i8 <
         Motion_Planning_B.loop_ub_d; Motion_Planning_B.i8++) {
      Motion_Planning_B.Jtri_data_n[Motion_Planning_B.i8] = Jtri_data
        [(Jtri_size[0] << 1) + Motion_Planning_B.i8];
    }

    Motion_Planning_cyctridisolve(Motion_Planning_B.Jtri_data_i,
      Motion_Planning_B.Jtri_data_o, &Motion_Planning_B.Jtri_size_a3,
      Motion_Planning_B.Jtri_data_n, Motion_Planning_B.tmp_data_n,
      &Motion_Planning_B.tmp_size_n, dx_data, dx_size);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_leastEigvJtJ(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T n)
{
  real_T lev;
  boolean_T exitg1;
  Motion_Planning_B.bet = 0.0;
  Motion_Planning_B.loop_ub_j = Jtri_size[0];
  if (0 <= Motion_Planning_B.loop_ub_j - 1) {
    memset(&Motion_Planning_B.oldq_data[0], 0, Motion_Planning_B.loop_ub_j *
           sizeof(real_T));
  }

  Motion_Planning_B.b_size_g = Jtri_size[0];
  Motion_Planning_B.loop_ub_j = Jtri_size[0];
  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
    Motion_Planning_B.b_data_o[Motion_Planning_B.idx] = 1.0;
  }

  Motion_Planning_B.q = Motion_Planning_norm(Motion_Planning_B.b_data_o,
    &Motion_Planning_B.b_size_g);
  Motion_Planning_B.q_size = Jtri_size[0];
  Motion_Planning_B.loop_ub_j = Jtri_size[0];
  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
    Motion_Planning_B.q_data[Motion_Planning_B.idx] = 1.0 / Motion_Planning_B.q;
  }

  Motion_Planning_B.alpha_size_idx_0 = static_cast<int32_T>(n);
  Motion_Planning_B.i_hn = 0;
  while (Motion_Planning_B.i_hn <= static_cast<int32_T>(n) - 1) {
    Motion_Planning_solveHessian(Jtri_data, Jtri_size, Motion_Planning_B.q_data,
      &Motion_Planning_B.q_size, Motion_Planning_B.b_data_o,
      &Motion_Planning_B.b_size_g);
    Motion_Planning_B.q = 0.0;
    Motion_Planning_B.loop_ub_j = Motion_Planning_B.q_size;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.q += Motion_Planning_B.q_data[Motion_Planning_B.idx] *
        Motion_Planning_B.b_data_o[Motion_Planning_B.idx];
    }

    Motion_Planning_B.alpha_data_l[Motion_Planning_B.i_hn] = Motion_Planning_B.q;
    Motion_Planning_B.q = Motion_Planning_B.alpha_data_l[Motion_Planning_B.i_hn];
    Motion_Planning_B.loop_ub_j = Motion_Planning_B.b_size_g;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.b_data_o[Motion_Planning_B.idx] =
        (Motion_Planning_B.b_data_o[Motion_Planning_B.idx] -
         Motion_Planning_B.bet *
         Motion_Planning_B.oldq_data[Motion_Planning_B.idx]) -
        Motion_Planning_B.q * Motion_Planning_B.q_data[Motion_Planning_B.idx];
    }

    Motion_Planning_B.bet = Motion_Planning_norm(Motion_Planning_B.b_data_o,
      &Motion_Planning_B.b_size_g);
    Motion_Planning_B.loop_ub_j = Motion_Planning_B.q_size;
    if (0 <= Motion_Planning_B.loop_ub_j - 1) {
      memcpy(&Motion_Planning_B.oldq_data[0], &Motion_Planning_B.q_data[0],
             Motion_Planning_B.loop_ub_j * sizeof(real_T));
    }

    Motion_Planning_B.q_size = Motion_Planning_B.b_size_g;
    Motion_Planning_B.loop_ub_j = Motion_Planning_B.b_size_g;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.q_data[Motion_Planning_B.idx] =
        Motion_Planning_B.b_data_o[Motion_Planning_B.idx] /
        Motion_Planning_B.bet;
    }

    Motion_Planning_B.beta_data_p[Motion_Planning_B.i_hn] =
      Motion_Planning_B.bet;
    Motion_Planning_B.i_hn++;
  }

  if (rtIsNaN(n - 1.0)) {
    Motion_Planning_B.i_hn = 1;
    Motion_Planning_B.y_data_o[0] = (rtNaN);
  } else if (n - 1.0 < 1.0) {
    Motion_Planning_B.i_hn = 0;
  } else if (rtIsInf(n - 1.0)) {
    if (n - 1.0 == 1.0) {
      Motion_Planning_B.i_hn = 1;
      Motion_Planning_B.y_data_o[0] = (rtNaN);
    } else {
      Motion_Planning_B.i_hn = static_cast<int32_T>(floor((n - 1.0) - 1.0)) + 1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.y_data_o[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 1.0;
      }
    }
  } else {
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
    Motion_Planning_B.i_hn = Motion_Planning_B.loop_ub_j + 1;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.y_data_o[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 1.0;
    }
  }

  if (rtIsNaN(n)) {
    Motion_Planning_B.b_y_size_idx_1 = 1;
    Motion_Planning_B.b_y_data[0] = (rtNaN);
  } else if (n < 1.0) {
    Motion_Planning_B.b_y_size_idx_1 = 0;
  } else if (rtIsInf(n)) {
    if (1.0 == n) {
      Motion_Planning_B.b_y_size_idx_1 = 1;
      Motion_Planning_B.b_y_data[0] = (rtNaN);
    } else {
      Motion_Planning_B.b_y_size_idx_1 = static_cast<int32_T>(floor(n - 1.0)) +
        1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 1.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.b_y_data[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 1.0;
      }
    }
  } else {
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 1.0));
    Motion_Planning_B.b_y_size_idx_1 = Motion_Planning_B.loop_ub_j + 1;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.b_y_data[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 1.0;
    }
  }

  if (rtIsNaN(n)) {
    Motion_Planning_B.c_y_size_idx_1 = 1;
    Motion_Planning_B.c_y_data[0] = (rtNaN);
  } else if (n < 2.0) {
    Motion_Planning_B.c_y_size_idx_1 = 0;
  } else if (rtIsInf(n)) {
    if (2.0 == n) {
      Motion_Planning_B.c_y_size_idx_1 = 1;
      Motion_Planning_B.c_y_data[0] = (rtNaN);
    } else {
      Motion_Planning_B.c_y_size_idx_1 = static_cast<int32_T>(floor(n - 2.0)) +
        1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 2.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.c_y_data[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 2.0;
      }
    }
  } else {
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 2.0));
    Motion_Planning_B.c_y_size_idx_1 = Motion_Planning_B.loop_ub_j + 1;
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.c_y_data[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 2.0;
    }
  }

  if (rtIsNaN(n)) {
    Motion_Planning_B.d_y_size_idx_1_j = 1;
    Motion_Planning_B.d_y_data[0] = (rtNaN);
  } else if (n < 2.0) {
    Motion_Planning_B.d_y_size_idx_1_j = 0;
  } else if (rtIsInf(n)) {
    if (2.0 == n) {
      Motion_Planning_B.d_y_size_idx_1_j = 1;
      Motion_Planning_B.d_y_data[0] = (rtNaN);
    } else {
      Motion_Planning_B.d_y_size_idx_1_j = static_cast<int32_T>(floor(n - 2.0))
        + 1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 2.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.d_y_data[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 2.0;
      }
    }
  } else {
    Motion_Planning_B.d_y_size_idx_1_j = static_cast<int32_T>(floor(n - 2.0)) +
      1;
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 2.0));
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.d_y_data[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 2.0;
    }
  }

  if (rtIsNaN(n)) {
    Motion_Planning_B.e_y_size_idx_1_l = 1;
    Motion_Planning_B.e_y_data[0] = (rtNaN);
  } else if (n < 1.0) {
    Motion_Planning_B.e_y_size_idx_1_l = 0;
  } else if (rtIsInf(n)) {
    if (1.0 == n) {
      Motion_Planning_B.e_y_size_idx_1_l = 1;
      Motion_Planning_B.e_y_data[0] = (rtNaN);
    } else {
      Motion_Planning_B.e_y_size_idx_1_l = static_cast<int32_T>(floor(n - 1.0))
        + 1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 1.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.e_y_data[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 1.0;
      }
    }
  } else {
    Motion_Planning_B.e_y_size_idx_1_l = static_cast<int32_T>(floor(n - 1.0)) +
      1;
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor(n - 1.0));
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.e_y_data[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 1.0;
    }
  }

  if (rtIsNaN(n - 1.0)) {
    Motion_Planning_B.f_y_size_idx_1_k = 1;
    Motion_Planning_B.f_y_data[0] = (rtNaN);
  } else if (n - 1.0 < 1.0) {
    Motion_Planning_B.f_y_size_idx_1_k = 0;
  } else if (rtIsInf(n - 1.0)) {
    if (n - 1.0 == 1.0) {
      Motion_Planning_B.f_y_size_idx_1_k = 1;
      Motion_Planning_B.f_y_data[0] = (rtNaN);
    } else {
      Motion_Planning_B.f_y_size_idx_1_k = static_cast<int32_T>(floor((n - 1.0)
        - 1.0)) + 1;
      Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
      for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
           Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
        Motion_Planning_B.f_y_data[Motion_Planning_B.idx] = static_cast<real_T>
          (Motion_Planning_B.idx) + 1.0;
      }
    }
  } else {
    Motion_Planning_B.f_y_size_idx_1_k = static_cast<int32_T>(floor((n - 1.0) -
      1.0)) + 1;
    Motion_Planning_B.loop_ub_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
    for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <=
         Motion_Planning_B.loop_ub_j; Motion_Planning_B.idx++) {
      Motion_Planning_B.f_y_data[Motion_Planning_B.idx] = static_cast<real_T>
        (Motion_Planning_B.idx) + 1.0;
    }
  }

  Motion_Planning_B.y_size_a[0] = (Motion_Planning_B.i_hn +
    Motion_Planning_B.b_y_size_idx_1) + Motion_Planning_B.c_y_size_idx_1;
  Motion_Planning_B.y_size_a[1] = 2;
  if (0 <= Motion_Planning_B.i_hn - 1) {
    memcpy(&Motion_Planning_B.y_data[0], &Motion_Planning_B.y_data_o[0],
           Motion_Planning_B.i_hn * sizeof(real_T));
  }

  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.b_y_size_idx_1; Motion_Planning_B.idx++) {
    Motion_Planning_B.y_data[Motion_Planning_B.idx + Motion_Planning_B.i_hn] =
      Motion_Planning_B.b_y_data[Motion_Planning_B.idx];
  }

  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.c_y_size_idx_1; Motion_Planning_B.idx++) {
    Motion_Planning_B.y_data[(Motion_Planning_B.idx + Motion_Planning_B.i_hn) +
      Motion_Planning_B.b_y_size_idx_1] =
      Motion_Planning_B.c_y_data[Motion_Planning_B.idx];
  }

  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.d_y_size_idx_1_j; Motion_Planning_B.idx++) {
    Motion_Planning_B.y_data[Motion_Planning_B.idx + Motion_Planning_B.y_size_a
      [0]] = Motion_Planning_B.d_y_data[Motion_Planning_B.idx];
  }

  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.e_y_size_idx_1_l; Motion_Planning_B.idx++) {
    Motion_Planning_B.y_data[(Motion_Planning_B.idx +
      Motion_Planning_B.d_y_size_idx_1_j) + Motion_Planning_B.y_size_a[0]] =
      Motion_Planning_B.e_y_data[Motion_Planning_B.idx];
  }

  for (Motion_Planning_B.idx = 0; Motion_Planning_B.idx <
       Motion_Planning_B.f_y_size_idx_1_k; Motion_Planning_B.idx++) {
    Motion_Planning_B.y_data[((Motion_Planning_B.idx +
      Motion_Planning_B.d_y_size_idx_1_j) + Motion_Planning_B.e_y_size_idx_1_l)
      + Motion_Planning_B.y_size_a[0]] =
      Motion_Planning_B.f_y_data[Motion_Planning_B.idx];
  }

  if (1.0 > n - 1.0) {
    Motion_Planning_B.idx = -1;
    Motion_Planning_B.i_hn = -1;
    Motion_Planning_B.b_y_size_idx_1 = -1;
  } else {
    Motion_Planning_B.idx = static_cast<int32_T>(n - 1.0) - 1;
    Motion_Planning_B.i_hn = static_cast<int32_T>(n - 1.0) - 1;
    Motion_Planning_B.b_y_size_idx_1 = static_cast<int32_T>(n - 1.0) - 1;
  }

  Motion_Planning_B.loop_ub_j = Motion_Planning_B.i_hn + 1;
  Motion_Planning_B.beta_size = ((Motion_Planning_B.idx + static_cast<int32_T>(n))
    + Motion_Planning_B.b_y_size_idx_1) + 2;
  if (0 <= Motion_Planning_B.loop_ub_j - 1) {
    memcpy(&Motion_Planning_B.beta_data[0], &Motion_Planning_B.beta_data_p[0],
           Motion_Planning_B.loop_ub_j * sizeof(real_T));
  }

  for (Motion_Planning_B.i_hn = 0; Motion_Planning_B.i_hn <
       Motion_Planning_B.alpha_size_idx_0; Motion_Planning_B.i_hn++) {
    Motion_Planning_B.beta_data[(Motion_Planning_B.i_hn + Motion_Planning_B.idx)
      + 1] = Motion_Planning_B.alpha_data_l[Motion_Planning_B.i_hn];
  }

  for (Motion_Planning_B.i_hn = 0; Motion_Planning_B.i_hn <=
       Motion_Planning_B.b_y_size_idx_1; Motion_Planning_B.i_hn++) {
    Motion_Planning_B.beta_data[((Motion_Planning_B.i_hn + Motion_Planning_B.idx)
      + static_cast<int32_T>(n)) + 1] =
      Motion_Planning_B.beta_data_p[Motion_Planning_B.i_hn];
  }

  Motion_Planning_B.n[0] = n;
  Motion_Planning_B.n[1] = n;
  Motion_Planning_accumarray(Motion_Planning_B.y_data,
    Motion_Planning_B.y_size_a, Motion_Planning_B.beta_data,
    &Motion_Planning_B.beta_size, Motion_Planning_B.n,
    Motion_Planning_B.tmp_data, Motion_Planning_B.tmp_size);
  Motion_Planning_eig(Motion_Planning_B.tmp_data, Motion_Planning_B.tmp_size,
                      Motion_Planning_B.e_data_e, &Motion_Planning_B.b_size_g);
  Motion_Planning_abs_dw(Motion_Planning_B.e_data_e, &Motion_Planning_B.b_size_g,
    Motion_Planning_B.y_data_o, &Motion_Planning_B.q_size);
  if (Motion_Planning_B.q_size <= 2) {
    if (Motion_Planning_B.q_size == 1) {
      Motion_Planning_B.bet = Motion_Planning_B.y_data_o[0];
    } else if (Motion_Planning_B.y_data_o[0] > Motion_Planning_B.y_data_o[1]) {
      Motion_Planning_B.bet = Motion_Planning_B.y_data_o[1];
    } else if (rtIsNaN(Motion_Planning_B.y_data_o[0])) {
      if (!rtIsNaN(Motion_Planning_B.y_data_o[1])) {
        Motion_Planning_B.bet = Motion_Planning_B.y_data_o[1];
      } else {
        Motion_Planning_B.bet = Motion_Planning_B.y_data_o[0];
      }
    } else {
      Motion_Planning_B.bet = Motion_Planning_B.y_data_o[0];
    }
  } else {
    if (!rtIsNaN(Motion_Planning_B.y_data_o[0])) {
      Motion_Planning_B.idx = 1;
    } else {
      Motion_Planning_B.idx = 0;
      Motion_Planning_B.alpha_size_idx_0 = 2;
      exitg1 = false;
      while ((!exitg1) && (Motion_Planning_B.alpha_size_idx_0 <=
                           Motion_Planning_B.q_size)) {
        if (!rtIsNaN
            (Motion_Planning_B.y_data_o[Motion_Planning_B.alpha_size_idx_0 - 1]))
        {
          Motion_Planning_B.idx = Motion_Planning_B.alpha_size_idx_0;
          exitg1 = true;
        } else {
          Motion_Planning_B.alpha_size_idx_0++;
        }
      }
    }

    if (Motion_Planning_B.idx == 0) {
      Motion_Planning_B.bet = Motion_Planning_B.y_data_o[0];
    } else {
      Motion_Planning_B.bet = Motion_Planning_B.y_data_o[Motion_Planning_B.idx -
        1];
      while (Motion_Planning_B.idx + 1 <= Motion_Planning_B.q_size) {
        if (Motion_Planning_B.bet >
            Motion_Planning_B.y_data_o[Motion_Planning_B.idx]) {
          Motion_Planning_B.bet =
            Motion_Planning_B.y_data_o[Motion_Planning_B.idx];
        }

        Motion_Planning_B.idx++;
      }
    }
  }

  lev = 1.0 / Motion_Planning_B.bet;
  return lev;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fletcher(real_T S, real_T Snew, const real_T
  dx_data[], const int32_T *dx_size, const real_T v_data[], const real_T
  Jtri_data[], const int32_T Jtri_size[2], real_T *lambda, real_T *lambdac)
{
  Motion_Planning_mulJtJ(Jtri_data, Jtri_size, dx_data, dx_size,
    Motion_Planning_B.tmp_data_j, &Motion_Planning_B.tmp_size_o);
  Motion_Planning_B.R = 0.0;
  Motion_Planning_B.loop_ub_hi = *dx_size;
  for (Motion_Planning_B.i6 = 0; Motion_Planning_B.i6 <
       Motion_Planning_B.loop_ub_hi; Motion_Planning_B.i6++) {
    Motion_Planning_B.R += (2.0 * v_data[Motion_Planning_B.i6] -
      Motion_Planning_B.tmp_data_j[Motion_Planning_B.i6]) *
      dx_data[Motion_Planning_B.i6];
  }

  Motion_Planning_B.R = (S - Snew) / Motion_Planning_B.R;
  if (Motion_Planning_B.R > 0.75) {
    *lambda /= 2.0;
    if (*lambda < *lambdac) {
      *lambda = 0.0;
    }
  } else {
    if (Motion_Planning_B.R < 0.25) {
      Motion_Planning_B.R = 0.0;
      Motion_Planning_B.loop_ub_hi = *dx_size;
      for (Motion_Planning_B.i6 = 0; Motion_Planning_B.i6 <
           Motion_Planning_B.loop_ub_hi; Motion_Planning_B.i6++) {
        Motion_Planning_B.R += dx_data[Motion_Planning_B.i6] *
          v_data[Motion_Planning_B.i6];
      }

      Motion_Planning_B.R = (Snew - S) / Motion_Planning_B.R + 2.0;
      if ((2.0 > Motion_Planning_B.R) || rtIsNaN(Motion_Planning_B.R)) {
        Motion_Planning_B.R = 2.0;
      }

      if (!(Motion_Planning_B.R < 10.0)) {
        Motion_Planning_B.R = 10.0;
      }

      if (*lambda == 0.0) {
        if (40.0 < Jtri_size[0]) {
          Motion_Planning_B.d2 = 40.0;
        } else {
          Motion_Planning_B.d2 = Jtri_size[0];
        }

        *lambdac = Motion_Planning_leastEigvJtJ(Jtri_data, Jtri_size,
          Motion_Planning_B.d2);
        *lambda = *lambdac;
        Motion_Planning_B.R /= 2.0;
      }

      *lambda *= Motion_Planning_B.R;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_LMFsolve_c(const cell_wrap_8_Motion_Planning_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size)
{
  emxArray_boolean_T_Motion_Pla_T *tmp_0;
  emxArray_boolean_T_Motion_Pla_T *tmp_1;
  emxArray_real_T_Motion_Planni_T *tmp;
  boolean_T exitg1;
  Motion_Planning_B.maxiter_m = 100 * *x_size;
  Motion_Planning_anon_o(FUN_tunableEnvironment->f1->data,
    FUN_tunableEnvironment->f1->size, x_data, Motion_Planning_B.r_data_j,
    &Motion_Planning_B.r_size_g, Motion_Planning_B.Jtri_data,
    Motion_Planning_B.Jtri_size_c);
  Motion_Planning_mulJt(Motion_Planning_B.Jtri_data,
                        Motion_Planning_B.Jtri_size_c,
                        Motion_Planning_B.r_data_j, &Motion_Planning_B.r_size_g,
                        Motion_Planning_B.v_data, &Motion_Planning_B.v_size_m);
  Motion_Planning_B.S_c = 0.0;
  Motion_Planning_B.loop_ub_lf = Motion_Planning_B.r_size_g;
  for (Motion_Planning_B.i3 = 0; Motion_Planning_B.i3 <
       Motion_Planning_B.loop_ub_lf; Motion_Planning_B.i3++) {
    Motion_Planning_B.S_c += Motion_Planning_B.r_data_j[Motion_Planning_B.i3] *
      Motion_Planning_B.r_data_j[Motion_Planning_B.i3];
  }

  Motion_Planning_B.lambda_n = 0.0;
  Motion_Planning_B.lambdac_l = 0.75;
  Motion_Planning_B.iter_g = 0;
  Motion_Planning_repmat_m(static_cast<real_T>(*x_size),
    Motion_Planning_B.epsx_data, &Motion_Planning_B.epsx_size);
  Motion_Planning_repmat_m(static_cast<real_T>(*x_size),
    Motion_Planning_B.epsr_data, &Motion_Planning_B.epsr_size);
  Motion_Planning_B.dx_size_n = Motion_Planning_B.epsx_size;
  Motion_Planning_B.loop_ub_lf = Motion_Planning_B.epsx_size;
  if (0 <= Motion_Planning_B.loop_ub_lf - 1) {
    memcpy(&Motion_Planning_B.dx_data[0], &Motion_Planning_B.epsx_data[0],
           Motion_Planning_B.loop_ub_lf * sizeof(real_T));
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planni_emxInit_boolean_T(&tmp_0, 1);
  Motion_Planni_emxInit_boolean_T(&tmp_1, 1);
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.iter_g < Motion_Planning_B.maxiter_m))
  {
    Motion_Planning_B.dx_data_c.data = &Motion_Planning_B.dx_data[0];
    Motion_Planning_B.dx_data_c.size = &Motion_Planning_B.dx_size_n;
    Motion_Planning_B.dx_data_c.allocatedSize = 100;
    Motion_Planning_B.dx_data_c.numDimensions = 1;
    Motion_Planning_B.dx_data_c.canFreeData = false;
    Motion_Planning_abs_d(&Motion_Planning_B.dx_data_c, tmp);
    Motion_Planning_B.i3 = tmp_0->size[0];
    tmp_0->size[0] = tmp->size[0];
    Mot_emxEnsureCapacity_boolean_T(tmp_0, Motion_Planning_B.i3);
    Motion_Planning_B.loop_ub_lf = tmp->size[0];
    for (Motion_Planning_B.i3 = 0; Motion_Planning_B.i3 <
         Motion_Planning_B.loop_ub_lf; Motion_Planning_B.i3++) {
      tmp_0->data[Motion_Planning_B.i3] = (tmp->data[Motion_Planning_B.i3] >=
        Motion_Planning_B.epsx_data[Motion_Planning_B.i3]);
    }

    if (Motion_Planning_any(tmp_0->data, tmp_0->size)) {
      Motion_Planning_B.r_data_f.data = &Motion_Planning_B.r_data_j[0];
      Motion_Planning_B.r_data_f.size = &Motion_Planning_B.r_size_g;
      Motion_Planning_B.r_data_f.allocatedSize = 100;
      Motion_Planning_B.r_data_f.numDimensions = 1;
      Motion_Planning_B.r_data_f.canFreeData = false;
      Motion_Planning_abs_d(&Motion_Planning_B.r_data_f, tmp);
      Motion_Planning_B.i3 = tmp_1->size[0];
      tmp_1->size[0] = tmp->size[0];
      Mot_emxEnsureCapacity_boolean_T(tmp_1, Motion_Planning_B.i3);
      Motion_Planning_B.loop_ub_lf = tmp->size[0];
      for (Motion_Planning_B.i3 = 0; Motion_Planning_B.i3 <
           Motion_Planning_B.loop_ub_lf; Motion_Planning_B.i3++) {
        tmp_1->data[Motion_Planning_B.i3] = (tmp->data[Motion_Planning_B.i3] >=
          Motion_Planning_B.epsr_data[Motion_Planning_B.i3]);
      }

      if (Motion_Planning_any(tmp_1->data, tmp_1->size)) {
        Motion_Planning_B.iter_g++;
        Motion_Pla_solveDampenedHessian(Motion_Planning_B.Jtri_data,
          Motion_Planning_B.Jtri_size_c, Motion_Planning_B.lambda_n,
          Motion_Planning_B.v_data, &Motion_Planning_B.v_size_m,
          Motion_Planning_B.dx_data, &Motion_Planning_B.dx_size_n);
        Motion_Planning_B.loop_ub_lf = *x_size;
        for (Motion_Planning_B.i3 = 0; Motion_Planning_B.i3 <
             Motion_Planning_B.loop_ub_lf; Motion_Planning_B.i3++) {
          Motion_Planning_B.xnew_data[Motion_Planning_B.i3] =
            x_data[Motion_Planning_B.i3] -
            Motion_Planning_B.dx_data[Motion_Planning_B.i3];
        }

        Motion_Planning_anon_o(FUN_tunableEnvironment->f1->data,
          FUN_tunableEnvironment->f1->size, Motion_Planning_B.xnew_data,
          Motion_Planning_B.varargout_1_data, &Motion_Planning_B.epsx_size,
          Motion_Planning_B.varargout_2_data,
          Motion_Planning_B.varargout_2_size_n);
        Motion_Planning_B.varargout_1_n = 0.0;
        Motion_Planning_B.loop_ub_lf = Motion_Planning_B.epsx_size;
        for (Motion_Planning_B.i3 = 0; Motion_Planning_B.i3 <
             Motion_Planning_B.loop_ub_lf; Motion_Planning_B.i3++) {
          Motion_Planning_B.varargout_1_data_p =
            Motion_Planning_B.varargout_1_data[Motion_Planning_B.i3];
          Motion_Planning_B.varargout_1_n +=
            Motion_Planning_B.varargout_1_data_p *
            Motion_Planning_B.varargout_1_data_p;
        }

        Motion_Planning_B.epsr_size = Motion_Planning_B.dx_size_n;
        Motion_Planning_fletcher(Motion_Planning_B.S_c,
          Motion_Planning_B.varargout_1_n, Motion_Planning_B.dx_data,
          &Motion_Planning_B.epsr_size, Motion_Planning_B.v_data,
          Motion_Planning_B.Jtri_data, Motion_Planning_B.Jtri_size_c,
          &Motion_Planning_B.lambda_n, &Motion_Planning_B.lambdac_l);
        if (Motion_Planning_B.varargout_1_n < Motion_Planning_B.S_c) {
          Motion_Planning_B.S_c = Motion_Planning_B.varargout_1_n;
          Motion_Planning_B.loop_ub_lf = *x_size;
          if (0 <= Motion_Planning_B.loop_ub_lf - 1) {
            memcpy(&x_data[0], &Motion_Planning_B.xnew_data[0],
                   Motion_Planning_B.loop_ub_lf * sizeof(real_T));
          }

          Motion_Planning_B.r_size_g = Motion_Planning_B.epsx_size;
          Motion_Planning_B.loop_ub_lf = Motion_Planning_B.epsx_size;
          if (0 <= Motion_Planning_B.loop_ub_lf - 1) {
            memcpy(&Motion_Planning_B.r_data_j[0],
                   &Motion_Planning_B.varargout_1_data[0],
                   Motion_Planning_B.loop_ub_lf * sizeof(real_T));
          }

          Motion_Planning_B.Jtri_size_c[0] =
            Motion_Planning_B.varargout_2_size_n[0];
          Motion_Planning_B.Jtri_size_c[1] = 3;
          Motion_Planning_B.loop_ub_lf = Motion_Planning_B.varargout_2_size_n[0]
            * Motion_Planning_B.varargout_2_size_n[1] - 1;
          if (0 <= Motion_Planning_B.loop_ub_lf) {
            memcpy(&Motion_Planning_B.Jtri_data[0],
                   &Motion_Planning_B.varargout_2_data[0],
                   (Motion_Planning_B.loop_ub_lf + 1) * sizeof(real_T));
          }

          Motion_Planning_mulJt(Motion_Planning_B.varargout_2_data,
                                Motion_Planning_B.varargout_2_size_n,
                                Motion_Planning_B.varargout_1_data,
                                &Motion_Planning_B.epsx_size,
                                Motion_Planning_B.v_data,
                                &Motion_Planning_B.v_size_m);
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }

  Motion_Planni_emxFree_boolean_T(&tmp_1);
  Motion_Planni_emxFree_boolean_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_anon(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T x_data[], real_T varargout_1_data[], int32_T
  *varargout_1_size, real_T varargout_2_data[], int32_T varargout_2_size[2])
{
  Motion_Planning_B.loop_ub_f = waypoints_size[0];
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
    Motion_Planning_B.hip_data[Motion_Planning_B.i1].re =
      waypoints_data[Motion_Planning_B.i1];
    Motion_Planning_B.hip_data[Motion_Planning_B.i1].im =
      waypoints_data[Motion_Planning_B.i1 + waypoints_size[0]];
  }

  if (2 > waypoints_size[0]) {
    Motion_Planning_B.e = 0;
    Motion_Planning_B.d_h = 0;
  } else {
    Motion_Planning_B.e = 1;
    Motion_Planning_B.d_h = waypoints_size[0];
  }

  if (waypoints_size[0] - 1 < 2) {
    Motion_Planning_B.y_size_idx_1 = 0;
  } else {
    Motion_Planning_B.y_size_idx_1 = static_cast<int32_T>((static_cast<real_T>
      (waypoints_size[0]) - 1.0) - 2.0) + 1;
    Motion_Planning_B.loop_ub_f = static_cast<int32_T>((static_cast<real_T>
      (waypoints_size[0]) - 1.0) - 2.0);
    for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <=
         Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
      Motion_Planning_B.y_data_e[Motion_Planning_B.i1] = Motion_Planning_B.i1 +
        2U;
    }
  }

  Motion_Planning_B.y_size_idx_0 = Motion_Planning_B.y_size_idx_1 + 1;
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.y_size_idx_1; Motion_Planning_B.i1++) {
    Motion_Planning_B.y_data_c[Motion_Planning_B.i1] = static_cast<int32_T>
      (Motion_Planning_B.y_data_e[Motion_Planning_B.i1]) - 1;
  }

  Motion_Planning_B.y_data_c[Motion_Planning_B.y_size_idx_1] = 0;
  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.loop_ub_f = -1;
  } else {
    Motion_Planning_B.loop_ub_f = waypoints_size[0] - 2;
  }

  if (0 <= Motion_Planning_B.loop_ub_f) {
    memcpy(&Motion_Planning_B.hip_data_l[0], &Motion_Planning_B.hip_data[0],
           (Motion_Planning_B.loop_ub_f + 1) * sizeof(creal_T));
  }

  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.loop_ub_f = -1;
  } else {
    Motion_Planning_B.loop_ub_f = waypoints_size[0] - 2;
  }

  Motion_Planning_B.x_size = Motion_Planning_B.loop_ub_f + 1;
  if (0 <= Motion_Planning_B.loop_ub_f) {
    memcpy(&Motion_Planning_B.x_data_i[0], &x_data[0],
           (Motion_Planning_B.loop_ub_f + 1) * sizeof(real_T));
  }

  Motion_Planning_B.loop_ub_f = Motion_Planning_B.d_h - Motion_Planning_B.e;
  Motion_Planning_B.hip_size = Motion_Planning_B.loop_ub_f;
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
    Motion_Planning_B.hip_data_g[Motion_Planning_B.i1] =
      Motion_Planning_B.hip_data[Motion_Planning_B.e + Motion_Planning_B.i1];
  }

  Motion_Planning_B.x_size_i = Motion_Planning_B.y_size_idx_1 + 1;
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.y_size_idx_0; Motion_Planning_B.i1++) {
    Motion_Planning_B.x_data_fk[Motion_Planning_B.i1] =
      x_data[Motion_Planning_B.y_data_c[Motion_Planning_B.i1]];
  }

  Motion_Planning_clothoidG1fit2(Motion_Planning_B.hip_data_l,
    Motion_Planning_B.x_data_i, &Motion_Planning_B.x_size,
    Motion_Planning_B.hip_data_g, &Motion_Planning_B.hip_size,
    Motion_Planning_B.x_data_fk, &Motion_Planning_B.x_size_i,
    Motion_Planning_B.k0_data, &Motion_Planning_B.k0_size,
    Motion_Planning_B.k1_data, &Motion_Planning_B.k1_size,
    Motion_Planning_B.unusedU0_data, &Motion_Planning_B.unusedU0_size,
    Motion_Planning_B.dk0_dc0_data, &Motion_Planning_B.dk0_dc0_size,
    Motion_Planning_B.dk0_dc1_data, &Motion_Planning_B.dk0_dc1_size,
    Motion_Planning_B.dk1_dc0_data, &Motion_Planning_B.dk1_dc0_size,
    Motion_Planning_B.dk1_dc1_data, &Motion_Planning_B.dk1_dc1_size);
  if (2 > Motion_Planning_B.k0_size) {
    Motion_Planning_B.e = 0;
  } else {
    Motion_Planning_B.e = 1;
  }

  if (waypoints_size[0] - 2 < 1) {
    Motion_Planning_B.y_size_idx_1 = 0;
  } else {
    Motion_Planning_B.y_size_idx_1 = static_cast<int32_T>((static_cast<real_T>
      (waypoints_size[0]) - 2.0) - 1.0) + 1;
    Motion_Planning_B.loop_ub_f = static_cast<int32_T>((static_cast<real_T>
      (waypoints_size[0]) - 2.0) - 1.0);
    for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <=
         Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
      Motion_Planning_B.y_data_e[Motion_Planning_B.i1] = Motion_Planning_B.i1 +
        1U;
    }
  }

  if (1 > Motion_Planning_B.k1_size - 1) {
    Motion_Planning_B.loop_ub_f = -1;
  } else {
    Motion_Planning_B.loop_ub_f = Motion_Planning_B.k1_size - 2;
  }

  *varargout_1_size = Motion_Planning_B.loop_ub_f + 2;
  varargout_1_data[0] = Motion_Planning_B.k1_data[Motion_Planning_B.k1_size - 1]
    - Motion_Planning_B.k0_data[0];
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <=
       Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
    varargout_1_data[Motion_Planning_B.i1 + 1] =
      Motion_Planning_B.k1_data[Motion_Planning_B.i1] -
      Motion_Planning_B.k0_data[Motion_Planning_B.e + Motion_Planning_B.i1];
  }

  Motion_Planning_B.e = Motion_Planning_B.y_size_idx_1 + 1;
  Motion_Planning_B.y_data_c[0] = waypoints_size[0] - 2;
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.y_size_idx_1; Motion_Planning_B.i1++) {
    Motion_Planning_B.y_data_c[Motion_Planning_B.i1 + 1] = static_cast<int32_T>
      (Motion_Planning_B.y_data_e[Motion_Planning_B.i1]) - 1;
  }

  varargout_2_size[0] = Motion_Planning_B.dk1_dc0_size;
  varargout_2_size[1] = 3;
  Motion_Planning_B.loop_ub_f = Motion_Planning_B.dk1_dc0_size;
  if (0 <= Motion_Planning_B.loop_ub_f - 1) {
    memcpy(&varargout_2_data[0], &Motion_Planning_B.dk1_dc0_data[0],
           Motion_Planning_B.loop_ub_f * sizeof(real_T));
  }

  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 < Motion_Planning_B.e;
       Motion_Planning_B.i1++) {
    varargout_2_data[Motion_Planning_B.i1 + Motion_Planning_B.dk1_dc0_size] =
      Motion_Planning_B.dk1_dc1_data[Motion_Planning_B.y_data_c[Motion_Planning_B.i1]]
      - Motion_Planning_B.dk0_dc0_data[Motion_Planning_B.i1];
  }

  Motion_Planning_B.loop_ub_f = Motion_Planning_B.dk0_dc1_size;
  for (Motion_Planning_B.i1 = 0; Motion_Planning_B.i1 <
       Motion_Planning_B.loop_ub_f; Motion_Planning_B.i1++) {
    varargout_2_data[((Motion_Planning_B.i1 + Motion_Planning_B.dk1_dc0_size) +
                      Motion_Planning_B.y_size_idx_1) + 1] =
      -Motion_Planning_B.dk0_dc1_data[Motion_Planning_B.i1];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_LMFsolve(const cell_wrap_8_Motion_Planning_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size)
{
  emxArray_boolean_T_Motion_Pla_T *tmp_0;
  emxArray_boolean_T_Motion_Pla_T *tmp_1;
  emxArray_real_T_Motion_Planni_T *tmp;
  boolean_T exitg1;
  Motion_Planning_B.maxiter = 100 * *x_size;
  Motion_Planning_anon(FUN_tunableEnvironment->f1->data,
                       FUN_tunableEnvironment->f1->size, x_data,
                       Motion_Planning_B.r_data_i, &Motion_Planning_B.r_size,
                       Motion_Planning_B.Jtri_data_f,
                       Motion_Planning_B.Jtri_size);
  Motion_Planning_mulJt(Motion_Planning_B.Jtri_data_f,
                        Motion_Planning_B.Jtri_size, Motion_Planning_B.r_data_i,
                        &Motion_Planning_B.r_size, Motion_Planning_B.b_data_bj,
                        &Motion_Planning_B.b_size_h);
  Motion_Planning_B.v_size = Motion_Planning_B.b_size_h;
  Motion_Planning_B.loop_ub_n = Motion_Planning_B.b_size_h;
  if (0 <= Motion_Planning_B.loop_ub_n - 1) {
    memcpy(&Motion_Planning_B.v_data_e[0], &Motion_Planning_B.b_data_bj[0],
           Motion_Planning_B.loop_ub_n * sizeof(real_T));
  }

  Motion_Planning_B.S = 0.0;
  Motion_Planning_B.loop_ub_n = Motion_Planning_B.r_size;
  for (Motion_Planning_B.epsx_size_idx_0 = 0; Motion_Planning_B.epsx_size_idx_0 <
       Motion_Planning_B.loop_ub_n; Motion_Planning_B.epsx_size_idx_0++) {
    Motion_Planning_B.S +=
      Motion_Planning_B.r_data_i[Motion_Planning_B.epsx_size_idx_0] *
      Motion_Planning_B.r_data_i[Motion_Planning_B.epsx_size_idx_0];
  }

  Motion_Planning_B.lambda = 0.0;
  Motion_Planning_B.lambdac = 0.75;
  Motion_Planning_B.iter = 0;
  Motion_Planning_repmat_m(static_cast<real_T>(*x_size),
    Motion_Planning_B.b_data_bj, &Motion_Planning_B.b_size_h);
  Motion_Planning_B.epsx_size_idx_0 = Motion_Planning_B.b_size_h;
  Motion_Planning_B.loop_ub_n = Motion_Planning_B.b_size_h;
  if (0 <= Motion_Planning_B.loop_ub_n - 1) {
    memcpy(&Motion_Planning_B.epsx_data_l[0], &Motion_Planning_B.b_data_bj[0],
           Motion_Planning_B.loop_ub_n * sizeof(real_T));
  }

  Motion_Planning_repmat_m(static_cast<real_T>(*x_size),
    Motion_Planning_B.b_data_bj, &Motion_Planning_B.b_size_h);
  Motion_Planning_B.loop_ub_n = Motion_Planning_B.b_size_h;
  if (0 <= Motion_Planning_B.loop_ub_n - 1) {
    memcpy(&Motion_Planning_B.epsr_data_o[0], &Motion_Planning_B.b_data_bj[0],
           Motion_Planning_B.loop_ub_n * sizeof(real_T));
  }

  Motion_Planning_B.dx_size = Motion_Planning_B.epsx_size_idx_0;
  if (0 <= Motion_Planning_B.epsx_size_idx_0 - 1) {
    memcpy(&Motion_Planning_B.dx_data_a[0], &Motion_Planning_B.epsx_data_l[0],
           Motion_Planning_B.epsx_size_idx_0 * sizeof(real_T));
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planni_emxInit_boolean_T(&tmp_0, 1);
  Motion_Planni_emxInit_boolean_T(&tmp_1, 1);
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.iter < Motion_Planning_B.maxiter)) {
    Motion_Planning_B.dx_data_m.data = &Motion_Planning_B.dx_data_a[0];
    Motion_Planning_B.dx_data_m.size = &Motion_Planning_B.dx_size;
    Motion_Planning_B.dx_data_m.allocatedSize = 99;
    Motion_Planning_B.dx_data_m.numDimensions = 1;
    Motion_Planning_B.dx_data_m.canFreeData = false;
    Motion_Planning_abs_d(&Motion_Planning_B.dx_data_m, tmp);
    Motion_Planning_B.epsx_size_idx_0 = tmp_0->size[0];
    tmp_0->size[0] = tmp->size[0];
    Mot_emxEnsureCapacity_boolean_T(tmp_0, Motion_Planning_B.epsx_size_idx_0);
    Motion_Planning_B.loop_ub_n = tmp->size[0];
    for (Motion_Planning_B.epsx_size_idx_0 = 0;
         Motion_Planning_B.epsx_size_idx_0 < Motion_Planning_B.loop_ub_n;
         Motion_Planning_B.epsx_size_idx_0++) {
      tmp_0->data[Motion_Planning_B.epsx_size_idx_0] = (tmp->
        data[Motion_Planning_B.epsx_size_idx_0] >=
        Motion_Planning_B.epsx_data_l[Motion_Planning_B.epsx_size_idx_0]);
    }

    if (Motion_Planning_any(tmp_0->data, tmp_0->size)) {
      Motion_Planning_B.r_data_m.data = &Motion_Planning_B.r_data_i[0];
      Motion_Planning_B.r_data_m.size = &Motion_Planning_B.r_size;
      Motion_Planning_B.r_data_m.allocatedSize = 99;
      Motion_Planning_B.r_data_m.numDimensions = 1;
      Motion_Planning_B.r_data_m.canFreeData = false;
      Motion_Planning_abs_d(&Motion_Planning_B.r_data_m, tmp);
      Motion_Planning_B.epsx_size_idx_0 = tmp_1->size[0];
      tmp_1->size[0] = tmp->size[0];
      Mot_emxEnsureCapacity_boolean_T(tmp_1, Motion_Planning_B.epsx_size_idx_0);
      Motion_Planning_B.loop_ub_n = tmp->size[0];
      for (Motion_Planning_B.epsx_size_idx_0 = 0;
           Motion_Planning_B.epsx_size_idx_0 < Motion_Planning_B.loop_ub_n;
           Motion_Planning_B.epsx_size_idx_0++) {
        tmp_1->data[Motion_Planning_B.epsx_size_idx_0] = (tmp->
          data[Motion_Planning_B.epsx_size_idx_0] >=
          Motion_Planning_B.epsr_data_o[Motion_Planning_B.epsx_size_idx_0]);
      }

      if (Motion_Planning_any(tmp_1->data, tmp_1->size)) {
        Motion_Planning_B.iter++;
        Motion_Pla_solveDampenedHessian(Motion_Planning_B.Jtri_data_f,
          Motion_Planning_B.Jtri_size, Motion_Planning_B.lambda,
          Motion_Planning_B.v_data_e, &Motion_Planning_B.v_size,
          Motion_Planning_B.b_data_bj, &Motion_Planning_B.b_size_h);
        Motion_Planning_B.dx_size = Motion_Planning_B.b_size_h;
        Motion_Planning_B.loop_ub_n = Motion_Planning_B.b_size_h;
        if (0 <= Motion_Planning_B.loop_ub_n - 1) {
          memcpy(&Motion_Planning_B.dx_data_a[0], &Motion_Planning_B.b_data_bj[0],
                 Motion_Planning_B.loop_ub_n * sizeof(real_T));
        }

        Motion_Planning_B.loop_ub_n = *x_size;
        for (Motion_Planning_B.epsx_size_idx_0 = 0;
             Motion_Planning_B.epsx_size_idx_0 < Motion_Planning_B.loop_ub_n;
             Motion_Planning_B.epsx_size_idx_0++) {
          Motion_Planning_B.xnew_data_a[Motion_Planning_B.epsx_size_idx_0] =
            x_data[Motion_Planning_B.epsx_size_idx_0] -
            Motion_Planning_B.b_data_bj[Motion_Planning_B.epsx_size_idx_0];
        }

        Motion_Planning_anon(FUN_tunableEnvironment->f1->data,
                             FUN_tunableEnvironment->f1->size,
                             Motion_Planning_B.xnew_data_a,
                             Motion_Planning_B.varargout_1_data_o,
                             &Motion_Planning_B.varargout_1_size,
                             Motion_Planning_B.varargout_2_data_g,
                             Motion_Planning_B.varargout_2_size);
        Motion_Planning_B.varargout_1 = 0.0;
        Motion_Planning_B.loop_ub_n = Motion_Planning_B.varargout_1_size;
        for (Motion_Planning_B.epsx_size_idx_0 = 0;
             Motion_Planning_B.epsx_size_idx_0 < Motion_Planning_B.loop_ub_n;
             Motion_Planning_B.epsx_size_idx_0++) {
          Motion_Planning_B.varargout_1_data_o3 =
            Motion_Planning_B.varargout_1_data_o[Motion_Planning_B.epsx_size_idx_0];
          Motion_Planning_B.varargout_1 += Motion_Planning_B.varargout_1_data_o3
            * Motion_Planning_B.varargout_1_data_o3;
        }

        Motion_Planning_fletcher(Motion_Planning_B.S,
          Motion_Planning_B.varargout_1, Motion_Planning_B.b_data_bj,
          &Motion_Planning_B.b_size_h, Motion_Planning_B.v_data_e,
          Motion_Planning_B.Jtri_data_f, Motion_Planning_B.Jtri_size,
          &Motion_Planning_B.lambda, &Motion_Planning_B.lambdac);
        if (Motion_Planning_B.varargout_1 < Motion_Planning_B.S) {
          Motion_Planning_B.S = Motion_Planning_B.varargout_1;
          Motion_Planning_B.loop_ub_n = *x_size;
          if (0 <= Motion_Planning_B.loop_ub_n - 1) {
            memcpy(&x_data[0], &Motion_Planning_B.xnew_data_a[0],
                   Motion_Planning_B.loop_ub_n * sizeof(real_T));
          }

          Motion_Planning_B.r_size = Motion_Planning_B.varargout_1_size;
          Motion_Planning_B.loop_ub_n = Motion_Planning_B.varargout_1_size;
          if (0 <= Motion_Planning_B.loop_ub_n - 1) {
            memcpy(&Motion_Planning_B.r_data_i[0],
                   &Motion_Planning_B.varargout_1_data_o[0],
                   Motion_Planning_B.loop_ub_n * sizeof(real_T));
          }

          Motion_Planning_B.Jtri_size[0] = Motion_Planning_B.varargout_2_size[0];
          Motion_Planning_B.Jtri_size[1] = 3;
          Motion_Planning_B.loop_ub_n = Motion_Planning_B.varargout_2_size[0] *
            Motion_Planning_B.varargout_2_size[1] - 1;
          if (0 <= Motion_Planning_B.loop_ub_n) {
            memcpy(&Motion_Planning_B.Jtri_data_f[0],
                   &Motion_Planning_B.varargout_2_data_g[0],
                   (Motion_Planning_B.loop_ub_n + 1) * sizeof(real_T));
          }

          Motion_Planning_mulJt(Motion_Planning_B.varargout_2_data_g,
                                Motion_Planning_B.varargout_2_size,
                                Motion_Planning_B.varargout_1_data_o,
                                &Motion_Planning_B.varargout_1_size,
                                Motion_Planning_B.b_data_bj,
                                &Motion_Planning_B.b_size_h);
          Motion_Planning_B.v_size = Motion_Planning_B.b_size_h;
          Motion_Planning_B.loop_ub_n = Motion_Planning_B.b_size_h;
          if (0 <= Motion_Planning_B.loop_ub_n - 1) {
            memcpy(&Motion_Planning_B.v_data_e[0], &Motion_Planning_B.b_data_bj
                   [0], Motion_Planning_B.loop_ub_n * sizeof(real_T));
          }
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }

  Motion_Planni_emxFree_boolean_T(&tmp_1);
  Motion_Planni_emxFree_boolean_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
}

static void Motio_emxFreeStruct_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pStruct)
{
  Motion_Planning_emxFree_real_T(&pStruct->f1);
}

static void Motio_emxFreeMatrix_cell_wrap_8(cell_wrap_8_Motion_Planning_T
  *pMatrix)
{
  Motio_emxFreeStruct_cell_wrap_8(pMatrix);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Plan_clothoidG2fitCourse(const real_T waypoints_data[], const
  int32_T waypoints_size[2], real_T course_data[], int32_T *course_size)
{
  emxArray_real_T_Motion_Planni_T *u;
  emxArray_real_T_Motion_Planni_T *v;
  *course_size = waypoints_size[0];
  Motion_Planning_B.loop_ub_p = waypoints_size[0];
  if (0 <= Motion_Planning_B.loop_ub_p - 1) {
    memset(&course_data[0], 0, Motion_Planning_B.loop_ub_p * sizeof(real_T));
  }

  if (waypoints_size[0] == 2) {
    course_data[0] = rt_atan2d_snf(waypoints_data[3] - waypoints_data[2],
      waypoints_data[1] - waypoints_data[0]);
    course_data[1] = course_data[0];
  } else {
    Motion_Planning_B.loop_ub_p = waypoints_size[0];
    Motion_Planning_B.waypoints_size_e = waypoints_size[0];
    if (0 <= Motion_Planning_B.loop_ub_p - 1) {
      memcpy(&Motion_Planning_B.waypoints_data[0], &waypoints_data[0],
             Motion_Planning_B.loop_ub_p * sizeof(real_T));
    }

    Motion_Planning_B.loop_ub_p = waypoints_size[0];
    for (Motion_Planning_B.i_h = 0; Motion_Planning_B.i_h <
         Motion_Planning_B.loop_ub_p; Motion_Planning_B.i_h++) {
      Motion_Planning_B.waypoints_data_e[Motion_Planning_B.i_h] =
        waypoints_data[Motion_Planning_B.i_h + waypoints_size[0]];
    }

    Motion_Planning_emxInit_real_T(&u, 1);
    Motion_Planning_emxInit_real_T(&v, 1);
    Motion_Planning_dclothoid(Motion_Planning_B.waypoints_data,
      &Motion_Planning_B.waypoints_size_e, Motion_Planning_B.waypoints_data_e, u,
      v);
    Motion_Planning_B.x_re = u->data[1] - u->data[0];
    Motion_Planning_B.x_im = v->data[1] - v->data[0];
    course_data[0] = rt_atan2d_snf(Motion_Planning_B.x_im,
      Motion_Planning_B.x_re);
    Motion_Planning_B.x_re = u->data[u->size[0] - 1] - u->data[u->size[0] - 2];
    Motion_Planning_B.x_im = v->data[v->size[0] - 1] - v->data[v->size[0] - 2];
    course_data[waypoints_size[0] - 1] = rt_atan2d_snf(Motion_Planning_B.x_im,
      Motion_Planning_B.x_re);
    Motion_Planning_B.i_h = 1;
    while (Motion_Planning_B.i_h - 1 <= waypoints_size[0] - 3) {
      Motion_Planning_B.loop_ub_p = Motion_Planning_B.i_h << 10;
      Motion_Planning_B.x_re = u->data[Motion_Planning_B.loop_ub_p] - u->
        data[Motion_Planning_B.loop_ub_p - 1];
      Motion_Planning_B.x_im = v->data[Motion_Planning_B.loop_ub_p] - v->
        data[Motion_Planning_B.loop_ub_p - 1];
      course_data[Motion_Planning_B.i_h] = rt_atan2d_snf(Motion_Planning_B.x_im,
        Motion_Planning_B.x_re);
      Motion_Planning_B.i_h++;
    }

    Motion_Planning_emxFree_real_T(&v);
    Motion_Planning_emxFree_real_T(&u);
    Motion_Planning_B.waypoints_i = waypoints_size[0];
    Motion_Planning_B.loop_ub_p = waypoints_size[1];
    Motion_Planning_B.waypoints_size[0] = 1;
    Motion_Planning_B.waypoints_size[1] = waypoints_size[1];
    for (Motion_Planning_B.i_h = 0; Motion_Planning_B.i_h <
         Motion_Planning_B.loop_ub_p; Motion_Planning_B.i_h++) {
      Motion_Planning_B.waypoints_data_c[Motion_Planning_B.i_h] =
        waypoints_data[waypoints_size[0] * Motion_Planning_B.i_h];
    }

    Motion_Planning_B.loop_ub_p = waypoints_size[1];
    Motion_Planning_B.waypoints_size_h[0] = 1;
    Motion_Planning_B.waypoints_size_h[1] = waypoints_size[1];
    for (Motion_Planning_B.i_h = 0; Motion_Planning_B.i_h <
         Motion_Planning_B.loop_ub_p; Motion_Planning_B.i_h++) {
      Motion_Planning_B.waypoints_data_i[Motion_Planning_B.i_h] =
        waypoints_data[(waypoints_size[0] * Motion_Planning_B.i_h +
                        Motion_Planning_B.waypoints_i) - 1];
    }

    Motio_emxInitMatrix_cell_wrap_8(&Motion_Planning_B.tunableEnvironment);
    if (Motion_Planning_isequal(Motion_Planning_B.waypoints_data_c,
         Motion_Planning_B.waypoints_size, Motion_Planning_B.waypoints_data_i,
         Motion_Planning_B.waypoints_size_h)) {
      Motion_Planning_B.i_h = Motion_Planning_B.tunableEnvironment.f1->size[0] *
        Motion_Planning_B.tunableEnvironment.f1->size[1];
      Motion_Planning_B.tunableEnvironment.f1->size[0] = waypoints_size[0];
      Motion_Planning_B.tunableEnvironment.f1->size[1] = waypoints_size[1];
      Motion_emxEnsureCapacity_real_T(Motion_Planning_B.tunableEnvironment.f1,
        Motion_Planning_B.i_h);
      Motion_Planning_B.loop_ub_p = waypoints_size[0] * waypoints_size[1] - 1;
      for (Motion_Planning_B.i_h = 0; Motion_Planning_B.i_h <=
           Motion_Planning_B.loop_ub_p; Motion_Planning_B.i_h++) {
        Motion_Planning_B.tunableEnvironment.f1->data[Motion_Planning_B.i_h] =
          waypoints_data[Motion_Planning_B.i_h];
      }

      if (1 > waypoints_size[0] - 1) {
        Motion_Planning_B.loop_ub_p = -1;
      } else {
        Motion_Planning_B.loop_ub_p = waypoints_size[0] - 2;
      }

      Motion_Planning_B.c_size_f = Motion_Planning_B.loop_ub_p + 1;
      if (0 <= Motion_Planning_B.loop_ub_p) {
        memcpy(&Motion_Planning_B.c_data_a[0], &course_data[0],
               (Motion_Planning_B.loop_ub_p + 1) * sizeof(real_T));
      }

      Motion_Planning_LMFsolve(&Motion_Planning_B.tunableEnvironment,
        Motion_Planning_B.c_data_a, &Motion_Planning_B.c_size_f);
      *course_size = Motion_Planning_B.c_size_f + 1;
      Motion_Planning_B.loop_ub_p = Motion_Planning_B.c_size_f;
      if (0 <= Motion_Planning_B.loop_ub_p - 1) {
        memcpy(&course_data[0], &Motion_Planning_B.c_data_a[0],
               Motion_Planning_B.loop_ub_p * sizeof(real_T));
      }

      course_data[Motion_Planning_B.c_size_f] = Motion_Planning_B.c_data_a[0];
    } else {
      Motion_Planning_B.i_h = Motion_Planning_B.tunableEnvironment.f1->size[0] *
        Motion_Planning_B.tunableEnvironment.f1->size[1];
      Motion_Planning_B.tunableEnvironment.f1->size[0] = waypoints_size[0];
      Motion_Planning_B.tunableEnvironment.f1->size[1] = waypoints_size[1];
      Motion_emxEnsureCapacity_real_T(Motion_Planning_B.tunableEnvironment.f1,
        Motion_Planning_B.i_h);
      Motion_Planning_B.loop_ub_p = waypoints_size[0] * waypoints_size[1] - 1;
      for (Motion_Planning_B.i_h = 0; Motion_Planning_B.i_h <=
           Motion_Planning_B.loop_ub_p; Motion_Planning_B.i_h++) {
        Motion_Planning_B.tunableEnvironment.f1->data[Motion_Planning_B.i_h] =
          waypoints_data[Motion_Planning_B.i_h];
      }

      Motion_Planning_LMFsolve_c(&Motion_Planning_B.tunableEnvironment,
        course_data, course_size);
    }

    Motio_emxFreeMatrix_cell_wrap_8(&Motion_Planning_B.tunableEnvironment);
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fetchA(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], real_T a_data[], int32_T *a_size)
{
  static const real_T c[351] = { -1.5361481088532109E-40,
    -5.1782003708968662E-38, 5.8080516979367073E-38, -6.2922109794702842E-36,
    1.7744129415359022E-35, -9.8266873453160865E-36, -3.0557011816989596E-34,
    1.9988681524430764E-33, -2.7007621230825949E-33, 9.6497076628562535E-34,
    -8.50146594503621E-33, 8.7613736854720049E-32, -2.8258679893784358E-31,
    2.3637604856716169E-31, -5.8556266604372106E-32, -1.2863962524996432E-31,
    2.229093841830142E-30, -1.1057059963507232E-29, 2.3139349101185755E-29,
    -1.2630223562649489E-29, 2.0068564650639364E-30, -1.1052377502159136E-30,
    3.0309726719642508E-29, -2.57153235020298E-28, 7.9357820762496212E-28,
    -1.1834423538462616E-27, 3.7518152500494656E-28, -9.5988758699827141E-30,
    -5.8444661902772888E-30, 2.2799302267031842E-28, -3.118708591261201E-27,
    1.6937953593997347E-26, -3.4234259338177584E-26, 3.675290577810477E-26,
    -1.6183294340108731E-27, -2.9209077909746285E-27, -2.0493494333051533E-29,
    1.0232091530758262E-27, -2.0119872415420161E-26, 1.8157191663212143E-25,
    -6.8278782273948665E-25, 7.9289707228553727E-25, -5.1713140278139824E-25,
    -3.5757401738269863E-25, 1.7191521549607673E-25, -5.001307006229815E-29,
    2.9234616420394369E-27, -7.3372627735809734E-26, 9.6978563886575261E-25,
    -6.3976458551757164E-24, 1.6073455072306433E-23, -7.37463587795066E-25,
    -7.0522343048774666E-24, 1.4805755563608624E-23, -5.1965352404273039E-24,
    -8.5391792173019132E-29, 5.4962692899068422E-27, -1.5546891778194411E-25,
    2.6049795261751296E-24, -2.6172058881327836E-23, 1.2985982037510549E-22,
    -1.423772303418446E-22, -5.8282903661876709E-22, 4.1133508360308628E-22,
    -1.742659308147939E-22, 8.07786256209318E-23, -9.7738126735700558E-29,
    6.6212355845436972E-27, -1.7707072436748613E-25, 2.8057133511879665E-24,
    -3.4869970759687543E-23, 3.0241871214865029E-22, -9.92012310209099E-22,
    -3.2149566866116185E-21, 1.8710249707031661E-20, -1.2453541845369618E-21,
    -7.5062472154050874E-21, 2.8499865852964518E-22, -6.9207112182904389E-29,
    4.4179830835754724E-27, -4.4762524882779791E-26, -2.450817653228083E-24,
    7.1914140604820392E-23, -7.2673875098954476E-22, 3.3571441047866719E-21,
    -1.5906878744538782E-20, 1.0715370660853569E-19, -2.1813900762258771E-19,
    -3.7882773476137619E-19, 4.4188357957185649E-19, -5.2046323054922296E-20,
    -2.8170935396816464E-29, 7.8914114794548443E-28, 1.528966070127476E-25,
    -1.1332880987718864E-23, 3.3104475572268851E-22, -4.9647512138578754E-21,
    3.9715384015216385E-20, -1.6290821269847189E-19, 3.36612516663913E-19,
    -3.36275918384194E-19, -2.8323208988729979E-18, 1.5348780107717589E-17,
    -1.2231243924447674E-17, 1.5460269152965008E-18, -1.0350259940425787E-29,
    -4.7414043171551787E-28, 1.9707672417753685E-25, -1.4495788889042659E-23,
    5.1378340796211685E-22, -1.0210774519786583E-20, 1.165542649503511E-19,
    -7.1421779330877591E-19, 1.6365283191176908E-18, 4.9170568130837211E-18,
    -4.4186234291063853E-17, 1.6247947613884891E-16, -3.4187835062780104E-16,
    2.2495563268135524E-16, -2.8304172442233909E-17, -9.54190907880087E-30,
    4.33416352213585E-28, 7.30606772876727E-26, -8.4789175470441986E-24,
    3.9746370968729408E-22, -1.0350198533651566E-20, 1.589371276512773E-19,
    -1.3721089740423357E-18, 4.7868869804965763E-18, 1.9699426816042335E-17,
    -2.7595647699194014E-16, 1.2612122765846683E-15, -3.3199758280144047E-15,
    5.1284109097493322E-15, -2.9773954125181772E-15, 3.6686222388116938E-16,
    -7.13761114432792E-30, 8.6070327678610011E-28, -2.5253411261423782E-26,
    -1.429985806399278E-24, 1.4200678258817658E-22, -5.2901273901739912E-21,
    1.0879148930261737E-19, -1.2468905412479112E-18, 5.651703115185149E-18,
    4.073824764700649E-17, -7.7193016891576893E-16, 5.1280294092344238E-15,
    -1.8830251965098877E-14, 4.2082102420983456E-14, -5.4816521831539046E-14,
    2.9056289127761095E-14, -3.5049036301087839E-15, -2.7032712394278119E-30,
    4.4439845217679321E-28, -2.8561533629781625E-26, 7.4263493149653183E-25,
    7.7648205291611823E-24, -1.1313407629960782E-21, 3.4992489982228452E-20,
    -5.11237062122324E-19, 1.9082838069139238E-18, 6.02161124473958E-17,
    -1.1855133738581856E-15, 1.0647602057665829E-14, -5.5915318620809614E-14,
    1.8096099090326831E-13, -3.6385985586845819E-13, 4.2410069501559273E-13,
    -2.106362282048389E-13, 2.4385529408308407E-14, -4.8547818044528891E-31,
    9.5570081279537094E-29, -7.8572054752482576E-27, 3.3174769183447452E-25,
    -6.2142341258768858E-24, -5.0991712996566211E-23, 5.1392990708290932E-21,
    -8.807706142947147E-20, -5.8182766640448854E-19, 5.1419279154935842E-17,
    -1.04407697522146E-15, 1.1898094238539857E-14, -8.5367937011271162E-14,
    3.9513126620957262E-13, -1.1748533341492665E-12, 2.1917257282808794E-12,
    -2.3566809884820566E-12, 1.0795020408261728E-12, -1.5837465906955864E-13,
    -2.7533507225420422E-32, 5.7619182837708977E-30, -4.6471657116787863E-28,
    1.4048422360791874E-26, 3.7650962241144584E-25, -4.9228435831327322E-23,
    1.9071729205179347E-21, -3.3490783882201909E-20, -7.018689437542322E-20,
    1.8324124104655822E-17, -4.7883976550407734E-16, 7.0487303907715931E-15,
    -6.735734123826801E-14, 4.3114382655453385E-13, -1.8436618496422663E-12,
    5.1655481921478335E-12, -9.1498502333527442E-12, 9.53768065186612E-12,
    -5.5096965823391316E-12, -1.9256688414961511E-12, 2.6993907913031997E-33,
    -8.3658508533748674E-31, 1.2360111759498158E-28, -1.1391057286564071E-26,
    7.1943116140837765E-25, -3.2278401611187206E-23, 1.0313736180462972E-21,
    -2.2595952680170383E-20, 2.9013328570466337E-19, -1.4189880636575127E-19,
    -8.2575877751974837E-17, 1.9535524420193836E-15, -2.60333162544509E-14,
    2.2905798368369833E-13, -1.3730942326110817E-12, 5.5797967300488639E-12,
    -1.5044456366394642E-11, 2.5612747661164289E-11, -1.9627816796196334E-11,
    -2.8036172295220303E-11, -1.9615478304946413E-10, 3.8934925377973957E-34,
    -1.2639609126235819E-31, 1.9287682878359229E-29, -1.8332237204928374E-27,
    1.2092531131064511E-25, -5.8236835135326278E-24, 2.0915581782354698E-22,
    -5.5964099612773872E-21, 1.0833579869797173E-19, -1.3736666335311385E-18,
    6.6209633655847283E-18, 1.4362053626673917E-16, -4.0159095765450877E-15,
    5.320276578988179E-14, -4.5399145021925304E-13, 2.6343951113716903E-12,
    -1.0426603808524378E-11, 2.7378813158203465E-11, -2.4213032965198892E-11,
    -6.43589148489966E-11, 8.7111108876109732E-11, -1.58880825805031E-8,
    1.2049379324305816E-35, -4.3610770108214582E-33, 7.4936434757448969E-31,
    -8.1105245364317889E-29, 6.1705088386370215E-27, -3.480752271664829E-25,
    1.4948191338667704E-23, -4.9368146563727049E-22, 1.2499110582545291E-20,
    -2.3793207120554828E-19, 3.2322327482741956E-18, -2.6498507726404211E-17,
    7.8731033015748051E-18, 3.2775331491296092E-15, -5.1807698267687295E-14,
    4.62732644627914E-13, -2.7239785524170987E-12, 1.0896716883650769E-11,
    -1.8645986337651637E-11, 2.5459617591435155E-12, -1.3347654837468073E-8,
    1.3161132276731047E-7, -1.3227534741608429E-6, -9.7984625010885519E-38,
    3.2900432333335651E-35, -4.4581754057254838E-33, 2.5824817729473294E-31,
    5.2049615357860253E-30, -2.1583876518311414E-27, 1.9476950757610683E-25,
    -1.0716316264212252E-23, 4.1440657240625748E-22, -1.1817624319451798E-20,
    2.5249339155046378E-19, -4.0233948389965105E-18, 4.64169135391771E-17,
    -3.5476759515651092E-16, 1.1999262837080123E-15, 8.516412269170767E-15,
    -1.527199343162684E-13, 1.1449867637138848E-12, -3.6599461401055181E-12,
    -4.6103940452468584E-11, -4.7424213964325014E-9, 1.4095535848735113E-8,
    1.1415162393763462E-5, -0.00011904761791914855, -7.7487127476207258E-39,
    3.1576790378728681E-36, -5.9250135047007422E-34, 6.7643789484475193E-32,
    -5.220570875188387E-30, 2.8506788574160792E-28, -1.1098370767710674E-26,
    2.9468645436878283E-25, -4.2328657438375513E-24, -3.3901276335768838E-23,
    3.8407990599986091E-21, -1.1933448342985106E-19, 2.3702576054378613E-18,
    -3.3709086299905129E-17, 3.5240422748635714E-16, -2.688297081936284E-15,
    1.4426938768292247E-14, -4.5785087028675909E-14, 1.6710103243486247E-14,
    -1.1024143067873009E-11, -3.3079062392811025E-10, 2.8376658214791753E-8,
    2.8265347449301076E-6, 3.9682541488440042E-5, -0.016666666666889381,
    -8.6841596356231729E-42, 3.1939131296905081E-39, -4.8490390875687847E-37,
    3.2729122440862841E-35, 5.3980586162289553E-34, -3.3686936226391223E-31,
    3.7197707807256541E-29, -2.5380412938111731E-27, 1.2494404817163045E-25,
    -4.6966036280739172E-24, 1.3852307187625331E-22, -3.2509821682467773E-21,
    6.1100085267801761E-20, -9.20594856358596E-19, 1.1081925404564449E-17,
    -1.0575868027372313E-16, 7.920139233623936E-16, -4.5514965597202215E-15,
    1.3296256931854534E-14, -3.345171633728989E-13, 1.7101904098836834E-11,
    2.4300392651460408E-9, 4.6155748216027864E-8, -1.5460729722609369E-5,
    -0.00238095238099261, 1.0000000000000047 };

  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *tmp_0;
  emxArray_real_T_Motion_Planni_T *tmp_1;
  Motion_Planning_B.v_size_n = *x_size;
  Motion_Planning_B.loop_ub_gu = *x_size;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
    Motion_Planning_B.v_data_px[Motion_Planning_B.i16] =
      x_data[Motion_Planning_B.i16] + y_data[Motion_Planning_B.i16];
  }

  Motion_Planning_B.n_a = 351;
  Motion_Planning_B.b_idx_0_a = static_cast<int8_T>(*x_size);
  Motion_Planning_B.x_size_c = *x_size;
  Motion_Planning_B.loop_ub_gu = *x_size;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
    Motion_Planning_B.x_data_p[Motion_Planning_B.i16] =
      x_data[Motion_Planning_B.i16] - y_data[Motion_Planning_B.i16];
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_emxInit_real_T(&tmp_0, 2);
  Motion_Planning_B.x_data_pr.data = &Motion_Planning_B.x_data_p[0];
  Motion_Planning_B.x_data_pr.size = &Motion_Planning_B.x_size_c;
  Motion_Planning_B.x_data_pr.allocatedSize = 99;
  Motion_Planning_B.x_data_pr.numDimensions = 1;
  Motion_Planning_B.x_data_pr.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.x_data_pr, tmp);
  Motion_Planning_repmat(tmp->data, tmp->size,
    Motion_Planning_B.varargin_2_data_c, Motion_Planning_B.varargin_2_size_j);
  if (static_cast<int8_T>(*x_size) != 0) {
    Motion_Planning_B.loop_ub_gu = static_cast<int8_T>(*x_size);
  } else if (Motion_Planning_B.varargin_2_size_j[0] != 0) {
    Motion_Planning_B.loop_ub_gu = Motion_Planning_B.varargin_2_size_j[0];
  } else {
    Motion_Planning_B.loop_ub_gu = 0;
  }

  if (Motion_Planning_B.loop_ub_gu == 0) {
    Motion_Planning_B.b_result_m = 1;
    Motion_Planning_B.result_idx_1_d = 25;
  } else {
    Motion_Planning_B.b_result_m = (static_cast<int8_T>(*x_size) != 0);
    if (Motion_Planning_B.varargin_2_size_j[0] != 0) {
      Motion_Planning_B.result_idx_1_d = 25;
    } else {
      Motion_Planning_B.result_idx_1_d = 0;
    }
  }

  Motion_Planning_B.i16 = tmp_0->size[0] * tmp_0->size[1];
  tmp_0->size[0] = Motion_Planning_B.loop_ub_gu;
  tmp_0->size[1] = Motion_Planning_B.b_result_m +
    Motion_Planning_B.result_idx_1_d;
  Motion_emxEnsureCapacity_real_T(tmp_0, Motion_Planning_B.i16);
  Motion_Planning_B.b_result_m *= Motion_Planning_B.loop_ub_gu;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.b_result_m; Motion_Planning_B.i16++) {
    tmp_0->data[Motion_Planning_B.i16] = 1.0;
  }

  Motion_Planning_B.loop_ub_gu *= Motion_Planning_B.result_idx_1_d;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
    tmp_0->data[Motion_Planning_B.i16 + Motion_Planning_B.b_result_m] =
      Motion_Planning_B.varargin_2_data_c[Motion_Planning_B.i16];
  }

  Motion_Planning_emxInit_real_T(&tmp_1, 2);
  Motion_Planning_useConstantDim(tmp_0->data, tmp_0->size,
    Motion_Planning_B.b_x_data_c, Motion_Planning_B.b_x_size_k);
  Motion_Planning_B.v_data_d.data = &Motion_Planning_B.v_data_px[0];
  Motion_Planning_B.v_data_d.size = &Motion_Planning_B.v_size_n;
  Motion_Planning_B.v_data_d.allocatedSize = 99;
  Motion_Planning_B.v_data_d.numDimensions = 1;
  Motion_Planning_B.v_data_d.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.v_data_d, tmp);
  Motion_Planning_repmat(tmp->data, tmp->size,
    Motion_Planning_B.varargin_2_data_c, Motion_Planning_B.varargin_2_size_j);
  if (static_cast<int8_T>(*x_size) != 0) {
    Motion_Planning_B.loop_ub_gu = static_cast<int8_T>(*x_size);
  } else if (Motion_Planning_B.varargin_2_size_j[0] != 0) {
    Motion_Planning_B.loop_ub_gu = Motion_Planning_B.varargin_2_size_j[0];
  } else {
    Motion_Planning_B.loop_ub_gu = 0;
  }

  if (Motion_Planning_B.loop_ub_gu == 0) {
    Motion_Planning_B.b_result_m = 1;
    Motion_Planning_B.result_idx_1_d = 25;
  } else {
    Motion_Planning_B.b_result_m = (static_cast<int8_T>(*x_size) != 0);
    if (Motion_Planning_B.varargin_2_size_j[0] != 0) {
      Motion_Planning_B.result_idx_1_d = 25;
    } else {
      Motion_Planning_B.result_idx_1_d = 0;
    }
  }

  Motion_Planning_B.i16 = tmp_1->size[0] * tmp_1->size[1];
  tmp_1->size[0] = Motion_Planning_B.loop_ub_gu;
  tmp_1->size[1] = Motion_Planning_B.b_result_m +
    Motion_Planning_B.result_idx_1_d;
  Motion_emxEnsureCapacity_real_T(tmp_1, Motion_Planning_B.i16);
  Motion_Planning_B.b_result_m *= Motion_Planning_B.loop_ub_gu;
  Motion_Planning_emxFree_real_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.b_result_m; Motion_Planning_B.i16++) {
    tmp_1->data[Motion_Planning_B.i16] = 1.0;
  }

  Motion_Planning_B.loop_ub_gu *= Motion_Planning_B.result_idx_1_d;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
    tmp_1->data[Motion_Planning_B.i16 + Motion_Planning_B.b_result_m] =
      Motion_Planning_B.varargin_2_data_c[Motion_Planning_B.i16];
  }

  Motion_Planning_useConstantDim(tmp_1->data, tmp_1->size,
    Motion_Planning_B.c_x_data_k, Motion_Planning_B.varargin_2_size_j);
  Motion_Planning_B.loop_ub_gu = static_cast<int8_T>(*x_size);
  Motion_Planning_emxFree_real_T(&tmp_1);
  if (0 <= Motion_Planning_B.loop_ub_gu - 1) {
    memset(&a_data[0], 0, Motion_Planning_B.loop_ub_gu * sizeof(real_T));
  }

  Motion_Planning_B.i_c = 0.0;
  Motion_Planning_B.j_f = 0.0;
  while (Motion_Planning_B.n_a > 0) {
    Motion_Planning_B.c_n = c[Motion_Planning_B.n_a - 1];
    Motion_Planning_B.loop_ub_gu = Motion_Planning_B.b_idx_0_a;
    for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
         Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
      a_data[Motion_Planning_B.i16] += Motion_Planning_B.b_x_data_c[(
        static_cast<int32_T>(Motion_Planning_B.i_c + 1.0) - 1) *
        Motion_Planning_B.b_x_size_k[0] + Motion_Planning_B.i16] *
        Motion_Planning_B.c_n * Motion_Planning_B.c_x_data_k[(static_cast<
        int32_T>(Motion_Planning_B.j_f + 1.0) - 1) *
        Motion_Planning_B.varargin_2_size_j[0] + Motion_Planning_B.i16];
    }

    Motion_Planning_B.j_f++;
    if (Motion_Planning_B.i_c + Motion_Planning_B.j_f > 25.0) {
      Motion_Planning_B.i_c++;
      Motion_Planning_B.j_f = 0.0;
    }

    Motion_Planning_B.n_a--;
  }

  *a_size = Motion_Planning_B.v_size_n;
  Motion_Planning_B.loop_ub_gu = Motion_Planning_B.v_size_n;
  for (Motion_Planning_B.i16 = 0; Motion_Planning_B.i16 <
       Motion_Planning_B.loop_ub_gu; Motion_Planning_B.i16++) {
    Motion_Planning_B.i_c = 3.0 *
      Motion_Planning_B.v_data_px[Motion_Planning_B.i16] *
      a_data[Motion_Planning_B.i16];
    a_data[Motion_Planning_B.i16] = Motion_Planning_B.i_c;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelg1_p(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  creal_T z_data[], int32_T *z_size)
{
  emxArray_creal_T_Motion_Plann_T *j;
  emxArray_int32_T_Motion_Plann_T *b_i_tmp;
  emxArray_int32_T_Motion_Plann_T *tmp;
  emxArray_real_T_Motion_Planni_T *i;
  emxArray_real_T_Motion_Planni_T *i_0;
  *z_size = static_cast<int8_T>(*a_size);
  Motion_Planning_B.loop_ub_jk = static_cast<int8_T>(*a_size);
  if (0 <= Motion_Planning_B.loop_ub_jk - 1) {
    memset(&z_data[0], 0, Motion_Planning_B.loop_ub_jk * sizeof(creal_T));
  }

  Motion_Planning_B.d_size_i = *d_size;
  Motion_Planning_B.loop_ub_jk = *d_size;
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.d_data_m[Motion_Planning_B.i9] =
      d_data[Motion_Planning_B.i9] - a_data[Motion_Planning_B.i9];
  }

  Motion_Planning_emxInit_real_T(&i, 1);
  Motion_Planning_emxInit_real_T(&i_0, 1);
  Motion_Planning_B.d_data_n3.data = &Motion_Planning_B.d_data_m[0];
  Motion_Planning_B.d_data_n3.size = &Motion_Planning_B.d_size_i;
  Motion_Planning_B.d_data_n3.allocatedSize = 99;
  Motion_Planning_B.d_data_n3.numDimensions = 1;
  Motion_Planning_B.d_data_n3.canFreeData = false;
  Motion_Planning_power(&Motion_Planning_B.d_data_n3, i);
  Motion_Planning_B.i9 = i_0->size[0];
  i_0->size[0] = i->size[0];
  Motion_emxEnsureCapacity_real_T(i_0, Motion_Planning_B.i9);
  Motion_Planning_B.loop_ub_jk = i->size[0];
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    i_0->data[Motion_Planning_B.i9] = i->data[Motion_Planning_B.i9] / (4.0 *
      a_data[Motion_Planning_B.i9]);
  }

  Motion_Planning_abs_d(i_0, i);
  Motion_Planning_B.criteria_size_e = i->size[0];
  Motion_Planning_B.loop_ub_jk = i->size[0];
  Motion_Planning_emxFree_real_T(&i_0);
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.criteria_data_a[Motion_Planning_B.i9] = (i->
      data[Motion_Planning_B.i9] < 628.31853071795865);
  }

  Motion_Planning_emxInit_int32_T(&tmp, 1);
  Motion_Planning_B.criteria_data_o.data = &Motion_Planning_B.criteria_data_a[0];
  Motion_Planning_B.criteria_data_o.size = &Motion_Planning_B.criteria_size_e;
  Motion_Planning_B.criteria_data_o.allocatedSize = 99;
  Motion_Planning_B.criteria_data_o.numDimensions = 1;
  Motion_Planning_B.criteria_data_o.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_o, tmp);
  Motion_Planning_B.i9 = i->size[0];
  i->size[0] = tmp->size[0];
  Motion_emxEnsureCapacity_real_T(i, Motion_Planning_B.i9);
  Motion_Planning_B.loop_ub_jk = tmp->size[0];
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    i->data[Motion_Planning_B.i9] = tmp->data[Motion_Planning_B.i9];
  }

  Motion_Planning_B.criteria_size_n = Motion_Planning_B.criteria_size_e;
  Motion_Planning_B.loop_ub_jk = Motion_Planning_B.criteria_size_e;
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.criteria_data_k[Motion_Planning_B.i9] =
      !Motion_Planning_B.criteria_data_a[Motion_Planning_B.i9];
  }

  Motion_Planning_emxInit_int32_T(&b_i_tmp, 1);
  Motion_Planning_B.criteria_data_gg.data = &Motion_Planning_B.criteria_data_k[0];
  Motion_Planning_B.criteria_data_gg.size = &Motion_Planning_B.criteria_size_n;
  Motion_Planning_B.criteria_data_gg.allocatedSize = 99;
  Motion_Planning_B.criteria_data_gg.numDimensions = 1;
  Motion_Planning_B.criteria_data_gg.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_gg, b_i_tmp);
  Motion_Planning_B.d_size_ie = *d_size;
  Motion_Planning_B.loop_ub_jk = *d_size;
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.criteria_data_k[Motion_Planning_B.i9] =
      ((d_data[Motion_Planning_B.i9] == 0.0) && (a_data[Motion_Planning_B.i9] ==
        0.0));
  }

  Motion_Planning_B.d_data_c.data = &Motion_Planning_B.criteria_data_k[0];
  Motion_Planning_B.d_data_c.size = &Motion_Planning_B.d_size_ie;
  Motion_Planning_B.d_data_c.allocatedSize = 99;
  Motion_Planning_B.d_data_c.numDimensions = 1;
  Motion_Planning_B.d_data_c.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.d_data_c, tmp);
  Motion_Planning_B.izero_size_idx_0 = tmp->size[0];
  Motion_Planning_B.loop_ub_jk = tmp->size[0];
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.izero_data[Motion_Planning_B.i9] = tmp->
      data[Motion_Planning_B.i9];
  }

  if (i->size[0] != 0) {
    Motion_Planning_B.a_size_p = i->size[0];
    Motion_Planning_B.loop_ub_jk = i->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.a_data_m[Motion_Planning_B.i9] = a_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i9]) - 1];
    }

    Motion_Planning_B.d_size_og = i->size[0];
    Motion_Planning_B.loop_ub_jk = i->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.d_data_m[Motion_Planning_B.i9] = d_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i9]) - 1];
    }

    Motion_Planning_B.c_size_m = i->size[0];
    Motion_Planning_B.loop_ub_jk = i->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.c_data_h3[Motion_Planning_B.i9] = c_data
        [static_cast<int32_T>(i->data[Motion_Planning_B.i9]) - 1];
    }

    Motion_Planning_fresnelgLargea1(Motion_Planning_B.a_data_m,
      &Motion_Planning_B.a_size_p, Motion_Planning_B.d_data_m,
      &Motion_Planning_B.d_size_og, Motion_Planning_B.c_data_h3,
      &Motion_Planning_B.c_size_m, Motion_Planning_B.b_data_b,
      &Motion_Planning_B.d_size_i, Motion_Planning_B.e_data_ln,
      &Motion_Planning_B.criteria_size_n);
    Motion_Planning_B.criteria_data_m1.data =
      &Motion_Planning_B.criteria_data_a[0];
    Motion_Planning_B.criteria_data_m1.size = &Motion_Planning_B.criteria_size_e;
    Motion_Planning_B.criteria_data_m1.allocatedSize = 99;
    Motion_Planning_B.criteria_data_m1.numDimensions = 1;
    Motion_Planning_B.criteria_data_m1.canFreeData = false;
    Motion_Planning_eml_find(&Motion_Planning_B.criteria_data_m1, tmp);
    Motion_Planning_B.loop_ub_jk = Motion_Planning_B.d_size_i;
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      z_data[tmp->data[Motion_Planning_B.i9] - 1] =
        Motion_Planning_B.b_data_b[Motion_Planning_B.i9];
    }
  }

  Motion_Planning_emxFree_real_T(&i);
  if (b_i_tmp->size[0] != 0) {
    Motion_Planning_B.a_size_o = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_jk = b_i_tmp->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.a_data_m[Motion_Planning_B.i9] = a_data[b_i_tmp->
        data[Motion_Planning_B.i9] - 1];
    }

    Motion_Planning_B.d_size_g = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_jk = b_i_tmp->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.d_data_m[Motion_Planning_B.i9] = d_data[b_i_tmp->
        data[Motion_Planning_B.i9] - 1];
    }

    Motion_Planning_B.c_size_e = b_i_tmp->size[0];
    Motion_Planning_B.loop_ub_jk = b_i_tmp->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      Motion_Planning_B.c_data_h3[Motion_Planning_B.i9] = c_data[b_i_tmp->
        data[Motion_Planning_B.i9] - 1];
    }

    Motion_Planning_fresnelgSmalla1(Motion_Planning_B.a_data_m,
      &Motion_Planning_B.a_size_o, Motion_Planning_B.d_data_m,
      &Motion_Planning_B.d_size_g, Motion_Planning_B.c_data_h3,
      &Motion_Planning_B.c_size_e, Motion_Planning_B.b_data_b,
      &Motion_Planning_B.d_size_i, Motion_Planning_B.e_data_ln,
      &Motion_Planning_B.criteria_size_n);
    Motion_Planning_B.loop_ub_jk = Motion_Planning_B.d_size_i;
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      z_data[b_i_tmp->data[Motion_Planning_B.i9] - 1] =
        Motion_Planning_B.b_data_b[Motion_Planning_B.i9];
    }
  }

  Motion_Planning_emxFree_int32_T(&b_i_tmp);
  Motion_Planning_B.d_size_iz = *d_size;
  Motion_Planning_B.loop_ub_jk = *d_size;
  for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
       Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
    Motion_Planning_B.criteria_data_k[Motion_Planning_B.i9] =
      ((d_data[Motion_Planning_B.i9] == 0.0) && (a_data[Motion_Planning_B.i9] ==
        0.0));
  }

  Motion_Planning_B.d_data_cj.data = &Motion_Planning_B.criteria_data_k[0];
  Motion_Planning_B.d_data_cj.size = &Motion_Planning_B.d_size_iz;
  Motion_Planning_B.d_data_cj.allocatedSize = 99;
  Motion_Planning_B.d_data_cj.numDimensions = 1;
  Motion_Planning_B.d_data_cj.canFreeData = false;
  Motion_Planning_eml_find(&Motion_Planning_B.d_data_cj, tmp);
  if (tmp->size[0] != 0) {
    Motion_Planning_emxInit_creal_T(&j, 1);
    Motion_Planning_B.i9 = j->size[0];
    j->size[0] = Motion_Planning_B.izero_size_idx_0;
    Motio_emxEnsureCapacity_creal_T(j, Motion_Planning_B.i9);
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.izero_size_idx_0; Motion_Planning_B.i9++) {
      Motion_Planning_B.d5 =
        c_data[Motion_Planning_B.izero_data[Motion_Planning_B.i9] - 1];
      j->data[Motion_Planning_B.i9].re = Motion_Planning_B.d5 * 0.0;
      j->data[Motion_Planning_B.i9].im = Motion_Planning_B.d5;
    }

    Motion_Planning_exp(j);
    Motion_Planning_B.loop_ub_jk = j->size[0];
    for (Motion_Planning_B.i9 = 0; Motion_Planning_B.i9 <
         Motion_Planning_B.loop_ub_jk; Motion_Planning_B.i9++) {
      z_data[Motion_Planning_B.izero_data[Motion_Planning_B.i9] - 1] = j->
        data[Motion_Planning_B.i9];
    }

    Motion_Planning_emxFree_creal_T(&j);
  }

  Motion_Planning_emxFree_int32_T(&tmp);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Plannin_clothoidG1fit2_k(const creal_T z0_data[], const
  real_T theta0_data[], const int32_T *theta0_size, const creal_T z1_data[],
  const int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size)
{
  emxArray_creal_T_Motion_Plann_T *c;
  emxArray_real_T_Motion_Planni_T *b_z_tmp;
  Motion_Planning_B.z_size_jz = *z1_size;
  Motion_Planning_B.loop_ub_nk = *z1_size;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    Motion_Planning_B.z_data_b[Motion_Planning_B.i_p].re =
      z1_data[Motion_Planning_B.i_p].re - z0_data[Motion_Planning_B.i_p].re;
    Motion_Planning_B.z_data_b[Motion_Planning_B.i_p].im =
      z1_data[Motion_Planning_B.i_p].im - z0_data[Motion_Planning_B.i_p].im;
  }

  Motion_Planning_emxInit_creal_T(&c, 1);
  Motion_Planning_angle_n(Motion_Planning_B.z_data_b,
    &Motion_Planning_B.z_size_jz, Motion_Planning_B.phi_data_h,
    &Motion_Planning_B.phi_size_o);
  Motion_Planning_B.i_p = c->size[0];
  c->size[0] = *theta0_size;
  Motio_emxEnsureCapacity_creal_T(c, Motion_Planning_B.i_p);
  Motion_Planning_B.loop_ub_nk = *theta0_size;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    Motion_Planning_B.k1_data_a = theta0_data[Motion_Planning_B.i_p] -
      Motion_Planning_B.phi_data_h[Motion_Planning_B.i_p];
    c->data[Motion_Planning_B.i_p].re = Motion_Planning_B.k1_data_a * 0.0;
    c->data[Motion_Planning_B.i_p].im = Motion_Planning_B.k1_data_a;
  }

  Motion_Planning_exp(c);
  Motion_Planning_angle_n(c->data, c->size, Motion_Planning_B.phi0_data_l,
    &Motion_Planning_B.phi0_size_b);
  Motion_Planning_B.i_p = c->size[0];
  c->size[0] = *theta1_size;
  Motio_emxEnsureCapacity_creal_T(c, Motion_Planning_B.i_p);
  Motion_Planning_B.loop_ub_nk = *theta1_size;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    Motion_Planning_B.k1_data_a = theta1_data[Motion_Planning_B.i_p] -
      Motion_Planning_B.phi_data_h[Motion_Planning_B.i_p];
    c->data[Motion_Planning_B.i_p].re = Motion_Planning_B.k1_data_a * 0.0;
    c->data[Motion_Planning_B.i_p].im = Motion_Planning_B.k1_data_a;
  }

  Motion_Planning_exp(c);
  Motion_Planning_angle_n(c->data, c->size, Motion_Planning_B.phi_data_h,
    &Motion_Planning_B.phi_size_o);
  *k1_size = Motion_Planning_B.phi_size_o;
  Motion_Planning_B.loop_ub_nk = Motion_Planning_B.phi_size_o;
  Motion_Planning_emxFree_creal_T(&c);
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    k1_data[Motion_Planning_B.i_p] =
      Motion_Planning_B.phi_data_h[Motion_Planning_B.i_p] -
      Motion_Planning_B.phi0_data_l[Motion_Planning_B.i_p];
  }

  Motion_Planning_emxInit_real_T(&b_z_tmp, 1);
  Motion_Planning_fetchA(Motion_Planning_B.phi0_data_l,
    &Motion_Planning_B.phi0_size_b, Motion_Planning_B.phi_data_h,
    Motion_Planning_B.a_data_h, &Motion_Planning_B.phi_size_o);
  Motion_Planning_fresnelg1_p(Motion_Planning_B.a_data_h,
    &Motion_Planning_B.phi_size_o, k1_data, k1_size,
    Motion_Planning_B.phi0_data_l, Motion_Planning_B.f_data_n,
    &Motion_Planning_B.phi0_size_b);
  Motion_Planning_abs_dw(Motion_Planning_B.z_data_b,
    &Motion_Planning_B.z_size_jz, Motion_Planning_B.phi_data_h,
    &Motion_Planning_B.phi_size_o);
  Motion_Planning_B.i_p = b_z_tmp->size[0];
  b_z_tmp->size[0] = Motion_Planning_B.phi_size_o;
  Motion_emxEnsureCapacity_real_T(b_z_tmp, Motion_Planning_B.i_p);
  Motion_Planning_B.loop_ub_nk = Motion_Planning_B.phi_size_o;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    b_z_tmp->data[Motion_Planning_B.i_p] =
      Motion_Planning_B.phi_data_h[Motion_Planning_B.i_p] /
      Motion_Planning_B.f_data_n[Motion_Planning_B.i_p].re;
  }

  *l_size = b_z_tmp->size[0];
  Motion_Planning_B.loop_ub_nk = b_z_tmp->size[0];
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    l_data[Motion_Planning_B.i_p] = b_z_tmp->data[Motion_Planning_B.i_p];
  }

  *k0_size = *k1_size;
  Motion_Planning_B.loop_ub_nk = *k1_size;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    k0_data[Motion_Planning_B.i_p] = (k1_data[Motion_Planning_B.i_p] -
      Motion_Planning_B.a_data_h[Motion_Planning_B.i_p]) / b_z_tmp->
      data[Motion_Planning_B.i_p];
  }

  Motion_Planning_B.loop_ub_nk = *k1_size;
  for (Motion_Planning_B.i_p = 0; Motion_Planning_B.i_p <
       Motion_Planning_B.loop_ub_nk; Motion_Planning_B.i_p++) {
    Motion_Planning_B.k1_data_a = (k1_data[Motion_Planning_B.i_p] +
      Motion_Planning_B.a_data_h[Motion_Planning_B.i_p]) / b_z_tmp->
      data[Motion_Planning_B.i_p];
    k1_data[Motion_Planning_B.i_p] = Motion_Planning_B.k1_data_a;
  }

  Motion_Planning_B.i_p = 0;
  while (Motion_Planning_B.i_p <= b_z_tmp->size[0] - 1) {
    if (b_z_tmp->data[Motion_Planning_B.i_p] == 0.0) {
      k0_data[Motion_Planning_B.i_p] = 0.0;
    }

    Motion_Planning_B.i_p++;
  }

  Motion_Planning_B.i_p = 0;
  while (Motion_Planning_B.i_p <= b_z_tmp->size[0] - 1) {
    if (b_z_tmp->data[Motion_Planning_B.i_p] == 0.0) {
      k1_data[Motion_Planning_B.i_p] = 0.0;
    }

    Motion_Planning_B.i_p++;
  }

  Motion_Planning_emxFree_real_T(&b_z_tmp);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_repmat_mm(const emxArray_creal_T_Motion_Plann_T *a,
  emxArray_creal_T_Motion_Plann_T *b)
{
  int32_T ibtile;
  int32_T k;
  int32_T nrows;
  int32_T outsize_idx_0;
  outsize_idx_0 = a->size[0];
  nrows = b->size[0] * b->size[1];
  b->size[0] = outsize_idx_0;
  b->size[1] = 5;
  Motio_emxEnsureCapacity_creal_T(b, nrows);
  nrows = a->size[0];
  for (outsize_idx_0 = 0; outsize_idx_0 < 5; outsize_idx_0++) {
    ibtile = outsize_idx_0 * nrows;
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = a->data[k];
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_bsxfun_g(const emxArray_creal_T_Motion_Plann_T *a,
  emxArray_creal_T_Motion_Plann_T *c)
{
  Motion_Planning_B.csz_idx_0 = a->size[0];
  Motion_Planning_B.szc = c->size[0] * c->size[1];
  c->size[0] = Motion_Planning_B.csz_idx_0;
  c->size[1] = 5;
  Motio_emxEnsureCapacity_creal_T(c, Motion_Planning_B.szc);
  for (Motion_Planning_B.csz_idx_0 = 0; Motion_Planning_B.csz_idx_0 < 5;
       Motion_Planning_B.csz_idx_0++) {
    Motion_Planning_B.szc = c->size[0];
    Motion_Planning_B.acoef_o = (a->size[0] != 1);
    Motion_Planning_B.b_k_o = 0;
    while (Motion_Planning_B.b_k_o <= Motion_Planning_B.szc - 1) {
      Motion_Planning_B.ar_o = a->data[Motion_Planning_B.acoef_o *
        Motion_Planning_B.b_k_o + a->size[0] * Motion_Planning_B.csz_idx_0].re;
      Motion_Planning_B.ai_l = a->data[Motion_Planning_B.acoef_o *
        Motion_Planning_B.b_k_o + a->size[0] * Motion_Planning_B.csz_idx_0].im;
      if (Motion_Planning_B.ai_l == 0.0) {
        Motion_Planning_B.ar_o /= static_cast<real_T>
          (Motion_Planning_B.csz_idx_0 + 1);
        Motion_Planning_B.ai_l = 0.0;
      } else if (Motion_Planning_B.ar_o == 0.0) {
        Motion_Planning_B.ar_o = 0.0;
        Motion_Planning_B.ai_l /= static_cast<real_T>
          (Motion_Planning_B.csz_idx_0 + 1);
      } else {
        Motion_Planning_B.ar_o /= static_cast<real_T>
          (Motion_Planning_B.csz_idx_0 + 1);
        Motion_Planning_B.ai_l /= static_cast<real_T>
          (Motion_Planning_B.csz_idx_0 + 1);
      }

      c->data[Motion_Planning_B.b_k_o + c->size[0] * Motion_Planning_B.csz_idx_0]
        .re = Motion_Planning_B.ar_o;
      c->data[Motion_Planning_B.b_k_o + c->size[0] * Motion_Planning_B.csz_idx_0]
        .im = Motion_Planning_B.ai_l;
      Motion_Planning_B.b_k_o++;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Plannin_useConstantDim_j(emxArray_creal_T_Motion_Plann_T
  *varargin_2)
{
  real_T im;
  real_T re;
  int32_T b;
  int32_T b_k;
  b = varargin_2->size[0];
  for (b_k = 0; b_k < b; b_k++) {
    re = varargin_2->data[b_k + varargin_2->size[0]].re * varargin_2->data[b_k].
      re - varargin_2->data[b_k + varargin_2->size[0]].im * varargin_2->data[b_k]
      .im;
    im = varargin_2->data[b_k + varargin_2->size[0]].im * varargin_2->data[b_k].
      re + varargin_2->data[b_k + varargin_2->size[0]].re * varargin_2->data[b_k]
      .im;
    varargin_2->data[b_k + varargin_2->size[0]].re = re;
    varargin_2->data[b_k + varargin_2->size[0]].im = im;
  }

  b = varargin_2->size[0];
  for (b_k = 0; b_k < b; b_k++) {
    re = varargin_2->data[b_k + (varargin_2->size[0] << 1)].re *
      varargin_2->data[b_k + varargin_2->size[0]].re - varargin_2->data[b_k +
      (varargin_2->size[0] << 1)].im * varargin_2->data[b_k + varargin_2->size[0]]
      .im;
    im = varargin_2->data[b_k + (varargin_2->size[0] << 1)].im *
      varargin_2->data[b_k + varargin_2->size[0]].re + varargin_2->data[b_k +
      (varargin_2->size[0] << 1)].re * varargin_2->data[b_k + varargin_2->size[0]]
      .im;
    varargin_2->data[b_k + (varargin_2->size[0] << 1)].re = re;
    varargin_2->data[b_k + (varargin_2->size[0] << 1)].im = im;
  }

  b = varargin_2->size[0];
  for (b_k = 0; b_k < b; b_k++) {
    re = varargin_2->data[b_k + varargin_2->size[0] * 3].re * varargin_2->data
      [(varargin_2->size[0] << 1) + b_k].re - varargin_2->data[b_k +
      varargin_2->size[0] * 3].im * varargin_2->data[(varargin_2->size[0] << 1)
      + b_k].im;
    im = varargin_2->data[b_k + varargin_2->size[0] * 3].im * varargin_2->data
      [(varargin_2->size[0] << 1) + b_k].re + varargin_2->data[b_k +
      varargin_2->size[0] * 3].re * varargin_2->data[(varargin_2->size[0] << 1)
      + b_k].im;
    varargin_2->data[b_k + varargin_2->size[0] * 3].re = re;
    varargin_2->data[b_k + varargin_2->size[0] * 3].im = im;
  }

  b = varargin_2->size[0];
  for (b_k = 0; b_k < b; b_k++) {
    re = varargin_2->data[b_k + (varargin_2->size[0] << 2)].re *
      varargin_2->data[varargin_2->size[0] * 3 + b_k].re - varargin_2->data[b_k
      + (varargin_2->size[0] << 2)].im * varargin_2->data[varargin_2->size[0] *
      3 + b_k].im;
    im = varargin_2->data[b_k + (varargin_2->size[0] << 2)].im *
      varargin_2->data[varargin_2->size[0] * 3 + b_k].re + varargin_2->data[b_k
      + (varargin_2->size[0] << 2)].re * varargin_2->data[varargin_2->size[0] *
      3 + b_k].im;
    varargin_2->data[b_k + (varargin_2->size[0] << 2)].re = re;
    varargin_2->data[b_k + (varargin_2->size[0] << 2)].im = im;
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelgzero(const emxArray_real_T_Motion_Planni_T
  *x, const emxArray_real_T_Motion_Planni_T *dk, const
  emxArray_real_T_Motion_Planni_T *k, const emxArray_real_T_Motion_Planni_T
  *theta, emxArray_creal_T_Motion_Plann_T *z)
{
  emxArray_creal_T_Motion_Plann_T *b_x;
  emxArray_creal_T_Motion_Plann_T *c_x;
  emxArray_creal_T_Motion_Plann_T *d;
  emxArray_creal_T_Motion_Plann_T *e;
  emxArray_creal_T_Motion_Plann_T *f;
  emxArray_creal_T_Motion_Plann_T *tmp_0;
  emxArray_real_T_Motion_Planni_T *tmp;
  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_emxInit_creal_T(&e, 1);
  Motion_Planning_power(x, tmp);
  Motion_Planning_B.i20 = e->size[0];
  e->size[0] = dk->size[0];
  Motio_emxEnsureCapacity_creal_T(e, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = dk->size[0];
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    Motion_Planning_B.e_re = dk->data[Motion_Planning_B.i20] * 0.0;
    Motion_Planning_B.e_im = dk->data[Motion_Planning_B.i20] * 0.5;
    e->data[Motion_Planning_B.i20].re = tmp->data[Motion_Planning_B.i20] *
      Motion_Planning_B.e_re;
    e->data[Motion_Planning_B.i20].im = tmp->data[Motion_Planning_B.i20] *
      Motion_Planning_B.e_im;
  }

  Motion_Planning_emxFree_real_T(&tmp);
  Motion_Planning_emxInit_creal_T(&b_x, 2);
  Motion_Planning_emxInit_creal_T(&tmp_0, 2);
  Motion_Planning_emxInit_creal_T(&d, 1);
  Motion_Planning_repmat_mm(e, tmp_0);
  Motion_Planning_bsxfun_g(tmp_0, b_x);
  Motion_Plannin_useConstantDim_j(b_x);
  Motion_Planning_B.i20 = d->size[0];
  d->size[0] = k->size[0];
  Motio_emxEnsureCapacity_creal_T(d, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = k->size[0];
  Motion_Planning_emxFree_creal_T(&e);
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    Motion_Planning_B.e_re = k->data[Motion_Planning_B.i20] * 0.0;
    Motion_Planning_B.e_im = k->data[Motion_Planning_B.i20];
    d->data[Motion_Planning_B.i20].re = x->data[Motion_Planning_B.i20] *
      Motion_Planning_B.e_re;
    d->data[Motion_Planning_B.i20].im = x->data[Motion_Planning_B.i20] *
      Motion_Planning_B.e_im;
  }

  Motion_Planning_emxInit_creal_T(&c_x, 2);
  Motion_Planning_repmat_mm(d, tmp_0);
  Motion_Planning_bsxfun_g(tmp_0, c_x);
  Motion_Plannin_useConstantDim_j(c_x);
  Motion_Planning_B.i20 = z->size[0];
  z->size[0] = x->size[0];
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = x->size[0];
  Motion_Planning_emxFree_creal_T(&d);
  Motion_Planning_emxFree_creal_T(&tmp_0);
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    z->data[Motion_Planning_B.i20].re = 1.0;
    z->data[Motion_Planning_B.i20].im = 0.0;
  }

  for (Motion_Planning_B.i_py = 0; Motion_Planning_B.i_py < 5;
       Motion_Planning_B.i_py++) {
    Motion_Planning_B.y_o = ((Motion_Planning_B.i_py + 1) << 1) + 1;
    Motion_Planning_B.i20 = z->size[0];
    Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
    Motion_Planning_B.loop_ub_cm = z->size[0];
    for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
         Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
      Motion_Planning_B.e_im = b_x->data[b_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].re;
      Motion_Planning_B.e_re = b_x->data[b_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].im;
      if (Motion_Planning_B.e_re == 0.0) {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.y_o);
        Motion_Planning_B.e_re = 0.0;
      } else if (Motion_Planning_B.e_im == 0.0) {
        Motion_Planning_B.e_im = 0.0;
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.y_o);
      } else {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.y_o);
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.y_o);
      }

      z->data[Motion_Planning_B.i20].re += Motion_Planning_B.e_im;
      z->data[Motion_Planning_B.i20].im += Motion_Planning_B.e_re;
    }
  }

  for (Motion_Planning_B.i_py = 0; Motion_Planning_B.i_py < 5;
       Motion_Planning_B.i_py++) {
    Motion_Planning_B.i20 = z->size[0];
    Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
    Motion_Planning_B.loop_ub_cm = z->size[0];
    for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
         Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
      Motion_Planning_B.e_im = c_x->data[c_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].re;
      Motion_Planning_B.e_re = c_x->data[c_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].im;
      if (Motion_Planning_B.e_re == 0.0) {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.i_py + 2);
        Motion_Planning_B.e_re = 0.0;
      } else if (Motion_Planning_B.e_im == 0.0) {
        Motion_Planning_B.e_im = 0.0;
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.i_py + 2);
      } else {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.i_py + 2);
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.i_py + 2);
      }

      z->data[Motion_Planning_B.i20].re += Motion_Planning_B.e_im;
      z->data[Motion_Planning_B.i20].im += Motion_Planning_B.e_re;
    }
  }

  Motion_Planning_B.i_py = 0;
  while (Motion_Planning_B.i_py <= 2) {
    Motion_Planning_B.i20 = z->size[0];
    Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
    Motion_Planning_B.loop_ub_cm = z->size[0];
    for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
         Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
      Motion_Planning_B.e_im = c_x->data[c_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].re * b_x->data[Motion_Planning_B.i20].re -
        c_x->data[c_x->size[0] * Motion_Planning_B.i_py + Motion_Planning_B.i20]
        .im * b_x->data[Motion_Planning_B.i20].im;
      Motion_Planning_B.e_re = c_x->data[c_x->size[0] * Motion_Planning_B.i_py +
        Motion_Planning_B.i20].im * b_x->data[Motion_Planning_B.i20].re +
        c_x->data[c_x->size[0] * Motion_Planning_B.i_py + Motion_Planning_B.i20]
        .re * b_x->data[Motion_Planning_B.i20].im;
      if (Motion_Planning_B.e_re == 0.0) {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.i_py + 4);
        Motion_Planning_B.e_re = 0.0;
      } else if (Motion_Planning_B.e_im == 0.0) {
        Motion_Planning_B.e_im = 0.0;
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.i_py + 4);
      } else {
        Motion_Planning_B.e_im /= static_cast<real_T>(Motion_Planning_B.i_py + 4);
        Motion_Planning_B.e_re /= static_cast<real_T>(Motion_Planning_B.i_py + 4);
      }

      z->data[Motion_Planning_B.i20].re += Motion_Planning_B.e_im;
      z->data[Motion_Planning_B.i20].im += Motion_Planning_B.e_re;
    }

    Motion_Planning_B.i_py++;
  }

  Motion_Planning_B.i20 = z->size[0];
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = z->size[0];
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    Motion_Planning_B.e_im = b_x->data[Motion_Planning_B.i20 + b_x->size[0]].re *
      c_x->data[Motion_Planning_B.i20].re - b_x->data[Motion_Planning_B.i20 +
      b_x->size[0]].im * c_x->data[Motion_Planning_B.i20].im;
    Motion_Planning_B.e_re = b_x->data[Motion_Planning_B.i20 + b_x->size[0]].re *
      c_x->data[Motion_Planning_B.i20].im + b_x->data[Motion_Planning_B.i20 +
      b_x->size[0]].im * c_x->data[Motion_Planning_B.i20].re;
    if (Motion_Planning_B.e_re == 0.0) {
      Motion_Planning_B.e_im /= 6.0;
      Motion_Planning_B.e_re = 0.0;
    } else if (Motion_Planning_B.e_im == 0.0) {
      Motion_Planning_B.e_im = 0.0;
      Motion_Planning_B.e_re /= 6.0;
    } else {
      Motion_Planning_B.e_im /= 6.0;
      Motion_Planning_B.e_re /= 6.0;
    }

    z->data[Motion_Planning_B.i20].re += Motion_Planning_B.e_im;
    z->data[Motion_Planning_B.i20].im += Motion_Planning_B.e_re;
  }

  Motion_Planning_emxFree_creal_T(&c_x);
  Motion_Planning_emxFree_creal_T(&b_x);
  Motion_Planning_emxInit_creal_T(&f, 1);
  Motion_Planning_B.i20 = f->size[0];
  f->size[0] = theta->size[0];
  Motio_emxEnsureCapacity_creal_T(f, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = theta->size[0];
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    f->data[Motion_Planning_B.i20].re = theta->data[Motion_Planning_B.i20] * 0.0;
    f->data[Motion_Planning_B.i20].im = theta->data[Motion_Planning_B.i20];
  }

  Motion_Planning_exp(f);
  Motion_Planning_B.i20 = z->size[0];
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.i20);
  Motion_Planning_B.loop_ub_cm = z->size[0];
  for (Motion_Planning_B.i20 = 0; Motion_Planning_B.i20 <
       Motion_Planning_B.loop_ub_cm; Motion_Planning_B.i20++) {
    Motion_Planning_B.e_im = x->data[Motion_Planning_B.i20] * z->
      data[Motion_Planning_B.i20].re;
    Motion_Planning_B.z_im = x->data[Motion_Planning_B.i20] * z->
      data[Motion_Planning_B.i20].im;
    Motion_Planning_B.e_re = Motion_Planning_B.e_im * f->
      data[Motion_Planning_B.i20].re - Motion_Planning_B.z_im * f->
      data[Motion_Planning_B.i20].im;
    Motion_Planning_B.e_im = Motion_Planning_B.e_im * f->
      data[Motion_Planning_B.i20].im + Motion_Planning_B.z_im * f->
      data[Motion_Planning_B.i20].re;
    z->data[Motion_Planning_B.i20].re = Motion_Planning_B.e_re;
    z->data[Motion_Planning_B.i20].im = Motion_Planning_B.e_im;
  }

  Motion_Planning_emxFree_creal_T(&f);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_fresnelg2(const emxArray_real_T_Motion_Planni_T *x,
  const emxArray_real_T_Motion_Planni_T *dk, const
  emxArray_real_T_Motion_Planni_T *k, const emxArray_real_T_Motion_Planni_T
  *theta, emxArray_creal_T_Motion_Plann_T *z)
{
  emxArray_boolean_T_Motion_Pla_T *thresh_0;
  emxArray_boolean_T_Motion_Pla_T *thresh_1;
  emxArray_boolean_T_Motion_Pla_T *thresh_2;
  emxArray_boolean_T_Motion_Pla_T *tmp;
  emxArray_creal_T_Motion_Plann_T *e;
  emxArray_creal_T_Motion_Plann_T *hidkxx;
  emxArray_creal_T_Motion_Plann_T *l;
  emxArray_creal_T_Motion_Plann_T *m2C;
  emxArray_creal_T_Motion_Plann_T *tmp_0;
  emxArray_creal_T_Motion_Plann_T *z0;
  emxArray_creal_T_Motion_Plann_T *z1;
  emxArray_int32_T_Motion_Plann_T *i;
  emxArray_int32_T_Motion_Plann_T *ilt;
  emxArray_int32_T_Motion_Plann_T *ism;
  emxArray_real_T_Motion_Planni_T *b_x;
  emxArray_real_T_Motion_Planni_T *dk_0;
  emxArray_real_T_Motion_Planni_T *igt;
  emxArray_real_T_Motion_Planni_T *j;
  emxArray_real_T_Motion_Planni_T *j_0;
  emxArray_real_T_Motion_Planni_T *j_1;
  emxArray_real_T_Motion_Planni_T *k_0;
  emxArray_real_T_Motion_Planni_T *k_1;
  emxArray_real_T_Motion_Planni_T *k_2;
  emxArray_real_T_Motion_Planni_T *theta_0;
  emxArray_real_T_Motion_Planni_T *thresh;
  emxArray_real_T_Motion_Planni_T *x_0;
  emxArray_real_T_Motion_Planni_T *y;
  Motion_Planning_emxInit_real_T(&thresh, 2);
  Motion_Planning_B.b_k_i = thresh->size[0] * thresh->size[1];
  thresh->size[0] = dk->size[0];
  thresh->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(thresh, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = dk->size[0] * dk->size[1] - 1;
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <=
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    thresh->data[Motion_Planning_B.b_k_i] = dk->data[Motion_Planning_B.b_k_i] /
      (k->data[Motion_Planning_B.b_k_i] * k->data[Motion_Planning_B.b_k_i]);
  }

  Motion_Planni_emxInit_boolean_T(&thresh_0, 2);
  Motion_Planning_B.b_k_i = thresh_0->size[0] * thresh_0->size[1];
  thresh_0->size[0] = thresh->size[0];
  thresh_0->size[1] = 1;
  Mot_emxEnsureCapacity_boolean_T(thresh_0, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = thresh->size[0] * thresh->size[1];
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    thresh_0->data[Motion_Planning_B.b_k_i] = (thresh->
      data[Motion_Planning_B.b_k_i] > 1.0E-6);
  }

  Motion_Planning_emxInit_real_T(&igt, 1);
  Motion_Planning_emxInit_int32_T(&ilt, 1);
  Motion_Planning_eml_find(thresh_0, ilt);
  Motion_Planning_B.b_k_i = igt->size[0];
  igt->size[0] = ilt->size[0];
  Motion_emxEnsureCapacity_real_T(igt, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = ilt->size[0];
  Motion_Planni_emxFree_boolean_T(&thresh_0);
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    igt->data[Motion_Planning_B.b_k_i] = ilt->data[Motion_Planning_B.b_k_i];
  }

  Motion_Planni_emxInit_boolean_T(&thresh_1, 2);
  Motion_Planning_B.b_k_i = thresh_1->size[0] * thresh_1->size[1];
  thresh_1->size[0] = thresh->size[0];
  thresh_1->size[1] = 1;
  Mot_emxEnsureCapacity_boolean_T(thresh_1, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = thresh->size[0] * thresh->size[1];
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    thresh_1->data[Motion_Planning_B.b_k_i] = (thresh->
      data[Motion_Planning_B.b_k_i] < -1.0E-6);
  }

  Motion_Planni_emxInit_boolean_T(&tmp, 2);
  Motion_Planning_eml_find(thresh_1, ilt);
  Motion_Planning_B.b_k_i = tmp->size[0] * tmp->size[1];
  tmp->size[0] = thresh->size[0];
  tmp->size[1] = 1;
  Mot_emxEnsureCapacity_boolean_T(tmp, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = thresh->size[0] * thresh->size[1];
  Motion_Planni_emxFree_boolean_T(&thresh_1);
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    tmp->data[Motion_Planning_B.b_k_i] = ((-1.0E-6 <= thresh->
      data[Motion_Planning_B.b_k_i]) && (thresh->data[Motion_Planning_B.b_k_i] <=
      1.0E-6));
  }

  Motion_Planning_emxInit_int32_T(&ism, 1);
  Motion_Planning_eml_find(tmp, ism);
  Motion_Planning_B.b_k_i = thresh->size[0] * thresh->size[1];
  thresh->size[0] = dk->size[0];
  thresh->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(thresh, Motion_Planning_B.b_k_i);
  Motion_Planning_B.b_k_i = 0;
  Motion_Planni_emxFree_boolean_T(&tmp);
  while (Motion_Planning_B.b_k_i <= dk->size[0] - 1) {
    thresh->data[Motion_Planning_B.b_k_i] = fabs(dk->
      data[Motion_Planning_B.b_k_i]);
    Motion_Planning_B.b_k_i++;
  }

  Motion_Planning_emxInit_real_T(&b_x, 1);
  Motion_Planning_B.b_k_i = b_x->size[0];
  b_x->size[0] = k->size[0];
  Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = k->size[0];
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    b_x->data[Motion_Planning_B.b_k_i] = k->data[Motion_Planning_B.b_k_i] *
      x->data[Motion_Planning_B.b_k_i];
  }

  Motion_Planning_emxInit_real_T(&y, 1);
  Motion_Planning_B.b_k_i = y->size[0];
  y->size[0] = b_x->size[0];
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_i);
  Motion_Planning_B.b_k_i = 0;
  while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
    y->data[Motion_Planning_B.b_k_i] = fabs(b_x->data[Motion_Planning_B.b_k_i]);
    Motion_Planning_B.b_k_i++;
  }

  Motion_Planning_emxInit_real_T(&j, 1);
  Motion_Planni_emxInit_boolean_T(&thresh_2, 1);
  Motion_Planning_power(x, j);
  Motion_Planning_B.b_k_i = thresh_2->size[0];
  thresh_2->size[0] = thresh->size[0];
  Mot_emxEnsureCapacity_boolean_T(thresh_2, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = thresh->size[0];
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    thresh_2->data[Motion_Planning_B.b_k_i] = ((thresh->
      data[Motion_Planning_B.b_k_i] * j->data[Motion_Planning_B.b_k_i] < 0.001) &&
      (y->data[Motion_Planning_B.b_k_i] < 0.001));
  }

  Motion_Planning_emxFree_real_T(&thresh);
  Motion_Planning_emxInit_int32_T(&i, 1);
  Motion_Planning_eml_find(thresh_2, i);
  Motion_Planning_B.b_idx_0_j = static_cast<uint32_T>(x->size[0]);
  Motion_Planning_B.b_k_i = z->size[0];
  z->size[0] = static_cast<int32_T>(Motion_Planning_B.b_idx_0_j);
  Motio_emxEnsureCapacity_creal_T(z, Motion_Planning_B.b_k_i);
  Motion_Planning_B.loop_ub_o5 = static_cast<int32_T>
    (Motion_Planning_B.b_idx_0_j);
  Motion_Planni_emxFree_boolean_T(&thresh_2);
  for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
       Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
    z->data[Motion_Planning_B.b_k_i].re = 0.0;
    z->data[Motion_Planning_B.b_k_i].im = 0.0;
  }

  Motion_Planning_emxInit_creal_T(&z1, 1);
  Motion_Planning_emxInit_creal_T(&z0, 1);
  Motion_Planning_emxInit_creal_T(&l, 1);
  if (igt->size[0] != 0) {
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = igt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = dk->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] / 3.1415926535897931;
    }

    Motion_Planning_B.b_k_i = j->size[0];
    j->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(j, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      j->data[Motion_Planning_B.b_k_i] = sqrt(j->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = igt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = dk->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] * 3.1415926535897931;
    }

    Motion_Planning_B.b_k_i = y->size[0];
    y->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      y->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      y->data[Motion_Planning_B.b_k_i] = sqrt(y->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_emxInit_real_T(&j_0, 1);
    Motion_Planning_B.b_k_i = j_0->size[0];
    j_0->size[0] = j->size[0];
    Motion_emxEnsureCapacity_real_T(j_0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = j->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j_0->data[Motion_Planning_B.b_k_i] = x->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] * j->
        data[Motion_Planning_B.b_k_i] + k->data[static_cast<int32_T>(igt->
        data[Motion_Planning_B.b_k_i]) - 1] / y->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_fresnelr(j_0, z1);
    Motion_Planning_B.b_k_i = y->size[0];
    y->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    Motion_Planning_emxFree_real_T(&j_0);
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      y->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      y->data[Motion_Planning_B.b_k_i] = sqrt(y->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_emxInit_real_T(&k_1, 1);
    Motion_Planning_B.b_k_i = k_1->size[0];
    k_1->size[0] = igt->size[0];
    Motion_emxEnsureCapacity_real_T(k_1, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      k_1->data[Motion_Planning_B.b_k_i] = k->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] / y->
        data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_fresnelr(k_1, z0);
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = igt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    Motion_Planning_emxFree_real_T(&k_1);
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = 3.1415926535897931 / dk->data[
        static_cast<int32_T>(igt->data[Motion_Planning_B.b_k_i]) - 1];
    }

    Motion_Planning_B.b_k_i = j->size[0];
    j->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(j, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      j->data[Motion_Planning_B.b_k_i] = sqrt(j->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_B.b_k_i = l->size[0];
    l->size[0] = igt->size[0];
    Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_re = k->data[static_cast<int32_T>(igt->
        data[Motion_Planning_B.b_k_i]) - 1] * k->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] / (dk->data
        [static_cast<int32_T>(igt->data[Motion_Planning_B.b_k_i]) - 1] * 2.0);
      l->data[Motion_Planning_B.b_k_i].re = (theta->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] - Motion_Planning_B.j_re) *
        0.0;
      l->data[Motion_Planning_B.b_k_i].im = theta->data[static_cast<int32_T>
        (igt->data[Motion_Planning_B.b_k_i]) - 1] - Motion_Planning_B.j_re;
    }

    Motion_Planning_exp(l);
    Motion_Planning_B.loop_ub_o5 = j->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_re = j->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.j_im = j->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.z1_re = z1->data[Motion_Planning_B.b_k_i].re - z0->
        data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.z1_im = z1->data[Motion_Planning_B.b_k_i].im - z0->
        data[Motion_Planning_B.b_k_i].im;
      z->data[static_cast<int32_T>(igt->data[Motion_Planning_B.b_k_i]) - 1].re =
        Motion_Planning_B.j_re * Motion_Planning_B.z1_re -
        Motion_Planning_B.j_im * Motion_Planning_B.z1_im;
      z->data[static_cast<int32_T>(igt->data[Motion_Planning_B.b_k_i]) - 1].im =
        Motion_Planning_B.j_re * Motion_Planning_B.z1_im +
        Motion_Planning_B.j_im * Motion_Planning_B.z1_re;
    }
  }

  if (ilt->size[0] != 0) {
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = ilt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = -dk->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] / 3.1415926535897931;
    }

    Motion_Planning_B.b_k_i = j->size[0];
    j->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(j, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      j->data[Motion_Planning_B.b_k_i] = sqrt(j->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_B.b_k_i = y->size[0];
    y->size[0] = ilt->size[0];
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      y->data[Motion_Planning_B.b_k_i] = dk->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] * -3.1415926535897931;
    }

    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = y->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = y->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = y->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= y->size[0] - 1) {
      b_x->data[Motion_Planning_B.b_k_i] = sqrt(b_x->
        data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_emxInit_real_T(&j_1, 1);
    Motion_Planning_B.b_k_i = j_1->size[0];
    j_1->size[0] = j->size[0];
    Motion_emxEnsureCapacity_real_T(j_1, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = j->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j_1->data[Motion_Planning_B.b_k_i] = x->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] * j->data[Motion_Planning_B.b_k_i] -
        k->data[ilt->data[Motion_Planning_B.b_k_i] - 1] / b_x->
        data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_fresnelr(j_1, z1);
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = ilt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    Motion_Planning_emxFree_real_T(&j_1);
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = dk->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] * -3.1415926535897931;
    }

    Motion_Planning_B.b_k_i = y->size[0];
    y->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      y->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      y->data[Motion_Planning_B.b_k_i] = sqrt(y->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_emxInit_real_T(&k_2, 1);
    Motion_Planning_B.b_k_i = k_2->size[0];
    k_2->size[0] = ilt->size[0];
    Motion_emxEnsureCapacity_real_T(k_2, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      k_2->data[Motion_Planning_B.b_k_i] = -k->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] / y->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_fresnelr(k_2, z0);
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = ilt->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    Motion_Planning_emxFree_real_T(&k_2);
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = -3.1415926535897931 / dk->data
        [ilt->data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_B.b_k_i = j->size[0];
    j->size[0] = b_x->size[0];
    Motion_emxEnsureCapacity_real_T(j, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      j->data[Motion_Planning_B.b_k_i] = b_x->data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_B.b_k_i = 0;
    while (Motion_Planning_B.b_k_i <= b_x->size[0] - 1) {
      j->data[Motion_Planning_B.b_k_i] = sqrt(j->data[Motion_Planning_B.b_k_i]);
      Motion_Planning_B.b_k_i++;
    }

    Motion_Planning_B.b_k_i = l->size[0];
    l->size[0] = ilt->size[0];
    Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ilt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_re = k->data[ilt->data[Motion_Planning_B.b_k_i] - 1] *
        k->data[ilt->data[Motion_Planning_B.b_k_i] - 1] / (dk->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] * 2.0);
      l->data[Motion_Planning_B.b_k_i].re = (theta->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] - Motion_Planning_B.j_re) * 0.0;
      l->data[Motion_Planning_B.b_k_i].im = -(theta->data[ilt->
        data[Motion_Planning_B.b_k_i] - 1] - Motion_Planning_B.j_re);
    }

    Motion_Planning_exp(l);
    Motion_Planning_B.loop_ub_o5 = j->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_re = j->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.j_im = j->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.z1_re = z1->data[Motion_Planning_B.b_k_i].re - z0->
        data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.z1_im = z1->data[Motion_Planning_B.b_k_i].im - z0->
        data[Motion_Planning_B.b_k_i].im;
      z->data[ilt->data[Motion_Planning_B.b_k_i] - 1].re =
        Motion_Planning_B.j_re * Motion_Planning_B.z1_re -
        Motion_Planning_B.j_im * Motion_Planning_B.z1_im;
      z->data[ilt->data[Motion_Planning_B.b_k_i] - 1].im =
        -(Motion_Planning_B.j_re * Motion_Planning_B.z1_im +
          Motion_Planning_B.j_im * Motion_Planning_B.z1_re);
    }
  }

  Motion_Planning_emxFree_real_T(&y);
  Motion_Planning_emxFree_int32_T(&ilt);
  if (ism->size[0] != 0) {
    Motion_Planning_B.b_k_i = b_x->size[0];
    b_x->size[0] = ism->size[0];
    Motion_emxEnsureCapacity_real_T(b_x, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ism->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      b_x->data[Motion_Planning_B.b_k_i] = x->data[ism->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_B.b_k_i = igt->size[0];
    igt->size[0] = ism->size[0];
    Motion_emxEnsureCapacity_real_T(igt, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ism->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      igt->data[Motion_Planning_B.b_k_i] = k->data[ism->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_B.b_k_i = z1->size[0];
    z1->size[0] = igt->size[0];
    Motio_emxEnsureCapacity_creal_T(z1, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = igt->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_re = igt->data[Motion_Planning_B.b_k_i] * 0.0;
      Motion_Planning_B.j_im = -igt->data[Motion_Planning_B.b_k_i];
      z1->data[Motion_Planning_B.b_k_i].re = b_x->data[Motion_Planning_B.b_k_i] *
        Motion_Planning_B.j_re;
      z1->data[Motion_Planning_B.b_k_i].im = b_x->data[Motion_Planning_B.b_k_i] *
        Motion_Planning_B.j_im;
    }

    Motion_Planning_B.b_k_i = z0->size[0];
    z0->size[0] = z1->size[0];
    Motio_emxEnsureCapacity_creal_T(z0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = z1->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.z1_re = z1->data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.j_im = z1->data[Motion_Planning_B.b_k_i].im;
      if (Motion_Planning_B.j_im == 0.0) {
        Motion_Planning_B.j_re = Motion_Planning_B.z1_re / 2.0;
        Motion_Planning_B.j_im = 0.0;
      } else if (Motion_Planning_B.z1_re == 0.0) {
        Motion_Planning_B.j_re = 0.0;
        Motion_Planning_B.j_im /= 2.0;
      } else {
        Motion_Planning_B.j_re = Motion_Planning_B.z1_re / 2.0;
        Motion_Planning_B.j_im /= 2.0;
      }

      z0->data[Motion_Planning_B.b_k_i].re = Motion_Planning_B.j_re;
      z0->data[Motion_Planning_B.b_k_i].im = Motion_Planning_B.j_im;
    }

    Motion_Planning_emxInit_creal_T(&hidkxx, 1);
    Motion_Planning_B.b_k_i = hidkxx->size[0];
    hidkxx->size[0] = ism->size[0];
    Motio_emxEnsureCapacity_creal_T(hidkxx, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ism->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      hidkxx->data[Motion_Planning_B.b_k_i].re = dk->data[ism->
        data[Motion_Planning_B.b_k_i] - 1] * 0.0;
      hidkxx->data[Motion_Planning_B.b_k_i].im = dk->data[ism->
        data[Motion_Planning_B.b_k_i] - 1] * 0.5;
    }

    Motion_Planning_emxInit_creal_T(&m2C, 1);
    Motion_Planning_power(igt, j);
    Motion_Planning_B.b_k_i = m2C->size[0];
    m2C->size[0] = hidkxx->size[0];
    Motio_emxEnsureCapacity_creal_T(m2C, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = hidkxx->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.z1_re = hidkxx->data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.j_im = hidkxx->data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.z1_im = j->data[Motion_Planning_B.b_k_i];
      if (Motion_Planning_B.j_im == 0.0) {
        Motion_Planning_B.j_re = Motion_Planning_B.z1_re /
          Motion_Planning_B.z1_im;
        Motion_Planning_B.j_im = 0.0;
      } else if (Motion_Planning_B.z1_re == 0.0) {
        Motion_Planning_B.j_re = 0.0;
        Motion_Planning_B.j_im /= Motion_Planning_B.z1_im;
      } else {
        Motion_Planning_B.j_re = Motion_Planning_B.z1_re /
          Motion_Planning_B.z1_im;
        Motion_Planning_B.j_im /= Motion_Planning_B.z1_im;
      }

      m2C->data[Motion_Planning_B.b_k_i].re = -2.0 * Motion_Planning_B.j_re;
      m2C->data[Motion_Planning_B.b_k_i].im = -2.0 * Motion_Planning_B.j_im;
    }

    Motion_Planning_power(b_x, j);
    Motion_Planning_B.b_k_i = hidkxx->size[0];
    Motio_emxEnsureCapacity_creal_T(hidkxx, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = hidkxx->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      hidkxx->data[Motion_Planning_B.b_k_i].re *= j->
        data[Motion_Planning_B.b_k_i];
      hidkxx->data[Motion_Planning_B.b_k_i].im *= j->
        data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_emxInit_creal_T(&e, 1);
    Motion_Planning_B.b_k_i = e->size[0];
    e->size[0] = z1->size[0];
    Motio_emxEnsureCapacity_creal_T(e, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = z1->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      e->data[Motion_Planning_B.b_k_i].re = -z1->data[Motion_Planning_B.b_k_i].
        re;
      e->data[Motion_Planning_B.b_k_i].im = -z1->data[Motion_Planning_B.b_k_i].
        im;
    }

    Motion_Planning_exp(e);
    Motion_Planning_B.b_k_i = z1->size[0];
    z1->size[0] = e->size[0];
    Motio_emxEnsureCapacity_creal_T(z1, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = e->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.z1_re = 1.0 - e->data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.j_im = 0.0 - e->data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.z1_im = z1->data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.bi_o = z1->data[Motion_Planning_B.b_k_i].im;
      if (Motion_Planning_B.bi_o == 0.0) {
        if (Motion_Planning_B.j_im == 0.0) {
          Motion_Planning_B.j_re = Motion_Planning_B.z1_re /
            Motion_Planning_B.z1_im;
          Motion_Planning_B.j_im = 0.0;
        } else if (Motion_Planning_B.z1_re == 0.0) {
          Motion_Planning_B.j_re = 0.0;
          Motion_Planning_B.j_im /= Motion_Planning_B.z1_im;
        } else {
          Motion_Planning_B.j_re = Motion_Planning_B.z1_re /
            Motion_Planning_B.z1_im;
          Motion_Planning_B.j_im /= Motion_Planning_B.z1_im;
        }
      } else if (Motion_Planning_B.z1_im == 0.0) {
        if (Motion_Planning_B.z1_re == 0.0) {
          Motion_Planning_B.j_re = Motion_Planning_B.j_im /
            Motion_Planning_B.bi_o;
          Motion_Planning_B.j_im = 0.0;
        } else if (Motion_Planning_B.j_im == 0.0) {
          Motion_Planning_B.j_re = 0.0;
          Motion_Planning_B.j_im = -(Motion_Planning_B.z1_re /
            Motion_Planning_B.bi_o);
        } else {
          Motion_Planning_B.j_re = Motion_Planning_B.j_im /
            Motion_Planning_B.bi_o;
          Motion_Planning_B.j_im = -(Motion_Planning_B.z1_re /
            Motion_Planning_B.bi_o);
        }
      } else {
        Motion_Planning_B.brm_f = fabs(Motion_Planning_B.z1_im);
        Motion_Planning_B.j_re = fabs(Motion_Planning_B.bi_o);
        if (Motion_Planning_B.brm_f > Motion_Planning_B.j_re) {
          Motion_Planning_B.brm_f = Motion_Planning_B.bi_o /
            Motion_Planning_B.z1_im;
          Motion_Planning_B.z1_im += Motion_Planning_B.brm_f *
            Motion_Planning_B.bi_o;
          Motion_Planning_B.j_re = (Motion_Planning_B.brm_f *
            Motion_Planning_B.j_im + Motion_Planning_B.z1_re) /
            Motion_Planning_B.z1_im;
          Motion_Planning_B.j_im = (Motion_Planning_B.j_im -
            Motion_Planning_B.brm_f * Motion_Planning_B.z1_re) /
            Motion_Planning_B.z1_im;
        } else if (Motion_Planning_B.j_re == Motion_Planning_B.brm_f) {
          Motion_Planning_B.z1_im = Motion_Planning_B.z1_im > 0.0 ? 0.5 : -0.5;
          Motion_Planning_B.bi_o = Motion_Planning_B.bi_o > 0.0 ? 0.5 : -0.5;
          Motion_Planning_B.j_re = (Motion_Planning_B.z1_re *
            Motion_Planning_B.z1_im + Motion_Planning_B.j_im *
            Motion_Planning_B.bi_o) / Motion_Planning_B.brm_f;
          Motion_Planning_B.j_im = (Motion_Planning_B.j_im *
            Motion_Planning_B.z1_im - Motion_Planning_B.z1_re *
            Motion_Planning_B.bi_o) / Motion_Planning_B.brm_f;
        } else {
          Motion_Planning_B.brm_f = Motion_Planning_B.z1_im /
            Motion_Planning_B.bi_o;
          Motion_Planning_B.z1_im = Motion_Planning_B.brm_f *
            Motion_Planning_B.z1_im + Motion_Planning_B.bi_o;
          Motion_Planning_B.j_re = (Motion_Planning_B.brm_f *
            Motion_Planning_B.z1_re + Motion_Planning_B.j_im) /
            Motion_Planning_B.z1_im;
          Motion_Planning_B.j_im = (Motion_Planning_B.brm_f *
            Motion_Planning_B.j_im - Motion_Planning_B.z1_re) /
            Motion_Planning_B.z1_im;
        }
      }

      z1->data[Motion_Planning_B.b_k_i].re = Motion_Planning_B.j_re;
      z1->data[Motion_Planning_B.b_k_i].im = Motion_Planning_B.j_im;
    }

    Motion_Planning_B.b_k_i = e->size[0];
    Motio_emxEnsureCapacity_creal_T(e, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = e->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      e->data[Motion_Planning_B.b_k_i].re = -e->data[Motion_Planning_B.b_k_i].re;
      e->data[Motion_Planning_B.b_k_i].im = -e->data[Motion_Planning_B.b_k_i].im;
    }

    Motion_Planning_B.b_k_i = l->size[0];
    l->size[0] = z1->size[0];
    Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = z1->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      l->data[Motion_Planning_B.b_k_i] = z1->data[Motion_Planning_B.b_k_i];
    }

    for (Motion_Planning_B.n_l = 0; Motion_Planning_B.n_l < 20;
         Motion_Planning_B.n_l++) {
      Motion_Planning_B.b_k_i = ((Motion_Planning_B.n_l + 1) << 1) - 1;
      Motion_Planning_B.i19 = z1->size[0];
      z1->size[0] = m2C->size[0];
      Motio_emxEnsureCapacity_creal_T(z1, Motion_Planning_B.i19);
      Motion_Planning_B.loop_ub_o5 = m2C->size[0];
      for (Motion_Planning_B.i19 = 0; Motion_Planning_B.i19 <
           Motion_Planning_B.loop_ub_o5; Motion_Planning_B.i19++) {
        Motion_Planning_B.j_im = static_cast<real_T>(Motion_Planning_B.n_l + 1)
          + z0->data[Motion_Planning_B.i19].re;
        Motion_Planning_B.z1_re = z0->data[Motion_Planning_B.i19].im;
        Motion_Planning_B.j_re = e->data[Motion_Planning_B.i19].re *
          Motion_Planning_B.j_im - e->data[Motion_Planning_B.i19].im *
          Motion_Planning_B.z1_re;
        Motion_Planning_B.j_im = e->data[Motion_Planning_B.i19].re *
          Motion_Planning_B.z1_re + e->data[Motion_Planning_B.i19].im *
          Motion_Planning_B.j_im;
        Motion_Planning_B.j_re += static_cast<real_T>(Motion_Planning_B.b_k_i) *
          z1->data[Motion_Planning_B.i19].re;
        Motion_Planning_B.j_im += static_cast<real_T>(Motion_Planning_B.b_k_i) *
          z1->data[Motion_Planning_B.i19].im;
        Motion_Planning_B.z1_re = m2C->data[Motion_Planning_B.i19].re *
          Motion_Planning_B.j_re - m2C->data[Motion_Planning_B.i19].im *
          Motion_Planning_B.j_im;
        Motion_Planning_B.j_im = m2C->data[Motion_Planning_B.i19].re *
          Motion_Planning_B.j_im + m2C->data[Motion_Planning_B.i19].im *
          Motion_Planning_B.j_re;
        z1->data[Motion_Planning_B.i19].re = Motion_Planning_B.z1_re;
        z1->data[Motion_Planning_B.i19].im = Motion_Planning_B.j_im;
      }

      Motion_Planning_B.b_k_i = l->size[0];
      Motio_emxEnsureCapacity_creal_T(l, Motion_Planning_B.b_k_i);
      Motion_Planning_B.loop_ub_o5 = l->size[0];
      for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
           Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
        l->data[Motion_Planning_B.b_k_i].re += z1->data[Motion_Planning_B.b_k_i]
          .re;
        l->data[Motion_Planning_B.b_k_i].im += z1->data[Motion_Planning_B.b_k_i]
          .im;
      }

      Motion_Planning_B.b_k_i = e->size[0];
      Motio_emxEnsureCapacity_creal_T(e, Motion_Planning_B.b_k_i);
      Motion_Planning_B.loop_ub_o5 = e->size[0];
      for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
           Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
        Motion_Planning_B.j_re = e->data[Motion_Planning_B.b_k_i].re *
          hidkxx->data[Motion_Planning_B.b_k_i].re - e->
          data[Motion_Planning_B.b_k_i].im * hidkxx->
          data[Motion_Planning_B.b_k_i].im;
        Motion_Planning_B.j_im = e->data[Motion_Planning_B.b_k_i].re *
          hidkxx->data[Motion_Planning_B.b_k_i].im + e->
          data[Motion_Planning_B.b_k_i].im * hidkxx->
          data[Motion_Planning_B.b_k_i].re;
        if (Motion_Planning_B.j_im == 0.0) {
          Motion_Planning_B.j_re /= static_cast<real_T>(Motion_Planning_B.n_l +
            2);
          Motion_Planning_B.j_im = 0.0;
        } else if (Motion_Planning_B.j_re == 0.0) {
          Motion_Planning_B.j_re = 0.0;
          Motion_Planning_B.j_im /= static_cast<real_T>(Motion_Planning_B.n_l +
            2);
        } else {
          Motion_Planning_B.j_re /= static_cast<real_T>(Motion_Planning_B.n_l +
            2);
          Motion_Planning_B.j_im /= static_cast<real_T>(Motion_Planning_B.n_l +
            2);
        }

        e->data[Motion_Planning_B.b_k_i].re = Motion_Planning_B.j_re;
        e->data[Motion_Planning_B.b_k_i].im = Motion_Planning_B.j_im;
      }
    }

    Motion_Planning_emxFree_creal_T(&e);
    Motion_Planning_emxFree_creal_T(&hidkxx);
    Motion_Planning_emxFree_creal_T(&m2C);
    Motion_Planning_B.b_k_i = z1->size[0];
    z1->size[0] = ism->size[0];
    Motio_emxEnsureCapacity_creal_T(z1, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = ism->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      z1->data[Motion_Planning_B.b_k_i].re = theta->data[ism->
        data[Motion_Planning_B.b_k_i] - 1] * 0.0;
      z1->data[Motion_Planning_B.b_k_i].im = theta->data[ism->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_exp(z1);
    Motion_Planning_B.loop_ub_o5 = b_x->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      Motion_Planning_B.j_im = b_x->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].re;
      Motion_Planning_B.z1_re = b_x->data[Motion_Planning_B.b_k_i] * l->
        data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.j_re = Motion_Planning_B.j_im * z1->
        data[Motion_Planning_B.b_k_i].re - Motion_Planning_B.z1_re * z1->
        data[Motion_Planning_B.b_k_i].im;
      Motion_Planning_B.j_im = Motion_Planning_B.j_im * z1->
        data[Motion_Planning_B.b_k_i].im + Motion_Planning_B.z1_re * z1->
        data[Motion_Planning_B.b_k_i].re;
      z->data[ism->data[Motion_Planning_B.b_k_i] - 1].re =
        Motion_Planning_B.j_re;
      z->data[ism->data[Motion_Planning_B.b_k_i] - 1].im =
        Motion_Planning_B.j_im;
    }
  }

  Motion_Planning_emxFree_creal_T(&l);
  Motion_Planning_emxFree_real_T(&j);
  Motion_Planning_emxFree_real_T(&b_x);
  Motion_Planning_emxFree_creal_T(&z0);
  Motion_Planning_emxFree_creal_T(&z1);
  Motion_Planning_emxFree_int32_T(&ism);
  Motion_Planning_emxFree_real_T(&igt);
  if (i->size[0] != 0) {
    Motion_Planning_emxInit_real_T(&x_0, 1);
    Motion_Planning_B.b_k_i = x_0->size[0];
    x_0->size[0] = i->size[0];
    Motion_emxEnsureCapacity_real_T(x_0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = i->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      x_0->data[Motion_Planning_B.b_k_i] = x->data[i->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_emxInit_real_T(&dk_0, 1);
    Motion_Planning_B.b_k_i = dk_0->size[0];
    dk_0->size[0] = i->size[0];
    Motion_emxEnsureCapacity_real_T(dk_0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = i->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      dk_0->data[Motion_Planning_B.b_k_i] = dk->data[i->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_emxInit_real_T(&k_0, 1);
    Motion_Planning_B.b_k_i = k_0->size[0];
    k_0->size[0] = i->size[0];
    Motion_emxEnsureCapacity_real_T(k_0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = i->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      k_0->data[Motion_Planning_B.b_k_i] = k->data[i->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_emxInit_real_T(&theta_0, 1);
    Motion_Planning_B.b_k_i = theta_0->size[0];
    theta_0->size[0] = i->size[0];
    Motion_emxEnsureCapacity_real_T(theta_0, Motion_Planning_B.b_k_i);
    Motion_Planning_B.loop_ub_o5 = i->size[0];
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      theta_0->data[Motion_Planning_B.b_k_i] = theta->data[i->
        data[Motion_Planning_B.b_k_i] - 1];
    }

    Motion_Planning_emxInit_creal_T(&tmp_0, 1);
    Motion_Planning_fresnelgzero(x_0, dk_0, k_0, theta_0, tmp_0);
    Motion_Planning_B.loop_ub_o5 = tmp_0->size[0];
    Motion_Planning_emxFree_real_T(&theta_0);
    Motion_Planning_emxFree_real_T(&k_0);
    Motion_Planning_emxFree_real_T(&dk_0);
    Motion_Planning_emxFree_real_T(&x_0);
    for (Motion_Planning_B.b_k_i = 0; Motion_Planning_B.b_k_i <
         Motion_Planning_B.loop_ub_o5; Motion_Planning_B.b_k_i++) {
      z->data[i->data[Motion_Planning_B.b_k_i] - 1] = tmp_0->
        data[Motion_Planning_B.b_k_i];
    }

    Motion_Planning_emxFree_creal_T(&tmp_0);
  }

  Motion_Planning_emxFree_int32_T(&i);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_atan2(const emxArray_real_T_Motion_Planni_T *y,
  const emxArray_real_T_Motion_Planni_T *x, emxArray_real_T_Motion_Planni_T *r)
{
  emxArray_real_T_Motion_Planni_T *z1;
  int32_T csz_idx_0;
  int32_T k;
  Motion_Planning_emxInit_real_T(&z1, 1);
  if (y->size[0] <= x->size[0]) {
    csz_idx_0 = y->size[0];
  } else {
    csz_idx_0 = x->size[0];
  }

  k = r->size[0];
  r->size[0] = csz_idx_0;
  Motion_emxEnsureCapacity_real_T(r, k);
  k = z1->size[0];
  z1->size[0] = r->size[0];
  Motion_emxEnsureCapacity_real_T(z1, k);
  csz_idx_0 = r->size[0];
  for (k = 0; k < csz_idx_0; k++) {
    z1->data[k] = r->data[k];
  }

  for (k = 0; k < r->size[0]; k++) {
    z1->data[k] = rt_atan2d_snf(y->data[k], x->data[k]);
  }

  k = r->size[0];
  r->size[0] = z1->size[0];
  Motion_emxEnsureCapacity_real_T(r, k);
  csz_idx_0 = z1->size[0];
  for (k = 0; k < csz_idx_0; k++) {
    r->data[k] = z1->data[k];
  }

  Motion_Planning_emxFree_real_T(&z1);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_gradient(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *varargout_1)
{
  int32_T j;
  int32_T loop_ub;
  j = varargout_1->size[0];
  varargout_1->size[0] = x->size[0];
  Motion_emxEnsureCapacity_real_T(varargout_1, j);
  if (x->size[0] >= 2) {
    varargout_1->data[0] = x->data[1] - x->data[0];
    for (j = 2; j < x->size[0]; j++) {
      varargout_1->data[j - 1] = (x->data[j] - x->data[j - 2]) / 2.0;
    }

    varargout_1->data[x->size[0] - 1] = x->data[x->size[0] - 1] - x->data
      [x->size[0] - 2];
  } else {
    loop_ub = varargout_1->size[0];
    j = varargout_1->size[0];
    varargout_1->size[0] = loop_ub;
    Motion_emxEnsureCapacity_real_T(varargout_1, j);
    for (j = 0; j < loop_ub; j++) {
      varargout_1->data[j] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void FrenetReferencePath_fitClothoid(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T waypoints_data[], const
  int32_T waypoints_size[2], emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y, emxArray_real_T_Motion_Planni_T *theta,
  emxArray_real_T_Motion_Planni_T *kappa, emxArray_real_T_Motion_Planni_T
  *dkappa, emxArray_real_T_Motion_Planni_T *s)
{
  emxArray_creal_T_Motion_Plann_T *dxy;
  emxArray_creal_T_Motion_Plann_T *initialPosition_contents;
  emxArray_creal_T_Motion_Plann_T *xy;
  emxArray_real_T_Motion_Planni_T *L;
  emxArray_real_T_Motion_Planni_T *b;
  emxArray_real_T_Motion_Planni_T *b_b;
  emxArray_real_T_Motion_Planni_T *b_s_contents;
  emxArray_real_T_Motion_Planni_T *b_y;
  emxArray_real_T_Motion_Planni_T *cumulativeLength_contents;
  emxArray_real_T_Motion_Planni_T *dk;
  emxArray_real_T_Motion_Planni_T *dxy_0;
  emxArray_real_T_Motion_Planni_T *dxy_1;
  emxArray_real_T_Motion_Planni_T *e;
  emxArray_real_T_Motion_Planni_T *l;
  emxArray_real_T_Motion_Planni_T *s_tmp;
  boolean_T guard1 = false;
  Motion_Planning_emxInit_creal_T(&initialPosition_contents, 1);
  Motion_Plan_clothoidG2fitCourse(waypoints_data, waypoints_size,
    Motion_Planning_B.e_data_b, &Motion_Planning_B.e_size);
  Motion_Planning_B.mid_i = waypoints_size[0];
  Motion_Planning_B.low_i = initialPosition_contents->size[0];
  initialPosition_contents->size[0] = waypoints_size[0];
  Motio_emxEnsureCapacity_creal_T(initialPosition_contents,
    Motion_Planning_B.low_i);
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    initialPosition_contents->data[Motion_Planning_B.low_i].re =
      waypoints_data[Motion_Planning_B.low_i];
    initialPosition_contents->data[Motion_Planning_B.low_i].im =
      waypoints_data[Motion_Planning_B.low_i + waypoints_size[0]];
  }

  if (2 > waypoints_size[0]) {
    Motion_Planning_B.low_ip1 = 0;
    Motion_Planning_B.h = 0;
    Motion_Planning_B.k = 0;
    Motion_Planning_B.high_i = 0;
  } else {
    Motion_Planning_B.low_ip1 = 1;
    Motion_Planning_B.h = waypoints_size[0];
    Motion_Planning_B.k = 1;
    Motion_Planning_B.high_i = waypoints_size[0];
  }

  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.mid_i = -1;
  } else {
    Motion_Planning_B.mid_i = waypoints_size[0] - 2;
  }

  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    Motion_Planning_B.initialPosition_contents_data_p[Motion_Planning_B.low_i] =
      initialPosition_contents->data[Motion_Planning_B.low_i];
  }

  if (1 > waypoints_size[0] - 1) {
    Motion_Planning_B.mid_i = -1;
  } else {
    Motion_Planning_B.mid_i = waypoints_size[0] - 2;
  }

  Motion_Planning_B.e_size_o = Motion_Planning_B.mid_i + 1;
  if (0 <= Motion_Planning_B.mid_i) {
    memcpy(&Motion_Planning_B.e_data_p[0], &Motion_Planning_B.e_data_b[0],
           (Motion_Planning_B.mid_i + 1) * sizeof(real_T));
  }

  Motion_Planning_B.mid_i = Motion_Planning_B.h - Motion_Planning_B.low_ip1;
  Motion_Planning_B.initialPosition_contents_size = Motion_Planning_B.mid_i;
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    Motion_Planning_B.initialPosition_contents_data[Motion_Planning_B.low_i] =
      initialPosition_contents->data[Motion_Planning_B.low_ip1 +
      Motion_Planning_B.low_i];
  }

  Motion_Planning_B.low_ip1 = Motion_Planning_B.high_i - Motion_Planning_B.k;
  Motion_Planning_B.e_size_c = Motion_Planning_B.low_ip1;
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.low_ip1; Motion_Planning_B.low_i++) {
    Motion_Planning_B.e_data_d[Motion_Planning_B.low_i] =
      Motion_Planning_B.e_data_b[Motion_Planning_B.k + Motion_Planning_B.low_i];
  }

  Motion_Plannin_clothoidG1fit2_k
    (Motion_Planning_B.initialPosition_contents_data_p,
     Motion_Planning_B.e_data_p, &Motion_Planning_B.e_size_o,
     Motion_Planning_B.initialPosition_contents_data,
     &Motion_Planning_B.initialPosition_contents_size,
     Motion_Planning_B.e_data_d, &Motion_Planning_B.e_size_c,
     Motion_Planning_B.b_data_c, &Motion_Planning_B.e_size,
     Motion_Planning_B.c_data_p, &Motion_Planning_B.c_size_j,
     Motion_Planning_B.d_data, &Motion_Planning_B.d_size);
  if (Motion_Planning_B.d_size != 1) {
    Motion_Planning_B.low_i = x->size[0];
    x->size[0] = Motion_Planning_B.d_size;
    Motion_emxEnsureCapacity_real_T(x, Motion_Planning_B.low_i);
    Motion_Planning_B.mid_i = Motion_Planning_B.d_size;
    for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
         Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
      x->data[Motion_Planning_B.low_i] =
        Motion_Planning_B.d_data[Motion_Planning_B.low_i];
    }

    if ((Motion_Planning_B.d_size != 0) && (Motion_Planning_B.d_size != 1)) {
      Motion_Planning_B.low_i = 0;
      while (Motion_Planning_B.low_i <= Motion_Planning_B.d_size - 2) {
        x->data[Motion_Planning_B.low_i + 1] += x->data[Motion_Planning_B.low_i];
        Motion_Planning_B.low_i++;
      }
    }
  } else {
    Motion_Planning_B.low_i = x->size[0];
    x->size[0] = Motion_Planning_B.d_size;
    Motion_emxEnsureCapacity_real_T(x, Motion_Planning_B.low_i);
    Motion_Planning_B.mid_i = Motion_Planning_B.d_size;
    for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
         Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
      x->data[Motion_Planning_B.low_i] =
        Motion_Planning_B.d_data[Motion_Planning_B.low_i];
    }
  }

  Motion_Planning_emxInit_real_T(&cumulativeLength_contents, 1);
  Motion_Planning_B.low_i = cumulativeLength_contents->size[0];
  cumulativeLength_contents->size[0] = x->size[0] + 1;
  Motion_emxEnsureCapacity_real_T(cumulativeLength_contents,
    Motion_Planning_B.low_i);
  cumulativeLength_contents->data[0] = 0.0;
  Motion_Planning_B.mid_i = x->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    cumulativeLength_contents->data[Motion_Planning_B.low_i + 1] = x->
      data[Motion_Planning_B.low_i];
  }

  Motion_Planning_emxInit_real_T(&b_y, 2);
  Motion_Planning_B.leftEdge = ceil(cumulativeLength_contents->
    data[cumulativeLength_contents->size[0] - 1] * (1.0 /
    obj->DiscretizationDistance));
  if (rtIsNaN(Motion_Planning_B.leftEdge - 1.0)) {
    Motion_Planning_B.low_i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.low_i);
    b_y->data[0] = (rtNaN);
  } else if (Motion_Planning_B.leftEdge - 1.0 < 0.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (rtIsInf(Motion_Planning_B.leftEdge - 1.0)) {
    if (Motion_Planning_B.leftEdge - 1.0 == 0.0) {
      Motion_Planning_B.low_i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = 1;
      Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.low_i);
      b_y->data[0] = (rtNaN);
    } else {
      Motion_Planning_B.low_i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = static_cast<int32_T>(Motion_Planning_B.leftEdge - 1.0) + 1;
      Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.low_i);
      Motion_Planning_B.mid_i = static_cast<int32_T>(Motion_Planning_B.leftEdge
        - 1.0);
      for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
           Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
        b_y->data[Motion_Planning_B.low_i] = Motion_Planning_B.low_i;
      }
    }
  } else {
    Motion_Planning_B.low_i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = static_cast<int32_T>(Motion_Planning_B.leftEdge - 1.0) + 1;
    Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.low_i);
    Motion_Planning_B.mid_i = static_cast<int32_T>(Motion_Planning_B.leftEdge -
      1.0);
    for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
         Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
      b_y->data[Motion_Planning_B.low_i] = Motion_Planning_B.low_i;
    }
  }

  Motion_Planning_emxInit_real_T(&s_tmp, 2);
  Motion_Planning_B.low_i = s_tmp->size[0] * s_tmp->size[1];
  s_tmp->size[0] = 1;
  s_tmp->size[1] = b_y->size[1];
  Motion_emxEnsureCapacity_real_T(s_tmp, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = b_y->size[0] * b_y->size[1] - 1;
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    s_tmp->data[Motion_Planning_B.low_i] = b_y->data[Motion_Planning_B.low_i] *
      obj->DiscretizationDistance;
  }

  Motion_Planning_emxFree_real_T(&b_y);
  Motion_Planning_B.low_i = s->size[0];
  s->size[0] = s_tmp->size[1] + 1;
  Motion_emxEnsureCapacity_real_T(s, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = s_tmp->size[1];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    s->data[Motion_Planning_B.low_i] = s_tmp->data[Motion_Planning_B.low_i];
  }

  Motion_Planning_emxInit_real_T(&b_s_contents, 1);
  s->data[s_tmp->size[1]] = cumulativeLength_contents->
    data[cumulativeLength_contents->size[0] - 1];
  Motion_Planning_B.low_i = b_s_contents->size[0];
  b_s_contents->size[0] = s_tmp->size[1] + 1;
  Motion_emxEnsureCapacity_real_T(b_s_contents, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = s_tmp->size[1];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    b_s_contents->data[Motion_Planning_B.low_i] = s_tmp->
      data[Motion_Planning_B.low_i];
  }

  Motion_Planning_emxInit_real_T(&b_b, 2);
  b_s_contents->data[s_tmp->size[1]] = cumulativeLength_contents->
    data[cumulativeLength_contents->size[0] - 1];
  Motion_Planning_B.varargin_1_idx_0 = static_cast<uint32_T>(b_s_contents->size
    [0]);
  Motion_Planning_B.low_i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = static_cast<int32_T>(Motion_Planning_B.varargin_1_idx_0);
  b_b->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(b_b, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = static_cast<int32_T>
    (Motion_Planning_B.varargin_1_idx_0) - 1;
  Motion_Planning_emxFree_real_T(&s_tmp);
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    b_b->data[Motion_Planning_B.low_i] = (rtNaN);
  }

  Motion_Planning_B.leftEdge = cumulativeLength_contents->data[0];
  Motion_Planning_B.delta = cumulativeLength_contents->data[1] -
    cumulativeLength_contents->data[0];
  Motion_Planning_B.k = 0;
  while (Motion_Planning_B.k <= b_s_contents->size[0] - 1) {
    if ((b_s_contents->data[Motion_Planning_B.k] >= Motion_Planning_B.leftEdge) &&
        (b_s_contents->data[Motion_Planning_B.k] <=
         cumulativeLength_contents->data[cumulativeLength_contents->size[0] - 1]))
    {
      Motion_Planning_B.bGuess = ceil((s->data[Motion_Planning_B.k] -
        Motion_Planning_B.leftEdge) / Motion_Planning_B.delta);
      guard1 = false;
      if ((Motion_Planning_B.bGuess >= 1.0) && (Motion_Planning_B.bGuess <
           cumulativeLength_contents->size[0])) {
        Motion_Planning_B.low_i = static_cast<int32_T>(Motion_Planning_B.bGuess);
        if ((b_s_contents->data[Motion_Planning_B.k] >=
             cumulativeLength_contents->data[Motion_Planning_B.low_i - 1]) &&
            (b_s_contents->data[Motion_Planning_B.k] <
             cumulativeLength_contents->data[Motion_Planning_B.low_i])) {
          b_b->data[Motion_Planning_B.k] = Motion_Planning_B.bGuess;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        Motion_Planning_B.low_i = 1;
        Motion_Planning_B.low_ip1 = 2;
        Motion_Planning_B.high_i = cumulativeLength_contents->size[0];
        while (Motion_Planning_B.high_i > Motion_Planning_B.low_ip1) {
          Motion_Planning_B.mid_i = (Motion_Planning_B.low_i >> 1) +
            (Motion_Planning_B.high_i >> 1);
          if (((Motion_Planning_B.low_i & 1) == 1) && ((Motion_Planning_B.high_i
                & 1) == 1)) {
            Motion_Planning_B.mid_i++;
          }

          if (b_s_contents->data[Motion_Planning_B.k] >=
              cumulativeLength_contents->data[Motion_Planning_B.mid_i - 1]) {
            Motion_Planning_B.low_i = Motion_Planning_B.mid_i;
            Motion_Planning_B.low_ip1 = Motion_Planning_B.mid_i + 1;
          } else {
            Motion_Planning_B.high_i = Motion_Planning_B.mid_i;
          }
        }

        b_b->data[Motion_Planning_B.k] = Motion_Planning_B.low_i;
      }
    }

    Motion_Planning_B.k++;
  }

  Motion_Planning_emxInit_real_T(&dk, 2);
  Motion_Planning_B.low_i = dk->size[0] * dk->size[1];
  dk->size[0] = b_b->size[0];
  dk->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(dk, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = b_b->size[0] * b_b->size[1] - 1;
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    dk->data[Motion_Planning_B.low_i] = (Motion_Planning_B.c_data_p
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1] -
      Motion_Planning_B.b_data_c[static_cast<int32_T>(b_b->
      data[Motion_Planning_B.low_i]) - 1]) / Motion_Planning_B.d_data[
      static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1];
  }

  Motion_Planning_emxInit_real_T(&L, 1);
  Motion_Planning_B.low_i = L->size[0];
  L->size[0] = s->size[0];
  Motion_emxEnsureCapacity_real_T(L, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = s->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    L->data[Motion_Planning_B.low_i] = s->data[Motion_Planning_B.low_i] -
      cumulativeLength_contents->data[static_cast<int32_T>(b_b->
      data[Motion_Planning_B.low_i]) - 1];
  }

  Motion_Planning_emxInit_real_T(&b, 2);
  Motion_Planning_B.low_i = b->size[0] * b->size[1];
  b->size[0] = b_b->size[0];
  b->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(b, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = b_b->size[0] * b_b->size[1];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    b->data[Motion_Planning_B.low_i] = Motion_Planning_B.b_data_c
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1];
  }

  Motion_Planning_emxInit_real_T(&e, 2);
  Motion_Planning_B.low_i = e->size[0] * e->size[1];
  e->size[0] = b_b->size[0];
  e->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(e, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = b_b->size[0] * b_b->size[1];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    e->data[Motion_Planning_B.low_i] = Motion_Planning_B.e_data_b
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1];
  }

  Motion_Planning_emxInit_creal_T(&xy, 1);
  Motion_Planning_emxInit_real_T(&l, 2);
  Motion_Planning_fresnelg2(L, dk, b, e, xy);
  Motion_Planning_B.low_i = l->size[0] * l->size[1];
  l->size[0] = dk->size[0];
  l->size[1] = 1;
  Motion_emxEnsureCapacity_real_T(l, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = dk->size[0] * dk->size[1] - 1;
  Motion_Planning_emxFree_real_T(&e);
  Motion_Planning_emxFree_real_T(&b);
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <=
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    l->data[Motion_Planning_B.low_i] = dk->data[Motion_Planning_B.low_i] / 2.0;
  }

  Motion_Planning_emxInit_creal_T(&dxy, 1);
  Motion_Planning_B.low_i = dxy->size[0];
  dxy->size[0] = l->size[0];
  Motio_emxEnsureCapacity_creal_T(dxy, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = l->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    dxy->data[Motion_Planning_B.low_i].re = ((l->data[Motion_Planning_B.low_i] *
      L->data[Motion_Planning_B.low_i] + Motion_Planning_B.b_data_c
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1]) * L->
      data[Motion_Planning_B.low_i] + Motion_Planning_B.e_data_b
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1]) * 0.0;
    dxy->data[Motion_Planning_B.low_i].im = (l->data[Motion_Planning_B.low_i] *
      L->data[Motion_Planning_B.low_i] + Motion_Planning_B.b_data_c
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1]) * L->
      data[Motion_Planning_B.low_i] + Motion_Planning_B.e_data_b
      [static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1];
  }

  Motion_Planning_emxFree_real_T(&l);
  Motion_Planning_exp(dxy);
  Motion_Planning_B.low_i = kappa->size[0];
  kappa->size[0] = b_b->size[0];
  Motion_emxEnsureCapacity_real_T(kappa, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = b_b->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    kappa->data[Motion_Planning_B.low_i] = Motion_Planning_B.b_data_c[
      static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1] + L->
      data[Motion_Planning_B.low_i] * dk->data[Motion_Planning_B.low_i];
  }

  Motion_Planning_emxFree_real_T(&L);
  Motion_Planning_emxFree_real_T(&dk);
  Motion_Planning_B.low_i = x->size[0];
  x->size[0] = xy->size[0];
  Motion_emxEnsureCapacity_real_T(x, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = xy->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    x->data[Motion_Planning_B.low_i] = initialPosition_contents->data[
      static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1].re +
      xy->data[Motion_Planning_B.low_i].re;
  }

  Motion_Planning_B.low_i = y->size[0];
  y->size[0] = xy->size[0];
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = xy->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    y->data[Motion_Planning_B.low_i] = initialPosition_contents->data[
      static_cast<int32_T>(b_b->data[Motion_Planning_B.low_i]) - 1].im +
      xy->data[Motion_Planning_B.low_i].im;
  }

  Motion_Planning_emxFree_real_T(&b_b);
  Motion_Planning_emxFree_creal_T(&xy);
  Motion_Planning_emxFree_creal_T(&initialPosition_contents);
  Motion_Planning_emxInit_real_T(&dxy_0, 1);
  Motion_Planning_B.low_i = dxy_0->size[0];
  dxy_0->size[0] = dxy->size[0];
  Motion_emxEnsureCapacity_real_T(dxy_0, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = dxy->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    dxy_0->data[Motion_Planning_B.low_i] = dxy->data[Motion_Planning_B.low_i].im;
  }

  Motion_Planning_emxInit_real_T(&dxy_1, 1);
  Motion_Planning_B.low_i = dxy_1->size[0];
  dxy_1->size[0] = dxy->size[0];
  Motion_emxEnsureCapacity_real_T(dxy_1, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = dxy->size[0];
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    dxy_1->data[Motion_Planning_B.low_i] = dxy->data[Motion_Planning_B.low_i].re;
  }

  Motion_Planning_emxFree_creal_T(&dxy);
  Motion_Planning_atan2(dxy_0, dxy_1, theta);
  Motion_Planning_gradient(kappa, dkappa);
  Motion_Planning_gradient(b_s_contents, cumulativeLength_contents);
  Motion_Planning_B.low_i = dkappa->size[0];
  Motion_emxEnsureCapacity_real_T(dkappa, Motion_Planning_B.low_i);
  Motion_Planning_B.mid_i = dkappa->size[0];
  Motion_Planning_emxFree_real_T(&dxy_1);
  Motion_Planning_emxFree_real_T(&dxy_0);
  Motion_Planning_emxFree_real_T(&b_s_contents);
  for (Motion_Planning_B.low_i = 0; Motion_Planning_B.low_i <
       Motion_Planning_B.mid_i; Motion_Planning_B.low_i++) {
    dkappa->data[Motion_Planning_B.low_i] /= cumulativeLength_contents->
      data[Motion_Planning_B.low_i];
  }

  Motion_Planning_emxFree_real_T(&cumulativeLength_contents);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static referencePathFrenet_Motion_Pl_T *referencePathFrenet_referencePa
  (referencePathFrenet_Motion_Pl_T *obj, const real_T varargin_1_data[], const
   int32_T varargin_1_size[2])
{
  emxArray_real_T_Motion_Planni_T *dkappa;
  emxArray_real_T_Motion_Planni_T *kappa;
  emxArray_real_T_Motion_Planni_T *s;
  emxArray_real_T_Motion_Planni_T *theta;
  emxArray_real_T_Motion_Planni_T *x;
  emxArray_real_T_Motion_Planni_T *y;
  referencePathFrenet_Motion_Pl_T *b_obj;
  b_obj = obj;
  obj->DiscretizationDistance = 0.01;
  Motion_Planning_emxInit_real_T(&x, 1);
  Motion_Planning_emxInit_real_T(&y, 1);
  Motion_Planning_emxInit_real_T(&theta, 1);
  Motion_Planning_emxInit_real_T(&kappa, 1);
  Motion_Planning_emxInit_real_T(&dkappa, 1);
  Motion_Planning_emxInit_real_T(&s, 1);
  if (varargin_1_size[1] == 2) {
    FrenetReferencePath_fitClothoid(obj, varargin_1_data, varargin_1_size, x, y,
      theta, kappa, dkappa, s);
  }

  Motion_Planning_B.i_k = obj->PathPoints->size[0] * obj->PathPoints->size[1];
  obj->PathPoints->size[0] = x->size[0];
  obj->PathPoints->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(obj->PathPoints, Motion_Planning_B.i_k);
  Motion_Planning_B.loop_ub_h = x->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[Motion_Planning_B.i_k] = x->data[Motion_Planning_B.i_k];
  }

  Motion_Planning_B.loop_ub_h = y->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[Motion_Planning_B.i_k + x->size[0]] = y->
      data[Motion_Planning_B.i_k];
  }

  Motion_Planning_B.loop_ub_h = theta->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[(Motion_Planning_B.i_k + x->size[0]) + y->size[0]] =
      theta->data[Motion_Planning_B.i_k];
  }

  Motion_Planning_B.loop_ub_h = kappa->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[((Motion_Planning_B.i_k + x->size[0]) + y->size[0]) +
      theta->size[0]] = kappa->data[Motion_Planning_B.i_k];
  }

  Motion_Planning_B.loop_ub_h = dkappa->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[(((Motion_Planning_B.i_k + x->size[0]) + y->size[0]) +
      theta->size[0]) + kappa->size[0]] = dkappa->data[Motion_Planning_B.i_k];
  }

  Motion_Planning_B.loop_ub_h = s->size[0];
  for (Motion_Planning_B.i_k = 0; Motion_Planning_B.i_k <
       Motion_Planning_B.loop_ub_h; Motion_Planning_B.i_k++) {
    obj->PathPoints->data[((((Motion_Planning_B.i_k + x->size[0]) + y->size[0])
      + theta->size[0]) + kappa->size[0]) + dkappa->size[0]] = s->
      data[Motion_Planning_B.i_k];
  }

  Motion_Planning_emxFree_real_T(&s);
  Motion_Planning_emxFree_real_T(&dkappa);
  Motion_Planning_emxFree_real_T(&kappa);
  Motion_Planning_emxFree_real_T(&theta);
  Motion_Planning_emxFree_real_T(&y);
  Motion_Planning_emxFree_real_T(&x);
  return b_obj;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_sum(const emxArray_real_T_Motion_Planni_T *x,
  emxArray_real_T_Motion_Planni_T *y)
{
  int32_T j;
  int32_T vstride;
  if (x->size[0] == 0) {
    y->size[0] = 0;
  } else {
    vstride = x->size[0] - 1;
    j = y->size[0];
    y->size[0] = x->size[0];
    Motion_emxEnsureCapacity_real_T(y, j);
    for (j = 0; j <= vstride; j++) {
      y->data[j] = x->data[j];
    }

    for (j = 0; j <= vstride; j++) {
      y->data[j] += x->data[(vstride + j) + 1];
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_repmat_mmh(const real_T a[6], real_T varargin_1,
  emxArray_real_T_Motion_Planni_T *b)
{
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  jcol = b->size[0] * b->size[1];
  b->size[0] = static_cast<int32_T>(varargin_1);
  b->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(b, jcol);
  for (jcol = 0; jcol < 6; jcol++) {
    ibmat = jcol * static_cast<int32_T>(varargin_1);
    for (itilerow = 0; itilerow < static_cast<int32_T>(varargin_1); itilerow++)
    {
      b->data[ibmat + itilerow] = a[jcol];
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static real_T Motion_Planning_mod(real_T x)
{
  real_T q;
  real_T r;
  boolean_T rEQ0;
  if (rtIsNaN(x)) {
    r = (rtNaN);
  } else if (rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = fmod(x, 6.2831853071795862);
    rEQ0 = (r == 0.0);
    if (!rEQ0) {
      q = fabs(x / 6.2831853071795862);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = 0.0;
    } else {
      if (x < 0.0) {
        r += 6.2831853071795862;
      }
    }
  }

  return r;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_wrapToPi(emxArray_real_T_Motion_Planni_T *theta)
{
  emxArray_boolean_T_Motion_Pla_T *x;
  emxArray_real_T_Motion_Planni_T *y;
  emxArray_real_T_Motion_Planni_T *z1;
  boolean_T exitg1;
  Motion_Planning_emxInit_real_T(&y, 1);
  Motion_Planning_B.b_k_gy = y->size[0];
  y->size[0] = theta->size[0];
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_gy);
  Motion_Planning_B.b_k_gy = 0;
  while (Motion_Planning_B.b_k_gy <= theta->size[0] - 1) {
    y->data[Motion_Planning_B.b_k_gy] = fabs(theta->
      data[Motion_Planning_B.b_k_gy]);
    Motion_Planning_B.b_k_gy++;
  }

  Motion_Planni_emxInit_boolean_T(&x, 1);
  Motion_Planning_B.b_k_gy = x->size[0];
  x->size[0] = y->size[0];
  Mot_emxEnsureCapacity_boolean_T(x, Motion_Planning_B.b_k_gy);
  Motion_Planning_B.loop_ub_bp = y->size[0];
  for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
       Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
    x->data[Motion_Planning_B.b_k_gy] = (y->data[Motion_Planning_B.b_k_gy] >
      3.1415926535897931);
  }

  Motion_Planning_B.b_y_c = false;
  Motion_Planning_B.b_k_gy = 1;
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.b_k_gy <= x->size[0])) {
    if (!x->data[Motion_Planning_B.b_k_gy - 1]) {
      Motion_Planning_B.b_k_gy++;
    } else {
      Motion_Planning_B.b_y_c = true;
      exitg1 = true;
    }
  }

  if (Motion_Planning_B.b_y_c) {
    Motion_Planning_B.b_k_gy = y->size[0];
    y->size[0] = theta->size[0];
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.loop_ub_bp = theta->size[0];
    for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
         Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
      y->data[Motion_Planning_B.b_k_gy] = theta->data[Motion_Planning_B.b_k_gy]
        + 3.1415926535897931;
    }

    Motion_Planning_emxInit_real_T(&z1, 1);
    Motion_Planning_B.b_k_gy = theta->size[0];
    theta->size[0] = y->size[0];
    Motion_emxEnsureCapacity_real_T(theta, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.b_k_gy = z1->size[0];
    z1->size[0] = theta->size[0];
    Motion_emxEnsureCapacity_real_T(z1, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.loop_ub_bp = theta->size[0];
    for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
         Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
      z1->data[Motion_Planning_B.b_k_gy] = theta->data[Motion_Planning_B.b_k_gy];
    }

    Motion_Planning_B.b_k_gy = 0;
    while (Motion_Planning_B.b_k_gy <= theta->size[0] - 1) {
      z1->data[Motion_Planning_B.b_k_gy] = Motion_Planning_mod(y->
        data[Motion_Planning_B.b_k_gy]);
      Motion_Planning_B.b_k_gy++;
    }

    Motion_Planning_B.b_k_gy = theta->size[0];
    theta->size[0] = z1->size[0];
    Motion_emxEnsureCapacity_real_T(theta, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.loop_ub_bp = z1->size[0];
    for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
         Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
      theta->data[Motion_Planning_B.b_k_gy] = z1->data[Motion_Planning_B.b_k_gy];
    }

    Motion_Planning_B.b_k_gy = x->size[0];
    x->size[0] = z1->size[0];
    Mot_emxEnsureCapacity_boolean_T(x, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.loop_ub_bp = z1->size[0];
    for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
         Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
      x->data[Motion_Planning_B.b_k_gy] = (z1->data[Motion_Planning_B.b_k_gy] ==
        0.0);
    }

    Motion_Planning_emxFree_real_T(&z1);
    Motion_Planning_B.b_k_gy = 0;
    while (Motion_Planning_B.b_k_gy <= x->size[0] - 1) {
      if (x->data[Motion_Planning_B.b_k_gy] && (y->data[Motion_Planning_B.b_k_gy]
           > 0.0)) {
        theta->data[Motion_Planning_B.b_k_gy] = 6.2831853071795862;
      }

      Motion_Planning_B.b_k_gy++;
    }

    Motion_Planning_B.b_k_gy = theta->size[0];
    Motion_emxEnsureCapacity_real_T(theta, Motion_Planning_B.b_k_gy);
    Motion_Planning_B.loop_ub_bp = theta->size[0];
    for (Motion_Planning_B.b_k_gy = 0; Motion_Planning_B.b_k_gy <
         Motion_Planning_B.loop_ub_bp; Motion_Planning_B.b_k_gy++) {
      theta->data[Motion_Planning_B.b_k_gy] -= 3.1415926535897931;
    }
  }

  Motion_Planni_emxFree_boolean_T(&x);
  Motion_Planning_emxFree_real_T(&y);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void FrenetReferencePath_getClosestP(const
  emxArray_real_T_Motion_Planni_T *pathPoints, const real_T startIdx_data[],
  const int32_T startIdx_size[2], const real_T endIdx_data[], const int32_T
  endIdx_size[2], const real_T s_data[], const int32_T s_size[2], real_T
  pathPoint_data[], int32_T pathPoint_size[2])
{
  emxArray_boolean_T_Motion_Pla_T *e_x;
  emxArray_real_T_Motion_Planni_T *b_y;
  emxArray_real_T_Motion_Planni_T *d_x;
  boolean_T exitg1;
  Motion_Planning_B.startPoint_size_idx_0 = startIdx_size[1];
  Motion_Planning_B.endPoint_size_idx_0 = endIdx_size[1];
  Motion_Planning_B.loop_ub_gf = startIdx_size[1];
  Motion_Planning_B.loop_ub_ad = endIdx_size[1];
  for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g < 6;
       Motion_Planning_B.k_g++) {
    for (Motion_Planning_B.a0n_size_idx_0 = 0; Motion_Planning_B.a0n_size_idx_0 <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.a0n_size_idx_0++) {
      Motion_Planning_B.startPoint_data[Motion_Planning_B.a0n_size_idx_0 +
        Motion_Planning_B.startPoint_size_idx_0 * Motion_Planning_B.k_g] =
        pathPoints->data[(pathPoints->size[0] * Motion_Planning_B.k_g +
                          static_cast<int32_T>
                          (startIdx_data[Motion_Planning_B.a0n_size_idx_0])) - 1];
    }

    for (Motion_Planning_B.a0n_size_idx_0 = 0; Motion_Planning_B.a0n_size_idx_0 <
         Motion_Planning_B.loop_ub_ad; Motion_Planning_B.a0n_size_idx_0++) {
      Motion_Planning_B.endPoint_data[Motion_Planning_B.a0n_size_idx_0 +
        Motion_Planning_B.endPoint_size_idx_0 * Motion_Planning_B.k_g] =
        pathPoints->data[(pathPoints->size[0] * Motion_Planning_B.k_g +
                          static_cast<int32_T>
                          (endIdx_data[Motion_Planning_B.a0n_size_idx_0])) - 1];
    }
  }

  Motion_Planning_B.b_x_tmp = s_data[0] -
    Motion_Planning_B.startPoint_data[startIdx_size[1] * 5];
  Motion_Planning_B.b_x = fabs(Motion_Planning_B.b_x_tmp);
  Motion_Planning_B.loop_ub_gf = endIdx_size[1];
  for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
       Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
    Motion_Planning_B.weight_data_j = Motion_Planning_B.b_x /
      (Motion_Planning_B.endPoint_data[Motion_Planning_B.endPoint_size_idx_0 * 5
       + Motion_Planning_B.k_g] -
       Motion_Planning_B.startPoint_data[Motion_Planning_B.startPoint_size_idx_0
       * 5 + Motion_Planning_B.k_g]);
    Motion_Planning_B.x_data_j = (1.0 - Motion_Planning_B.weight_data_j) *
      Motion_Planning_B.startPoint_data[Motion_Planning_B.k_g] +
      Motion_Planning_B.weight_data_j *
      Motion_Planning_B.endPoint_data[Motion_Planning_B.k_g];
    Motion_Planning_B.y_data_f1 = (1.0 - Motion_Planning_B.weight_data_j) *
      Motion_Planning_B.startPoint_data[Motion_Planning_B.k_g +
      Motion_Planning_B.startPoint_size_idx_0] +
      Motion_Planning_B.endPoint_data[Motion_Planning_B.k_g +
      Motion_Planning_B.endPoint_size_idx_0] * Motion_Planning_B.weight_data_j;
    Motion_Planning_B.kappa_data =
      Motion_Planning_B.startPoint_data[Motion_Planning_B.startPoint_size_idx_0 *
      3 + Motion_Planning_B.k_g] * (1.0 - Motion_Planning_B.weight_data_j) +
      Motion_Planning_B.endPoint_data[Motion_Planning_B.endPoint_size_idx_0 * 3
      + Motion_Planning_B.k_g] * Motion_Planning_B.weight_data_j;
    Motion_Planning_B.weight_data_j = Motion_Planning_B.startPoint_data
      [(Motion_Planning_B.startPoint_size_idx_0 << 2) + Motion_Planning_B.k_g] *
      (1.0 - Motion_Planning_B.weight_data_j) + Motion_Planning_B.endPoint_data
      [(Motion_Planning_B.endPoint_size_idx_0 << 2) + Motion_Planning_B.k_g] *
      Motion_Planning_B.weight_data_j;
    Motion_Planning_B.weight_data = Motion_Planning_B.weight_data_j;
  }

  Motion_Planning_emxInit_real_T(&d_x, 1);
  Motion_Planning_B.loop_ub_gf = endIdx_size[1];
  Motion_Planning_B.k_g = d_x->size[0];
  d_x->size[0] = endIdx_size[1];
  Motion_emxEnsureCapacity_real_T(d_x, Motion_Planning_B.k_g);
  for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
       Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
    d_x->data[Motion_Planning_B.k_g] =
      Motion_Planning_B.endPoint_data[Motion_Planning_B.endPoint_size_idx_0 * 5
      + Motion_Planning_B.k_g] -
      Motion_Planning_B.startPoint_data[Motion_Planning_B.startPoint_size_idx_0 *
      5 + Motion_Planning_B.k_g];
  }

  Motion_Planning_emxInit_real_T(&b_y, 1);
  Motion_Planning_B.k_g = b_y->size[0];
  b_y->size[0] = d_x->size[0];
  Motion_emxEnsureCapacity_real_T(b_y, Motion_Planning_B.k_g);
  Motion_Planning_B.k_g = 0;
  while (Motion_Planning_B.k_g <= d_x->size[0] - 1) {
    b_y->data[0] = fabs(d_x->data[0]);
    Motion_Planning_B.k_g = 1;
  }

  Motion_Planni_emxInit_boolean_T(&e_x, 1);
  Motion_Planning_B.k_g = e_x->size[0];
  e_x->size[0] = b_y->size[0];
  Mot_emxEnsureCapacity_boolean_T(e_x, Motion_Planning_B.k_g);
  Motion_Planning_B.loop_ub_gf = b_y->size[0];
  for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
       Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
    e_x->data[Motion_Planning_B.k_g] = (b_y->data[Motion_Planning_B.k_g] <=
      2.2204460492503131E-16);
  }

  Motion_Planning_emxFree_real_T(&b_y);
  Motion_Planning_B.c_y = (e_x->size[0] != 0);
  if (Motion_Planning_B.c_y) {
    Motion_Planning_B.k_g = 0;
    exitg1 = false;
    while ((!exitg1) && (Motion_Planning_B.k_g <= e_x->size[0] - 1)) {
      if (!e_x->data[0]) {
        Motion_Planning_B.c_y = false;
        exitg1 = true;
      } else {
        Motion_Planning_B.k_g = 1;
      }
    }
  }

  Motion_Planni_emxFree_boolean_T(&e_x);
  if (Motion_Planning_B.c_y) {
    Motion_Planning_B.loop_ub_gf = startIdx_size[1];
    Motion_Planning_B.a0n_size_idx_0 = startIdx_size[1];
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      Motion_Planning_B.a0n_data = Motion_Planning_B.startPoint_data
        [(Motion_Planning_B.startPoint_size_idx_0 << 1) + Motion_Planning_B.k_g];
    }
  } else {
    Motion_Planning_B.loop_ub_gf = startIdx_size[1];
    Motion_Planning_B.k_g = d_x->size[0];
    d_x->size[0] = startIdx_size[1];
    Motion_emxEnsureCapacity_real_T(d_x, Motion_Planning_B.k_g);
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      d_x->data[Motion_Planning_B.k_g] = Motion_Planning_B.startPoint_data
        [(Motion_Planning_B.startPoint_size_idx_0 << 1) + Motion_Planning_B.k_g];
    }

    Motion_Planning_wrapToPi(d_x);
    Motion_Planning_B.a0n_size_idx_0 = d_x->size[0];
    Motion_Planning_B.loop_ub_gf = d_x->size[0];
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      Motion_Planning_B.a0n_data = d_x->data[Motion_Planning_B.k_g];
    }

    Motion_Planning_B.loop_ub_gf = endIdx_size[1];
    Motion_Planning_B.k_g = d_x->size[0];
    d_x->size[0] = endIdx_size[1];
    Motion_emxEnsureCapacity_real_T(d_x, Motion_Planning_B.k_g);
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      d_x->data[Motion_Planning_B.k_g] = Motion_Planning_B.endPoint_data
        [(Motion_Planning_B.endPoint_size_idx_0 << 1) + Motion_Planning_B.k_g];
    }

    Motion_Planning_wrapToPi(d_x);
    Motion_Planning_B.k_g = d_x->size[0];
    Motion_emxEnsureCapacity_real_T(d_x, Motion_Planning_B.k_g);
    Motion_Planning_B.loop_ub_gf = d_x->size[0];
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      d_x->data[Motion_Planning_B.k_g] -= Motion_Planning_B.a0n_data;
    }

    Motion_Planning_wrapToPi(d_x);
    Motion_Planning_B.k_g = d_x->size[0];
    d_x->size[0] = Motion_Planning_B.a0n_size_idx_0;
    Motion_emxEnsureCapacity_real_T(d_x, Motion_Planning_B.k_g);
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.a0n_size_idx_0; Motion_Planning_B.k_g++) {
      d_x->data[Motion_Planning_B.k_g] = Motion_Planning_B.b_x_tmp /
        (Motion_Planning_B.endPoint_data[Motion_Planning_B.endPoint_size_idx_0 *
         5 + Motion_Planning_B.k_g] -
         Motion_Planning_B.startPoint_data[Motion_Planning_B.startPoint_size_idx_0
         * 5 + Motion_Planning_B.k_g]) * d_x->data[Motion_Planning_B.k_g] +
        Motion_Planning_B.a0n_data;
    }

    Motion_Planning_wrapToPi(d_x);
    Motion_Planning_B.a0n_size_idx_0 = d_x->size[0];
    Motion_Planning_B.loop_ub_gf = d_x->size[0];
    for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <
         Motion_Planning_B.loop_ub_gf; Motion_Planning_B.k_g++) {
      Motion_Planning_B.a0n_data = d_x->data[Motion_Planning_B.k_g];
    }
  }

  Motion_Planning_emxFree_real_T(&d_x);
  pathPoint_size[0] = 1;
  if (s_size[1] != 0) {
    Motion_Planning_B.k_g = s_size[1];
  } else {
    Motion_Planning_B.k_g = 0;
  }

  pathPoint_size[1] = (((((endIdx_size[1] != 0) + (endIdx_size[1] != 0)) +
    (Motion_Planning_B.a0n_size_idx_0 != 0)) + (endIdx_size[1] != 0)) +
                       (endIdx_size[1] != 0)) + Motion_Planning_B.k_g;
  Motion_Planning_B.loop_ub_gf = (endIdx_size[1] != 0);
  Motion_Planning_B.loop_ub_ad = (endIdx_size[1] != 0);
  Motion_Planning_B.a0n_size_idx_0 = (Motion_Planning_B.a0n_size_idx_0 != 0);
  Motion_Planning_B.startPoint_size_idx_0 = (endIdx_size[1] != 0);
  Motion_Planning_B.endPoint_size_idx_0 = (endIdx_size[1] != 0);
  if (s_size[1] != 0) {
    Motion_Planning_B.k_g = s_size[1];
  } else {
    Motion_Planning_B.k_g = 0;
  }

  Motion_Planning_B.loop_ub_o2 = Motion_Planning_B.k_g - 1;
  if (0 <= Motion_Planning_B.loop_ub_gf - 1) {
    pathPoint_data[0] = Motion_Planning_B.x_data_j;
  }

  if (0 <= Motion_Planning_B.loop_ub_ad - 1) {
    pathPoint_data[Motion_Planning_B.loop_ub_gf] = Motion_Planning_B.y_data_f1;
  }

  if (0 <= Motion_Planning_B.a0n_size_idx_0 - 1) {
    pathPoint_data[Motion_Planning_B.loop_ub_gf + Motion_Planning_B.loop_ub_ad] =
      Motion_Planning_B.a0n_data;
  }

  if (0 <= Motion_Planning_B.startPoint_size_idx_0 - 1) {
    pathPoint_data[(Motion_Planning_B.loop_ub_gf + Motion_Planning_B.loop_ub_ad)
      + Motion_Planning_B.a0n_size_idx_0] = Motion_Planning_B.kappa_data;
  }

  if (0 <= Motion_Planning_B.endPoint_size_idx_0 - 1) {
    pathPoint_data[((Motion_Planning_B.loop_ub_gf + Motion_Planning_B.loop_ub_ad)
                    + Motion_Planning_B.a0n_size_idx_0) +
      Motion_Planning_B.startPoint_size_idx_0] = Motion_Planning_B.weight_data;
  }

  for (Motion_Planning_B.k_g = 0; Motion_Planning_B.k_g <=
       Motion_Planning_B.loop_ub_o2; Motion_Planning_B.k_g++) {
    pathPoint_data[((((Motion_Planning_B.k_g + Motion_Planning_B.loop_ub_gf) +
                      Motion_Planning_B.loop_ub_ad) +
                     Motion_Planning_B.a0n_size_idx_0) +
                    Motion_Planning_B.startPoint_size_idx_0) +
      Motion_Planning_B.endPoint_size_idx_0] = s_data[Motion_Planning_B.k_g];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void referencePathFrenet_closestPoin(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T point[2], real_T pathPoint
  [6])
{
  emxArray_real_T_Motion_Planni_T *result;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *varargin_1;
  emxArray_real_T_Motion_Planni_T *y;
  boolean_T exitg1;
  boolean_T guard1 = false;
  Motion_Planning_emxInit_real_T(&result, 2);
  Motion_Planning_B.startIdx = point[0];
  Motion_Planning_B.v1x = point[1];
  Motion_Planning_B.loop_ub_c1 = obj->PathPoints->size[0];
  Motion_Planning_B.loop_ub_ok = obj->PathPoints->size[0];
  Motion_Planning_B.nx_i = result->size[0] * result->size[1];
  result->size[0] = Motion_Planning_B.loop_ub_c1;
  result->size[1] = 2;
  Motion_emxEnsureCapacity_real_T(result, Motion_Planning_B.nx_i);
  for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i <
       Motion_Planning_B.loop_ub_c1; Motion_Planning_B.nx_i++) {
    result->data[Motion_Planning_B.nx_i] = obj->PathPoints->
      data[Motion_Planning_B.nx_i] - Motion_Planning_B.startIdx;
  }

  for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i <
       Motion_Planning_B.loop_ub_ok; Motion_Planning_B.nx_i++) {
    result->data[Motion_Planning_B.nx_i + result->size[0]] = obj->
      PathPoints->data[Motion_Planning_B.nx_i + obj->PathPoints->size[0]] -
      Motion_Planning_B.v1x;
  }

  Motion_Planning_emxInit_real_T(&y, 2);
  Motion_Planning_B.nx_i = y->size[0] * y->size[1];
  y->size[0] = result->size[0];
  y->size[1] = 2;
  Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nx_i);
  Motion_Planning_B.nx_i = result->size[0] << 1;
  Motion_Planning_B.b_k_g = 0;
  while (Motion_Planning_B.b_k_g <= Motion_Planning_B.nx_i - 1) {
    y->data[Motion_Planning_B.b_k_g] = result->data[Motion_Planning_B.b_k_g] *
      result->data[Motion_Planning_B.b_k_g];
    Motion_Planning_B.b_k_g++;
  }

  Motion_Planning_emxFree_real_T(&result);
  Motion_Planning_emxInit_real_T(&varargin_1, 1);
  Motion_Planning_sum(y, varargin_1);
  Motion_Planning_emxFree_real_T(&y);
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      Motion_Planning_B.nx_i = 1;
    } else if (varargin_1->data[0] > varargin_1->data[1]) {
      Motion_Planning_B.nx_i = 2;
    } else if (rtIsNaN(varargin_1->data[0])) {
      if (!rtIsNaN(varargin_1->data[1])) {
        Motion_Planning_B.nx_i = 2;
      } else {
        Motion_Planning_B.nx_i = 1;
      }
    } else {
      Motion_Planning_B.nx_i = 1;
    }
  } else {
    if (!rtIsNaN(varargin_1->data[0])) {
      Motion_Planning_B.nx_i = 1;
    } else {
      Motion_Planning_B.nx_i = 0;
      Motion_Planning_B.b_k_g = 2;
      exitg1 = false;
      while ((!exitg1) && (Motion_Planning_B.b_k_g <= varargin_1->size[0])) {
        if (!rtIsNaN(varargin_1->data[Motion_Planning_B.b_k_g - 1])) {
          Motion_Planning_B.nx_i = Motion_Planning_B.b_k_g;
          exitg1 = true;
        } else {
          Motion_Planning_B.b_k_g++;
        }
      }
    }

    if (Motion_Planning_B.nx_i == 0) {
      Motion_Planning_B.nx_i = 1;
    } else {
      Motion_Planning_B.startIdx = varargin_1->data[Motion_Planning_B.nx_i - 1];
      Motion_Planning_B.b_k_g = Motion_Planning_B.nx_i;
      while (Motion_Planning_B.b_k_g + 1 <= varargin_1->size[0]) {
        if (Motion_Planning_B.startIdx > varargin_1->
            data[Motion_Planning_B.b_k_g]) {
          Motion_Planning_B.startIdx = varargin_1->data[Motion_Planning_B.b_k_g];
          Motion_Planning_B.nx_i = Motion_Planning_B.b_k_g + 1;
        }

        Motion_Planning_B.b_k_g++;
      }
    }
  }

  Motion_Planning_emxFree_real_T(&varargin_1);
  Motion_Planning_emxInit_real_T(&tmp, 2);
  guard1 = false;
  if (Motion_Planning_B.nx_i == obj->PathPoints->size[0]) {
    if ((point[1] - obj->PathPoints->data[(obj->PathPoints->size[0] +
          obj->PathPoints->size[0]) - 1]) * (obj->PathPoints->data
         [(obj->PathPoints->size[0] + obj->PathPoints->size[0]) - 2] -
         obj->PathPoints->data[(obj->PathPoints->size[0] + obj->PathPoints->
          size[0]) - 1]) + (point[0] - obj->PathPoints->data[obj->
                            PathPoints->size[0] - 1]) * (obj->PathPoints->
         data[obj->PathPoints->size[0] - 2] - obj->PathPoints->data
         [obj->PathPoints->size[0] - 1]) <= 0.0) {
      Motion_Planning_B.b_k_g = obj->PathPoints->size[0];
      for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i < 6;
           Motion_Planning_B.nx_i++) {
        pathPoint[Motion_Planning_B.nx_i] = obj->PathPoints->data
          [(obj->PathPoints->size[0] * Motion_Planning_B.nx_i +
            Motion_Planning_B.b_k_g) - 1];
      }
    } else {
      Motion_Planning_B.v1x = obj->PathPoints->data[obj->PathPoints->size[0] - 1]
        - obj->PathPoints->data[obj->PathPoints->size[0] - 2];
      Motion_Planning_B.endIdx = obj->PathPoints->data[(obj->PathPoints->size[0]
        + obj->PathPoints->size[0]) - 1] - obj->PathPoints->data
        [(obj->PathPoints->size[0] + obj->PathPoints->size[0]) - 2];
      Motion_Planning_B.dotV = (point[1] - obj->PathPoints->data
        [(obj->PathPoints->size[0] + obj->PathPoints->size[0]) - 2]) *
        Motion_Planning_B.endIdx + (point[0] - obj->PathPoints->data
        [obj->PathPoints->size[0] - 2]) * Motion_Planning_B.v1x;
      Motion_Planning_B.startIdx = static_cast<real_T>(obj->PathPoints->size[0])
        - 1.0;
      guard1 = true;
    }
  } else if (Motion_Planning_B.nx_i == 1) {
    Motion_Planning_B.v1x = obj->PathPoints->data[1] - obj->PathPoints->data[0];
    Motion_Planning_B.endIdx = obj->PathPoints->data[obj->PathPoints->size[0] +
      1] - obj->PathPoints->data[obj->PathPoints->size[0]];
    Motion_Planning_B.dotV = (point[0] - obj->PathPoints->data[0]) *
      Motion_Planning_B.v1x + (point[1] - obj->PathPoints->data[obj->
      PathPoints->size[0]]) * Motion_Planning_B.endIdx;
    if (Motion_Planning_B.dotV <= 0.0) {
      for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i < 6;
           Motion_Planning_B.nx_i++) {
        pathPoint[Motion_Planning_B.nx_i] = obj->PathPoints->data
          [obj->PathPoints->size[0] * Motion_Planning_B.nx_i];
      }
    } else {
      Motion_Planning_B.startIdx = 1.0;
      guard1 = true;
    }
  } else {
    Motion_Planning_B.startIdx = (point[0] - obj->PathPoints->
      data[Motion_Planning_B.nx_i - 1]) * (obj->PathPoints->
      data[Motion_Planning_B.nx_i - 1] - obj->PathPoints->
      data[Motion_Planning_B.nx_i - 2]);
    Motion_Planning_B.startIdx += (point[1] - obj->PathPoints->data
      [(Motion_Planning_B.nx_i + obj->PathPoints->size[0]) - 1]) *
      (obj->PathPoints->data[(Motion_Planning_B.nx_i + obj->PathPoints->size[0])
       - 1] - obj->PathPoints->data[(Motion_Planning_B.nx_i + obj->
        PathPoints->size[0]) - 2]);
    if (Motion_Planning_B.startIdx < 0.0) {
      Motion_Planning_B.startIdx = static_cast<real_T>(Motion_Planning_B.nx_i) -
        1.0;
      Motion_Planning_B.endIdx = Motion_Planning_B.nx_i;
    } else {
      Motion_Planning_B.startIdx = Motion_Planning_B.nx_i;
      Motion_Planning_B.endIdx = static_cast<real_T>(Motion_Planning_B.nx_i) +
        1.0;
    }

    Motion_Planning_B.v1x = obj->PathPoints->data[static_cast<int32_T>
      (Motion_Planning_B.endIdx) - 1] - obj->PathPoints->data
      [static_cast<int32_T>(Motion_Planning_B.startIdx) - 1];
    Motion_Planning_B.endIdx = obj->PathPoints->data[(static_cast<int32_T>
      (Motion_Planning_B.endIdx) + obj->PathPoints->size[0]) - 1] -
      obj->PathPoints->data[(static_cast<int32_T>(Motion_Planning_B.startIdx) +
      obj->PathPoints->size[0]) - 1];
    Motion_Planning_B.dotV = (point[1] - obj->PathPoints->data
      [(static_cast<int32_T>(Motion_Planning_B.startIdx) + obj->PathPoints->
        size[0]) - 1]) * Motion_Planning_B.endIdx + (point[0] - obj->
      PathPoints->data[static_cast<int32_T>(Motion_Planning_B.startIdx) - 1]) *
      Motion_Planning_B.v1x;
    guard1 = true;
  }

  if (guard1) {
    Motion_Planning_B.startIdx = obj->PathPoints->data[(obj->PathPoints->size[0]
      * 5 + static_cast<int32_T>(Motion_Planning_B.startIdx)) - 1] +
      Motion_Planning_B.dotV / sqrt(Motion_Planning_B.v1x *
      Motion_Planning_B.v1x + Motion_Planning_B.endIdx *
      Motion_Planning_B.endIdx);
    Motion_Planning_B.v1x = floor(1.0 / obj->DiscretizationDistance *
      Motion_Planning_B.startIdx);
    Motion_Planning_B.b_k_g = obj->PathPoints->size[0];
    for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i < 6;
         Motion_Planning_B.nx_i++) {
      pathPoint[Motion_Planning_B.nx_i] = obj->PathPoints->data[(obj->
        PathPoints->size[0] * Motion_Planning_B.nx_i + Motion_Planning_B.b_k_g)
        - 1];
    }

    Motion_Planning_B.b_k_g = 0;
    if (Motion_Planning_B.v1x + 1.0 <= 0.0) {
      Motion_Planning_B.b_k_g = 1;
    }

    for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i < 6;
         Motion_Planning_B.nx_i++) {
      Motion_Planning_B.interpolatedPts_data[Motion_Planning_B.nx_i] =
        obj->PathPoints->data[obj->PathPoints->size[0] * Motion_Planning_B.nx_i];
    }

    Motion_Planning_repmat_mmh(Motion_Planning_B.interpolatedPts_data,
      static_cast<real_T>(Motion_Planning_B.b_k_g), tmp);
    Motion_Planning_B.loop_ub_c1 = tmp->size[0];
    for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i < 6;
         Motion_Planning_B.nx_i++) {
      for (Motion_Planning_B.b_k_g = 0; Motion_Planning_B.b_k_g <
           Motion_Planning_B.loop_ub_c1; Motion_Planning_B.b_k_g++) {
        pathPoint[Motion_Planning_B.nx_i] = tmp->data[tmp->size[0] *
          Motion_Planning_B.nx_i + Motion_Planning_B.b_k_g];
      }
    }

    Motion_Planning_B.c_g = !(Motion_Planning_B.v1x + 1.0 <= 0.0);
    Motion_Planning_B.d_f = (Motion_Planning_B.startIdx < obj->PathPoints->
      data[obj->PathPoints->size[0] * 6 - 1]);
    if (Motion_Planning_B.c_g && Motion_Planning_B.d_f) {
      Motion_Planning_B.nx_i = 0;
      if (Motion_Planning_B.c_g && Motion_Planning_B.d_f) {
        Motion_Planning_B.nx_i = 1;
      }

      Motion_Planning_B.x_tmp_size[0] = 1;
      Motion_Planning_B.x_tmp_size[1] = 1;
      Motion_Planning_B.x_tmp_size_h[0] = 1;
      Motion_Planning_B.x_tmp_size_h[1] = 1;
      Motion_Planning_B.x_tmp_data = Motion_Planning_B.v1x + 1.0;
      Motion_Planning_B.x_tmp_data_d = (Motion_Planning_B.v1x + 1.0) + 1.0;
      Motion_Planning_B.arcLength_size[0] = 1;
      Motion_Planning_B.arcLength_size[1] = Motion_Planning_B.nx_i;
      if (0 <= Motion_Planning_B.nx_i - 1) {
        Motion_Planning_B.arcLength_data = Motion_Planning_B.startIdx;
      }

      FrenetReferencePath_getClosestP(obj->PathPoints,
        &Motion_Planning_B.x_tmp_data, Motion_Planning_B.x_tmp_size,
        &Motion_Planning_B.x_tmp_data_d, Motion_Planning_B.x_tmp_size_h,
        &Motion_Planning_B.arcLength_data, Motion_Planning_B.arcLength_size,
        Motion_Planning_B.interpolatedPts_data,
        Motion_Planning_B.interpolatedPts_size);
      Motion_Planning_B.loop_ub_c1 = Motion_Planning_B.interpolatedPts_size[1];
      for (Motion_Planning_B.nx_i = 0; Motion_Planning_B.nx_i <
           Motion_Planning_B.loop_ub_c1; Motion_Planning_B.nx_i++) {
        Motion_Planning_B.loop_ub_ok = Motion_Planning_B.interpolatedPts_size[0];
        for (Motion_Planning_B.b_k_g = 0; Motion_Planning_B.b_k_g <
             Motion_Planning_B.loop_ub_ok; Motion_Planning_B.b_k_g++) {
          pathPoint[Motion_Planning_B.nx_i] =
            Motion_Planning_B.interpolatedPts_data[Motion_Planning_B.interpolatedPts_size
            [0] * Motion_Planning_B.nx_i + Motion_Planning_B.b_k_g];
        }
      }
    }
  }

  Motion_Planning_emxFree_real_T(&tmp);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void Motion_Planning_wrapToPi_k(real_T *theta)
{
  real_T thetaWrap;
  if (fabs(*theta) > 3.1415926535897931) {
    thetaWrap = Motion_Planning_mod(*theta + 3.1415926535897931);
    if ((thetaWrap == 0.0) && (*theta + 3.1415926535897931 > 0.0)) {
      thetaWrap = 6.2831853071795862;
    }

    *theta = thetaWrap - 3.1415926535897931;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void referencePathFrenet_global2fren(const
  referencePathFrenet_Motion_Pl_T *obj, const real_T globalState[6], real_T
  frenetState[6])
{
  referencePathFrenet_closestPoin(obj, &globalState[0],
    Motion_Planning_B.refPathPoints);
  Motion_Planning_B.refTheta = Motion_Planning_B.refPathPoints[2];
  Motion_Planning_wrapToPi_k(&Motion_Planning_B.refTheta);
  Motion_Planning_B.dx = globalState[0] - Motion_Planning_B.refPathPoints[0];
  Motion_Planning_B.dy = globalState[1] - Motion_Planning_B.refPathPoints[1];
  Motion_Planning_B.scale_l = 3.3121686421112381E-170;
  Motion_Planning_B.absxk_g = fabs(Motion_Planning_B.dx);
  if (Motion_Planning_B.absxk_g > 3.3121686421112381E-170) {
    Motion_Planning_B.l = 1.0;
    Motion_Planning_B.scale_l = Motion_Planning_B.absxk_g;
  } else {
    Motion_Planning_B.t_d = Motion_Planning_B.absxk_g / 3.3121686421112381E-170;
    Motion_Planning_B.l = Motion_Planning_B.t_d * Motion_Planning_B.t_d;
  }

  Motion_Planning_B.absxk_g = fabs(Motion_Planning_B.dy);
  if (Motion_Planning_B.absxk_g > Motion_Planning_B.scale_l) {
    Motion_Planning_B.t_d = Motion_Planning_B.scale_l /
      Motion_Planning_B.absxk_g;
    Motion_Planning_B.l = Motion_Planning_B.l * Motion_Planning_B.t_d *
      Motion_Planning_B.t_d + 1.0;
    Motion_Planning_B.scale_l = Motion_Planning_B.absxk_g;
  } else {
    Motion_Planning_B.t_d = Motion_Planning_B.absxk_g /
      Motion_Planning_B.scale_l;
    Motion_Planning_B.l += Motion_Planning_B.t_d * Motion_Planning_B.t_d;
  }

  Motion_Planning_B.l = Motion_Planning_B.scale_l * sqrt(Motion_Planning_B.l);
  Motion_Planning_B.dx = cos(Motion_Planning_B.refTheta) * Motion_Planning_B.dy
    - sin(Motion_Planning_B.refTheta) * Motion_Planning_B.dx;
  if (Motion_Planning_B.dx < 0.0) {
    Motion_Planning_B.dx = -1.0;
  } else if (Motion_Planning_B.dx > 0.0) {
    Motion_Planning_B.dx = 1.0;
  } else if (Motion_Planning_B.dx == 0.0) {
    Motion_Planning_B.dx = 0.0;
  } else {
    Motion_Planning_B.dx = (rtNaN);
  }

  Motion_Planning_B.l *= Motion_Planning_B.dx;
  Motion_Planning_B.dx = globalState[2];
  Motion_Planning_wrapToPi_k(&Motion_Planning_B.dx);
  Motion_Planning_B.dx -= Motion_Planning_B.refTheta;
  Motion_Planning_wrapToPi_k(&Motion_Planning_B.dx);
  Motion_Planning_B.refTheta = tan(Motion_Planning_B.dx);
  Motion_Planning_B.dx = cos(Motion_Planning_B.dx);
  Motion_Planning_B.dy = 1.0 - Motion_Planning_B.refPathPoints[3] *
    Motion_Planning_B.l;
  Motion_Planning_B.scale_l = Motion_Planning_B.dy * Motion_Planning_B.refTheta;
  Motion_Planning_B.absxk_g = Motion_Planning_B.refPathPoints[4] *
    Motion_Planning_B.l + Motion_Planning_B.refPathPoints[3] *
    Motion_Planning_B.scale_l;
  Motion_Planning_B.t_d = globalState[4] * Motion_Planning_B.dx /
    Motion_Planning_B.dy;
  frenetState[0] = Motion_Planning_B.refPathPoints[5] * 1.0E+8;
  frenetState[1] = Motion_Planning_B.t_d * 1.0E+8;
  Motion_Planning_B.frenetState_tmp = Motion_Planning_B.dy /
    Motion_Planning_B.dx;
  frenetState[2] = (0.0 * Motion_Planning_B.dx -
                    ((Motion_Planning_B.frenetState_tmp * globalState[3] -
                      Motion_Planning_B.refPathPoints[3]) *
                     Motion_Planning_B.scale_l - Motion_Planning_B.absxk_g) *
                    (Motion_Planning_B.t_d * Motion_Planning_B.t_d)) /
    Motion_Planning_B.dy * 1.0E+8;
  frenetState[3] = Motion_Planning_B.l * 1.0E+8;
  frenetState[4] = Motion_Planning_B.scale_l * 1.0E+8;
  frenetState[5] = ((globalState[3] * Motion_Planning_B.dy /
                     Motion_Planning_B.dx - Motion_Planning_B.refPathPoints[3]) *
                    (Motion_Planning_B.frenetState_tmp / Motion_Planning_B.dx) +
                    -Motion_Planning_B.absxk_g * Motion_Planning_B.refTheta) *
    1.0E+8;
  for (Motion_Planning_B.k_h = 0; Motion_Planning_B.k_h < 6;
       Motion_Planning_B.k_h++) {
    frenetState[Motion_Planning_B.k_h] = rt_roundd_snf
      (frenetState[Motion_Planning_B.k_h]) / 1.0E+8;
  }
}

static void emxInit_s_PX123a95hDt4Ek5AF2hq1(emxArray_s_PX123a95hDt4Ek5AF2_T
  *pEmxArray)
{
  pEmxArray->size = 0;
}

static void emxInitStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *pStruct)
{
  Motion_Planning_emxInit_real_T(&pStruct->Trajectory, 2);
  Motion_Planning_emxInit_real_T(&pStruct->Times, 1);
}

static void emxExpand_s_PX123a95hDt4Ek5AF2h(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, int32_T fromIndex, int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_s_PX123a95hDt4Ek5(data);
  }
}

static void emxFreeStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *pStruct)
{
  Motion_Planning_emxFree_real_T(&pStruct->Trajectory);
  Motion_Planning_emxFree_real_T(&pStruct->Times);
}

static void emxTrim_s_PX123a95hDt4Ek5AF2hq1(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, int32_T fromIndex, int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_s_PX123a95hDt4Ek5(data);
  }
}

static void emxEnsureCapacity_s_PX123a95hDt(s_PX123a95hDt4Ek5AF2hq1G_Moti_T
  *data, const int32_T *size, int32_T oldNumel)
{
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  if (oldNumel > *size) {
    emxTrim_s_PX123a95hDt4Ek5AF2hq1(data, *size, oldNumel);
  } else {
    if (oldNumel < *size) {
      emxExpand_s_PX123a95hDt4Ek5AF2h(data, oldNumel, *size);
    }
  }
}

static void Motion_Planning_emxCopy_real_T(emxArray_real_T_Motion_Planni_T **dst,
  emxArray_real_T_Motion_Planni_T * const *src)
{
  int32_T i;
  int32_T numElDst;
  int32_T numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  Motion_emxEnsureCapacity_real_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopyStruct_s_PX123a95hDt4Ek5(s_PX123a95hDt4Ek5AF2hq1G_Moti_T *dst,
  const s_PX123a95hDt4Ek5AF2hq1G_Moti_T *src)
{
  Motion_Planning_emxCopy_real_T(&dst->Trajectory, &src->Trajectory);
  Motion_Planning_emxCopy_real_T(&dst->Times, &src->Times);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void QuinticQuarticTrajectory_Quinti(const real_T startCondition[3],
  const real_T endCondition[3], real_T variable, real_T obj_Coefficients[6],
  real_T obj_StartCondition[3], real_T obj_EndCondition[3], real_T *obj_Variable)
{
  obj_StartCondition[0] = startCondition[0];
  obj_EndCondition[0] = endCondition[0];
  obj_StartCondition[1] = startCondition[1];
  obj_EndCondition[1] = endCondition[1];
  obj_StartCondition[2] = startCondition[2];
  obj_EndCondition[2] = endCondition[2];
  *obj_Variable = variable;
  if (rtIsNaN(endCondition[0])) {
    Motion_Planning_B.b_coeffVec[0] = startCondition[0];
    Motion_Planning_B.b_coeffVec[1] = startCondition[1];
    Motion_Planning_B.b_coeffVec[2] = startCondition[2] / 2.0;
    Motion_Planning_B.coeffVec_tmp = 1.0 / (12.0 * Motion_Planning_rt_powd_snf
      (variable, 4.0));
    Motion_Planning_B.dv3[0] = 0.0;
    Motion_Planning_B.dv3[2] = 1.0;
    Motion_Planning_B.dv3[4] = 2.0 * variable;
    Motion_Planning_B.dv3[1] = 0.0;
    Motion_Planning_B.dv3[3] = 0.0;
    Motion_Planning_B.dv3[5] = 2.0;
    Motion_Planning_B.endCondition_d[0] = endCondition[1];
    Motion_Planning_B.endCondition_d[1] = endCondition[2];
    for (Motion_Planning_B.i18 = 0; Motion_Planning_B.i18 < 2;
         Motion_Planning_B.i18++) {
      Motion_Planning_B.endCondition_jr[Motion_Planning_B.i18] =
        Motion_Planning_B.endCondition_d[Motion_Planning_B.i18] -
        (Motion_Planning_B.dv3[Motion_Planning_B.i18 + 4] *
         Motion_Planning_B.b_coeffVec[2] +
         (Motion_Planning_B.dv3[Motion_Planning_B.i18 + 2] *
          Motion_Planning_B.b_coeffVec[1] + 0.0 * Motion_Planning_B.b_coeffVec[0]));
    }

    Motion_Planning_B.coeffVec_tmp_f = variable * variable;
    Motion_Planning_B.b_coeffVec[3] = Motion_Planning_B.coeffVec_tmp_f * 12.0 *
      Motion_Planning_B.coeffVec_tmp * Motion_Planning_B.endCondition_jr[0] +
      -4.0 * Motion_Planning_rt_powd_snf(variable, 3.0) *
      Motion_Planning_B.coeffVec_tmp * Motion_Planning_B.endCondition_jr[1];
    Motion_Planning_B.b_coeffVec[4] = Motion_Planning_B.coeffVec_tmp_f * 3.0 *
      Motion_Planning_B.coeffVec_tmp * Motion_Planning_B.endCondition_jr[1] +
      -6.0 * variable * Motion_Planning_B.coeffVec_tmp *
      Motion_Planning_B.endCondition_jr[0];
    for (Motion_Planning_B.i18 = 0; Motion_Planning_B.i18 < 5;
         Motion_Planning_B.i18++) {
      obj_Coefficients[Motion_Planning_B.i18] =
        Motion_Planning_B.b_coeffVec[Motion_Planning_B.i18];
    }

    obj_Coefficients[5] = 0.0;
  } else {
    obj_Coefficients[0] = startCondition[0];
    obj_Coefficients[1] = startCondition[1];
    obj_Coefficients[2] = startCondition[2] / 2.0;
    obj_Coefficients[3] = 0.0;
    obj_Coefficients[4] = 0.0;
    obj_Coefficients[5] = 0.0;
    Motion_Planning_B.coeffVec_tmp = Motion_Planning_rt_powd_snf(variable, 3.0);
    Motion_Planning_B.coeffVec_tmp_f = Motion_Planning_rt_powd_snf(variable, 4.0);
    Motion_Planning_B.dv[0] = 1.0;
    Motion_Planning_B.dv[3] = variable;
    Motion_Planning_B.d7 = variable * variable;
    Motion_Planning_B.dv[6] = Motion_Planning_B.d7;
    Motion_Planning_B.dv[1] = 0.0;
    Motion_Planning_B.dv[4] = 1.0;
    Motion_Planning_B.dv[7] = 2.0 * variable;
    Motion_Planning_B.dv[2] = 0.0;
    Motion_Planning_B.dv[5] = 0.0;
    Motion_Planning_B.dv[8] = 2.0;
    Motion_Planning_B.endCondition[0] = endCondition[0];
    Motion_Planning_B.endCondition[1] = endCondition[1];
    Motion_Planning_B.endCondition[2] = endCondition[2];
    Motion_Planning_B.dv1[0] = 10.0 / Motion_Planning_B.coeffVec_tmp;
    Motion_Planning_B.dv1[3] = -4.0 / Motion_Planning_B.d7;
    Motion_Planning_B.dv1[6] = 1.0 / (2.0 * variable);
    Motion_Planning_B.dv1[1] = -15.0 / Motion_Planning_B.coeffVec_tmp_f;
    Motion_Planning_B.dv1[4] = 7.0 / Motion_Planning_B.coeffVec_tmp;
    Motion_Planning_B.dv1[7] = -1.0 / Motion_Planning_B.d7;
    Motion_Planning_B.dv1[2] = 6.0 / Motion_Planning_rt_powd_snf(variable, 5.0);
    Motion_Planning_B.dv1[5] = -3.0 / Motion_Planning_B.coeffVec_tmp_f;
    Motion_Planning_B.dv1[8] = 1.0 / (2.0 * Motion_Planning_B.coeffVec_tmp);
    for (Motion_Planning_B.i18 = 0; Motion_Planning_B.i18 < 3;
         Motion_Planning_B.i18++) {
      Motion_Planning_B.endCondition_j[Motion_Planning_B.i18] =
        Motion_Planning_B.endCondition[Motion_Planning_B.i18] -
        (Motion_Planning_B.dv[Motion_Planning_B.i18 + 6] * obj_Coefficients[2] +
         (Motion_Planning_B.dv[Motion_Planning_B.i18 + 3] * obj_Coefficients[1]
          + Motion_Planning_B.dv[Motion_Planning_B.i18] * obj_Coefficients[0]));
    }

    for (Motion_Planning_B.i18 = 0; Motion_Planning_B.i18 < 3;
         Motion_Planning_B.i18++) {
      obj_Coefficients[Motion_Planning_B.i18 + 3] =
        Motion_Planning_B.dv1[Motion_Planning_B.i18 + 6] *
        Motion_Planning_B.endCondition_j[2] +
        (Motion_Planning_B.dv1[Motion_Planning_B.i18 + 3] *
         Motion_Planning_B.endCondition_j[1] +
         Motion_Planning_B.dv1[Motion_Planning_B.i18] *
         Motion_Planning_B.endCondition_j[0]);
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void QuinticQuarticTrajectory_evalua(const real_T obj_Coefficients[6],
  const emxArray_real_T_Motion_Planni_T *variable,
  emxArray_real_T_Motion_Planni_T *result)
{
  real_T obj_Coefficients_0;
  real_T obj_Coefficients_1;
  real_T obj_Coefficients_2;
  real_T obj_Coefficients_3;
  real_T obj_Coefficients_4;
  real_T obj_Coefficients_5;
  int32_T i;
  int32_T loop_ub;
  int32_T result_0;
  i = result->size[0] * result->size[1];
  result->size[0] = 3;
  result->size[1] = variable->size[0];
  Motion_emxEnsureCapacity_real_T(result, i);
  loop_ub = 3 * variable->size[0] - 1;
  for (i = 0; i <= loop_ub; i++) {
    result->data[i] = 0.0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    switch (loop_ub) {
     case 0:
      obj_Coefficients_0 = obj_Coefficients[5];
      obj_Coefficients_1 = obj_Coefficients[4];
      obj_Coefficients_2 = obj_Coefficients[3];
      obj_Coefficients_3 = obj_Coefficients[2];
      obj_Coefficients_4 = obj_Coefficients[1];
      obj_Coefficients_5 = obj_Coefficients[0];
      result_0 = result->size[1];
      for (i = 0; i < result_0; i++) {
        result->data[loop_ub + 3 * i] = ((((obj_Coefficients_0 * variable->
          data[i] + obj_Coefficients_1) * variable->data[i] + obj_Coefficients_2)
          * variable->data[i] + obj_Coefficients_3) * variable->data[i] +
          obj_Coefficients_4) * variable->data[i] + obj_Coefficients_5;
      }
      break;

     case 1:
      obj_Coefficients_1 = 5.0 * obj_Coefficients[5];
      obj_Coefficients_2 = 4.0 * obj_Coefficients[4];
      obj_Coefficients_3 = 3.0 * obj_Coefficients[3];
      obj_Coefficients_4 = 2.0 * obj_Coefficients[2];
      obj_Coefficients_0 = obj_Coefficients[1];
      result_0 = result->size[1];
      for (i = 0; i < result_0; i++) {
        result->data[loop_ub + 3 * i] = (((obj_Coefficients_1 * variable->data[i]
          + obj_Coefficients_2) * variable->data[i] + obj_Coefficients_3) *
          variable->data[i] + obj_Coefficients_4) * variable->data[i] +
          obj_Coefficients_0;
      }
      break;

     default:
      obj_Coefficients_1 = 20.0 * obj_Coefficients[5];
      obj_Coefficients_2 = 12.0 * obj_Coefficients[4];
      obj_Coefficients_3 = 6.0 * obj_Coefficients[3];
      obj_Coefficients_4 = 2.0 * obj_Coefficients[2];
      result_0 = result->size[1];
      for (i = 0; i < result_0; i++) {
        result->data[loop_ub + 3 * i] = ((obj_Coefficients_1 * variable->data[i]
          + obj_Coefficients_2) * variable->data[i] + obj_Coefficients_3) *
          variable->data[i] + obj_Coefficients_4;
      }
      break;
    }
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void trajectoryGeneratorFrenet_con_h(const real_T f0[6], const real_T f1
  [6], real_T dt, s_PX123a95hDt4Ek5AF2hq1G_Moti_T trajectories_data[], int32_T
  *trajectories_size)
{
  emxArray_real_T_Motion_Planni_T *dV;
  emxArray_real_T_Motion_Planni_T *d_result;
  emxArray_real_T_Motion_Planni_T *sV;
  emxArray_real_T_Motion_Planni_T *sV_0;
  emxArray_real_T_Motion_Planni_T *t;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *y;
  boolean_T guard1 = false;
  emxInitStruct_s_PX123a95hDt4Ek5(&Motion_Planning_B.a);
  Motion_Planning_B.a.Trajectory->size[0] = 0;
  Motion_Planning_B.a.Trajectory->size[1] = 6;
  Motion_Planning_B.a.Times->size[0] = 0;
  Motion_Planning_emxInit_real_T(&y, 2);
  Motion_Planning_B.nm1d2 = *trajectories_size;
  *trajectories_size = 1;
  emxEnsureCapacity_s_PX123a95hDt(trajectories_data, trajectories_size,
    Motion_Planning_B.nm1d2);
  emxCopyStruct_s_PX123a95hDt4Ek5(&trajectories_data[0], &Motion_Planning_B.a);
  Motion_Planning_B.kd = (ceil(5.0 / dt) + 1.0) * dt;
  emxFreeStruct_s_PX123a95hDt4Ek5(&Motion_Planning_B.a);
  if (rtIsNaN(dt)) {
    Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
    y->data[0] = (rtNaN);
  } else if (rtIsNaN(dt)) {
    Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
    y->data[0] = (rtNaN);
  } else if (rtIsNaN(Motion_Planning_B.kd)) {
    Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
    y->data[0] = (rtNaN);
  } else if ((dt == 0.0) || ((dt < Motion_Planning_B.kd) && (dt < 0.0)) ||
             ((Motion_Planning_B.kd < dt) && (dt > 0.0))) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    guard1 = false;
    if (rtIsInf(dt) || rtIsInf(Motion_Planning_B.kd)) {
      if (rtIsInf(dt)) {
        Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
        y->data[0] = (rtNaN);
      } else if (dt == Motion_Planning_B.kd) {
        Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
        y->data[0] = (rtNaN);
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (rtIsInf(dt)) {
        Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
        y->data[0] = dt;
      } else {
        Motion_Planning_B.apnd = floor(dt);
        if ((Motion_Planning_B.apnd == dt) && (Motion_Planning_B.apnd == dt)) {
          Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
          y->size[0] = 1;
          Motion_Planning_B.k_k = static_cast<int32_T>(floor
            ((Motion_Planning_B.kd - dt) / dt));
          y->size[1] = Motion_Planning_B.k_k + 1;
          Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
          for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <=
               Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
            y->data[Motion_Planning_B.nm1d2] = dt * static_cast<real_T>
              (Motion_Planning_B.nm1d2) + dt;
          }
        } else {
          Motion_Planning_B.ndbl = floor((Motion_Planning_B.kd - dt) / dt + 0.5);
          Motion_Planning_B.apnd = Motion_Planning_B.ndbl * dt + dt;
          if (dt > 0.0) {
            Motion_Planning_B.cdiff = Motion_Planning_B.apnd -
              Motion_Planning_B.kd;
          } else {
            Motion_Planning_B.cdiff = Motion_Planning_B.kd -
              Motion_Planning_B.apnd;
          }

          Motion_Planning_B.u0 = fabs(dt);
          Motion_Planning_B.u1 = fabs(Motion_Planning_B.kd);
          if ((Motion_Planning_B.u0 > Motion_Planning_B.u1) || rtIsNaN
              (Motion_Planning_B.u1)) {
            Motion_Planning_B.u1 = Motion_Planning_B.u0;
          }

          if (fabs(Motion_Planning_B.cdiff) < 4.4408920985006262E-16 *
              Motion_Planning_B.u1) {
            Motion_Planning_B.ndbl++;
            Motion_Planning_B.apnd = Motion_Planning_B.kd;
          } else if (Motion_Planning_B.cdiff > 0.0) {
            Motion_Planning_B.apnd = (Motion_Planning_B.ndbl - 1.0) * dt + dt;
          } else {
            Motion_Planning_B.ndbl++;
          }

          if (Motion_Planning_B.ndbl >= 0.0) {
            Motion_Planning_B.n_f = static_cast<int32_T>(Motion_Planning_B.ndbl)
              - 1;
          } else {
            Motion_Planning_B.n_f = -1;
          }

          Motion_Planning_B.nm1d2 = y->size[0] * y->size[1];
          y->size[0] = 1;
          y->size[1] = Motion_Planning_B.n_f + 1;
          Motion_emxEnsureCapacity_real_T(y, Motion_Planning_B.nm1d2);
          if (Motion_Planning_B.n_f + 1 > 0) {
            y->data[0] = dt;
            if (Motion_Planning_B.n_f + 1 > 1) {
              y->data[Motion_Planning_B.n_f] = Motion_Planning_B.apnd;
              Motion_Planning_B.nm1d2 = ((Motion_Planning_B.n_f < 0) +
                Motion_Planning_B.n_f) >> 1;
              Motion_Planning_B.k_k = 1;
              while (Motion_Planning_B.k_k - 1 <= Motion_Planning_B.nm1d2 - 2) {
                Motion_Planning_B.kd = static_cast<real_T>(Motion_Planning_B.k_k)
                  * dt;
                y->data[Motion_Planning_B.k_k] = dt + Motion_Planning_B.kd;
                y->data[Motion_Planning_B.n_f - Motion_Planning_B.k_k] =
                  Motion_Planning_B.apnd - Motion_Planning_B.kd;
                Motion_Planning_B.k_k++;
              }

              if (Motion_Planning_B.nm1d2 << 1 == Motion_Planning_B.n_f) {
                y->data[Motion_Planning_B.nm1d2] = (dt + Motion_Planning_B.apnd)
                  / 2.0;
              } else {
                Motion_Planning_B.kd = static_cast<real_T>
                  (Motion_Planning_B.nm1d2) * dt;
                y->data[Motion_Planning_B.nm1d2] = dt + Motion_Planning_B.kd;
                y->data[Motion_Planning_B.nm1d2 + 1] = Motion_Planning_B.apnd -
                  Motion_Planning_B.kd;
              }
            }
          }
        }
      }
    }
  }

  Motion_Planning_emxInit_real_T(&t, 1);
  Motion_Planning_B.nm1d2 = t->size[0];
  t->size[0] = y->size[1];
  Motion_emxEnsureCapacity_real_T(t, Motion_Planning_B.nm1d2);
  Motion_Planning_B.k_k = y->size[1];
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <
       Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
    t->data[Motion_Planning_B.nm1d2] = y->data[Motion_Planning_B.nm1d2] - dt;
  }

  Motion_Planning_emxFree_real_T(&y);
  Motion_Planning_emxInit_real_T(&sV, 2);
  Motion_Planning_emxInit_real_T(&tmp, 2);
  QuinticQuarticTrajectory_Quinti(&f0[0], &f1[0], 5.0,
    Motion_Planning_B.assign_temp_Coefficients, Motion_Planning_B.expl_temp,
    Motion_Planning_B.expl_temp_m, &Motion_Planning_B.kd);
  QuinticQuarticTrajectory_evalua(Motion_Planning_B.assign_temp_Coefficients, t,
    tmp);
  Motion_Planning_B.nm1d2 = sV->size[0] * sV->size[1];
  sV->size[0] = tmp->size[1];
  sV->size[1] = 3;
  Motion_emxEnsureCapacity_real_T(sV, Motion_Planning_B.nm1d2);
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 < 3;
       Motion_Planning_B.nm1d2++) {
    Motion_Planning_B.k_k = tmp->size[1];
    for (Motion_Planning_B.n_f = 0; Motion_Planning_B.n_f <
         Motion_Planning_B.k_k; Motion_Planning_B.n_f++) {
      sV->data[Motion_Planning_B.n_f + sV->size[0] * Motion_Planning_B.nm1d2] =
        tmp->data[3 * Motion_Planning_B.n_f + Motion_Planning_B.nm1d2];
    }
  }

  Motion_Planning_emxInit_real_T(&sV_0, 1);
  QuinticQuarticTrajectory_Quinti(&f0[3], &f1[3], sV->data[sV->size[0] - 1] -
    sV->data[0], Motion_Planning_B.assign_temp_Coefficients,
    Motion_Planning_B.expl_temp, Motion_Planning_B.expl_temp_m,
    &Motion_Planning_B.kd);
  Motion_Planning_B.kd = sV->data[0];
  Motion_Planning_B.k_k = sV->size[0];
  Motion_Planning_B.nm1d2 = sV_0->size[0];
  sV_0->size[0] = Motion_Planning_B.k_k;
  Motion_emxEnsureCapacity_real_T(sV_0, Motion_Planning_B.nm1d2);
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <
       Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
    sV_0->data[Motion_Planning_B.nm1d2] = sV->data[Motion_Planning_B.nm1d2] -
      Motion_Planning_B.kd;
  }

  Motion_Planning_emxInit_real_T(&dV, 2);
  QuinticQuarticTrajectory_evalua(Motion_Planning_B.assign_temp_Coefficients,
    sV_0, tmp);
  Motion_Planning_B.nm1d2 = dV->size[0] * dV->size[1];
  dV->size[0] = tmp->size[1];
  dV->size[1] = 3;
  Motion_emxEnsureCapacity_real_T(dV, Motion_Planning_B.nm1d2);
  Motion_Planning_emxFree_real_T(&sV_0);
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 < 3;
       Motion_Planning_B.nm1d2++) {
    Motion_Planning_B.k_k = tmp->size[1];
    for (Motion_Planning_B.n_f = 0; Motion_Planning_B.n_f <
         Motion_Planning_B.k_k; Motion_Planning_B.n_f++) {
      dV->data[Motion_Planning_B.n_f + dV->size[0] * Motion_Planning_B.nm1d2] =
        tmp->data[3 * Motion_Planning_B.n_f + Motion_Planning_B.nm1d2];
    }
  }

  Motion_Planning_emxFree_real_T(&tmp);
  Motion_Planning_emxInit_real_T(&d_result, 2);
  if (sV->size[0] != 0) {
    Motion_Planning_B.n_f = sV->size[0];
  } else if (dV->size[0] != 0) {
    Motion_Planning_B.n_f = dV->size[0];
  } else {
    Motion_Planning_B.n_f = 0;
  }

  Motion_Planning_B.empty_non_axis_sizes_b = (Motion_Planning_B.n_f == 0);
  Motion_Planning_B.nm1d2 = d_result->size[0] * d_result->size[1];
  d_result->size[0] = Motion_Planning_B.n_f;
  if (Motion_Planning_B.empty_non_axis_sizes_b) {
    Motion_Planning_B.empty_non_axis_sizes = 3;
    Motion_Planning_B.k_k = 3;
  } else {
    if (sV->size[0] != 0) {
      Motion_Planning_B.empty_non_axis_sizes = 3;
    } else {
      Motion_Planning_B.empty_non_axis_sizes = 0;
    }

    if (dV->size[0] != 0) {
      Motion_Planning_B.k_k = 3;
    } else {
      Motion_Planning_B.k_k = 0;
    }
  }

  d_result->size[1] = Motion_Planning_B.empty_non_axis_sizes +
    Motion_Planning_B.k_k;
  Motion_emxEnsureCapacity_real_T(d_result, Motion_Planning_B.nm1d2);
  if (Motion_Planning_B.empty_non_axis_sizes_b) {
    Motion_Planning_B.empty_non_axis_sizes = 3;
  } else if (sV->size[0] != 0) {
    Motion_Planning_B.empty_non_axis_sizes = 3;
  } else {
    Motion_Planning_B.empty_non_axis_sizes = 0;
  }

  Motion_Planning_B.k_k = Motion_Planning_B.n_f *
    Motion_Planning_B.empty_non_axis_sizes;
  if (Motion_Planning_B.empty_non_axis_sizes_b) {
    Motion_Planning_B.empty_non_axis_sizes = 3;
  } else if (dV->size[0] != 0) {
    Motion_Planning_B.empty_non_axis_sizes = 3;
  } else {
    Motion_Planning_B.empty_non_axis_sizes = 0;
  }

  Motion_Planning_B.n_f = Motion_Planning_B.n_f *
    Motion_Planning_B.empty_non_axis_sizes - 1;
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <
       Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
    d_result->data[Motion_Planning_B.nm1d2] = sV->data[Motion_Planning_B.nm1d2];
  }

  Motion_Planning_emxFree_real_T(&sV);
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <=
       Motion_Planning_B.n_f; Motion_Planning_B.nm1d2++) {
    d_result->data[Motion_Planning_B.nm1d2 + Motion_Planning_B.k_k] = dV->
      data[Motion_Planning_B.nm1d2];
  }

  Motion_Planning_emxFree_real_T(&dV);
  Motion_Planning_B.nm1d2 = trajectories_data[0].Trajectory->size[0] *
    trajectories_data[0].Trajectory->size[1];
  trajectories_data[0].Trajectory->size[0] = div_nzp_s32(d_result->size[0] *
    d_result->size[1], 6);
  trajectories_data[0].Trajectory->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(trajectories_data[0].Trajectory,
    Motion_Planning_B.nm1d2);
  Motion_Planning_B.k_k = div_nzp_s32(d_result->size[0] * d_result->size[1], 6) *
    6 - 1;
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <=
       Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
    trajectories_data[0].Trajectory->data[Motion_Planning_B.nm1d2] =
      d_result->data[Motion_Planning_B.nm1d2];
  }

  Motion_Planning_emxFree_real_T(&d_result);
  Motion_Planning_B.nm1d2 = trajectories_data[0].Times->size[0];
  trajectories_data[0].Times->size[0] = t->size[0];
  Motion_emxEnsureCapacity_real_T(trajectories_data[0].Times,
    Motion_Planning_B.nm1d2);
  Motion_Planning_B.k_k = t->size[0];
  for (Motion_Planning_B.nm1d2 = 0; Motion_Planning_B.nm1d2 <
       Motion_Planning_B.k_k; Motion_Planning_B.nm1d2++) {
    trajectories_data[0].Times->data[Motion_Planning_B.nm1d2] = t->
      data[Motion_Planning_B.nm1d2];
  }

  Motion_Planning_emxFree_real_T(&t);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void FrenetReferencePath_getCloses_e(const
  emxArray_real_T_Motion_Planni_T *pathPoints, const
  emxArray_real_T_Motion_Planni_T *startIdx, const
  emxArray_real_T_Motion_Planni_T *endIdx, const emxArray_real_T_Motion_Planni_T
  *s, emxArray_real_T_Motion_Planni_T *pathPoint)
{
  emxArray_boolean_T_Motion_Pla_T *x;
  emxArray_real_T_Motion_Planni_T *a0n;
  emxArray_real_T_Motion_Planni_T *a1n;
  emxArray_real_T_Motion_Planni_T *endPoint;
  emxArray_real_T_Motion_Planni_T *startPoint;
  emxArray_real_T_Motion_Planni_T *weight;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  boolean_T exitg1;
  boolean_T y;
  Motion_Planning_emxInit_real_T(&startPoint, 2);
  k = startPoint->size[0] * startPoint->size[1];
  startPoint->size[0] = startIdx->size[0];
  startPoint->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(startPoint, k);
  for (k = 0; k < 6; k++) {
    loop_ub = startIdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      startPoint->data[i + startPoint->size[0] * k] = pathPoints->data
        [(pathPoints->size[0] * k + static_cast<int32_T>(startIdx->data[i])) - 1];
    }
  }

  Motion_Planning_emxInit_real_T(&endPoint, 2);
  k = endPoint->size[0] * endPoint->size[1];
  endPoint->size[0] = endIdx->size[0];
  endPoint->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(endPoint, k);
  for (k = 0; k < 6; k++) {
    loop_ub = endIdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      endPoint->data[i + endPoint->size[0] * k] = pathPoints->data
        [(pathPoints->size[0] * k + static_cast<int32_T>(endIdx->data[i])) - 1];
    }
  }

  Motion_Planning_emxInit_real_T(&a0n, 1);
  k = a0n->size[0];
  a0n->size[0] = s->size[0];
  Motion_emxEnsureCapacity_real_T(a0n, k);
  loop_ub = s->size[0];
  for (k = 0; k < loop_ub; k++) {
    a0n->data[k] = s->data[k] - startPoint->data[startPoint->size[0] * 5 + k];
  }

  Motion_Planning_emxInit_real_T(&weight, 1);
  k = weight->size[0];
  weight->size[0] = a0n->size[0];
  Motion_emxEnsureCapacity_real_T(weight, k);
  for (k = 0; k < a0n->size[0]; k++) {
    weight->data[k] = fabs(a0n->data[k]);
  }

  k = weight->size[0];
  Motion_emxEnsureCapacity_real_T(weight, k);
  loop_ub = weight->size[0];
  for (k = 0; k < loop_ub; k++) {
    weight->data[k] /= endPoint->data[endPoint->size[0] * 5 + k] -
      startPoint->data[startPoint->size[0] * 5 + k];
  }

  loop_ub = endIdx->size[0];
  k = a0n->size[0];
  a0n->size[0] = loop_ub;
  Motion_emxEnsureCapacity_real_T(a0n, k);
  for (k = 0; k < loop_ub; k++) {
    a0n->data[k] = endPoint->data[endPoint->size[0] * 5 + k] - startPoint->
      data[startPoint->size[0] * 5 + k];
  }

  Motion_Planning_emxInit_real_T(&a1n, 1);
  k = a1n->size[0];
  a1n->size[0] = a0n->size[0];
  Motion_emxEnsureCapacity_real_T(a1n, k);
  for (k = 0; k < a0n->size[0]; k++) {
    a1n->data[k] = fabs(a0n->data[k]);
  }

  Motion_Planni_emxInit_boolean_T(&x, 1);
  k = x->size[0];
  x->size[0] = a1n->size[0];
  Mot_emxEnsureCapacity_boolean_T(x, k);
  loop_ub = a1n->size[0];
  for (k = 0; k < loop_ub; k++) {
    x->data[k] = (a1n->data[k] <= 2.2204460492503131E-16);
  }

  y = (x->size[0] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  Motion_Planni_emxFree_boolean_T(&x);
  if (y) {
    loop_ub = startIdx->size[0];
    k = a0n->size[0];
    a0n->size[0] = loop_ub;
    Motion_emxEnsureCapacity_real_T(a0n, k);
    for (k = 0; k < loop_ub; k++) {
      a0n->data[k] = startPoint->data[(startPoint->size[0] << 1) + k];
    }
  } else {
    loop_ub = startIdx->size[0];
    k = a0n->size[0];
    a0n->size[0] = loop_ub;
    Motion_emxEnsureCapacity_real_T(a0n, k);
    for (k = 0; k < loop_ub; k++) {
      a0n->data[k] = startPoint->data[(startPoint->size[0] << 1) + k];
    }

    Motion_Planning_wrapToPi(a0n);
    loop_ub = endIdx->size[0];
    k = a1n->size[0];
    a1n->size[0] = loop_ub;
    Motion_emxEnsureCapacity_real_T(a1n, k);
    for (k = 0; k < loop_ub; k++) {
      a1n->data[k] = endPoint->data[(endPoint->size[0] << 1) + k];
    }

    Motion_Planning_wrapToPi(a1n);
    k = a1n->size[0];
    Motion_emxEnsureCapacity_real_T(a1n, k);
    loop_ub = a1n->size[0];
    for (k = 0; k < loop_ub; k++) {
      a1n->data[k] -= a0n->data[k];
    }

    Motion_Planning_wrapToPi(a1n);
    k = a0n->size[0];
    Motion_emxEnsureCapacity_real_T(a0n, k);
    loop_ub = a0n->size[0];
    for (k = 0; k < loop_ub; k++) {
      a0n->data[k] += (s->data[k] - startPoint->data[startPoint->size[0] * 5 + k])
        / (endPoint->data[endPoint->size[0] * 5 + k] - startPoint->
           data[startPoint->size[0] * 5 + k]) * a1n->data[k];
    }

    Motion_Planning_wrapToPi(a0n);
  }

  Motion_Planning_emxFree_real_T(&a1n);
  k = pathPoint->size[0] * pathPoint->size[1];
  pathPoint->size[0] = weight->size[0];
  pathPoint->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(pathPoint, k);
  loop_ub = weight->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k] = (1.0 - weight->data[k]) * startPoint->data[k] +
      weight->data[k] * endPoint->data[k];
  }

  loop_ub = weight->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k + pathPoint->size[0]] = (1.0 - weight->data[k]) *
      startPoint->data[k + startPoint->size[0]] + endPoint->data[k +
      endPoint->size[0]] * weight->data[k];
  }

  loop_ub = a0n->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k + (pathPoint->size[0] << 1)] = a0n->data[k];
  }

  Motion_Planning_emxFree_real_T(&a0n);
  loop_ub = weight->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k + pathPoint->size[0] * 3] = startPoint->data
      [startPoint->size[0] * 3 + k] * (1.0 - weight->data[k]) + endPoint->
      data[endPoint->size[0] * 3 + k] * weight->data[k];
  }

  loop_ub = weight->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k + (pathPoint->size[0] << 2)] = startPoint->data
      [(startPoint->size[0] << 2) + k] * (1.0 - weight->data[k]) +
      endPoint->data[(endPoint->size[0] << 2) + k] * weight->data[k];
  }

  Motion_Planning_emxFree_real_T(&weight);
  Motion_Planning_emxFree_real_T(&endPoint);
  Motion_Planning_emxFree_real_T(&startPoint);
  loop_ub = s->size[0];
  for (k = 0; k < loop_ub; k++) {
    pathPoint->data[k + pathPoint->size[0] * 5] = s->data[k];
  }
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void referencePathFrenet_interpolate(const
  referencePathFrenet_Motion_Pl_T *obj, const emxArray_real_T_Motion_Planni_T
  *arcLength, emxArray_real_T_Motion_Planni_T *pathPoint)
{
  emxArray_boolean_T_Motion_Pla_T *b;
  emxArray_boolean_T_Motion_Pla_T *s;
  emxArray_int32_T_Motion_Plann_T *c;
  emxArray_int32_T_Motion_Plann_T *d;
  emxArray_int32_T_Motion_Plann_T *e;
  emxArray_real_T_Motion_Planni_T *arcLength_0;
  emxArray_real_T_Motion_Planni_T *b_index;
  emxArray_real_T_Motion_Planni_T *b_index_0;
  emxArray_real_T_Motion_Planni_T *b_index_1;
  emxArray_real_T_Motion_Planni_T *interpolatedPts;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *y;
  real_T obj_1[6];
  real_T b_b;
  int32_T k;
  int32_T loop_ub;
  int32_T obj_0;
  int32_T trueCount;
  Motion_Planning_emxInit_real_T(&y, 1);
  b_b = 1.0 / obj->DiscretizationDistance;
  k = y->size[0];
  y->size[0] = arcLength->size[0];
  Motion_emxEnsureCapacity_real_T(y, k);
  loop_ub = arcLength->size[0];
  for (k = 0; k < loop_ub; k++) {
    y->data[k] = arcLength->data[k] * b_b;
  }

  Motion_Planning_emxInit_real_T(&b_index, 1);
  k = b_index->size[0];
  b_index->size[0] = y->size[0];
  Motion_emxEnsureCapacity_real_T(b_index, k);
  loop_ub = y->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_index->data[k] = y->data[k];
  }

  for (k = 0; k < y->size[0]; k++) {
    b_index->data[k] = floor(b_index->data[k]);
  }

  Motion_Planning_emxFree_real_T(&y);
  k = b_index->size[0];
  Motion_emxEnsureCapacity_real_T(b_index, k);
  loop_ub = b_index->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_index->data[k]++;
  }

  obj_0 = obj->PathPoints->size[0];
  for (k = 0; k < 6; k++) {
    obj_1[k] = obj->PathPoints->data[(obj->PathPoints->size[0] * k + obj_0) - 1];
  }

  Motion_Planni_emxInit_boolean_T(&s, 1);
  Motion_Planning_repmat_mmh(obj_1, static_cast<real_T>(arcLength->size[0]),
    pathPoint);
  k = s->size[0];
  s->size[0] = b_index->size[0];
  Mot_emxEnsureCapacity_boolean_T(s, k);
  loop_ub = b_index->size[0];
  for (k = 0; k < loop_ub; k++) {
    s->data[k] = (b_index->data[k] <= 0.0);
  }

  obj_0 = 0;
  for (k = 0; k < s->size[0]; k++) {
    if (s->data[k]) {
      obj_0++;
    }
  }

  loop_ub = b_index->size[0] - 1;
  trueCount = 0;
  for (k = 0; k <= loop_ub; k++) {
    if (b_index->data[k] <= 0.0) {
      trueCount++;
    }
  }

  Motion_Planning_emxInit_int32_T(&c, 1);
  k = c->size[0];
  c->size[0] = trueCount;
  Motio_emxEnsureCapacity_int32_T(c, k);
  k = 0;
  for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
    if (b_index->data[trueCount] <= 0.0) {
      c->data[k] = trueCount + 1;
      k++;
    }
  }

  for (k = 0; k < 6; k++) {
    obj_1[k] = obj->PathPoints->data[obj->PathPoints->size[0] * k];
  }

  Motion_Planning_emxInit_real_T(&tmp, 2);
  Motion_Planning_repmat_mmh(obj_1, static_cast<real_T>(obj_0), tmp);
  for (k = 0; k < 6; k++) {
    loop_ub = tmp->size[0];
    for (obj_0 = 0; obj_0 < loop_ub; obj_0++) {
      pathPoint->data[(c->data[obj_0] + pathPoint->size[0] * k) - 1] = tmp->
        data[tmp->size[0] * k + obj_0];
    }
  }

  Motion_Planning_emxFree_real_T(&tmp);
  Motion_Planning_emxFree_int32_T(&c);
  k = s->size[0];
  s->size[0] = b_index->size[0];
  Mot_emxEnsureCapacity_boolean_T(s, k);
  loop_ub = b_index->size[0];
  for (k = 0; k < loop_ub; k++) {
    s->data[k] = !(b_index->data[k] <= 0.0);
  }

  Motion_Planni_emxInit_boolean_T(&b, 1);
  b_b = obj->PathPoints->data[obj->PathPoints->size[0] * 6 - 1];
  k = b->size[0];
  b->size[0] = arcLength->size[0];
  Mot_emxEnsureCapacity_boolean_T(b, k);
  loop_ub = arcLength->size[0];
  for (k = 0; k < loop_ub; k++) {
    b->data[k] = (arcLength->data[k] < b_b);
  }

  k = 0;
  for (obj_0 = 0; obj_0 < s->size[0]; obj_0++) {
    if (s->data[obj_0] && b->data[obj_0]) {
      k++;
    }
  }

  if (k != 0) {
    obj_0 = s->size[0] - 1;
    loop_ub = 0;
    for (k = 0; k <= obj_0; k++) {
      if (s->data[k] && b->data[k]) {
        loop_ub++;
      }
    }

    Motion_Planning_emxInit_int32_T(&d, 1);
    k = d->size[0];
    d->size[0] = loop_ub;
    Motio_emxEnsureCapacity_int32_T(d, k);
    k = 0;
    for (loop_ub = 0; loop_ub <= obj_0; loop_ub++) {
      if (s->data[loop_ub] && b->data[loop_ub]) {
        d->data[k] = loop_ub + 1;
        k++;
      }
    }

    Motion_Planning_emxInit_real_T(&b_index_0, 1);
    k = b_index_0->size[0];
    b_index_0->size[0] = d->size[0];
    Motion_emxEnsureCapacity_real_T(b_index_0, k);
    loop_ub = d->size[0];
    for (k = 0; k < loop_ub; k++) {
      b_index_0->data[k] = b_index->data[d->data[k] - 1];
    }

    Motion_Planning_emxInit_real_T(&b_index_1, 1);
    k = b_index_1->size[0];
    b_index_1->size[0] = d->size[0];
    Motion_emxEnsureCapacity_real_T(b_index_1, k);
    loop_ub = d->size[0];
    for (k = 0; k < loop_ub; k++) {
      b_index_1->data[k] = b_index->data[d->data[k] - 1] + 1.0;
    }

    Motion_Planning_emxInit_real_T(&arcLength_0, 1);
    k = arcLength_0->size[0];
    arcLength_0->size[0] = d->size[0];
    Motion_emxEnsureCapacity_real_T(arcLength_0, k);
    loop_ub = d->size[0];
    for (k = 0; k < loop_ub; k++) {
      arcLength_0->data[k] = arcLength->data[d->data[k] - 1];
    }

    Motion_Planning_emxFree_int32_T(&d);
    Motion_Planning_emxInit_real_T(&interpolatedPts, 2);
    FrenetReferencePath_getCloses_e(obj->PathPoints, b_index_0, b_index_1,
      arcLength_0, interpolatedPts);
    obj_0 = s->size[0] - 1;
    loop_ub = 0;
    k = 0;
    Motion_Planning_emxFree_real_T(&arcLength_0);
    Motion_Planning_emxFree_real_T(&b_index_1);
    Motion_Planning_emxFree_real_T(&b_index_0);
    while (k <= obj_0) {
      if (s->data[k] && b->data[k]) {
        loop_ub++;
      }

      k++;
    }

    Motion_Planning_emxInit_int32_T(&e, 1);
    k = e->size[0];
    e->size[0] = loop_ub;
    Motio_emxEnsureCapacity_int32_T(e, k);
    k = 0;
    for (loop_ub = 0; loop_ub <= obj_0; loop_ub++) {
      if (s->data[loop_ub] && b->data[loop_ub]) {
        e->data[k] = loop_ub + 1;
        k++;
      }
    }

    for (k = 0; k < 6; k++) {
      loop_ub = interpolatedPts->size[0];
      for (obj_0 = 0; obj_0 < loop_ub; obj_0++) {
        pathPoint->data[(e->data[obj_0] + pathPoint->size[0] * k) - 1] =
          interpolatedPts->data[interpolatedPts->size[0] * k + obj_0];
      }
    }

    Motion_Planning_emxFree_int32_T(&e);
    Motion_Planning_emxFree_real_T(&interpolatedPts);
  }

  Motion_Planni_emxFree_boolean_T(&s);
  Motion_Planni_emxFree_boolean_T(&b);
  Motion_Planning_emxFree_real_T(&b_index);
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void trajectoryGeneratorFrenet_conne(trajectoryGeneratorFrenet_Mot_T *obj,
  const real_T initialState[6], const real_T terminalState[6],
  s_PX123a95hDt4Ek5AF2hq1G_Moti_T frenetTrajectory_data[], int32_T
  *frenetTrajectory_size, s_PX123a95hDt4Ek5AF2hq1G_Moti_T globalTrajectory_data[],
  int32_T *globalTrajectory_size)
{
  emxArray_real_T_Motion_Planni_T *cosDeltaTheta;
  emxArray_real_T_Motion_Planni_T *deltaTheta;
  emxArray_real_T_Motion_Planni_T *frenetTrajectory;
  emxArray_real_T_Motion_Planni_T *frenetTrajectory_0;
  emxArray_real_T_Motion_Planni_T *frenetTrajectory_1;
  emxArray_real_T_Motion_Planni_T *kappa;
  emxArray_real_T_Motion_Planni_T *oneMinusKappaRefL;
  emxArray_real_T_Motion_Planni_T *refCosTheta;
  emxArray_real_T_Motion_Planni_T *refPathPoint;
  emxArray_real_T_Motion_Planni_T *refSinTheta;
  emxArray_real_T_Motion_Planni_T *refTheta;
  emxArray_real_T_Motion_Planni_T *tmp;
  emxArray_real_T_Motion_Planni_T *tmp_0;
  referencePathFrenet_Motion_Pl_T *b_obj;
  Motion_Planning_emxInit_real_T(&frenetTrajectory, 1);
  trajectoryGeneratorFrenet_con_h(initialState, terminalState,
    obj->TimeResolution, frenetTrajectory_data, frenetTrajectory_size);
  Motion_Planning_B.nx_n = *globalTrajectory_size;
  *globalTrajectory_size = 1;
  emxEnsureCapacity_s_PX123a95hDt(globalTrajectory_data, globalTrajectory_size,
    Motion_Planning_B.nx_n);
  emxCopyStruct_s_PX123a95hDt4Ek5(&globalTrajectory_data[0],
    &frenetTrajectory_data[0]);
  b_obj = obj->ReferencePath;
  Motion_Planning_B.loop_ub_fa = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.nx_n = frenetTrajectory->size[0];
  frenetTrajectory->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(frenetTrajectory, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    frenetTrajectory->data[Motion_Planning_B.nx_n] = frenetTrajectory_data[0].
      Trajectory->data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&refPathPoint, 2);
  Motion_Planning_emxInit_real_T(&refTheta, 1);
  referencePathFrenet_interpolate(b_obj, frenetTrajectory, refPathPoint);
  Motion_Planning_B.loop_ub_fa = refPathPoint->size[0];
  Motion_Planning_B.nx_n = refTheta->size[0];
  refTheta->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(refTheta, Motion_Planning_B.nx_n);
  Motion_Planning_emxFree_real_T(&frenetTrajectory);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    refTheta->data[Motion_Planning_B.nx_n] = refPathPoint->data
      [(refPathPoint->size[0] << 1) + Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&refCosTheta, 1);
  Motion_Planning_wrapToPi(refTheta);
  Motion_Planning_B.nx_n = refCosTheta->size[0];
  refCosTheta->size[0] = refTheta->size[0];
  Motion_emxEnsureCapacity_real_T(refCosTheta, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = refTheta->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    refCosTheta->data[Motion_Planning_B.nx_n] = refTheta->
      data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_B.nx_n = 0;
  while (Motion_Planning_B.nx_n <= refTheta->size[0] - 1) {
    refCosTheta->data[Motion_Planning_B.nx_n] = cos(refCosTheta->
      data[Motion_Planning_B.nx_n]);
    Motion_Planning_B.nx_n++;
  }

  Motion_Planning_emxInit_real_T(&refSinTheta, 1);
  Motion_Planning_B.nx_n = refSinTheta->size[0];
  refSinTheta->size[0] = refTheta->size[0];
  Motion_emxEnsureCapacity_real_T(refSinTheta, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = refTheta->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    refSinTheta->data[Motion_Planning_B.nx_n] = refTheta->
      data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_B.nx_n = 0;
  while (Motion_Planning_B.nx_n <= refTheta->size[0] - 1) {
    refSinTheta->data[Motion_Planning_B.nx_n] = sin(refSinTheta->
      data[Motion_Planning_B.nx_n]);
    Motion_Planning_B.nx_n++;
  }

  Motion_Planning_emxInit_real_T(&oneMinusKappaRefL, 1);
  Motion_Planning_B.loop_ub_fa = refPathPoint->size[0];
  Motion_Planning_B.nx_n = oneMinusKappaRefL->size[0];
  oneMinusKappaRefL->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(oneMinusKappaRefL, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    oneMinusKappaRefL->data[Motion_Planning_B.nx_n] = 1.0 - refPathPoint->
      data[refPathPoint->size[0] * 3 + Motion_Planning_B.nx_n] *
      frenetTrajectory_data[0].Trajectory->data[frenetTrajectory_data[0].
      Trajectory->size[0] * 3 + Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&frenetTrajectory_0, 1);
  Motion_Planning_B.loop_ub_fa = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.nx_n = frenetTrajectory_0->size[0];
  frenetTrajectory_0->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(frenetTrajectory_0, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    frenetTrajectory_0->data[Motion_Planning_B.nx_n] = frenetTrajectory_data[0].
      Trajectory->data[(frenetTrajectory_data[0].Trajectory->size[0] << 2) +
      Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&deltaTheta, 1);
  Motion_Planning_emxInit_real_T(&cosDeltaTheta, 1);
  Motion_Planning_atan2(frenetTrajectory_0, oneMinusKappaRefL, deltaTheta);
  Motion_Planning_B.nx_n = cosDeltaTheta->size[0];
  cosDeltaTheta->size[0] = deltaTheta->size[0];
  Motion_emxEnsureCapacity_real_T(cosDeltaTheta, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = deltaTheta->size[0];
  Motion_Planning_emxFree_real_T(&frenetTrajectory_0);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    cosDeltaTheta->data[Motion_Planning_B.nx_n] = deltaTheta->
      data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_B.nx_n = 0;
  while (Motion_Planning_B.nx_n <= deltaTheta->size[0] - 1) {
    cosDeltaTheta->data[Motion_Planning_B.nx_n] = cos(cosDeltaTheta->
      data[Motion_Planning_B.nx_n]);
    Motion_Planning_B.nx_n++;
  }

  Motion_Planning_B.nx_n = deltaTheta->size[0];
  Motion_emxEnsureCapacity_real_T(deltaTheta, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = deltaTheta->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    deltaTheta->data[Motion_Planning_B.nx_n] = (deltaTheta->
      data[Motion_Planning_B.nx_n] + refTheta->data[Motion_Planning_B.nx_n]) +
      6.2831853071795862;
  }

  Motion_Planning_wrapToPi(deltaTheta);
  Motion_Planning_B.loop_ub_fa = refPathPoint->size[0];
  Motion_Planning_B.nx_n = refTheta->size[0];
  refTheta->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(refTheta, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    refTheta->data[Motion_Planning_B.nx_n] = refPathPoint->data
      [(refPathPoint->size[0] << 2) + Motion_Planning_B.nx_n] *
      frenetTrajectory_data[0].Trajectory->data[frenetTrajectory_data[0].
      Trajectory->size[0] * 3 + Motion_Planning_B.nx_n] + refPathPoint->
      data[refPathPoint->size[0] * 3 + Motion_Planning_B.nx_n] *
      frenetTrajectory_data[0].Trajectory->data[(frenetTrajectory_data[0].
      Trajectory->size[0] << 2) + Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&kappa, 1);
  Motion_Planning_power(cosDeltaTheta, kappa);
  Motion_Planning_B.loop_ub_fa = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.nx_n = kappa->size[0];
  kappa->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(kappa, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    kappa->data[Motion_Planning_B.nx_n] = ((frenetTrajectory_data[0].
      Trajectory->data[(frenetTrajectory_data[0].Trajectory->size[0] << 2) +
      Motion_Planning_B.nx_n] / oneMinusKappaRefL->data[Motion_Planning_B.nx_n] *
      refTheta->data[Motion_Planning_B.nx_n] + frenetTrajectory_data[0].
      Trajectory->data[frenetTrajectory_data[0].Trajectory->size[0] * 5 +
      Motion_Planning_B.nx_n]) * kappa->data[Motion_Planning_B.nx_n] /
      oneMinusKappaRefL->data[Motion_Planning_B.nx_n] + refPathPoint->
      data[refPathPoint->size[0] * 3 + Motion_Planning_B.nx_n]) *
      cosDeltaTheta->data[Motion_Planning_B.nx_n] / oneMinusKappaRefL->
      data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&tmp, 1);
  Motion_Planning_B.nx_n = tmp->size[0];
  tmp->size[0] = oneMinusKappaRefL->size[0];
  Motion_emxEnsureCapacity_real_T(tmp, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = oneMinusKappaRefL->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    tmp->data[Motion_Planning_B.nx_n] = oneMinusKappaRefL->
      data[Motion_Planning_B.nx_n] / cosDeltaTheta->data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxInit_real_T(&frenetTrajectory_1, 1);
  Motion_Planning_B.loop_ub_fa = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.nx_n = frenetTrajectory_1->size[0];
  frenetTrajectory_1->size[0] = Motion_Planning_B.loop_ub_fa;
  Motion_emxEnsureCapacity_real_T(frenetTrajectory_1, Motion_Planning_B.nx_n);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    frenetTrajectory_1->data[Motion_Planning_B.nx_n] = frenetTrajectory_data[0].
      Trajectory->data[Motion_Planning_B.nx_n + frenetTrajectory_data[0].
      Trajectory->size[0]];
  }

  Motion_Planning_emxInit_real_T(&tmp_0, 1);
  Motion_Planning_power(frenetTrajectory_1, tmp_0);
  Motion_Planning_B.loop_ub_fa = refPathPoint->size[0];
  Motion_Planning_B.loop_ub_eu = refPathPoint->size[0];
  Motion_Planning_B.loop_ub_in = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.loop_ub_a = frenetTrajectory_data[0].Trajectory->size[0];
  Motion_Planning_B.nx_n = globalTrajectory_data[0].Trajectory->size[0] *
    globalTrajectory_data[0].Trajectory->size[1];
  globalTrajectory_data[0].Trajectory->size[0] = Motion_Planning_B.loop_ub_fa;
  globalTrajectory_data[0].Trajectory->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(globalTrajectory_data[0].Trajectory,
    Motion_Planning_B.nx_n);
  Motion_Planning_emxFree_real_T(&frenetTrajectory_1);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n] =
      refPathPoint->data[Motion_Planning_B.nx_n] - frenetTrajectory_data[0].
      Trajectory->data[frenetTrajectory_data[0].Trajectory->size[0] * 3 +
      Motion_Planning_B.nx_n] * refSinTheta->data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxFree_real_T(&refSinTheta);
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_eu; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      globalTrajectory_data[0].Trajectory->size[0]] = frenetTrajectory_data[0].
      Trajectory->data[frenetTrajectory_data[0].Trajectory->size[0] * 3 +
      Motion_Planning_B.nx_n] * refCosTheta->data[Motion_Planning_B.nx_n] +
      refPathPoint->data[Motion_Planning_B.nx_n + refPathPoint->size[0]];
  }

  Motion_Planning_emxFree_real_T(&refCosTheta);
  Motion_Planning_B.loop_ub_fa = deltaTheta->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      (globalTrajectory_data[0].Trajectory->size[0] << 1)] = deltaTheta->
      data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxFree_real_T(&deltaTheta);
  Motion_Planning_B.loop_ub_fa = kappa->size[0];
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      globalTrajectory_data[0].Trajectory->size[0] * 3] = kappa->
      data[Motion_Planning_B.nx_n];
  }

  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_in; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      (globalTrajectory_data[0].Trajectory->size[0] << 2)] =
      frenetTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      frenetTrajectory_data[0].Trajectory->size[0]] * tmp->
      data[Motion_Planning_B.nx_n];
  }

  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <
       Motion_Planning_B.loop_ub_a; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n +
      globalTrajectory_data[0].Trajectory->size[0] * 5] = ((tmp->
      data[Motion_Planning_B.nx_n] * kappa->data[Motion_Planning_B.nx_n] -
      refPathPoint->data[refPathPoint->size[0] * 3 + Motion_Planning_B.nx_n]) *
      frenetTrajectory_data[0].Trajectory->data[(frenetTrajectory_data[0].
      Trajectory->size[0] << 2) + Motion_Planning_B.nx_n] - refTheta->
      data[Motion_Planning_B.nx_n]) * (tmp_0->data[Motion_Planning_B.nx_n] /
      cosDeltaTheta->data[Motion_Planning_B.nx_n]) + frenetTrajectory_data[0].
      Trajectory->data[(frenetTrajectory_data[0].Trajectory->size[0] << 1) +
      Motion_Planning_B.nx_n] * oneMinusKappaRefL->data[Motion_Planning_B.nx_n] /
      cosDeltaTheta->data[Motion_Planning_B.nx_n];
  }

  Motion_Planning_emxFree_real_T(&tmp_0);
  Motion_Planning_emxFree_real_T(&tmp);
  Motion_Planning_emxFree_real_T(&kappa);
  Motion_Planning_emxFree_real_T(&cosDeltaTheta);
  Motion_Planning_emxFree_real_T(&oneMinusKappaRefL);
  Motion_Planning_emxFree_real_T(&refTheta);
  Motion_Planning_B.nx_n = refPathPoint->size[0] * refPathPoint->size[1];
  refPathPoint->size[0] = globalTrajectory_data[0].Trajectory->size[0];
  refPathPoint->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(refPathPoint, Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = globalTrajectory_data[0].Trajectory->size[0] *
    globalTrajectory_data[0].Trajectory->size[1] - 1;
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <=
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    refPathPoint->data[Motion_Planning_B.nx_n] = globalTrajectory_data[0].
      Trajectory->data[Motion_Planning_B.nx_n] * 1.0E+8;
  }

  Motion_Planning_B.nx_n = refPathPoint->size[0] * 6;
  Motion_Planning_B.loop_ub_fa = 0;
  while (Motion_Planning_B.loop_ub_fa <= Motion_Planning_B.nx_n - 1) {
    refPathPoint->data[Motion_Planning_B.loop_ub_fa] = rt_roundd_snf
      (refPathPoint->data[Motion_Planning_B.loop_ub_fa]);
    Motion_Planning_B.loop_ub_fa++;
  }

  Motion_Planning_B.nx_n = globalTrajectory_data[0].Trajectory->size[0] *
    globalTrajectory_data[0].Trajectory->size[1];
  globalTrajectory_data[0].Trajectory->size[0] = refPathPoint->size[0];
  globalTrajectory_data[0].Trajectory->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(globalTrajectory_data[0].Trajectory,
    Motion_Planning_B.nx_n);
  Motion_Planning_B.loop_ub_fa = refPathPoint->size[0] * refPathPoint->size[1] -
    1;
  for (Motion_Planning_B.nx_n = 0; Motion_Planning_B.nx_n <=
       Motion_Planning_B.loop_ub_fa; Motion_Planning_B.nx_n++) {
    globalTrajectory_data[0].Trajectory->data[Motion_Planning_B.nx_n] =
      refPathPoint->data[Motion_Planning_B.nx_n] / 1.0E+8;
  }

  Motion_Planning_emxFree_real_T(&refPathPoint);
}

static void emxFree_s_PX123a95hDt4Ek5AF2hq1(emxArray_s_PX123a95hDt4Ek5AF2_T
  *pEmxArray)
{
  int32_T i;
  int32_T numEl;
  numEl = pEmxArray->size;
  for (i = 0; i < numEl; i++) {
    emxFreeStruct_s_PX123a95hDt4Ek5(&pEmxArray->data);
  }
}

static void emxFreeStruct_referencePathFren(referencePathFrenet_Motion_Pl_T
  *pStruct)
{
  Motion_Planning_emxFree_real_T(&pStruct->PathPoints);
}

// Model step function
void Motion_Planning_step(void)
{
  emxArray_real_T_Motion_Planni_T *newTrajFrenet_noCol;
  emxArray_real_T_Motion_Planni_T *newTrajGlobal_noCol;
  boolean_T exitg1;
  emxInitStruct_referencePathFren(&Motion_Planning_B.refPath);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  // Outputs for Atomic SubSystem: '<S1>/Subscribe2'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  Motion_Planning_B.b_varargout_1 = Sub_Motion_Planning_1904.getLatestMessage
    (&Motion_Planning_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (Motion_Planning_B.b_varargout_1) {
    Motion_Planning_B.In1 = Motion_Planning_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe2'

  // MATLAB Function: '<S1>/MATLAB Function1'
  Motion_Planning_DW.SFunction_DIMS2[0] = 100;
  Motion_Planning_DW.SFunction_DIMS2[1] = 2;
  memset(&Motion_Planning_B.waypoint[0], 0, 200U * sizeof(real_T));
  memset(&Motion_Planning_B.waypoints[0], 0, 200U * sizeof(real_T));
  Motion_Planning_B.i_e = 0;
  while (Motion_Planning_B.i_e <= static_cast<int32_T>
         (Motion_Planning_B.In1.Poses_SL_Info.ReceivedLength) - 1) {
    Motion_Planning_B.waypoint[Motion_Planning_B.i_e] =
      Motion_Planning_B.In1.Poses[Motion_Planning_B.i_e].Position.X;
    Motion_Planning_B.waypoint[Motion_Planning_B.i_e + 100] =
      Motion_Planning_B.In1.Poses[Motion_Planning_B.i_e].Position.Y;
    Motion_Planning_B.i_e++;
  }

  Motion_Planning_B.i_e = 0;
  exitg1 = false;
  while ((!exitg1) && (Motion_Planning_B.i_e < 100)) {
    if (Motion_Planning_B.waypoint[Motion_Planning_B.i_e] == 0.0) {
      if (1 > Motion_Planning_B.i_e) {
        Motion_Planning_B.b = -1;
      } else {
        Motion_Planning_B.b = Motion_Planning_B.i_e - 1;
      }

      Motion_Planning_DW.SFunction_DIMS2[0] = Motion_Planning_B.b + 1;
      Motion_Planning_DW.SFunction_DIMS2[1] = 2;
      if (0 <= Motion_Planning_B.b) {
        memcpy(&Motion_Planning_B.waypoints[0], &Motion_Planning_B.waypoint[0],
               (Motion_Planning_B.b + 1) * sizeof(real_T));
      }

      for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e <=
           Motion_Planning_B.b; Motion_Planning_B.i_e++) {
        Motion_Planning_B.waypoints[Motion_Planning_B.i_e +
          Motion_Planning_DW.SFunction_DIMS2[0]] =
          Motion_Planning_B.waypoint[Motion_Planning_B.i_e + 100];
      }

      exitg1 = true;
    } else {
      Motion_Planning_B.i_e++;
    }
  }

  // End of MATLAB Function: '<S1>/MATLAB Function1'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S10>/In1'

  Motion_Planning_B.b_varargout_1 = Sub_Motion_Planning_1823.getLatestMessage
    (&Motion_Planning_B.b_varargout_2_e);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  if (Motion_Planning_B.b_varargout_1) {
    Motion_Planning_B.In1_n = Motion_Planning_B.b_varargout_2_e;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe1'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S11>/In1'

  Motion_Planning_B.b_varargout_1 = Sub_Motion_Planning_1825.getLatestMessage
    (&Motion_Planning_B.b_varargout_2_p);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S11>/Enable'

  if (Motion_Planning_B.b_varargout_1) {
    Motion_Planning_B.In1_d = Motion_Planning_B.b_varargout_2_p;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe1'

  // MATLAB Function: '<S1>/MATLAB Function' incorporates:
  //   Gain: '<S3>/Gain1'

  referencePathFrenet_referencePa(&Motion_Planning_B.refPath,
    Motion_Planning_B.waypoints, Motion_Planning_DW.SFunction_DIMS2);
  Motion_Planning_B.connector.ReferencePath = &Motion_Planning_B.refPath;
  Motion_Planning_B.connector.TimeResolution = 0.01;
  Motion_Planning_B.v_n = sqrt(Motion_Planning_B.In1_d.Linear.X *
    Motion_Planning_B.In1_d.Linear.X + Motion_Planning_B.In1_d.Linear.Y *
    Motion_Planning_B.In1_d.Linear.Y);
  if (Motion_Planning_B.v_n <= 0.1) {
    Motion_Planning_B.v_n = 0.1;
    Motion_Planning_B.dv2[3] = 0.0;
  } else {
    Motion_Planning_B.dv2[3] = Motion_Planning_B.In1_d.Linear.Z /
      Motion_Planning_B.v_n;
  }

  Motion_Planning_B.dv2[0] = Motion_Planning_B.In1_n.X;
  Motion_Planning_B.dv2[1] = Motion_Planning_B.In1_n.Y;
  Motion_Planning_B.dv2[2] = Motion_Planning_P.Gain1_Gain *
    Motion_Planning_B.In1_n.Theta;
  Motion_Planning_B.dv2[4] = Motion_Planning_B.v_n;
  Motion_Planning_B.dv2[5] = 0.0;
  referencePathFrenet_global2fren(&Motion_Planning_B.refPath,
    Motion_Planning_B.dv2, Motion_Planning_B.vehicle_pose_frenet_s);
  Motion_Planning_B.vehicle_pose_frenet_s[1] = 3.0;
  Motion_Planning_B.vehicle_pose_frenet_s[2] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_s[3] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_s[4] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_s[5] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_e[0] =
    Motion_Planning_B.vehicle_pose_frenet_s[0] + 10.0;
  Motion_Planning_B.vehicle_pose_frenet_e[1] = 3.0;
  Motion_Planning_B.vehicle_pose_frenet_e[2] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_e[3] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_e[4] = 0.0;
  Motion_Planning_B.vehicle_pose_frenet_e[5] = 0.0;
  if (Motion_Planning_DW.planning_flag == 0.0) {
    Motion_Planning_DW.planning_flag = 1.0;
  } else {
    Motion_Planning_B.v_n = Motion_Planning_B.vehicle_pose_frenet_s[0];
    for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 501;
         Motion_Planning_B.i_e++) {
      Motion_Planning_B.diff_sr[Motion_Planning_B.i_e] = fabs
        (Motion_Planning_DW.last_frenet_trajectory[Motion_Planning_B.i_e] -
         Motion_Planning_B.v_n);
    }

    if (!rtIsNaN(Motion_Planning_B.diff_sr[0])) {
      Motion_Planning_B.b = 1;
    } else {
      Motion_Planning_B.b = 0;
      Motion_Planning_B.i_e = 2;
      exitg1 = false;
      while ((!exitg1) && (Motion_Planning_B.i_e < 502)) {
        if (!rtIsNaN(Motion_Planning_B.diff_sr[Motion_Planning_B.i_e - 1])) {
          Motion_Planning_B.b = Motion_Planning_B.i_e;
          exitg1 = true;
        } else {
          Motion_Planning_B.i_e++;
        }
      }
    }

    if (Motion_Planning_B.b == 0) {
      Motion_Planning_B.b = 1;
    } else {
      Motion_Planning_B.v_n = Motion_Planning_B.diff_sr[Motion_Planning_B.b - 1];
      Motion_Planning_B.i_e = Motion_Planning_B.b;
      while (Motion_Planning_B.i_e + 1 < 502) {
        if (Motion_Planning_B.v_n >
            Motion_Planning_B.diff_sr[Motion_Planning_B.i_e]) {
          Motion_Planning_B.v_n =
            Motion_Planning_B.diff_sr[Motion_Planning_B.i_e];
          Motion_Planning_B.b = Motion_Planning_B.i_e + 1;
        }

        Motion_Planning_B.i_e++;
      }
    }

    for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 6;
         Motion_Planning_B.i_e++) {
      Motion_Planning_B.vehicle_pose_frenet_s[Motion_Planning_B.i_e] =
        Motion_Planning_DW.last_frenet_trajectory[(501 * Motion_Planning_B.i_e +
        Motion_Planning_B.b) - 1];
    }
  }

  // End of Outputs for SubSystem: '<Root>/Planning'
  emxInit_s_PX123a95hDt4Ek5AF2hq1(&Motion_Planning_B.newTrajFrenet_noCol);
  emxInit_s_PX123a95hDt4Ek5AF2hq1(&Motion_Planning_B.newTrajGlobal_noCol);
  Motion_Planning_emxInit_real_T(&newTrajGlobal_noCol, 2);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  // MATLAB Function: '<S1>/MATLAB Function'
  trajectoryGeneratorFrenet_conne(&Motion_Planning_B.connector,
    Motion_Planning_B.vehicle_pose_frenet_s,
    Motion_Planning_B.vehicle_pose_frenet_e,
    &Motion_Planning_B.newTrajFrenet_noCol.data,
    &Motion_Planning_B.newTrajFrenet_noCol.size,
    &Motion_Planning_B.newTrajGlobal_noCol.data,
    &Motion_Planning_B.newTrajGlobal_noCol.size);
  Motion_Planning_B.loop_ub =
    Motion_Planning_B.newTrajGlobal_noCol.data.Trajectory->size[0];
  Motion_Planning_B.i_e = newTrajGlobal_noCol->size[0] *
    newTrajGlobal_noCol->size[1];
  newTrajGlobal_noCol->size[0] = Motion_Planning_B.loop_ub;
  newTrajGlobal_noCol->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(newTrajGlobal_noCol, Motion_Planning_B.i_e);
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 6;
       Motion_Planning_B.i_e++) {
    for (Motion_Planning_B.b = 0; Motion_Planning_B.b <
         Motion_Planning_B.loop_ub; Motion_Planning_B.b++) {
      newTrajGlobal_noCol->data[Motion_Planning_B.b + newTrajGlobal_noCol->size
        [0] * Motion_Planning_B.i_e] =
        Motion_Planning_B.newTrajGlobal_noCol.data.Trajectory->
        data[Motion_Planning_B.newTrajGlobal_noCol.data.Trajectory->size[0] *
        Motion_Planning_B.i_e + Motion_Planning_B.b];
    }
  }

  // End of Outputs for SubSystem: '<Root>/Planning'
  emxFree_s_PX123a95hDt4Ek5AF2hq1(&Motion_Planning_B.newTrajGlobal_noCol);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  // MATLAB Function: '<S1>/MATLAB Function'
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 3006;
       Motion_Planning_B.i_e++) {
    Motion_Planning_B.TrajGlobal[Motion_Planning_B.i_e] =
      newTrajGlobal_noCol->data[Motion_Planning_B.i_e];
  }

  // End of Outputs for SubSystem: '<Root>/Planning'
  Motion_Planning_emxFree_real_T(&newTrajGlobal_noCol);
  Motion_Planning_emxInit_real_T(&newTrajFrenet_noCol, 2);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  // MATLAB Function: '<S1>/MATLAB Function'
  Motion_Planning_B.loop_ub =
    Motion_Planning_B.newTrajFrenet_noCol.data.Trajectory->size[0];
  Motion_Planning_B.i_e = newTrajFrenet_noCol->size[0] *
    newTrajFrenet_noCol->size[1];
  newTrajFrenet_noCol->size[0] = Motion_Planning_B.loop_ub;
  newTrajFrenet_noCol->size[1] = 6;
  Motion_emxEnsureCapacity_real_T(newTrajFrenet_noCol, Motion_Planning_B.i_e);
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 6;
       Motion_Planning_B.i_e++) {
    for (Motion_Planning_B.b = 0; Motion_Planning_B.b <
         Motion_Planning_B.loop_ub; Motion_Planning_B.b++) {
      newTrajFrenet_noCol->data[Motion_Planning_B.b + newTrajFrenet_noCol->size
        [0] * Motion_Planning_B.i_e] =
        Motion_Planning_B.newTrajFrenet_noCol.data.Trajectory->
        data[Motion_Planning_B.newTrajFrenet_noCol.data.Trajectory->size[0] *
        Motion_Planning_B.i_e + Motion_Planning_B.b];
    }
  }

  // End of Outputs for SubSystem: '<Root>/Planning'
  emxFree_s_PX123a95hDt4Ek5AF2hq1(&Motion_Planning_B.newTrajFrenet_noCol);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  // MATLAB Function: '<S1>/MATLAB Function'
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 3006;
       Motion_Planning_B.i_e++) {
    Motion_Planning_DW.last_frenet_trajectory[Motion_Planning_B.i_e] =
      newTrajFrenet_noCol->data[Motion_Planning_B.i_e];
  }

  // End of Outputs for SubSystem: '<Root>/Planning'
  Motion_Planning_emxFree_real_T(&newTrajFrenet_noCol);

  // Outputs for Atomic SubSystem: '<Root>/Planning'
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 501;
       Motion_Planning_B.i_e++) {
    // Math: '<S1>/Transpose' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'

    Motion_Planning_B.MatrixConcatenate[Motion_Planning_B.i_e] =
      Motion_Planning_B.TrajGlobal[Motion_Planning_B.i_e];

    // Math: '<S1>/Transpose1' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'

    Motion_Planning_B.MatrixConcatenate[Motion_Planning_B.i_e + 501] =
      Motion_Planning_B.TrajGlobal[Motion_Planning_B.i_e + 501];

    // Math: '<S1>/Transpose2' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'

    Motion_Planning_B.MatrixConcatenate[Motion_Planning_B.i_e + 1002] =
      Motion_Planning_B.TrajGlobal[Motion_Planning_B.i_e + 1002];

    // Math: '<S1>/Transpose3' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'

    Motion_Planning_B.MatrixConcatenate[Motion_Planning_B.i_e + 1503] =
      Motion_Planning_B.TrajGlobal[Motion_Planning_B.i_e + 1503];
  }

  // BusAssignment: '<S1>/Bus Assignment' incorporates:
  //   Concatenate: '<S1>/Matrix Concatenate'
  //   Constant: '<S1>/Constant'
  //   Constant: '<S2>/Constant'
  //   DataTypeConversion: '<S1>/Data Type Conversion'

  Motion_Planning_B.BusAssignment = Motion_Planning_P.Constant_Value;
  for (Motion_Planning_B.i_e = 0; Motion_Planning_B.i_e < 2004;
       Motion_Planning_B.i_e++) {
    Motion_Planning_B.BusAssignment.Data[Motion_Planning_B.i_e] =
      static_cast<real32_T>
      (Motion_Planning_B.MatrixConcatenate[Motion_Planning_B.i_e]);
  }

  Motion_Planning_B.BusAssignment.Data_SL_Info.CurrentLength =
    Motion_Planning_P.Constant_Value_a;
  Motion_Planning_B.BusAssignment.Data_SL_Info.ReceivedLength =
    Motion_Planning_P.Constant_Value_a;

  // End of BusAssignment: '<S1>/Bus Assignment'

  // Outputs for Atomic SubSystem: '<S1>/Publish'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_Motion_Planning_1797.publish(&Motion_Planning_B.BusAssignment);

  // End of Outputs for SubSystem: '<S1>/Publish'
  // End of Outputs for SubSystem: '<Root>/Planning'
  emxFreeStruct_referencePathFren(&Motion_Planning_B.refPath);
}

// Model initialize function
void Motion_Planning_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    static const char_T tmp_0[28] = { '/', 'c', 'a', 'n', 'a', 'l', 'y', 's',
      't', 'i', 'i', '_', 'r', 'o', 's', '/', 'v', 'e', 'h', 'i', 'c', 'l', 'e',
      '_', 'P', 'o', 's', 'e' };

    static const char_T tmp_1[27] = { '/', 'c', 'a', 'n', 'a', 'l', 'y', 's',
      't', 'i', 'i', '_', 'r', 'o', 's', '/', 'v', 'e', 'h', 'i', 'c', 'l', 'e',
      '_', 's', 'p', 'd' };

    static const char_T tmp_2[20] = { '/', 'P', 'l', 'a', 'n', 'n', 'i', 'n',
      'g', '_', 'T', 'r', 'a', 'j', 'e', 'c', 't', 'o', 'r', 'y' };

    static const char_T tmp[6] = { '/', 'p', 'o', 'i', 'n', 't' };

    int32_T i;
    char_T b_zeroDelimTopic_0[29];
    char_T b_zeroDelimTopic_1[28];
    char_T b_zeroDelimTopic_2[21];
    char_T b_zeroDelimTopic[7];

    // SystemInitialize for Atomic SubSystem: '<Root>/Planning'
    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1' incorporates:
    //   Inport: '<S12>/In1'

    Motion_Planning_B.In1 = Motion_Planning_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    Motion_Planning_DW.obj_i.matlabCodegenIsDeleted = false;
    Motion_Planning_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[6] = '\x00';
    Sub_Motion_Planning_1904.createSubscriber(&b_zeroDelimTopic[0], 1);
    Motion_Planning_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S10>/Out1' incorporates:
    //   Inport: '<S10>/In1'

    Motion_Planning_B.In1_n = Motion_Planning_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    Motion_Planning_DW.obj_k.matlabCodegenIsDeleted = false;
    Motion_Planning_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[28] = '\x00';
    Sub_Motion_Planning_1823.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    Motion_Planning_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1' incorporates:
    //   Inport: '<S11>/In1'

    Motion_Planning_B.In1_d = Motion_Planning_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    Motion_Planning_DW.obj_c.matlabCodegenIsDeleted = false;
    Motion_Planning_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[27] = '\x00';
    Sub_Motion_Planning_1825.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    Motion_Planning_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    Motion_Planning_DW.obj.matlabCodegenIsDeleted = false;
    Motion_Planning_DW.obj.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[20] = '\x00';
    Pub_Motion_Planning_1797.createPublisher(&b_zeroDelimTopic_2[0], 1);
    Motion_Planning_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish'
    // End of SystemInitialize for SubSystem: '<Root>/Planning'
  }
}

// Model terminate function
void Motion_Planning_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Planning'
  // Terminate for Atomic SubSystem: '<S1>/Subscribe2'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!Motion_Planning_DW.obj_i.matlabCodegenIsDeleted) {
    Motion_Planning_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe2'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!Motion_Planning_DW.obj_k.matlabCodegenIsDeleted) {
    Motion_Planning_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe1'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!Motion_Planning_DW.obj_c.matlabCodegenIsDeleted) {
    Motion_Planning_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe1'

  // Terminate for Atomic SubSystem: '<S1>/Publish'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!Motion_Planning_DW.obj.matlabCodegenIsDeleted) {
    Motion_Planning_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish'
  // End of Terminate for SubSystem: '<Root>/Planning'
}

//
// File trailer for generated code.
//
// [EOF]
//
