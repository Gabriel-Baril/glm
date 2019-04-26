/// @ref ext_scalar_integer
/// @file glm/ext/scalar_integer.hpp
///
/// @see core (dependence)
/// @see ext_vector_integer (dependence)
///
/// @defgroup gtc_round GLM_EXT_scalar_integer
/// @ingroup ext
///
/// Include <glm/ext/scalar_integer.hpp> to use the features of this extension.

#pragma once

// Dependencies
#include "../detail/setup.hpp"
#include "../detail/qualifier.hpp"
#include "../detail/_vectorize.hpp"
#include "../vector_relational.hpp"
#include "../common.hpp"
#include <limits>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_scalar_integer extension included")
#endif

namespace glm
{
	/// @addtogroup ext_scalar_integer
	/// @{

	/// Return true if the value is a power of two number.
	template<typename genIUType>
	GLM_FUNC_DECL bool isPowerOfTwo(genIUType v);

	/// Return the power of two number which value is just higher the input value,
	/// round up to a power of two.
	template<typename genIUType>
	GLM_FUNC_DECL genIUType nextPowerOfTwo(genIUType v);

	/// Return the power of two number which value is just lower the input value,
	/// round down to a power of two.
	///
	/// @see gtc_round
	template<typename genIUType>
	GLM_FUNC_DECL genIUType prevPowerOfTwo(genIUType v);

	/// Return true if the 'Value' is a multiple of 'Multiple'.
	///
	/// @see gtc_round
	template<typename genIUType>
	GLM_FUNC_DECL bool isMultiple(genIUType v, genIUType Multiple);

	/// Higher multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
	///
	/// @param v Source value to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<typename genIUType>
	GLM_FUNC_DECL genIUType nextMultiple(genIUType v, genIUType Multiple);

	/// Lower multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
	///
	/// @param v Source value to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<typename genIUType>
	GLM_FUNC_DECL genIUType prevMultiple(genIUType v, genIUType Multiple);

	/// @}
} //namespace glm

#include "scalar_integer.inl"