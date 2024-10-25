// Copyright (c) 2020-2022 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef PXR_PEGTL_INTERNAL_PATH_TO_STRING_HPP
#define PXR_PEGTL_INTERNAL_PATH_TO_STRING_HPP

#include <string>

#include "../config.hpp"
#include "filesystem.hpp"

namespace PXR_PEGTL_NAMESPACE::internal
{
   [[nodiscard]] inline std::string path_to_string( const internal::filesystem::path& path )
   {
#if defined( PXR_PEGTL_BOOST_FILESYSTEM )
      return path.string();
#elif defined( __cpp_char8_t )
      const auto s = path.u8string();
      return { reinterpret_cast< const char* >( s.data() ), s.size() };
#else
      return path.u8string();
#endif
   }

}  // namespace PXR_PEGTL_NAMESPACE::internal

#endif