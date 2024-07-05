#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeSplineInterpPoint.hpp"
void* _Script_Landscape::LandscapeSplineInterpPoint::get_LayerFalloffLeft() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Right() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Center() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_Left() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_FalloffLeft() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_FalloffRight() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_LayerLeft() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_LayerRight() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Landscape::LandscapeSplineInterpPoint::get_LayerFalloffRight() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Landscape::LandscapeSplineInterpPoint::get_StartEndFalloff() {
    return *(float*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineInterpPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeSplineInterpPoint");
    return result;
}
