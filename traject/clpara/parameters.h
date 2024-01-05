#pragma once

#include <algorithm>

#include <fast_io_freestanding.h>

#include "../../utils/cmdline/impl.h"

#include "inc.h"

namespace traject {

namespace details {
inline constexpr ::traject::cmdline::parameter const* parameter_unsort[]{
#include "parainc.h"
};
}  // namespace details

inline constexpr auto parameters{::traject::cmdline::parameter_sort(details::parameter_unsort)};

inline constexpr ::std::size_t parameter_lookup_table_size{::traject::cmdline::calculate_all_parameters_size(parameters)};
inline constexpr auto parameter_lookup_table{::traject::cmdline::expand_all_parameters_and_check<parameter_lookup_table_size>(parameters)};
inline constexpr ::std::size_t parameter_max_name_size{::traject::cmdline::calculate_max_para_size(parameter_lookup_table)};

inline constexpr auto hash_table_size{::traject::cmdline::calculate_hash_table_size(parameter_lookup_table)};
inline constexpr auto hash_table{::traject::cmdline::generate_hash_table<hash_table_size.hash_table_size, hash_table_size.extra_size>(parameter_lookup_table)};
}