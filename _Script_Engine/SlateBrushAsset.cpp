#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateBrushAsset.hpp"
void* _Script_Engine::SlateBrushAsset::get_Brush() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::SlateBrushAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SlateBrushAsset");
    return result;
}