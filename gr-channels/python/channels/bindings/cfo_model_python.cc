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

#include <gnuradio/channels/cfo_model.h>
// pydoc.h is automatically generated in the build directory
#include <cfo_model_pydoc.h>

void bind_cfo_model(py::module& m)
{

    using cfo_model = ::gr::channels::cfo_model;


    py::class_<cfo_model,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<cfo_model>>(m, "cfo_model", D(cfo_model))

        .def(py::init(&cfo_model::make),
             py::arg("sample_rate_hz"),
             py::arg("std_dev_hz"),
             py::arg("max_dev_hz"),
             py::arg("noise_seed") = 0,
             D(cfo_model, make))


        .def("set_std_dev",
             &cfo_model::set_std_dev,
             py::arg("_dev"),
             D(cfo_model, set_std_dev))


        .def("set_max_dev",
             &cfo_model::set_max_dev,
             py::arg("_dev"),
             D(cfo_model, set_max_dev))


        .def("set_samp_rate",
             &cfo_model::set_samp_rate,
             py::arg("_rate"),
             D(cfo_model, set_samp_rate))


        .def("std_dev", &cfo_model::std_dev, D(cfo_model, std_dev))


        .def("max_dev", &cfo_model::max_dev, D(cfo_model, max_dev))


        .def("samp_rate", &cfo_model::samp_rate, D(cfo_model, samp_rate))

        ;
}