// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POINTKDTREESEARCHER2_JET_FBS_H_
#define FLATBUFFERS_GENERATED_POINTKDTREESEARCHER2_JET_FBS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 22 &&
              FLATBUFFERS_VERSION_MINOR == 11 &&
              FLATBUFFERS_VERSION_REVISION == 23,
             "Non-compatible flatbuffers version included");

#include "basic_types_generated.h"

namespace jet {
namespace fbs {

struct PointKdTreeSearcherNode2;

struct PointKdTreeSearcher2;
struct PointKdTreeSearcher2Builder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) PointKdTreeSearcherNode2 FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t flags_;
  uint64_t child_;
  uint64_t item_;

 public:
  PointKdTreeSearcherNode2()
      : flags_(0),
        child_(0),
        item_(0) {
  }
  PointKdTreeSearcherNode2(uint64_t _flags, uint64_t _child, uint64_t _item)
      : flags_(flatbuffers::EndianScalar(_flags)),
        child_(flatbuffers::EndianScalar(_child)),
        item_(flatbuffers::EndianScalar(_item)) {
  }
  uint64_t flags() const {
    return flatbuffers::EndianScalar(flags_);
  }
  uint64_t child() const {
    return flatbuffers::EndianScalar(child_);
  }
  uint64_t item() const {
    return flatbuffers::EndianScalar(item_);
  }
};
FLATBUFFERS_STRUCT_END(PointKdTreeSearcherNode2, 24);

struct PointKdTreeSearcher2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PointKdTreeSearcher2Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POINTS = 4,
    VT_NODES = 6
  };
  const flatbuffers::Vector<const jet::fbs::Vector2D *> *points() const {
    return GetPointer<const flatbuffers::Vector<const jet::fbs::Vector2D *> *>(VT_POINTS);
  }
  const flatbuffers::Vector<const jet::fbs::PointKdTreeSearcherNode2 *> *nodes() const {
    return GetPointer<const flatbuffers::Vector<const jet::fbs::PointKdTreeSearcherNode2 *> *>(VT_NODES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_POINTS) &&
           verifier.VerifyVector(points()) &&
           VerifyOffset(verifier, VT_NODES) &&
           verifier.VerifyVector(nodes()) &&
           verifier.EndTable();
  }
};

struct PointKdTreeSearcher2Builder {
  typedef PointKdTreeSearcher2 Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_points(flatbuffers::Offset<flatbuffers::Vector<const jet::fbs::Vector2D *>> points) {
    fbb_.AddOffset(PointKdTreeSearcher2::VT_POINTS, points);
  }
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<const jet::fbs::PointKdTreeSearcherNode2 *>> nodes) {
    fbb_.AddOffset(PointKdTreeSearcher2::VT_NODES, nodes);
  }
  explicit PointKdTreeSearcher2Builder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PointKdTreeSearcher2> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PointKdTreeSearcher2>(end);
    return o;
  }
};

inline flatbuffers::Offset<PointKdTreeSearcher2> CreatePointKdTreeSearcher2(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const jet::fbs::Vector2D *>> points = 0,
    flatbuffers::Offset<flatbuffers::Vector<const jet::fbs::PointKdTreeSearcherNode2 *>> nodes = 0) {
  PointKdTreeSearcher2Builder builder_(_fbb);
  builder_.add_nodes(nodes);
  builder_.add_points(points);
  return builder_.Finish();
}

inline flatbuffers::Offset<PointKdTreeSearcher2> CreatePointKdTreeSearcher2Direct(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<jet::fbs::Vector2D> *points = nullptr,
    const std::vector<jet::fbs::PointKdTreeSearcherNode2> *nodes = nullptr) {
  auto points__ = points ? _fbb.CreateVectorOfStructs<jet::fbs::Vector2D>(*points) : 0;
  auto nodes__ = nodes ? _fbb.CreateVectorOfStructs<jet::fbs::PointKdTreeSearcherNode2>(*nodes) : 0;
  return jet::fbs::CreatePointKdTreeSearcher2(
      _fbb,
      points__,
      nodes__);
}

inline const jet::fbs::PointKdTreeSearcher2 *GetPointKdTreeSearcher2(const void *buf) {
  return flatbuffers::GetRoot<jet::fbs::PointKdTreeSearcher2>(buf);
}

inline const jet::fbs::PointKdTreeSearcher2 *GetSizePrefixedPointKdTreeSearcher2(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<jet::fbs::PointKdTreeSearcher2>(buf);
}

inline bool VerifyPointKdTreeSearcher2Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<jet::fbs::PointKdTreeSearcher2>(nullptr);
}

inline bool VerifySizePrefixedPointKdTreeSearcher2Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<jet::fbs::PointKdTreeSearcher2>(nullptr);
}

inline void FinishPointKdTreeSearcher2Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<jet::fbs::PointKdTreeSearcher2> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPointKdTreeSearcher2Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<jet::fbs::PointKdTreeSearcher2> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace fbs
}  // namespace jet

#endif  // FLATBUFFERS_GENERATED_POINTKDTREESEARCHER2_JET_FBS_H_
