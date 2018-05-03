#ifndef CAFFE2_CORE_NUMA_H_
#define CAFFE2_CORE_NUMA_H_

#include "caffe2/core/logging.h"

CAFFE2_DECLARE_bool(caffe2_cpu_numa_enabled);

namespace caffe2 {

CAFFE2_EXPORT bool IsNUMAEnabled();

CAFFE2_EXPORT void NUMABind(int numa_node_id);

CAFFE2_EXPORT int GetNUMANode(const void* ptr);

CAFFE2_EXPORT int GetNumNUMANodes();

CAFFE2_EXPORT void NUMAMove(void* ptr, size_t size, int numa_node_id);

CAFFE2_EXPORT int GetCurrentNUMANode();

} // namespace caffe2

#endif // CAFFE2_CORE_NUMA_H_
