/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/outlier_detection.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/cluster/outlier_detection.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_cluster_OutlierDetection_submsgs[19] = {
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_OutlierDetection__fields[20] = {
  {1, UPB_SIZE(4, 8), 0, 1, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 11, 1},
  {4, UPB_SIZE(16, 32), 0, 1, 11, 1},
  {5, UPB_SIZE(20, 40), 0, 1, 11, 1},
  {6, UPB_SIZE(24, 48), 0, 1, 11, 1},
  {7, UPB_SIZE(28, 56), 0, 1, 11, 1},
  {8, UPB_SIZE(32, 64), 0, 1, 11, 1},
  {9, UPB_SIZE(36, 72), 0, 1, 11, 1},
  {10, UPB_SIZE(40, 80), 0, 1, 11, 1},
  {11, UPB_SIZE(44, 88), 0, 1, 11, 1},
  {12, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {13, UPB_SIZE(48, 96), 0, 1, 11, 1},
  {14, UPB_SIZE(52, 104), 0, 1, 11, 1},
  {15, UPB_SIZE(56, 112), 0, 1, 11, 1},
  {16, UPB_SIZE(60, 120), 0, 1, 11, 1},
  {17, UPB_SIZE(64, 128), 0, 1, 11, 1},
  {18, UPB_SIZE(68, 136), 0, 1, 11, 1},
  {19, UPB_SIZE(72, 144), 0, 1, 11, 1},
  {20, UPB_SIZE(76, 152), 0, 1, 11, 1},
};

const upb_msglayout envoy_api_v2_cluster_OutlierDetection_msginit = {
  &envoy_api_v2_cluster_OutlierDetection_submsgs[0],
  &envoy_api_v2_cluster_OutlierDetection__fields[0],
  UPB_SIZE(80, 160), 20, false,
};

#include "upb/port_undef.inc"

