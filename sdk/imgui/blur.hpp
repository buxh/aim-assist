#pragma once
#include<string>
#include<sstream>
#include<vector>
#include<math.h>

#include <d3d9.h>

#pragma comment (lib, "d3d9.lib")
//#pragma comment (lib, "d3dx9.lib")

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_win32.h"


extern void DrawBackgroundBlur(ImDrawList* drawList, IDirect3DDevice9* device);
