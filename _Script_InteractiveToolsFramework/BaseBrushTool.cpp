#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseBrushTool.hpp"
#include "BrushBaseProperties.hpp"
#include "BrushStampIndicator.hpp"
#include "MeshSurfacePointTool.hpp"
void _Script_InteractiveToolsFramework::BaseBrushTool::set_bInBrushStroke(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_InteractiveToolsFramework::BrushBaseProperties*& _Script_InteractiveToolsFramework::BaseBrushTool::get_BrushProperties() {
    return *(_Script_InteractiveToolsFramework::BrushBaseProperties**)((uintptr_t)this + 0xc0);
}
bool _Script_InteractiveToolsFramework::BaseBrushTool::get_bInBrushStroke() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
float& _Script_InteractiveToolsFramework::BaseBrushTool::get_WorldToLocalScale() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void* _Script_InteractiveToolsFramework::BaseBrushTool::get_LastBrushStamp() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_InteractiveToolsFramework::BaseBrushTool::get_PropertyClass() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_InteractiveToolsFramework::BrushStampIndicator*& _Script_InteractiveToolsFramework::BaseBrushTool::get_BrushStampIndicator() {
    return *(_Script_InteractiveToolsFramework::BrushStampIndicator**)((uintptr_t)this + 0x1b0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BaseBrushTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.BaseBrushTool");
    return result;
}
