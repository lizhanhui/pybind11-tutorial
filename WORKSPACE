load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

_pybind11_bazel_commit = "72cbbf1fbc830e487e3012862b7b720001b70672"

http_archive(
  name = "pybind11_bazel",
  strip_prefix = "pybind11_bazel-%s" % _pybind11_bazel_commit,
  urls = [
    "https://github.com/pybind/pybind11_bazel/archive/%s.zip" % _pybind11_bazel_commit,
  ],
)
# We still require the pybind library.
_pybind11_version = "2.9.2"
http_archive(
  name = "pybind11",
  build_file = "@pybind11_bazel//:pybind11.BUILD",
  strip_prefix = "pybind11-%s" % _pybind11_version,
  urls = [
    "https://github.com/pybind/pybind11/archive/v%s.tar.gz" % _pybind11_version
  ],
)
load("@pybind11_bazel//:python_configure.bzl", "python_configure")
python_configure(name = "local_config_python")