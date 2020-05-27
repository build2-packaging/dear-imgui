# dear-imgui

`build2` package for the [~ocornut/imgui]( https://github.com/ocornut/imgui ) cxx library.

## status

currently only tested on `FreeBSD` using `glfw` and `vulkan` both preinstalled from the ports tree.

```
$ pkg install glfw vulkan-header vulkan-loader
$ git clone https://github.com/build2-packaging/dear-imgui
$ pushd dear-imgui/
$ bdep -init -C @clang10 cc cxx.coptions="-Ofast -flto -Wall -Wextra"
# should launch the demo app under `libimgui-glfw-vulkan/tests/demo/driver.cpp`
$ b libimgui-glfw-vulkan/
```

## usage

TODO

## system dependencies

| technique              | libs             |
|------------------------|------------------|
| `libimgui-glfw-vulkan` | `glfw`, `vulkan` |


