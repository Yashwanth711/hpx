//  Copyright (c) 2007-2017 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_UTIL_AGAS_INIT_LOGGING_SEP_07_2013_0754PM)
#define HPX_UTIL_AGAS_INIT_LOGGING_SEP_07_2013_0754PM

#include <hpx/runtime_fwd.hpp>
#include <hpx/util/ini.hpp>
#include <hpx/util_fwd.hpp>

#include <string>

///////////////////////////////////////////////////////////////////////////////
namespace hpx { namespace util { namespace detail
{
    // the init_logging type will be used for initialization purposes only as
    // well
    HPX_API_EXPORT void init_logging(runtime_configuration& ini, bool isconsole);
}}}

#endif
