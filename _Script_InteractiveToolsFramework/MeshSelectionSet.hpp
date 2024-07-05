#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SelectionSet.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct MeshSelectionSet : public SelectionSet {
    private: char pad_40[0x40]; public:
    void* get_Vertices();
    void* get_Edges();
    void* get_Faces();
    void* get_Groups();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
