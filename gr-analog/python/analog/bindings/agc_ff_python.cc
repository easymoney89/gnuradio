/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/agc_ff.h>
// pydoc.h is automatically generated in the build directory
#include <agc_ff_pydoc.h>

void bind_agc_ff(py::module& m)
{

    using agc_ff = ::gr::analog::agc_ff;


    py::class_<agc_ff,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<agc_ff>>(m, "agc_ff", D(agc_ff))

        .def(py::init(&agc_ff::make),
             py::arg("rate") = 1.0E-4,
             py::arg("reference") = 1.,
             py::arg("gain") = 1.,
             D(agc_ff, make))


        .def("rate", &agc_ff::rate, D(agc_ff, rate))


        .def("reference", &agc_ff::reference, D(agc_ff, reference))


        .def("gain", &agc_ff::gain, D(agc_ff, gain))


        .def("max_gain", &agc_ff::max_gain, D(agc_ff, max_gain))


        .def("set_rate", &agc_ff::set_rate, py::arg("rate"), D(agc_ff, set_rate))


        .def("set_reference",
             &agc_ff::set_reference,
             py::arg("reference"),
             D(agc_ff, set_reference))


        .def("set_gain", &agc_ff::set_gain, py::arg("gain"), D(agc_ff, set_gain))


        .def("set_max_gain",
             &agc_ff::set_max_gain,
             py::arg("max_gain"),
             D(agc_ff, set_max_gain))

        ;


    py::module m_kernel = m.def_submodule("kernel");
}