#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BrushBaseProperties.hpp"
#include "InteractiveToolPropertySet.hpp"
bool _Script_InteractiveToolsFramework::BrushBaseProperties::get_bSpecifyRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
float& _Script_InteractiveToolsFramework::BrushBaseProperties::get_BrushSize() {
    return *(float*)((uintptr_t)this + 0x60);
}
void _Script_InteractiveToolsFramework::BrushBaseProperties::set_bSpecifyRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::BrushBaseProperties::get_bShowStrength() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
float& _Script_InteractiveToolsFramework::BrushBaseProperties::get_BrushRadius() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_InteractiveToolsFramework::BrushBaseProperties::get_BrushStrength() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_InteractiveToolsFramework::BrushBaseProperties::get_BrushFalloffAmount() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_InteractiveToolsFramework::BrushBaseProperties::set_bShowStrength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::BrushBaseProperties::get_bShowFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::BrushBaseProperties::set_bShowFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BrushBaseProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.BrushBaseProperties");
    return result;
}
