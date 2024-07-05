#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CRSimContainer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct CRSimPointContainer : public CRSimContainer {
    private: char pad_18[0x60]; public:
    void* get_Points();
    void* get_Springs();
    void* get_Forces();
    void* get_CollisionVolumes();
    void* get_Constraints();
    void* get_PreviousStep();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
