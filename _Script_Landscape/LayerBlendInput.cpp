#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LayerBlendInput.hpp"
void* _Script_Landscape::LayerBlendInput::get_LayerName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LayerBlendInput::get_BlendType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Landscape::LayerBlendInput::get_LayerInput() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Landscape::LayerBlendInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LayerBlendInput");
    return result;
}
void* _Script_Landscape::LayerBlendInput::get_HeightInput() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_Landscape::LayerBlendInput::get_PreviewWeight() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_Landscape::LayerBlendInput::get_ConstLayerInput() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_Landscape::LayerBlendInput::get_ConstHeightInput() {
    return *(float*)((uintptr_t)this + 0x44);
}
