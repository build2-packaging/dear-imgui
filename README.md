# dear-imgui

`build2` package for the [~ocornut/imgui]( https://github.com/ocornut/imgui ) cxx library.

## status

currently only tested on `FreeBSD` using `glfw` and `vulkan` both preinstalled from the ports tree.

```shell
$ pkg install glfw vulkan-header vulkan-loader
$ git clone https://github.com/build2-packaging/dear-imgui
$ pushd dear-imgui/
$ bdep -init -C @clang10 cc cxx.coptions="-Ofast -flto -Wall -Wextra"
# should launch the demo app under `libimgui-glfw-vulkan/tests/demo/driver.cpp`
$ b libimgui-glfw-vulkan/
```

```shell
$ uname -a
FreeBSD pink 12.1-RELEASE-p5 FreeBSD 12.1-RELEASE-p5 GENERIC  amd64
```

```shell
$ ldd libimgui-glfw-vulkan/tests/demo/driver
libimgui-glfw-vulkan/tests/demo/driver:
  libimgui-glfw-vulkan-1.76.0-a.0.19700101000000.so => /usr/home/mb/qed/build2-packaging/dear-imgui-clang10/libimgui-glfw-vulkan/imgui/libimgui-glfw-vulkan-1.76.0-a.0.19700101000000.so (0x800273000)
  libimgui-1.76.0-a.0.19700101000000.so => /usr/home/mb/qed/build2-packaging/dear-imgui-clang10/libimgui/imgui/libimgui-1.76.0-a.0.19700101000000.so (0x80027f000)
  libglfw.so.3 => /usr/local/lib/libglfw.so.3 (0x800322000)
  libvulkan.so.1 => /usr/local/lib/libvulkan.so.1 (0x80036a000)
  libc++.so.1 => /usr/lib/libc++.so.1 (0x8003ca000)
  libcxxrt.so.1 => /lib/libcxxrt.so.1 (0x80049a000)
  libm.so.5 => /lib/libm.so.5 (0x8004bc000)
  libgcc_s.so.1 => /lib/libgcc_s.so.1 (0x8004ee000)
  libc.so.7 => /lib/libc.so.7 (0x800508000)
  librt.so.1 => /usr/lib/librt.so.1 (0x800901000)
  libX11.so.6 => /usr/local/lib/libX11.so.6 (0x800909000)
  libthr.so.3 => /lib/libthr.so.3 (0x800a52000)
  libxcb.so.1 => /usr/local/lib/libxcb.so.1 (0x800a7f000)
  libXau.so.6 => /usr/local/lib/libXau.so.6 (0x800aac000)
  libXdmcp.so.6 => /usr/local/lib/libXdmcp.so.6 (0x800ab1000)
```

## usage

TODO

## system dependencies

| technique              | libs             |
|------------------------|------------------|
| `libimgui-glfw-vulkan` | `glfw`, `vulkan` |


