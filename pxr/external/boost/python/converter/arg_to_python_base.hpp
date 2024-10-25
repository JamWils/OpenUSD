//
// Copyright 2024 Pixar
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
// Copyright David Abrahams 2002.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef PXR_EXTERNAL_BOOST_PYTHON_CONVERTER_ARG_TO_PYTHON_BASE_HPP
# define PXR_EXTERNAL_BOOST_PYTHON_CONVERTER_ARG_TO_PYTHON_BASE_HPP

#include "pxr/pxr.h"
#include "pxr/external/boost/python/common.hpp"

#ifndef PXR_USE_INTERNAL_BOOST_PYTHON
#include <boost/python/converter/arg_to_python_base.hpp>
#else
# include "pxr/external/boost/python/handle.hpp"

namespace PXR_BOOST_NAMESPACE { namespace python { namespace converter {

struct registration;

namespace detail
{
  struct PXR_BOOST_PYTHON_DECL arg_to_python_base
      : handle<>
  {
      arg_to_python_base(void const volatile* source, registration const&);
  };
}

}}} // namespace PXR_BOOST_NAMESPACE::python::converter

#endif // PXR_USE_INTERNAL_BOOST_PYTHON
#endif // PXR_EXTERNAL_BOOST_PYTHON_CONVERTER_ARG_TO_PYTHON_BASE_HPP