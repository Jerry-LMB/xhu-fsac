//
// File: Motion_Planning_types.h
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
#ifndef RTW_HEADER_Motion_Planning_types_h_
#define RTW_HEADER_Motion_Planning_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_Motion_Planning_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_Motion_Planning_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
  uint32_T DataOffset;
} SL_Bus_Motion_Planning_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_Float32MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_Float32MultiArray_

// MsgType=std_msgs/Float32MultiArray
typedef struct {
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_Motion_Planning_std_msgs_MultiArrayLayout Layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[2004];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_Motion_Planning_std_msgs_Float32MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Pose2D_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Pose2D_

// MsgType=geometry_msgs/Pose2D
typedef struct {
  real_T X;
  real_T Y;
  real_T Theta;
} SL_Bus_Motion_Planning_geometry_msgs_Pose2D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Motion_Planning_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_Motion_Planning_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_Motion_Planning_geometry_msgs_Vector3 Angular;
} SL_Bus_Motion_Planning_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_Motion_Planning_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_Motion_Planning_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
} SL_Bus_Motion_Planning_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Motion_Planning_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_Motion_Planning_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_Motion_Planning_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_Motion_Planning_geometry_msgs_Quaternion Orientation;
} SL_Bus_Motion_Planning_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_PoseArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Motion_Planning_geometry_msgs_PoseArray_

// MsgType=geometry_msgs/PoseArray
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_Motion_Planning_std_msgs_Header Header;

  // MsgType=geometry_msgs/Pose:IsVarLen=1:VarLenCategory=data:VarLenElem=Poses_SL_Info:TruncateAction=warn 
  SL_Bus_Motion_Planning_geometry_msgs_Pose Poses[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Poses
  SL_Bus_ROSVariableLengthArrayInfo Poses_SL_Info;
} SL_Bus_Motion_Planning_geometry_msgs_PoseArray;

#endif

#ifndef struct_tag_D6QYIVJDjoKN0blLVEpT8F
#define struct_tag_D6QYIVJDjoKN0blLVEpT8F

struct tag_D6QYIVJDjoKN0blLVEpT8F
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_D6QYIVJDjoKN0blLVEpT8F

#ifndef typedef_ros_slroscpp_internal_block_P_T
#define typedef_ros_slroscpp_internal_block_P_T

typedef tag_D6QYIVJDjoKN0blLVEpT8F ros_slroscpp_internal_block_P_T;

#endif                                 //typedef_ros_slroscpp_internal_block_P_T

#ifndef struct_tag_eFCXAaC7vLdwjksE0MwgOD
#define struct_tag_eFCXAaC7vLdwjksE0MwgOD

struct tag_eFCXAaC7vLdwjksE0MwgOD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_eFCXAaC7vLdwjksE0MwgOD

#ifndef typedef_ros_slroscpp_internal_block_S_T
#define typedef_ros_slroscpp_internal_block_S_T

typedef tag_eFCXAaC7vLdwjksE0MwgOD ros_slroscpp_internal_block_S_T;

#endif                                 //typedef_ros_slroscpp_internal_block_S_T

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T

#ifndef typedef_emxArray_real_T_Motion_Planni_T
#define typedef_emxArray_real_T_Motion_Planni_T

typedef emxArray_real_T emxArray_real_T_Motion_Planni_T;

#endif                                 //typedef_emxArray_real_T_Motion_Planni_T

// Custom Type definition for MATLAB Function: '<S1>/MATLAB Function'
#ifndef struct_tag_fsrT5hQjMzQj8MwejO7KUD
#define struct_tag_fsrT5hQjMzQj8MwejO7KUD

struct tag_fsrT5hQjMzQj8MwejO7KUD
{
  emxArray_real_T_Motion_Planni_T *PathPoints;
  real_T DiscretizationDistance;
};

#endif                                 //struct_tag_fsrT5hQjMzQj8MwejO7KUD

#ifndef typedef_referencePathFrenet_Motion_Pl_T
#define typedef_referencePathFrenet_Motion_Pl_T

typedef tag_fsrT5hQjMzQj8MwejO7KUD referencePathFrenet_Motion_Pl_T;

#endif                                 //typedef_referencePathFrenet_Motion_Pl_T

#ifndef struct_tag_75advwkglTpLUP6zolRC4F
#define struct_tag_75advwkglTpLUP6zolRC4F

struct tag_75advwkglTpLUP6zolRC4F
{
  referencePathFrenet_Motion_Pl_T *ReferencePath;
  real_T TimeResolution;
};

#endif                                 //struct_tag_75advwkglTpLUP6zolRC4F

#ifndef typedef_trajectoryGeneratorFrenet_Mot_T
#define typedef_trajectoryGeneratorFrenet_Mot_T

typedef tag_75advwkglTpLUP6zolRC4F trajectoryGeneratorFrenet_Mot_T;

#endif                                 //typedef_trajectoryGeneratorFrenet_Mot_T

#ifndef struct_tag_PX123a95hDt4Ek5AF2hq1G
#define struct_tag_PX123a95hDt4Ek5AF2hq1G

struct tag_PX123a95hDt4Ek5AF2hq1G
{
  emxArray_real_T_Motion_Planni_T *Trajectory;
  emxArray_real_T_Motion_Planni_T *Times;
};

#endif                                 //struct_tag_PX123a95hDt4Ek5AF2hq1G

#ifndef typedef_s_PX123a95hDt4Ek5AF2hq1G_Moti_T
#define typedef_s_PX123a95hDt4Ek5AF2hq1G_Moti_T

typedef tag_PX123a95hDt4Ek5AF2hq1G s_PX123a95hDt4Ek5AF2hq1G_Moti_T;

#endif                                 //typedef_s_PX123a95hDt4Ek5AF2hq1G_Moti_T

#ifndef struct_tag_GJIYMUUKL2HLFBBxALIoEE
#define struct_tag_GJIYMUUKL2HLFBBxALIoEE

struct tag_GJIYMUUKL2HLFBBxALIoEE
{
  emxArray_real_T_Motion_Planni_T *f1;
};

#endif                                 //struct_tag_GJIYMUUKL2HLFBBxALIoEE

#ifndef typedef_cell_wrap_8_Motion_Planning_T
#define typedef_cell_wrap_8_Motion_Planning_T

typedef tag_GJIYMUUKL2HLFBBxALIoEE cell_wrap_8_Motion_Planning_T;

#endif                                 //typedef_cell_wrap_8_Motion_Planning_T

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_int32_T

#ifndef typedef_emxArray_int32_T_Motion_Plann_T
#define typedef_emxArray_int32_T_Motion_Plann_T

typedef emxArray_int32_T emxArray_int32_T_Motion_Plann_T;

#endif                                 //typedef_emxArray_int32_T_Motion_Plann_T

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_boolean_T

#ifndef typedef_emxArray_boolean_T_Motion_Pla_T
#define typedef_emxArray_boolean_T_Motion_Pla_T

typedef emxArray_boolean_T emxArray_boolean_T_Motion_Pla_T;

#endif                                 //typedef_emxArray_boolean_T_Motion_Pla_T

#ifndef typedef_emxArray_creal_T_Motion_Plann_T
#define typedef_emxArray_creal_T_Motion_Plann_T

typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T_Motion_Plann_T;

#endif                                 //typedef_emxArray_creal_T_Motion_Plann_T

#ifndef struct_tag_jdUfYwBvnWEKoPy1CQzB1C
#define struct_tag_jdUfYwBvnWEKoPy1CQzB1C

struct tag_jdUfYwBvnWEKoPy1CQzB1C
{
  emxArray_creal_T_Motion_Plann_T *f1;
};

#endif                                 //struct_tag_jdUfYwBvnWEKoPy1CQzB1C

#ifndef typedef_cell_wrap_7_Motion_Planning_T
#define typedef_cell_wrap_7_Motion_Planning_T

typedef tag_jdUfYwBvnWEKoPy1CQzB1C cell_wrap_7_Motion_Planning_T;

#endif                                 //typedef_cell_wrap_7_Motion_Planning_T

// Custom Type definition for MATLAB Function: '<S1>/MATLAB Function'
#ifndef struct_emxArray_tag_PX123a95hDt4Ek5AF2
#define struct_emxArray_tag_PX123a95hDt4Ek5AF2

struct emxArray_tag_PX123a95hDt4Ek5AF2
{
  s_PX123a95hDt4Ek5AF2hq1G_Moti_T data;
  int32_T size;
};

#endif                                 //struct_emxArray_tag_PX123a95hDt4Ek5AF2

#ifndef typedef_emxArray_s_PX123a95hDt4Ek5AF2_T
#define typedef_emxArray_s_PX123a95hDt4Ek5AF2_T

typedef emxArray_tag_PX123a95hDt4Ek5AF2 emxArray_s_PX123a95hDt4Ek5AF2_T;

#endif                                 //typedef_emxArray_s_PX123a95hDt4Ek5AF2_T

// Parameters (default storage)
typedef struct P_Motion_Planning_T_ P_Motion_Planning_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Motion_Planning_T RT_MODEL_Motion_Planning_T;

#endif                                 // RTW_HEADER_Motion_Planning_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
