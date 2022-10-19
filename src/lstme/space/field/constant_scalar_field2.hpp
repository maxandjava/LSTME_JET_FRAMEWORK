//
// Created by LSTME on 2022-09-26.
//

#ifndef LSTME_CONSTANT_SCALAR_FIELD2_HPP
#define LSTME_CONSTANT_SCALAR_FIELD2_HPP

#include <scalar_field2.hpp>

namespace lstme {

//! 2-D constant scalar field.
class ConstantScalarField2 final : public ScalarField2
{
public:
  class Builder;

  //! Constructs a constant scalar field with given \p value.
  explicit ConstantScalarField2(double value);

  //! Returns the sampled value at given position \p x.
  double sample(const Vector2D& x) const override;

  //! Returns the sampler function.
  std::function<double(const Vector2D&)> sampler() const override;

  //! Returns builder fox ConstantScalarField2.
  static Builder builder();

private:
  double _value = 0.0;
};

//! Shared pointer for the ConstantScalarField2 type.
typedef std::shared_ptr<ConstantScalarField2> ConstantScalarField2Ptr;

//!
//! \brief Front-end to create ConstantScalarField2 objects step by step.
//!
class ConstantScalarField2::Builder final
{
public:
  //! Returns builder with value.
  Builder& withValue(double value);

  //! Builds ConstantScalarField2.
  ConstantScalarField2 build() const;

  //! Builds shared pointer of ConstantScalarField2 instance.
  ConstantScalarField2Ptr makeShared() const;

private:
  double _value = 0.0;
};

} // namespace lstme

#endif // LSTME_CONSTANT_SCALAR_FIELD2_HPP
