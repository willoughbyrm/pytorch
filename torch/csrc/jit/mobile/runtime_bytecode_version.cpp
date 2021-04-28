#include <caffe2/serialize/inline_container.h>
#include <torch/csrc/jit/mobile/runtime_bytecode_version.h>

namespace torch {
namespace jit {
namespace mobile {

int64_t _get_runtime_bytecode_version() {
  return caffe2::serialize::kProducedBytecodeVersion;
}

} // namespace mobile
} // namespace jit
} // namespace torch
